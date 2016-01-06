#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-22.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@templateFileWrapperWithStaticPathAST templateExpressionAnalysis'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateFileWrapperWithStaticPathAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                            const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFileWrapperWithStaticPathAST * object = (const cPtr_templateFileWrapperWithStaticPathAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFileWrapperWithStaticPathAST) ;
  GALGAS_location location_0 (object->mAttribute_mFileWrapperName.getter_location (HERE)) ; // Implicit use of 'location' getter
  inCompiler->emitSemanticError (location_0, GALGAS_string ("unhandled @templateFileWrapperWithStaticPathAST templateExpressionAnalysis")  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 232)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateFileWrapperWithStaticPathAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFileWrapperWithStaticPathAST.mSlotID,
                                                  categoryMethod_templateFileWrapperWithStaticPathAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateFileWrapperWithStaticPathAST_templateExpressionAnalysis (defineCategoryMethod_templateFileWrapperWithStaticPathAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@templateFileWrapperTemplateCallAST templateExpressionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                          const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFileWrapperTemplateCallAST * object = (const cPtr_templateFileWrapperTemplateCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFileWrapperTemplateCallAST) ;
  GALGAS_location location_0 (object->mAttribute_mFileWrapperName.getter_location (HERE)) ; // Implicit use of 'location' getter
  inCompiler->emitSemanticError (location_0, GALGAS_string ("unhandled @templateFileWrapperTemplateCallAST templateExpressionAnalysis")  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 242)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST.mSlotID,
                                                  categoryMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (defineCategoryMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@templateAndOperationAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateAndOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateAndOperationAST * object = (const cPtr_templateAndOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateAndOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 254)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 257)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 259)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 262)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 263)).operator_and (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 263)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 263)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("&"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 260)) ;
  }
  outArgument_outExpression = GALGAS_andExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 269)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateAndOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateAndOperationAST.mSlotID,
                                                  categoryMethod_templateAndOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateAndOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateAndOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@templateOrOperationAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateOrOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                              const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateOrOperationAST * object = (const cPtr_templateOrOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateOrOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 283)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 286)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 288)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 291)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 292)).operator_and (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 292)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 292)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("|"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 289)) ;
  }
  outArgument_outExpression = GALGAS_orExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 298)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateOrOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateOrOperationAST.mSlotID,
                                                  categoryMethod_templateOrOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateOrOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateOrOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@templateXorOperationAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateXorOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateXorOperationAST * object = (const cPtr_templateXorOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateXorOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 312)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 315)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 317)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 320)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 321)).operator_and (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 321)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 321)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("^"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 318)) ;
  }
  outArgument_outExpression = GALGAS_xorExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 327)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateXorOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateXorOperationAST.mSlotID,
                                                  categoryMethod_templateXorOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateXorOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateXorOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@templateTrueBoolAST templateExpressionAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateTrueBoolAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                           const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateTrueBoolAST * object = (const cPtr_templateTrueBoolAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateTrueBoolAST) ;
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mLocation  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 339)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateTrueBoolAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateTrueBoolAST.mSlotID,
                                                  categoryMethod_templateTrueBoolAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateTrueBoolAST_templateExpressionAnalysis (defineCategoryMethod_templateTrueBoolAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@templateFalseBoolAST templateExpressionAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateFalseBoolAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                            const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFalseBoolAST * object = (const cPtr_templateFalseBoolAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFalseBoolAST) ;
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mLocation  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 347)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateFalseBoolAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFalseBoolAST.mSlotID,
                                                  categoryMethod_templateFalseBoolAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateFalseBoolAST_templateExpressionAnalysis (defineCategoryMethod_templateFalseBoolAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@templateLiteralStringExpressionAST templateExpressionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                          const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralStringExpressionAST * object = (const cPtr_templateLiteralStringExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralStringExpressionAST) ;
  GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
  cEnumerator_stringlist enumerator_17921 (object->mAttribute_mLiteralStringList, kEnumeration_up) ;
  while (enumerator_17921.hasCurrentObject ()) {
    var_s.plusAssign_operation(enumerator_17921.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 357)) ;
    enumerator_17921.gotoNextObject () ;
  }
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mLocation, var_s  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 359)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST.mSlotID,
                                                  categoryMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (defineCategoryMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@templateLiteralUIntExpressionAST templateExpressionAnalysis'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                        const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralUIntExpressionAST * object = (const cPtr_templateLiteralUIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralUIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalUIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, object->mAttribute_mLiteralInt.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 369)), object->mAttribute_mLiteralInt.getter_uint (SOURCE_FILE ("templateAnalysis.galgas", 370))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 367)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST.mSlotID,
                                                  categoryMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (defineCategoryMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@templateLiteralSIntExpressionAST templateExpressionAnalysis'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                        const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralSIntExpressionAST * object = (const cPtr_templateLiteralSIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralSIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mSIntType, object->mAttribute_mLiteralInt.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 380)), object->mAttribute_mLiteralInt.getter_sint (SOURCE_FILE ("templateAnalysis.galgas", 381))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 378)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralSIntExpressionAST.mSlotID,
                                                  categoryMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (defineCategoryMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@templateLiteralUInt64ExpressionAST templateExpressionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralUInt_36__34_ExpressionAST * object = (const cPtr_templateLiteralUInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralUInt_36__34_ExpressionAST) ;
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUInt_36__34_Type, object->mAttribute_mLiteralInt.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 391)), object->mAttribute_mLiteralInt.getter_uint_36__34_ (SOURCE_FILE ("templateAnalysis.galgas", 392))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 389)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralUInt_36__34_ExpressionAST.mSlotID,
                                                  categoryMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (defineCategoryMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@templateLiteralSInt64ExpressionAST templateExpressionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralSInt_36__34_ExpressionAST * object = (const cPtr_templateLiteralSInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralSInt_36__34_ExpressionAST) ;
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mSInt_36__34_Type, object->mAttribute_mLiteralInt.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 402)), object->mAttribute_mLiteralInt.getter_sint_36__34_ (SOURCE_FILE ("templateAnalysis.galgas", 403))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 400)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralSInt_36__34_ExpressionAST.mSlotID,
                                                  categoryMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (defineCategoryMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@templateLiteralCharExpressionAST templateExpressionAnalysis'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                        const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralCharExpressionAST * object = (const cPtr_templateLiteralCharExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralCharExpressionAST) ;
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mCharType, object->mAttribute_mLiteralChar.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 413)), object->mAttribute_mLiteralChar.getter_char (SOURCE_FILE ("templateAnalysis.galgas", 414))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 411)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST.mSlotID,
                                                  categoryMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (defineCategoryMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@templateLiteralDoubleExpressionAST templateExpressionAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                          const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralDoubleExpressionAST * object = (const cPtr_templateLiteralDoubleExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralDoubleExpressionAST) ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mDoubleType, object->mAttribute_mLiteralDouble.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 424)), object->mAttribute_mLiteralDouble.getter_double (SOURCE_FILE ("templateAnalysis.galgas", 425))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 422)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST.mSlotID,
                                                  categoryMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (defineCategoryMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@templateIfThenElseExpressionAST templateExpressionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateIfThenElseExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateIfThenElseExpressionAST * object = (const cPtr_templateIfThenElseExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateIfThenElseExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_if_5F_expression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mIfExpression.ptr (), constinArgument_inAnalysisContext, var_if_5F_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 435)) ;
  GALGAS_semanticExpressionForGeneration var_then_5F_expression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mThenExpression.ptr (), constinArgument_inAnalysisContext, var_then_5F_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 438)) ;
  GALGAS_semanticExpressionForGeneration var_else_5F_expression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mElseExpression.ptr (), constinArgument_inAnalysisContext, var_else_5F_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 441)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_if_5F_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 443)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 443)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("the test expression type is '@").add_operation (var_if_5F_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 445)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 445)).add_operation (GALGAS_string ("', it should be '@bool'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 445))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 444)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_then_5F_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 447)).objectCompare (var_else_5F_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 447)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand expression types are '@").add_operation (var_then_5F_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 449)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 449)).add_operation (GALGAS_string ("' and '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 449)).add_operation (var_else_5F_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 449)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 449)).add_operation (GALGAS_string ("': they should be the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 449))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 448)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_ifExpressionForGeneration::constructor_new (var_then_5F_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 454)), object->mAttribute_mOperatorLocation, var_if_5F_expression, var_then_5F_expression, var_else_5F_expression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 453)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateIfThenElseExpressionAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateIfThenElseExpressionAST.mSlotID,
                                                  categoryMethod_templateIfThenElseExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateIfThenElseExpressionAST_templateExpressionAnalysis (defineCategoryMethod_templateIfThenElseExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@templateNotOperatorAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateNotOperatorAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                              const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateNotOperatorAST * object = (const cPtr_templateNotOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateNotOperatorAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 469)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = var_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 471)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 472)).operator_and (function_prefixNotOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 472)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 472)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 474)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 474))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 473)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 478)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateNotOperatorAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateNotOperatorAST.mSlotID,
                                                  categoryMethod_templateNotOperatorAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateNotOperatorAST_templateExpressionAnalysis (defineCategoryMethod_templateNotOperatorAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@templateLogicalNegateAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateLogicalNegateAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLogicalNegateAST * object = (const cPtr_templateLogicalNegateAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLogicalNegateAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 492)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = var_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 494)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 495)).operator_and (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 495)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 495)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 497)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 497))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 496)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 501)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateLogicalNegateAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLogicalNegateAST.mSlotID,
                                                  categoryMethod_templateLogicalNegateAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLogicalNegateAST_templateExpressionAnalysis (defineCategoryMethod_templateLogicalNegateAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@templateOptionAccessAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateOptionAccessAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateOptionAccessAST * object = (const cPtr_templateOptionAccessAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateOptionAccessAST) ;
  GALGAS_bool var_optionComponentIsPredefined ;
  GALGAS_commandLineOptionMap var_boolOptionMap ;
  GALGAS_commandLineOptionMap var_uintOptionMap ;
  GALGAS_commandLineOptionMap var_stringOptionMap ;
  GALGAS_commandLineOptionMap var_stringListOptionMap ;
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mOptionComponentMapForSemanticAnalysis.method_searchKey (object->mAttribute_mOptionComponentName, var_optionComponentIsPredefined, var_boolOptionMap, var_uintOptionMap, var_stringOptionMap, var_stringListOptionMap, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 514)) ;
  GALGAS_bool var_found = var_boolOptionMap.getter_hasKey (object->mAttribute_mOptionName.mAttribute_string COMMA_SOURCE_FILE ("templateAnalysis.galgas", 522)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType ;
  const enumGalgasBool test_0 = var_found.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 524)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_found = var_uintOptionMap.getter_hasKey (object->mAttribute_mOptionName.mAttribute_string COMMA_SOURCE_FILE ("templateAnalysis.galgas", 525)) ;
    var_returnedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType ;
  }
  const enumGalgasBool test_1 = var_found.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 528)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_found = var_stringOptionMap.getter_hasKey (object->mAttribute_mOptionName.mAttribute_string COMMA_SOURCE_FILE ("templateAnalysis.galgas", 529)) ;
    var_returnedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  }
  const enumGalgasBool test_2 = var_found.operator_not (SOURCE_FILE ("templateAnalysis.galgas", 532)).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_found = var_stringListOptionMap.getter_hasKey (object->mAttribute_mOptionName.mAttribute_string COMMA_SOURCE_FILE ("templateAnalysis.galgas", 533)) ;
    var_returnedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringListType ;
  }
  const enumGalgasBool test_3 = var_found.boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 537)).objectCompare (GALGAS_string ("value"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType, object->mAttribute_mOptionComponentName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 540)), var_optionComponentIsPredefined, object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 542)), object->mAttribute_mOptionName.mAttribute_string  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 538)) ;
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 545)).objectCompare (GALGAS_string ("char"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mCharType, object->mAttribute_mOptionComponentName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 548)), var_optionComponentIsPredefined, object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 550)), object->mAttribute_mOptionName.mAttribute_string  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 546)) ;
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 553)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mOptionComponentName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 556)), var_optionComponentIsPredefined, object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 558)), object->mAttribute_mOptionName.mAttribute_string  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 554)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, object->mAttribute_mGetterName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 561)).objectCompare (GALGAS_string ("comment"))).boolEnum () ;
          if (kBoolTrue == test_7) {
            outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mOptionComponentName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 564)), var_optionComponentIsPredefined, object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 566)), object->mAttribute_mOptionName.mAttribute_string  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 562)) ;
          }else if (kBoolFalse == test_7) {
            GALGAS_location location_8 (object->mAttribute_mGetterName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_8, GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option")  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 570)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
      }
    }
  }else if (kBoolFalse == test_3) {
    GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
    cEnumerator_commandLineOptionMap enumerator_26911 (var_boolOptionMap, kEnumeration_up) ;
    while (enumerator_26911.hasCurrentObject ()) {
      var_s.plusAssign_operation(GALGAS_string ("\n"
        "-  '").add_operation (enumerator_26911.current_lkey (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 575)).add_operation (GALGAS_string ("' @bool option;"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 575)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 575)) ;
      enumerator_26911.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_26997 (var_uintOptionMap, kEnumeration_up) ;
    while (enumerator_26997.hasCurrentObject ()) {
      var_s.plusAssign_operation(GALGAS_string ("\n"
        "-  '").add_operation (enumerator_26997.current_lkey (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 578)).add_operation (GALGAS_string ("' @uint option;"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 578)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 578)) ;
      enumerator_26997.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_27085 (var_stringOptionMap, kEnumeration_up) ;
    while (enumerator_27085.hasCurrentObject ()) {
      var_s.plusAssign_operation(GALGAS_string ("\n"
        "-  '").add_operation (enumerator_27085.current_lkey (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 581)).add_operation (GALGAS_string ("' @string option;"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 581)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 581)) ;
      enumerator_27085.gotoNextObject () ;
    }
    GALGAS_location location_9 (object->mAttribute_mOptionName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_9, GALGAS_string ("the '").add_operation (object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 584)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 584)).add_operation (object->mAttribute_mOptionName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 584)).add_operation (GALGAS_string ("' option; available options:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 584)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 584))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 583)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateOptionAccessAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateOptionAccessAST.mSlotID,
                                                  categoryMethod_templateOptionAccessAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateOptionAccessAST_templateExpressionAnalysis (defineCategoryMethod_templateOptionAccessAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@templateFunctionCallAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateFunctionCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFunctionCallAST * object = (const cPtr_templateFunctionCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFunctionCallAST) ;
  GALGAS_functionSignature var_functionSignature ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType ;
  GALGAS_bool var_isInternal ;
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFunctionMap.method_searchKey (object->mAttribute_mFunctionName, var_functionSignature, var_resultType, var_isInternal, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 597)) ;
  const enumGalgasBool test_0 = var_isInternal.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_procDeclarationLocation = constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mFunctionMap.getter_locationForKey (object->mAttribute_mFunctionName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 605)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mFunctionName.mAttribute_location.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 606)).objectCompare (var_procDeclarationLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 606)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mFunctionName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation.getter_file (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 607)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 607)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 607))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 607)) ;
    }
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_functionSignature.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 611)).objectCompare (object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 611)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mFunctionName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_4, GALGAS_string ("the '").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 613)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 613)).add_operation (var_functionSignature.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 613)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 613)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 613)).add_operation (object->mAttribute_mExpressionList.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 614)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 614)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 614)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 614))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 612)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 618)) ;
    cEnumerator_functionSignature enumerator_28952 (var_functionSignature, kEnumeration_up) ;
    cEnumerator_templateExpressionListAST enumerator_28975 (object->mAttribute_mExpressionList, kEnumeration_up) ;
    while (enumerator_28952.hasCurrentObject () && enumerator_28975.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression ;
      callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_28975.current_mExpression (HERE).ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 620)) ;
      {
      routine_checkAssignmentTypes (enumerator_28952.current_mFormalArgumentType (HERE), var_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 621)), enumerator_28975.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 621)) ;
      }
      var_semanticExpressionListForGeneration.addAssign_operation (var_expression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 622)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_28952.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_28975.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_28952.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = enumerator_28952.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 624)) ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_8 (enumerator_28975.current_mActualSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_8, GALGAS_string ("the selector should be '!").add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 624)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 624))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 624)) ;
      }
      enumerator_28952.gotoNextObject () ;
      enumerator_28975.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType, object->mAttribute_mFunctionName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 629)), object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 630)), var_semanticExpressionListForGeneration  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 627)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateFunctionCallAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFunctionCallAST.mSlotID,
                                                  categoryMethod_templateFunctionCallAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateFunctionCallAST_templateExpressionAnalysis (defineCategoryMethod_templateFunctionCallAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@templateCategoryTemplateCallAST templateExpressionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateCategoryTemplateCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                       const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateCategoryTemplateCallAST * object = (const cPtr_templateCategoryTemplateCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateCategoryTemplateCallAST) ;
  GALGAS_location location_0 (object->mAttribute_mTemplateName.getter_location (HERE)) ; // Implicit use of 'location' getter
  inCompiler->emitSemanticError (location_0, GALGAS_string ("INTERNAL ERROR: @templateCategoryTemplateCallAST templateExpressionAnalysis not implemented yet")  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 642)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateCategoryTemplateCallAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateCategoryTemplateCallAST.mSlotID,
                                                  categoryMethod_templateCategoryTemplateCallAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateCategoryTemplateCallAST_templateExpressionAnalysis (defineCategoryMethod_templateCategoryTemplateCallAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@templateVarInExpressionAST templateExpressionAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateVarInExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateVarInExpressionAST * object = (const cPtr_templateVarInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateVarInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_string var_sourceVariableCppName ;
  constinArgument_inAnalysisContext.mAttribute_mTemplateVariableMap.method_searchKey (object->mAttribute_mVarName, var_type, var_sourceVariableCppName, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 656)) ;
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::constructor_new (var_type, object->mAttribute_mVarName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 659)), var_sourceVariableCppName, var_sourceVariableCppName  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 657)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateVarInExpressionAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateVarInExpressionAST.mSlotID,
                                                  categoryMethod_templateVarInExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateVarInExpressionAST_templateExpressionAnalysis (defineCategoryMethod_templateVarInExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@templateAddOperationAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateAddOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateAddOperationAST * object = (const cPtr_templateAddOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateAddOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 673)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 676)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 678)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 681)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 682)).operator_and (function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 682)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 682)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("+"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 679)) ;
  }
  outArgument_outExpression = GALGAS_addExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 688)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateAddOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateAddOperationAST.mSlotID,
                                                  categoryMethod_templateAddOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateAddOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateAddOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@templateSubOperationAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateSubOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateSubOperationAST * object = (const cPtr_templateSubOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateSubOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 704)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 707)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 709)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 712)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 713)).operator_and (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 713)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 713)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("-"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 710)) ;
  }
  outArgument_outExpression = GALGAS_subExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 719)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateSubOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateSubOperationAST.mSlotID,
                                                  categoryMethod_templateSubOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateSubOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateSubOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@templateMultiplyOperationAST templateExpressionAnalysis'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateMultiplyOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                    const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateMultiplyOperationAST * object = (const cPtr_templateMultiplyOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateMultiplyOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 735)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 738)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 740)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 743)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 744)).operator_and (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 744)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 744)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("*"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 741)) ;
  }
  outArgument_outExpression = GALGAS_multiplicationExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 750)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateMultiplyOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateMultiplyOperationAST.mSlotID,
                                                  categoryMethod_templateMultiplyOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateMultiplyOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateMultiplyOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@templateDivideOperationAST templateExpressionAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateDivideOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateDivideOperationAST * object = (const cPtr_templateDivideOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateDivideOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 766)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 769)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 771)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 774)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 775)).operator_and (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 775)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 775)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("/"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 772)) ;
  }
  outArgument_outExpression = GALGAS_divisionExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 781)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateDivideOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateDivideOperationAST.mSlotID,
                                                  categoryMethod_templateDivideOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateDivideOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateDivideOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@templateModuloOperationAST templateExpressionAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateModuloOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateModuloOperationAST * object = (const cPtr_templateModuloOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateModuloOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 797)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 800)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 802)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 805)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 806)).operator_and (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 806)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 806)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("mod"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 803)) ;
  }
  outArgument_outExpression = GALGAS_moduloExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 812)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateModuloOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateModuloOperationAST.mSlotID,
                                                  categoryMethod_templateModuloOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateModuloOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateModuloOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@templateUnaryMinusOperationAST templateExpressionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateUnaryMinusOperationAST * object = (const cPtr_templateUnaryMinusOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateUnaryMinusOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 828)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = var_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 830)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 831)).operator_and (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 831)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 831)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 833)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 833)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 833))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 832)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 837)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST.mSlotID,
                                                  categoryMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@structFieldAccessTemplateExpressionAST templateExpressionAnalysis'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                              const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structFieldAccessTemplateExpressionAST * object = (const cPtr_structFieldAccessTemplateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structFieldAccessTemplateExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 852)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = var_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 854)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_type.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 855)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("templateAnalysis.galgas", 855)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mStructFieldName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '.' operator requires the receiver to be a struct")  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 856)) ;
  }
  GALGAS_attributeMap var_attributeMap = var_type.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 858)) ;
  var_attributeMap.method_searchKey (object->mAttribute_mStructFieldName, var_type, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 859)) ;
  outArgument_outExpression = GALGAS_structFieldAccessExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression, object->mAttribute_mStructFieldName.mAttribute_string  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 868)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST.mSlotID,
                                                  categoryMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (defineCategoryMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@templateEqualTestAST templateExpressionAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                            const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateEqualTestAST * object = (const cPtr_templateEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 884)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 887)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 889)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 890)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 891)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 891)).objectCompare (var_rightType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 891)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 891)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 893)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 893)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 893)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 893)).add_operation (var_rightType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 893)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 893)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 893)).add_operation (GALGAS_string ("': '==' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 893))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 892)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_equalExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 897)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateEqualTestAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateEqualTestAST.mSlotID,
                                                  categoryMethod_templateEqualTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateEqualTestAST_templateExpressionAnalysis (defineCategoryMethod_templateEqualTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@templateNonEqualTestAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateNonEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateNonEqualTestAST * object = (const cPtr_templateNonEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateNonEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 912)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 915)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 917)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 918)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 919)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 919)).objectCompare (var_rightType.getter_lkey (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 919)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 919)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 921)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 921)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 921)).add_operation (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 921)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 921)).add_operation (GALGAS_string ("': '!=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 921))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 920)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_notEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 925)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateNonEqualTestAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateNonEqualTestAST.mSlotID,
                                                  categoryMethod_templateNonEqualTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateNonEqualTestAST_templateExpressionAnalysis (defineCategoryMethod_templateNonEqualTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@templateStrictInfTestAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateStrictInfTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateStrictInfTestAST * object = (const cPtr_templateStrictInfTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateStrictInfTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 940)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 943)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 945)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 946)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 947)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 947)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 947)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 949)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 949)).add_operation (GALGAS_string ("' and does not support the '<' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 949))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 948)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 951)).objectCompare (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 951)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 953)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 953)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 953)).add_operation (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 953)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 953)).add_operation (GALGAS_string ("': '<' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 953))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 952)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_strictLowerExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 957)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateStrictInfTestAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateStrictInfTestAST.mSlotID,
                                                  categoryMethod_templateStrictInfTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateStrictInfTestAST_templateExpressionAnalysis (defineCategoryMethod_templateStrictInfTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@templateInfOrEqualTestAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInfOrEqualTestAST * object = (const cPtr_templateInfOrEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInfOrEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 972)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 975)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 977)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 978)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 979)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 979)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 979)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 981)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 981)).add_operation (GALGAS_string ("' and does not support the '<=' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 981))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 980)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 983)).objectCompare (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 983)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 985)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 985)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 985)).add_operation (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 985)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 985)).add_operation (GALGAS_string ("': '<=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 985))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 984)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_lowerOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 989)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateInfOrEqualTestAST.mSlotID,
                                                  categoryMethod_templateInfOrEqualTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (defineCategoryMethod_templateInfOrEqualTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@templateStrictSupTestAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateStrictSupTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateStrictSupTestAST * object = (const cPtr_templateStrictSupTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateStrictSupTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1004)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1007)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1009)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1010)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1011)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1011)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1011)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1013)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1013)).add_operation (GALGAS_string ("' and does not support the '>' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1013))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1012)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1015)).objectCompare (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1015)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1017)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1017)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1017)).add_operation (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1017)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1017)).add_operation (GALGAS_string ("': '>' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1017))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1016)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_strictGreaterExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1021)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateStrictSupTestAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateStrictSupTestAST.mSlotID,
                                                  categoryMethod_templateStrictSupTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateStrictSupTestAST_templateExpressionAnalysis (defineCategoryMethod_templateStrictSupTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@templateSupOrEqualTestAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateSupOrEqualTestAST * object = (const cPtr_templateSupOrEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateSupOrEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1036)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1039)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1041)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1042)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1043)).operator_and (function_isComparable (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1043)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1043)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1045)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1045)).add_operation (GALGAS_string ("' and does not support the '>=' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1045))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1044)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1047)).objectCompare (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1047)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1049)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1049)).add_operation (GALGAS_string ("', right operand type is '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1049)).add_operation (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1049)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1049)).add_operation (GALGAS_string ("': '>=' operator requires the types are the same"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1049))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1048)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_greaterOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1053)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateSupOrEqualTestAST.mSlotID,
                                                  categoryMethod_templateSupOrEqualTestAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (defineCategoryMethod_templateSupOrEqualTestAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@templateLeftShiftOperationAST templateExpressionAnalysis'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLeftShiftOperationAST * object = (const cPtr_templateLeftShiftOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLeftShiftOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1068)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1071)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1073)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1074)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1075)).operator_and (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1075)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1075)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1077)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1077)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1077))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1076)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1079)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1081)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1081)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1081))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1080)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_leftShiftExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1085)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLeftShiftOperationAST.mSlotID,
                                                  categoryMethod_templateLeftShiftOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateLeftShiftOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@templateRightShiftOperationAST templateExpressionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateRightShiftOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateRightShiftOperationAST * object = (const cPtr_templateRightShiftOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateRightShiftOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1100)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1103)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1105)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType = var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1106)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1107)).operator_and (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1107)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1107)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1109)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1109)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1109))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1108)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1111)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1113)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1113)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1113))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1112)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_1) {
      outArgument_outExpression = GALGAS_rightShiftExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1117)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateRightShiftOperationAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateRightShiftOperationAST.mSlotID,
                                                  categoryMethod_templateRightShiftOperationAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateRightShiftOperationAST_templateExpressionAnalysis (defineCategoryMethod_templateRightShiftOperationAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@templateClassToTypeOperandAST templateExpressionAnalysis'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateClassToTypeOperandAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateClassToTypeOperandAST * object = (const cPtr_templateClassToTypeOperandAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateClassToTypeOperandAST) ;
  GALGAS_bool joker_52309_26 ; // Joker input parameter
  GALGAS_bool joker_52309_25 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_52309_24 ; // Joker input parameter
  GALGAS_typeKindEnum joker_52309_23 ; // Joker input parameter
  GALGAS_bool joker_52309_22 ; // Joker input parameter
  GALGAS_typedPropertyList joker_52309_21 ; // Joker input parameter
  GALGAS_attributeMap joker_52309_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_52309_19 ; // Joker input parameter
  GALGAS_constructorMap joker_52309_18 ; // Joker input parameter
  GALGAS_getterMap joker_52309_17 ; // Joker input parameter
  GALGAS_setterMap joker_52309_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_52309_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_52309_14 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_52309_13 ; // Joker input parameter
  GALGAS_stringlist joker_52309_12 ; // Joker input parameter
  GALGAS_uint joker_52309_11 ; // Joker input parameter
  GALGAS_functionSignature joker_52309_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_52309_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_52309_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_52309_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_52309_6 ; // Joker input parameter
  GALGAS_bool joker_52309_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_52309_4 ; // Joker input parameter
  GALGAS_string joker_52309_3 ; // Joker input parameter
  GALGAS_string joker_52309_2 ; // Joker input parameter
  GALGAS_headerKind joker_52309_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mTypeName, joker_52309_26, joker_52309_25, joker_52309_24, joker_52309_23, joker_52309_22, joker_52309_21, joker_52309_20, joker_52309_19, joker_52309_18, joker_52309_17, joker_52309_16, joker_52309_15, joker_52309_14, joker_52309_13, joker_52309_12, joker_52309_11, joker_52309_10, joker_52309_9, joker_52309_8, joker_52309_7, joker_52309_6, joker_52309_5, joker_52309_4, joker_52309_3, joker_52309_2, joker_52309_1, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1131)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("type"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1134))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1134)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1134)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 1135)), object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1136))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1133)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateClassToTypeOperandAST_templateExpressionAnalysis (void) {
  enterCategoryMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateClassToTypeOperandAST.mSlotID,
                                                  categoryMethod_templateClassToTypeOperandAST_templateExpressionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateClassToTypeOperandAST_templateExpressionAnalysis (defineCategoryMethod_templateClassToTypeOperandAST_templateExpressionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@templateInstructionStringAST templateInstructionAnalysis'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionStringAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                     const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                     GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionStringAST * object = (const cPtr_templateInstructionStringAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionStringAST) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionStringForGeneration::constructor_new (object->mAttribute_mTemplateString  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1165))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1165)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionStringAST_templateInstructionAnalysis (void) {
  enterCategoryMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionStringAST.mSlotID,
                                                   categoryMethod_templateInstructionStringAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionStringAST_templateInstructionAnalysis (defineCategoryMethod_templateInstructionStringAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@templateInstructionExpressionAST templateInstructionAnalysis'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionExpressionAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionExpressionAST * object = (const cPtr_templateInstructionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1174)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1175)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1175)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("expression type should be '@string' (it is '@").add_operation (var_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1176)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1176)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1176)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1176))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1176)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionExpressionForGeneration::constructor_new (var_expression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1178))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1178)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionExpressionAST_templateInstructionAnalysis (void) {
  enterCategoryMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionExpressionAST.mSlotID,
                                                   categoryMethod_templateInstructionExpressionAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionExpressionAST_templateInstructionAnalysis (defineCategoryMethod_templateInstructionExpressionAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@templateBlockInstructionAST templateInstructionAnalysis'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateBlockInstructionAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                    const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                    GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateBlockInstructionAST * object = (const cPtr_templateBlockInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateBlockInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1187)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1188)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1188)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("expression type should be '@uint' (it is '@").add_operation (var_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1189)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1189)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1189)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1189))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1189)) ;
  }
  GALGAS_templateInstructionListForGeneration var_blockInstructionList = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1191)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, object->mAttribute_mBlockInstructionList, var_blockInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1192)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateBlockInstructionForGeneration::constructor_new (var_expression, object->mAttribute_mLocation, var_blockInstructionList  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1193))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1193)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateBlockInstructionAST_templateInstructionAnalysis (void) {
  enterCategoryMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateBlockInstructionAST.mSlotID,
                                                   categoryMethod_templateBlockInstructionAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateBlockInstructionAST_templateInstructionAnalysis (defineCategoryMethod_templateBlockInstructionAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@templateInstructionGetColumnLocationAST templateInstructionAnalysis'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * /* inObject */,
                                                                                                const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                                GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGetColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1201))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1201)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (void) {
  enterCategoryMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST.mSlotID,
                                                   categoryMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (defineCategoryMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@templateInstructionGotoColumnLocationAST templateInstructionAnalysis'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * /* inObject */,
                                                                                                 const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                                 GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGotoColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1209))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1209)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (void) {
  enterCategoryMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST.mSlotID,
                                                   categoryMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (defineCategoryMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@templateInstructionForeachAST templateInstructionAnalysis'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionForeachAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionForeachAST * object = (const cPtr_templateInstructionForeachAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionForeachAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1219)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = var_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1221)).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1221)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_enumerationDescriptor.getter_length (SOURCE_FILE ("templateAnalysis.galgas", 1222)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_expression.getter_mLocation (SOURCE_FILE ("templateAnalysis.galgas", 1223)), GALGAS_string ("expression of '@").add_operation (var_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1223)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1223)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1223)).add_operation (GALGAS_string ("' cannot be enumerated"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1223))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1223)) ;
  }
  GALGAS_templateInstructionListForGeneration var_beforeInstructionList = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1226)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, object->mAttribute_mBeforeInstructionList, var_beforeInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1227)) ;
  }
  GALGAS_string var_enumeratorCppName = GALGAS_string ("enumerator_").add_operation (object->mAttribute_mIndexIdentifier.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 1229)).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1229)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1229)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1229)) ;
  GALGAS_templateVariableMap var_doVariableMap = constinArgument_inAnalysisContext.mAttribute_mTemplateVariableMap ;
  GALGAS_string var_cppIndexVarName = GALGAS_string ("index_").add_operation (object->mAttribute_mIndexIdentifier.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 1231)).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1231)).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1231)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1231)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1231)).add_operation (object->mAttribute_mIndexIdentifier.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1231)).getter_identifierRepresentation (SOURCE_FILE ("templateAnalysis.galgas", 1231)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1231)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexIdentifier.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1232)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    var_doVariableMap.modifier_insertKey (object->mAttribute_mIndexIdentifier, constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, var_cppIndexVarName, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1233)) ;
    }
  }
  cEnumerator_enumerationDescriptorList enumerator_58159 (var_enumerationDescriptor, kEnumeration_up) ;
  while (enumerator_58159.hasCurrentObject ()) {
    {
    var_doVariableMap.modifier_insertKey (GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.add_operation (enumerator_58159.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1237)), var_expression.getter_mLocation (SOURCE_FILE ("templateAnalysis.galgas", 1237))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1237)), enumerator_58159.current_mEnumeratedType (HERE), var_enumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1239)).add_operation (enumerator_58159.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("templateAnalysis.galgas", 1239)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1239)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1239)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1236)) ;
    }
    enumerator_58159.gotoNextObject () ;
  }
  GALGAS_templateAnalysisContext var_doAnalysisContext = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inAnalysisContext.mAttribute_mSemanticContext, constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes, var_doVariableMap  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1242)) ;
  GALGAS_templateInstructionListForGeneration var_doInstructionList = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1246)) ;
  {
  routine_templateInstructionListAnalysis (var_doAnalysisContext, object->mAttribute_mDoInstructionList, var_doInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1247)) ;
  }
  GALGAS_templateInstructionListForGeneration var_betweenInstructionList = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1249)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, object->mAttribute_mBetweenInstructionList, var_betweenInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1250)) ;
  }
  GALGAS_templateInstructionListForGeneration var_afterInstructionList = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1252)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, object->mAttribute_mAfterInstructionList, var_afterInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1253)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionForeachForGeneration::constructor_new (object->mAttribute_mIsAscending, var_expression, var_enumeratorCppName, var_beforeInstructionList, var_doInstructionList, var_cppIndexVarName, var_betweenInstructionList, var_afterInstructionList  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1255))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1255)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionForeachAST_templateInstructionAnalysis (void) {
  enterCategoryMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionForeachAST.mSlotID,
                                                   categoryMethod_templateInstructionForeachAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionForeachAST_templateInstructionAnalysis (defineCategoryMethod_templateInstructionForeachAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@templateInstructionIfAST templateInstructionAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionIfAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionIfAST * object = (const cPtr_templateInstructionIfAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionIfAST) ;
  GALGAS_templateInstructionIfBranchListForGeneration var_templateInstructionIfBranchList = GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1271)) ;
  cEnumerator_templateInstructionIfBranchListAST enumerator_59853 (object->mAttribute_mTemplateInstructionIfBranchList, kEnumeration_up) ;
  while (enumerator_59853.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression ;
    callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_59853.current_mExpression (HERE).ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1274)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1275)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1275)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (var_expression.getter_mLocation (SOURCE_FILE ("templateAnalysis.galgas", 1276)), GALGAS_string ("'if' expression type should be '@bool' (it is '@").add_operation (var_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1276)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1276)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1276)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1276))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1276)) ;
    }
    GALGAS_templateInstructionListForGeneration var_instructionList = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1278)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, enumerator_59853.current_mInstructionList (HERE), var_instructionList, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1279)) ;
    }
    var_templateInstructionIfBranchList.addAssign_operation (var_expression, var_instructionList  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1280)) ;
    enumerator_59853.gotoNextObject () ;
  }
  GALGAS_templateInstructionListForGeneration var_elseInstructionList = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1283)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, object->mAttribute_mElseInstructionList, var_elseInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1284)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionIfForGeneration::constructor_new (var_templateInstructionIfBranchList, var_elseInstructionList  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1286))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1286)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionIfAST_templateInstructionAnalysis (void) {
  enterCategoryMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionIfAST.mSlotID,
                                                   categoryMethod_templateInstructionIfAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionIfAST_templateInstructionAnalysis (defineCategoryMethod_templateInstructionIfAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@templateInstructionSwitchAST templateInstructionAnalysis'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionSwitchAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionSwitchAST * object = (const cPtr_templateInstructionSwitchAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionSwitchAST) ;
  GALGAS_semanticExpressionForGeneration var_switchExpression ;
  callCategoryMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mSwitchExpression.ptr (), constinArgument_inAnalysisContext, var_switchExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1298)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_switchExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1299)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1299)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("templateAnalysis.galgas", 1299)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_switchExpression.getter_mLocation (SOURCE_FILE ("templateAnalysis.galgas", 1300)), GALGAS_string ("'switch' expression type should be an enumeration (it is a ").add_operation (extensionGetter_kind (var_switchExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1300)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1300)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1300)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1300)).add_operation (GALGAS_string (" type)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1300))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1300)) ;
  }
  GALGAS_constantIndexMap var_enumConstantMap = var_switchExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1302)).getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1302)) ;
  GALGAS_templateInstructionSwitchBranchListForGeneration var_templateInstructionSwitchBranchList = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1304)) ;
  GALGAS_stringset var_namedConstantSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("templateAnalysis.galgas", 1305)) ;
  cEnumerator_templateInstructionSwitchBranchListAST enumerator_61723 (object->mAttribute_mTemplateInstructionSwitchBranchList, kEnumeration_up) ;
  while (enumerator_61723.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_61754 (enumerator_61723.current_mConstantList (HERE), kEnumeration_up) ;
    while (enumerator_61754.hasCurrentObject ()) {
      const enumGalgasBool test_1 = var_enumConstantMap.getter_hasKey (enumerator_61754.current_mValue (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1308)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1308)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1308)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_61754.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("the '").add_operation (enumerator_61754.current_mValue (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1309)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1309)).add_operation (GALGAS_string ("' is not a contant of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1309)).add_operation (var_switchExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1309)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1309)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1309)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1309))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1309)) ;
      }
      const enumGalgasBool test_3 = var_namedConstantSet.getter_hasKey (enumerator_61754.current_mValue (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1311)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1311)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (enumerator_61754.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the '").add_operation (enumerator_61754.current_mValue (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1312)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1312)).add_operation (GALGAS_string ("' constant is already named in the switch instruction"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1312))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1312)) ;
      }
      var_namedConstantSet.addAssign_operation (enumerator_61754.current_mValue (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1314))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1314)) ;
      enumerator_61754.gotoNextObject () ;
    }
    GALGAS_templateInstructionListForGeneration var_instructionList = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1316)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, enumerator_61723.current_mInstructionList (HERE), var_instructionList, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1317)) ;
    }
    var_templateInstructionSwitchBranchList.addAssign_operation (enumerator_61723.current_mConstantList (HERE), var_instructionList  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1318)) ;
    enumerator_61723.gotoNextObject () ;
  }
  GALGAS_stringset var_missingConstants = var_enumConstantMap.getter_keySet (SOURCE_FILE ("templateAnalysis.galgas", 1321)).substract_operation (var_namedConstantSet, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1321)) ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_missingConstants.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 1322)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string var_m = GALGAS_string ("all constants should be named in a switch instruction; the following constants are missing:") ;
    cEnumerator_stringset enumerator_62716 (var_missingConstants, kEnumeration_up) ;
    while (enumerator_62716.hasCurrentObject ()) {
      var_m.plusAssign_operation(GALGAS_string ("\n"
        "  - '").add_operation (enumerator_62716.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1325)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1325)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1325)) ;
      enumerator_62716.gotoNextObject () ;
    }
    inCompiler->emitSemanticError (object->mAttribute_mSwitchExpressionEndLocation, var_m  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1327)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionSwitchForGeneration::constructor_new (var_switchExpression, var_templateInstructionSwitchBranchList  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1330))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1330)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionSwitchAST_templateInstructionAnalysis (void) {
  enterCategoryMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionSwitchAST.mSlotID,
                                                   categoryMethod_templateInstructionSwitchAST_templateInstructionAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionSwitchAST_templateInstructionAnalysis (defineCategoryMethod_templateInstructionSwitchAST_templateInstructionAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@templateInstructionStringForGeneration templateCodeGeneration'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionStringForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                          GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                          GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                          GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                          GALGAS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionStringForGeneration * object = (const cPtr_templateInstructionStringForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionStringForGeneration) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result << ").add_operation (object->mAttribute_mTemplateString.getter_utf_38_Representation (SOURCE_FILE ("templateCodeGeneration.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 53)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 53)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionStringForGeneration_templateCodeGeneration (void) {
  enterCategoryMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionStringForGeneration.mSlotID,
                                              categoryMethod_templateInstructionStringForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionStringForGeneration_templateCodeGeneration (defineCategoryMethod_templateInstructionStringForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@templateInstructionExpressionForGeneration templateCodeGeneration'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                              GALGAS_bool & /* ioArgument_ioUseColumnMarker */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionExpressionForGeneration * object = (const cPtr_templateInstructionExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionExpressionForGeneration) ;
  GALGAS_string var_cppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 66)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result << ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (void) {
  enterCategoryMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration.mSlotID,
                                              categoryMethod_templateInstructionExpressionForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (defineCategoryMethod_templateInstructionExpressionForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@templateBlockInstructionForGeneration templateCodeGeneration'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateBlockInstructionForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                         GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateBlockInstructionForGeneration * object = (const cPtr_templateBlockInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateBlockInstructionForGeneration) ;
  GALGAS_string var_indendationVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_indendationVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 80)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation ((int32_t) ").add_operation (var_indendationVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)).add_operation (GALGAS_string (".uintValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 83)) ;
  {
  routine_templateCodeGenerationForListInstruction (object->mAttribute_mBlockInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 84)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 92)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 92)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation (- ((int32_t) ").add_operation (var_indendationVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)).add_operation (GALGAS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 94)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateBlockInstructionForGeneration_templateCodeGeneration (void) {
  enterCategoryMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration.mSlotID,
                                              categoryMethod_templateBlockInstructionForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateBlockInstructionForGeneration_templateCodeGeneration (defineCategoryMethod_templateBlockInstructionForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@templateInstructionGetColumnLocationForGeneration templateCodeGeneration'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * /* inObject */,
                                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                     GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                     GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GALGAS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("columnMarker = result.currentColumn () ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 106)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (void) {
  enterCategoryMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration.mSlotID,
                                              categoryMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (defineCategoryMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@templateInstructionGotoColumnLocationForGeneration templateCodeGeneration'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * /* inObject */,
                                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                                      GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                      GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUseColumnMarker = GALGAS_bool (true) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result.appendSpacesUntilColumn (columnMarker) ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 118)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (void) {
  enterCategoryMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration.mSlotID,
                                              categoryMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (defineCategoryMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@templateInstructionForeachForGeneration templateCodeGeneration'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionForeachForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                           GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionForeachForGeneration * object = (const cPtr_templateInstructionForeachForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionForeachForGeneration) ;
  GALGAS_string var_foreachVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_foreachVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 131)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mIndexCppName.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 133)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (object->mAttribute_mIndexCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 134)).add_operation (GALGAS_string (" (0) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 134)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_foreachVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 137)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 137)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 138)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = object->mAttribute_mIsAscending.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string ("kEnumeration_up") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("kEnumeration_down") ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (object->mAttribute_mExpression.getter_mResultType (SOURCE_FILE ("templateCodeGeneration.galgas", 139)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)).add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)).add_operation (var_foreachVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBeforeInstructionList.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 142)).add_operation (object->mAttribute_mAfterInstructionList.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 142)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool nonEmpty_").add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 143)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 143)).add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 143)).add_operation (GALGAS_string (".hasCurrentObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 143)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBeforeInstructionList.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 145)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 146)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 146)) ;
    {
    ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 147)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (object->mAttribute_mBeforeInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 148)) ;
    }
    {
    ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 156)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 157)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 159)).add_operation (GALGAS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 159)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 160)) ;
  }
  {
  routine_templateCodeGenerationForListInstruction (object->mAttribute_mDoInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 162)) ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBetweenInstructionList.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 171)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 172)).add_operation (GALGAS_string (".hasNextObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 172)) ;
    {
    ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 173)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (object->mAttribute_mBetweenInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 174)) ;
    }
    {
    ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 182)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 183)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, object->mAttribute_mIndexCppName.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 186)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    ioArgument_ioGeneratedCode.plusAssign_operation(object->mAttribute_mIndexCppName.add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 187)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(object->mAttribute_mEnumeratorCppName.add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 190)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 190)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 191)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 192)) ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, object->mAttribute_mAfterInstructionList.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 194)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_7) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 195)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 195)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 195)) ;
    {
    ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 196)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (object->mAttribute_mAfterInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 197)) ;
    }
    {
    ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 205)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 206)) ;
  }
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 209)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 210)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionForeachForGeneration_templateCodeGeneration (void) {
  enterCategoryMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration.mSlotID,
                                              categoryMethod_templateInstructionForeachForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionForeachForGeneration_templateCodeGeneration (defineCategoryMethod_templateInstructionForeachForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@templateInstructionIfForGeneration templateCodeGeneration'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionIfForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionIfForGeneration * object = (const cPtr_templateInstructionIfForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionIfForGeneration) ;
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_9834 (object->mAttribute_mTemplateInstructionIfBranchList, kEnumeration_up) ;
  while (enumerator_9834.hasCurrentObject ()) {
    GALGAS_string var_ifVarCppName ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_9834.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 224)) ;
    GALGAS_string var_testVar = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("templateCodeGeneration.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 225)) ;
    ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 225)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 226)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 226)).add_operation (var_ifVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 226)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 226)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)) ;
    {
    ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 228)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (enumerator_9834.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 229)) ;
    }
    {
    ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 237)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 238)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 238)) ;
    {
    ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 239)) ;
    }
    enumerator_9834.gotoNextObject () ;
  }
  {
  routine_templateCodeGenerationForListInstruction (object->mAttribute_mElseInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 242)) ;
  }
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_10981 (object->mAttribute_mTemplateInstructionIfBranchList, kEnumeration_up) ;
  while (enumerator_10981.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 251)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 252)) ;
    enumerator_10981.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionIfForGeneration_templateCodeGeneration (void) {
  enterCategoryMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionIfForGeneration.mSlotID,
                                              categoryMethod_templateInstructionIfForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionIfForGeneration_templateCodeGeneration (defineCategoryMethod_templateInstructionIfForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@templateInstructionSwitchForGeneration templateCodeGeneration'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                          GALGAS_bool & ioArgument_ioUseColumnMarker,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionSwitchForGeneration * object = (const cPtr_templateInstructionSwitchForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionSwitchForGeneration) ;
  GALGAS_string var_switchVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSwitchExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 266)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 268)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 268)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.getter_mResultType (SOURCE_FILE ("templateCodeGeneration.galgas", 269)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 269)).add_operation (GALGAS_string ("::kNotBuilt :\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 269)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 270)) ;
  cEnumerator_templateInstructionSwitchBranchListForGeneration enumerator_11908 (object->mAttribute_mTemplateInstructionSwitchBranchList, kEnumeration_up) ;
  while (enumerator_11908.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_11939 (enumerator_11908.current_mConstantList (HERE), kEnumeration_up) ;
    while (enumerator_11939.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.getter_mResultType (SOURCE_FILE ("templateCodeGeneration.galgas", 274)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 274)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 274)).add_operation (enumerator_11939.current_mValue (HERE).getter_string (SOURCE_FILE ("templateCodeGeneration.galgas", 274)).getter_identifierRepresentation (SOURCE_FILE ("templateCodeGeneration.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 274)).add_operation (GALGAS_string (" :\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 274)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 274)) ;
      enumerator_11939.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 276)) ;
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_11908.current_mInstructionList (HERE).getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 277)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 278)) ;
      {
      ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 279)) ;
      }
      {
      routine_templateCodeGenerationForListInstruction (enumerator_11908.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 280)) ;
      }
      {
      ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 288)) ;
      }
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 289)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 291)) ;
    {
    ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 292)) ;
    }
    enumerator_11908.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 295)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (void) {
  enterCategoryMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration.mSlotID,
                                              categoryMethod_templateInstructionSwitchForGeneration_templateCodeGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (defineCategoryMethod_templateInstructionSwitchForGeneration_templateCodeGeneration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category getter '@lexicalOrExpressionAST generateConditionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalOrExpressionAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                   GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalOrExpressionAST * object = (const cPtr_lexicalOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalOrExpressionAST) ;
  result_outGeneratedCode = callCategoryGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLeftOperand.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 29)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 30)) ;
  result_outGeneratedCode.plusAssign_operation(callCategoryGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mRightOperand.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 31)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalOrExpressionAST_generateConditionCode (void) {
  enterCategoryGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalOrExpressionAST.mSlotID,
                                             extensionGetter_lexicalOrExpressionAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalOrExpressionAST_generateConditionCode (defineCategoryGetter_lexicalOrExpressionAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category getter '@lexicalCharacterIntervalMatchAST generateConditionCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                             GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterIntervalMatchAST * object = (const cPtr_lexicalCharacterIntervalMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterIntervalMatchAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  result_outGeneratedCode = GALGAS_string ("testForInputUTF32CharRange (") ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mLowerBound.getter_char (SOURCE_FILE ("lexiqueGeneration.galgas", 41)).getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 41)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 42)) ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mUpperBound.getter_char (SOURCE_FILE ("lexiqueGeneration.galgas", 43)).getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 43)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 44)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalCharacterIntervalMatchAST_generateConditionCode (void) {
  enterCategoryGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST.mSlotID,
                                             extensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterIntervalMatchAST_generateConditionCode (defineCategoryGetter_lexicalCharacterIntervalMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category getter '@lexicalStringMatchAST generateConditionCode'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalStringMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                  GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStringMatchAST * object = (const cPtr_lexicalStringMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("testForInputUTF32String (kUnicodeString_").add_operation (inArgument_inLexiqueAnalysisContext.mAttribute_mLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)).add_operation (object->mAttribute_mString.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 52)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 53)) ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mString.mAttribute_string.getter_length (SOURCE_FILE ("lexiqueGeneration.galgas", 54)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 54)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 55)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalStringMatchAST_generateConditionCode (void) {
  enterCategoryGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalStringMatchAST.mSlotID,
                                             extensionGetter_lexicalStringMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalStringMatchAST_generateConditionCode (defineCategoryGetter_lexicalStringMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category getter '@lexicalStringNotMatchAST generateConditionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalStringNotMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                     GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStringNotMatchAST * object = (const cPtr_lexicalStringNotMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringNotMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("notTestForInputUTF32String (kUnicodeString_").add_operation (inArgument_inLexiqueAnalysisContext.mAttribute_mLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 63)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 63)) ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mString.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 64)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 65)) ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mString.mAttribute_string.getter_length (SOURCE_FILE ("lexiqueGeneration.galgas", 66)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 66)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", gLexicalMessage_"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 67)) ;
  result_outGeneratedCode.plusAssign_operation(inArgument_inLexiqueAnalysisContext.mAttribute_mLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 68)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 68)) ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mErrorMessage.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 69)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 70)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalStringNotMatchAST_generateConditionCode (void) {
  enterCategoryGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalStringNotMatchAST.mSlotID,
                                             extensionGetter_lexicalStringNotMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalStringNotMatchAST_generateConditionCode (defineCategoryGetter_lexicalStringNotMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category getter '@lexicalCharacterMatchAST generateConditionCode'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                     GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterMatchAST * object = (const cPtr_lexicalCharacterMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("testForInputUTF32Char (") ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mCharacter.getter_char (SOURCE_FILE ("lexiqueGeneration.galgas", 79)).getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 79)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 79)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 80)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalCharacterMatchAST_generateConditionCode (void) {
  enterCategoryGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterMatchAST.mSlotID,
                                             extensionGetter_lexicalCharacterMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterMatchAST_generateConditionCode (defineCategoryGetter_lexicalCharacterMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category getter '@lexicalCharacterSetMatchAST generateConditionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterSetMatchAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                        GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterSetMatchAST * object = (const cPtr_lexicalCharacterSetMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterSetMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("testForCharWithFunction (") ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mCharacterSetName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 89)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 90)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalCharacterSetMatchAST_generateConditionCode (void) {
  enterCategoryGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST.mSlotID,
                                             extensionGetter_lexicalCharacterSetMatchAST_generateConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterSetMatchAST_generateConditionCode (defineCategoryGetter_lexicalCharacterSetMatchAST_generateConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category getter '@lexicalAttributeInputArgumentAST generateRoutineOrFunctionArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("token.mLexicalAttribute_").add_operation (object->mAttribute_mAttributeName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 104)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterCategoryGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                         extensionGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument (defineCategoryGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category getter '@lexicalCharacterInputArgumentAST generateRoutineOrFunctionArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                         C_Compiler * /* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  result_outGeneratedCode = object->mAttribute_mCharacter.getter_char (SOURCE_FILE ("lexiqueGeneration.galgas", 111)).getter_utf_33__32_CharConstantRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 111)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterCategoryGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                         extensionGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument (defineCategoryGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category getter '@lexicalUnsignedInputArgumentAST generateRoutineOrFunctionArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  result_outGeneratedCode = object->mAttribute_mUnsigned.getter_uint (SOURCE_FILE ("lexiqueGeneration.galgas", 118)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 118)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterCategoryGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                         extensionGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument (defineCategoryGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category getter '@lexicalCurrentCharacterInputArgumentAST generateRoutineOrFunctionArgument'       *
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

static void defineCategoryGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterCategoryGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                         extensionGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument (defineCategoryGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category getter '@lexicalFunctionInputArgumentAST generateRoutineOrFunctionArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("::scanner_function_").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 132)).add_operation (GALGAS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 132)) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_7662 (object->mAttribute_mFunctionActualArgumentList, kEnumeration_up) ;
  while (enumerator_7662.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (callCategoryGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_7662.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)) ;
    enumerator_7662.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 136)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterCategoryGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                         extensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument (defineCategoryGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category getter '@lexicalAttributeInputOutputArgumentAST generateRoutineArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalAttributeInputOutputArgumentAST * object = (const cPtr_lexicalAttributeInputOutputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputOutputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("token.mLexicalAttribute_").add_operation (object->mAttribute_mAttributeName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 150)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument (void) {
  enterCategoryGetter_generateRoutineArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST.mSlotID,
                                               extensionGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument (defineCategoryGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category getter '@lexicalFormalInputArgumentAST generateRoutineArgument'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFormalInputArgumentAST * object = (const cPtr_lexicalFormalInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFormalInputArgumentAST) ;
  result_outGeneratedCode = callCategoryGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) object->mAttribute_mRoutineOrFunctionFormalInputArgument.ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 157)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalFormalInputArgumentAST_generateRoutineArgument (void) {
  enterCategoryGetter_generateRoutineArgument (kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST.mSlotID,
                                               extensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFormalInputArgumentAST_generateRoutineArgument (defineCategoryGetter_lexicalFormalInputArgumentAST_generateRoutineArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category getter '@lexicalSendTerminalByDefaultAST generateDefaultSendCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                              GALGAS_string /* inArgument_inScannerClassName */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSendTerminalByDefaultAST * object = (const cPtr_lexicalSendTerminalByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSendTerminalByDefaultAST) ;
  result_outGeneratedCode = GALGAS_string ("token.mTokenCode = kToken_").add_operation (object->mAttribute_mDefaultSentTerminal.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 173)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 173)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode (void) {
  enterCategoryGetter_generateDefaultSendCode (kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST.mSlotID,
                                               extensionGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode (defineCategoryGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category getter '@lexicalErrorByDefaultAST generateDefaultSendCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalErrorByDefaultAST_generateDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                       GALGAS_string inArgument_inScannerClassName,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalErrorByDefaultAST * object = (const cPtr_lexicalErrorByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorByDefaultAST) ;
  result_outGeneratedCode = GALGAS_string ("lexicalError (gLexicalMessage_").add_operation (inArgument_inScannerClassName.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 181)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 181)).add_operation (object->mAttribute_mDefaultErrorMessageName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 181)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 181)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalErrorByDefaultAST_generateDefaultSendCode (void) {
  enterCategoryGetter_generateDefaultSendCode (kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST.mSlotID,
                                               extensionGetter_lexicalErrorByDefaultAST_generateDefaultSendCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalErrorByDefaultAST_generateDefaultSendCode (defineCategoryGetter_lexicalErrorByDefaultAST_generateDefaultSendCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category getter '@lexicalStructuredSendInstructionAST generateInstructionCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalStructuredSendInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                                  GALGAS_string inArgument_inScannerClassName,
                                                                                                  GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStructuredSendInstructionAST * object = (const cPtr_lexicalStructuredSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStructuredSendInstructionAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_lexicalSendSearchListAST enumerator_11110 (object->mAttribute_mLexicalSendSearchList, kEnumeration_up) ;
  while (enumerator_11110.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 201)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  token.mTokenCode = search_into_").add_operation (enumerator_11110.current_mSearchListName (HERE).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)).add_operation (GALGAS_string (" (token.mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)).add_operation (enumerator_11110.current_mAttributeName (HERE).mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 202)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 203)) ;
    enumerator_11110.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 205)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (callCategoryGetter_generateDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) object->mAttribute_mLexicalSendDefaultAction.ptr (), inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 206)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 207)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 208)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalStructuredSendInstructionAST_generateInstructionCode (void) {
  enterCategoryGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST.mSlotID,
                                               extensionGetter_lexicalStructuredSendInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalStructuredSendInstructionAST_generateInstructionCode (defineCategoryGetter_lexicalStructuredSendInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category getter '@lexicalDropInstructionAST generateInstructionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalDropInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                        GALGAS_string /* inArgument_inScannerClassName */,
                                                                                        GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalDropInstructionAST * object = (const cPtr_lexicalDropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalDropInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("enterDroppedTerminal (kToken_").add_operation (object->mAttribute_mTerminalName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 218)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 218)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalDropInstructionAST_generateInstructionCode (void) {
  enterCategoryGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalDropInstructionAST.mSlotID,
                                               extensionGetter_lexicalDropInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalDropInstructionAST_generateInstructionCode (defineCategoryGetter_lexicalDropInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category getter '@lexicalSimpleSendInstructionAST generateInstructionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalSimpleSendInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                              GALGAS_string /* inArgument_inScannerClassName */,
                                                                                              GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSimpleSendInstructionAST * object = (const cPtr_lexicalSimpleSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSimpleSendInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("token.mTokenCode = kToken_").add_operation (object->mAttribute_mSentTerminal.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 228)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 228)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 229)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalSimpleSendInstructionAST_generateInstructionCode (void) {
  enterCategoryGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST.mSlotID,
                                               extensionGetter_lexicalSimpleSendInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSimpleSendInstructionAST_generateInstructionCode (defineCategoryGetter_lexicalSimpleSendInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category getter '@lexicalRepeatInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalRepeatInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                          GALGAS_string inArgument_inScannerClassName,
                                                                                          GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRepeatInstructionAST * object = (const cPtr_lexicalRepeatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRepeatInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("do {\n") ;
  {
  result_outGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 239)) ;
  }
  cEnumerator_lexicalInstructionListAST enumerator_12946 (object->mAttribute_mRepeatedInstructionList, kEnumeration_up) ;
  while (enumerator_12946.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callCategoryGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_12946.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 242)) ;
    enumerator_12946.gotoNextObject () ;
  }
  cEnumerator_lexicalWhileBranchListAST enumerator_13105 (object->mAttribute_mLexicalWhileBranchList, kEnumeration_up) ;
  while (enumerator_13105.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 247)) ;
    result_outGeneratedCode.plusAssign_operation(callCategoryGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_13105.current_mWhileExpression (HERE).ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 248)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 249)) ;
    {
    result_outGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 250)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_13351 (enumerator_13105.current_mWhileInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_13351.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callCategoryGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_13351.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 252)) ;
      enumerator_13351.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 254)) ;
    }
    if (enumerator_13105.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 256)) ;
    }
    enumerator_13105.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"
    "  mLoop = false ;\n"
    "}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 258)) ;
  {
  result_outGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 261)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}while (mLoop) ;\n"
    "mLoop = true ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 262)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalRepeatInstructionAST_generateInstructionCode (void) {
  enterCategoryGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST.mSlotID,
                                               extensionGetter_lexicalRepeatInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalRepeatInstructionAST_generateInstructionCode (defineCategoryGetter_lexicalRepeatInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category getter '@lexicalSelectInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalSelectInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                          GALGAS_string inArgument_inScannerClassName,
                                                                                          GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSelectInstructionAST * object = (const cPtr_lexicalSelectInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSelectInstructionAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_lexicalSelectBranchListAST enumerator_14169 (object->mAttribute_mLexicalSelectBranchList, kEnumeration_up) ;
  while (enumerator_14169.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 276)) ;
    result_outGeneratedCode.plusAssign_operation(callCategoryGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_14169.current_mSelectExpression (HERE).ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 277)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 278)) ;
    {
    result_outGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 279)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_14417 (enumerator_14169.current_mSelectInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_14417.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callCategoryGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_14417.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 281)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 281)) ;
      enumerator_14417.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 283)) ;
    }
    if (enumerator_14169.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 285)) ;
    }
    enumerator_14169.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mDefaultInstructionList.getter_length (SOURCE_FILE ("lexiqueGeneration.galgas", 288)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 289)) ;
    {
    result_outGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 290)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_14814 (object->mAttribute_mDefaultInstructionList, kEnumeration_up) ;
    while (enumerator_14814.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callCategoryGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_14814.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 292)) ;
      enumerator_14814.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 294)) ;
    }
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 296)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalSelectInstructionAST_generateInstructionCode (void) {
  enterCategoryGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalSelectInstructionAST.mSlotID,
                                               extensionGetter_lexicalSelectInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSelectInstructionAST_generateInstructionCode (defineCategoryGetter_lexicalSelectInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category getter '@lexicalRoutineInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalRoutineInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                           GALGAS_string inArgument_inScannerClassName,
                                                                                           GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRoutineInstructionAST * object = (const cPtr_lexicalRoutineInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRoutineInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("::scanner_routine_").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 305)).add_operation (GALGAS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 305)) ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_15430 (object->mAttribute_mActualArgumentList, kEnumeration_up) ;
  while (enumerator_15430.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (callCategoryGetter_generateRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_15430.current_mLexicalRoutineActualArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 307)) ;
    enumerator_15430.gotoNextObject () ;
  }
  cEnumerator_lstringlist enumerator_15556 (object->mAttribute_mErrorMessageList, kEnumeration_up) ;
  while (enumerator_15556.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", gLexicalMessage_").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 310)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 310)).add_operation (enumerator_15556.current_mValue (HERE).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 310)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 310)) ;
    enumerator_15556.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 312)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalRoutineInstructionAST_generateInstructionCode (void) {
  enterCategoryGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST.mSlotID,
                                               extensionGetter_lexicalRoutineInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalRoutineInstructionAST_generateInstructionCode (defineCategoryGetter_lexicalRoutineInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category getter '@lexicalErrorInstructionAST generateInstructionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalErrorInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                         GALGAS_string inArgument_inScannerClassName,
                                                                                         GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalErrorInstructionAST * object = (const cPtr_lexicalErrorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("lexicalError (gLexicalMessage_").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 321)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 321)).add_operation (object->mAttribute_mErrorMessageName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 321)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 321)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalErrorInstructionAST_generateInstructionCode (void) {
  enterCategoryGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalErrorInstructionAST.mSlotID,
                                               extensionGetter_lexicalErrorInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalErrorInstructionAST_generateInstructionCode (defineCategoryGetter_lexicalErrorInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category getter '@lexicalWarningInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalWarningInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                           GALGAS_string inArgument_inScannerClassName,
                                                                                           GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalWarningInstructionAST * object = (const cPtr_lexicalWarningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalWarningInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("lexicalWarning (gLexicalMessage_").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 330)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 330)).add_operation (object->mAttribute_mWarningMessageName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 330)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 330)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalWarningInstructionAST_generateInstructionCode (void) {
  enterCategoryGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalWarningInstructionAST.mSlotID,
                                               extensionGetter_lexicalWarningInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalWarningInstructionAST_generateInstructionCode (defineCategoryGetter_lexicalWarningInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category getter '@lexicalTagInstructionAST generateInstructionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalTagInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                       GALGAS_string /* inArgument_inScannerClassName */,
                                                                                       GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalTagInstructionAST * object = (const cPtr_lexicalTagInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalTagInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("const C_LocationInSource currentLocationForTag_").add_operation (object->mAttribute_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 339)).add_operation (GALGAS_string (" = mCurrentLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 339)).add_operation (GALGAS_string ("const C_LocationInSource endLocationForTag_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 339)).add_operation (object->mAttribute_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 340)).add_operation (GALGAS_string (" = mTokenEndLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 340)).add_operation (GALGAS_string ("const utf32 currentCharForTag_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 340)).add_operation (object->mAttribute_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 341)).add_operation (GALGAS_string (" = mCurrentChar ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 341)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalTagInstructionAST_generateInstructionCode (void) {
  enterCategoryGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalTagInstructionAST.mSlotID,
                                               extensionGetter_lexicalTagInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalTagInstructionAST_generateInstructionCode (defineCategoryGetter_lexicalTagInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category getter '@lexicalRewindInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalRewindInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                          GALGAS_string /* inArgument_inScannerClassName */,
                                                                                          GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRewindInstructionAST * object = (const cPtr_lexicalRewindInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRewindInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("mCurrentLocation = currentLocationForTag_").add_operation (object->mAttribute_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 350)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 350)).add_operation (GALGAS_string ("mTokenEndLocation = endLocationForTag_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 350)).add_operation (object->mAttribute_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 351)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 351)).add_operation (GALGAS_string ("mCurrentChar = currentCharForTag_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 351)).add_operation (object->mAttribute_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 352)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 352)).add_operation (GALGAS_string ("token.mTokenCode = kToken_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 352)).add_operation (object->mAttribute_mTerminalName.mAttribute_string.getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 353)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 353)).add_operation (GALGAS_string ("enterToken (token) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 353)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalRewindInstructionAST_generateInstructionCode (void) {
  enterCategoryGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalRewindInstructionAST.mSlotID,
                                               extensionGetter_lexicalRewindInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalRewindInstructionAST_generateInstructionCode (defineCategoryGetter_lexicalRewindInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category getter '@lexicalLogInstructionAST generateInstructionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalLogInstructionAST_generateInstructionCode (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                                       GALGAS_string /* inArgument_inScannerClassName */,
                                                                                       GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("lexicalLog (LINE_AND_SOURCE_FILE) ;\n") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalLogInstructionAST_generateInstructionCode (void) {
  enterCategoryGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalLogInstructionAST.mSlotID,
                                               extensionGetter_lexicalLogInstructionAST_generateInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalLogInstructionAST_generateInstructionCode (defineCategoryGetter_lexicalLogInstructionAST_generateInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category getter '@lexicalImplicitRuleAST generateCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalImplicitRuleAST_generateCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                          GALGAS_string inArgument_inScannerClassName,
                                                                          GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalImplicitRuleAST * object = (const cPtr_lexicalImplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalImplicitRuleAST) ;
  GALGAS_tokenSortedlist var_tokenSortedList ;
  GALGAS_lexicalExplicitTokenListMap joker_19291 ; // Joker input parameter
  GALGAS_bool joker_19311 ; // Joker input parameter
  inArgument_inLexiqueAnalysisContext.getter_mLexicalTokenListMap (SOURCE_FILE ("lexiqueGeneration.galgas", 382)).method_searchKey (object->mAttribute_mListName, joker_19291, var_tokenSortedList, joker_19311, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 382)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_tokenSortedlist enumerator_19367 (var_tokenSortedList, kEnumeration_down) ;
  while (enumerator_19367.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (testForInputUTF32String (kUnicodeString_").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 385)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 385)) ;
    result_outGeneratedCode.plusAssign_operation(enumerator_19367.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 386)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 387)) ;
    result_outGeneratedCode.plusAssign_operation(enumerator_19367.current_mName (HERE).getter_length (SOURCE_FILE ("lexiqueGeneration.galgas", 388)).getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 388)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", true)) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 389)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  token.mTokenCode = kToken_").add_operation (enumerator_19367.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueGeneration.galgas", 390)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 390)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 390)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 391)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 392)) ;
    enumerator_19367.gotoNextObject () ;
  }
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalImplicitRuleAST_generateCode (void) {
  enterCategoryGetter_generateCode (kTypeDescriptor_GALGAS_lexicalImplicitRuleAST.mSlotID,
                                    extensionGetter_lexicalImplicitRuleAST_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalImplicitRuleAST_generateCode (defineCategoryGetter_lexicalImplicitRuleAST_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category getter '@lexicalExplicitRuleAST generateCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalExplicitRuleAST_generateCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                          GALGAS_string inArgument_inScannerClassName,
                                                                          GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalExplicitRuleAST * object = (const cPtr_lexicalExplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalExplicitRuleAST) ;
  result_outGeneratedCode = GALGAS_string ("if (") ;
  result_outGeneratedCode.plusAssign_operation(callCategoryGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLexicalRuleExpression.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 403)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 404)) ;
  {
  result_outGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 405)) ;
  }
  cEnumerator_lexicalInstructionListAST enumerator_20361 (object->mAttribute_mInstructionList, kEnumeration_up) ;
  while (enumerator_20361.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callCategoryGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_20361.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 407)) ;
    enumerator_20361.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 409)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 410)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalExplicitRuleAST_generateCode (void) {
  enterCategoryGetter_generateCode (kTypeDescriptor_GALGAS_lexicalExplicitRuleAST.mSlotID,
                                    extensionGetter_lexicalExplicitRuleAST_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalExplicitRuleAST_generateCode (defineCategoryGetter_lexicalExplicitRuleAST_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category getter '@lexicalOrExpressionAST generateCocoaConditionCode'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalOrExpressionAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                        GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalOrExpressionAST * object = (const cPtr_lexicalOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalOrExpressionAST) ;
  result_outGeneratedCode = callCategoryGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLeftOperand.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 29)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 30)) ;
  result_outGeneratedCode.plusAssign_operation(callCategoryGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mRightOperand.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 31)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalOrExpressionAST_generateCocoaConditionCode (void) {
  enterCategoryGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalOrExpressionAST.mSlotID,
                                                  extensionGetter_lexicalOrExpressionAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalOrExpressionAST_generateCocoaConditionCode (defineCategoryGetter_lexicalOrExpressionAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category getter '@lexicalCharacterIntervalMatchAST generateCocoaConditionCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                                  GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterIntervalMatchAST * object = (const cPtr_lexicalCharacterIntervalMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterIntervalMatchAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  result_outGeneratedCode = GALGAS_string ("[self testForInputFromChar:") ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mLowerBound.getter_char (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 41)).getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 41)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 41)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" toChar:"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 42)) ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mUpperBound.getter_char (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 43)).getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 43)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 43)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 44)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode (void) {
  enterCategoryGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST.mSlotID,
                                                  extensionGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode (defineCategoryGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category getter '@lexicalStringMatchAST generateCocoaConditionCode'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalStringMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                       GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStringMatchAST * object = (const cPtr_lexicalStringMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("[self testForInputString:@").add_operation (object->mAttribute_mString.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 52)).getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 52)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" advance:YES]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 53)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalStringMatchAST_generateCocoaConditionCode (void) {
  enterCategoryGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalStringMatchAST.mSlotID,
                                                  extensionGetter_lexicalStringMatchAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalStringMatchAST_generateCocoaConditionCode (defineCategoryGetter_lexicalStringMatchAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category getter '@lexicalStringNotMatchAST generateCocoaConditionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalStringNotMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                          GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStringNotMatchAST * object = (const cPtr_lexicalStringNotMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringNotMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("[self notTestForInputString:@") ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mString.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 62)).getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 62)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" error:& scanningOk]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 63)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalStringNotMatchAST_generateCocoaConditionCode (void) {
  enterCategoryGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalStringNotMatchAST.mSlotID,
                                                  extensionGetter_lexicalStringNotMatchAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalStringNotMatchAST_generateCocoaConditionCode (defineCategoryGetter_lexicalStringNotMatchAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category getter '@lexicalCharacterMatchAST generateCocoaConditionCode'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                          GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterMatchAST * object = (const cPtr_lexicalCharacterMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("[self testForInputChar:") ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mCharacter.getter_char (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 72)).getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 72)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 72)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 72)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 73)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalCharacterMatchAST_generateCocoaConditionCode (void) {
  enterCategoryGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterMatchAST.mSlotID,
                                                  extensionGetter_lexicalCharacterMatchAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterMatchAST_generateCocoaConditionCode (defineCategoryGetter_lexicalCharacterMatchAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category getter '@lexicalCharacterSetMatchAST generateCocoaConditionCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                             GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterSetMatchAST * object = (const cPtr_lexicalCharacterSetMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterSetMatchAST) ;
  result_outGeneratedCode = GALGAS_string ("[self testForCharWithFunction:") ;
  result_outGeneratedCode.plusAssign_operation(object->mAttribute_mCharacterSetName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 82)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("]"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 83)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode (void) {
  enterCategoryGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST.mSlotID,
                                                  extensionGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode (defineCategoryGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category getter '@lexicalAttributeInputArgumentAST generateCocoaRoutineOrFunctionArgument'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("mLexicalAttribute_").add_operation (object->mAttribute_mAttributeName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 97)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterCategoryGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                              extensionGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineCategoryGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category getter '@lexicalCharacterInputArgumentAST generateCocoaRoutineOrFunctionArgument'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  result_outGeneratedCode = object->mAttribute_mCharacter.getter_char (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 104)).getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 104)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 104)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterCategoryGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                              extensionGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineCategoryGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category getter '@lexicalUnsignedInputArgumentAST generateCocoaRoutineOrFunctionArgument'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                             C_Compiler * /* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  result_outGeneratedCode = object->mAttribute_mUnsigned.getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 111)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 111)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterCategoryGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                              extensionGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineCategoryGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding category getter '@lexicalCurrentCharacterInputArgumentAST generateCocoaRoutineOrFunctionArgument'     *
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

static void defineCategoryGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterCategoryGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                              extensionGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineCategoryGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category getter '@lexicalFunctionInputArgumentAST generateCocoaRoutineOrFunctionArgument'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_function_").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 125)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 125)) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_7080 (object->mAttribute_mFunctionActualArgumentList, kEnumeration_up) ;
  while (enumerator_7080.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callCategoryGetter_generateCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_7080.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 127)) ;
    if (enumerator_7080.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 128)) ;
    }
    enumerator_7080.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 130)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterCategoryGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                              extensionGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineCategoryGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category getter '@lexicalAttributeInputOutputArgumentAST generateCocoaRoutineArgument'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                          GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalAttributeInputOutputArgumentAST * object = (const cPtr_lexicalAttributeInputOutputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputOutputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_lexicalType ;
  inArgument_inLexiqueAnalysisContext.getter_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 148)).method_searchKey (object->mAttribute_mAttributeName, var_lexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 148)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  const enumGalgasBool test_0 = extensionGetter_needsReferenceInInputOutputInCocoa (var_lexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 150)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 151)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("mLexicalAttribute_").add_operation (object->mAttribute_mAttributeName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 153)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument (void) {
  enterCategoryGetter_generateCocoaRoutineArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST.mSlotID,
                                                    extensionGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument (defineCategoryGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category getter '@lexicalFormalInputArgumentAST generateCocoaRoutineArgument'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                 GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFormalInputArgumentAST * object = (const cPtr_lexicalFormalInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFormalInputArgumentAST) ;
  result_outGeneratedCode = callCategoryGetter_generateCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) object->mAttribute_mRoutineOrFunctionFormalInputArgument.ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 161)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument (void) {
  enterCategoryGetter_generateCocoaRoutineArgument (kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST.mSlotID,
                                                    extensionGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument (defineCategoryGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category getter '@lexicalSendTerminalByDefaultAST generateCocoaDefaultSendCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                                   GALGAS_string inArgument_inScannerClassName,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSendTerminalByDefaultAST * object = (const cPtr_lexicalSendTerminalByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSendTerminalByDefaultAST) ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)).add_operation (object->mAttribute_mDefaultSentTerminal.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 177)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode (void) {
  enterCategoryGetter_generateCocoaDefaultSendCode (kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST.mSlotID,
                                                    extensionGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode (defineCategoryGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category getter '@lexicalErrorByDefaultAST generateCocoaDefaultSendCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * /* inObject */,
                                                                                            GALGAS_string /* inArgument_inScannerClassName */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = NO ;\n") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode (void) {
  enterCategoryGetter_generateCocoaDefaultSendCode (kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST.mSlotID,
                                                    extensionGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode (defineCategoryGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category getter '@lexicalStructuredSendInstructionAST generateCocoaInstructionCode'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                                       GALGAS_string inArgument_inScannerClassName,
                                                                                                       GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalStructuredSendInstructionAST * object = (const cPtr_lexicalStructuredSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStructuredSendInstructionAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_lexicalSendSearchListAST enumerator_10898 (object->mAttribute_mLexicalSendSearchList, kEnumeration_up) ;
  while (enumerator_10898.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (mTokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 205)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  mTokenCode = search_into_").add_operation (inArgument_inScannerClassName.getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)).add_operation (enumerator_10898.current_mSearchListName (HERE).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)).add_operation (GALGAS_string (" (mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)).add_operation (enumerator_10898.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 206)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 207)) ;
    enumerator_10898.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (mTokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 209)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (callCategoryGetter_generateCocoaDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) object->mAttribute_mLexicalSendDefaultAction.ptr (), inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 210)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 211)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST.mSlotID,
                                                    extensionGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode (defineCategoryGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category getter '@lexicalSimpleSendInstructionAST generateCocoaInstructionCode'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                                   GALGAS_string inArgument_inScannerClassName,
                                                                                                   GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSimpleSendInstructionAST * object = (const cPtr_lexicalSimpleSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSimpleSendInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)).add_operation (object->mAttribute_mSentTerminal.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 220)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST.mSlotID,
                                                    extensionGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode (defineCategoryGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category getter '@lexicalRepeatInstructionAST generateCocoaInstructionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                               GALGAS_string inArgument_inScannerClassName,
                                                                                               GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRepeatInstructionAST * object = (const cPtr_lexicalRepeatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRepeatInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("do {\n") ;
  {
  result_outGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 230)) ;
  }
  cEnumerator_lexicalInstructionListAST enumerator_12247 (object->mAttribute_mRepeatedInstructionList, kEnumeration_up) ;
  while (enumerator_12247.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callCategoryGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_12247.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 233)) ;
    enumerator_12247.gotoNextObject () ;
  }
  cEnumerator_lexicalWhileBranchListAST enumerator_12411 (object->mAttribute_mLexicalWhileBranchList, kEnumeration_up) ;
  while (enumerator_12411.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 238)) ;
    result_outGeneratedCode.plusAssign_operation(callCategoryGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_12411.current_mWhileExpression (HERE).ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 239)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 240)) ;
    {
    result_outGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 241)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_12670 (enumerator_12411.current_mWhileInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_12670.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callCategoryGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_12670.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 243)) ;
      enumerator_12670.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 245)) ;
    }
    if (enumerator_12411.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 247)) ;
    }
    enumerator_12411.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"
    "  mLoop = NO ;\n"
    "}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 249)) ;
  {
  result_outGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 252)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}while (mLoop && scanningOk) ;\n"
    "mLoop = YES ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 253)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST.mSlotID,
                                                    extensionGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode (defineCategoryGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category getter '@lexicalSelectInstructionAST generateCocoaInstructionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                               GALGAS_string inArgument_inScannerClassName,
                                                                                               GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalSelectInstructionAST * object = (const cPtr_lexicalSelectInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSelectInstructionAST) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_lexicalSelectBranchListAST enumerator_13508 (object->mAttribute_mLexicalSelectBranchList, kEnumeration_up) ;
  while (enumerator_13508.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 267)) ;
    result_outGeneratedCode.plusAssign_operation(callCategoryGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_13508.current_mSelectExpression (HERE).ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 268)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 269)) ;
    {
    result_outGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 270)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_13769 (enumerator_13508.current_mSelectInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_13769.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callCategoryGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_13769.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 272)) ;
      enumerator_13769.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 274)) ;
    }
    if (enumerator_13508.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 276)) ;
    }
    enumerator_13508.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mDefaultInstructionList.getter_length (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 279)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 280)) ;
    {
    result_outGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 281)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_14171 (object->mAttribute_mDefaultInstructionList, kEnumeration_up) ;
    while (enumerator_14171.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callCategoryGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_14171.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 283)) ;
      enumerator_14171.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 285)) ;
    }
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 287)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalSelectInstructionAST.mSlotID,
                                                    extensionGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode (defineCategoryGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category getter '@lexicalRoutineInstructionAST generateCocoaInstructionCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                                GALGAS_string /* inArgument_inScannerClassName */,
                                                                                                GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRoutineInstructionAST * object = (const cPtr_lexicalRoutineInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRoutineInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_routine_").add_operation (object->mAttribute_mRoutineName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 296)).add_operation (GALGAS_string (" (& scanningOk"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 296)) ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_14808 (object->mAttribute_mActualArgumentList, kEnumeration_up) ;
  while (enumerator_14808.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (callCategoryGetter_generateCocoaRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_14808.current_mLexicalRoutineActualArgument (HERE).ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 298)) ;
    enumerator_14808.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 300)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST.mSlotID,
                                                    extensionGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode (defineCategoryGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category getter '@lexicalDropInstructionAST generateCocoaInstructionCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalDropInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                             GALGAS_string inArgument_inScannerClassName,
                                                                                             GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalDropInstructionAST * object = (const cPtr_lexicalDropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalDropInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)).add_operation (object->mAttribute_mTerminalName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 309)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalDropInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalDropInstructionAST.mSlotID,
                                                    extensionGetter_lexicalDropInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalDropInstructionAST_generateCocoaInstructionCode (defineCategoryGetter_lexicalDropInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category getter '@lexicalErrorInstructionAST generateCocoaInstructionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                                              GALGAS_string /* inArgument_inScannerClassName */,
                                                                                              GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = NO ;\n") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalErrorInstructionAST.mSlotID,
                                                    extensionGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode (defineCategoryGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category getter '@lexicalWarningInstructionAST generateCocoaInstructionCode'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                                                GALGAS_string /* inArgument_inScannerClassName */,
                                                                                                GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalWarningInstructionAST.mSlotID,
                                                    extensionGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode (defineCategoryGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category getter '@lexicalTagInstructionAST generateCocoaInstructionCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalTagInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                            GALGAS_string /* inArgument_inScannerClassName */,
                                                                                            GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalTagInstructionAST * object = (const cPtr_lexicalTagInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalTagInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("scanningPointStructForCocoa locationForTag_").add_operation (object->mAttribute_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 336)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 336)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("[self saveScanningPoint: & locationForTag_").add_operation (object->mAttribute_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 337)).add_operation (GALGAS_string ("] ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 337)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalTagInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalTagInstructionAST.mSlotID,
                                                    extensionGetter_lexicalTagInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalTagInstructionAST_generateCocoaInstructionCode (defineCategoryGetter_lexicalTagInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category getter '@lexicalRewindInstructionAST generateCocoaInstructionCode'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                                                               GALGAS_string inArgument_inScannerClassName,
                                                                                               GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalRewindInstructionAST * object = (const cPtr_lexicalRewindInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRewindInstructionAST) ;
  result_outGeneratedCode = GALGAS_string ("[self restoreScanningPoint: & locationForTag_").add_operation (object->mAttribute_mLexicalTagName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 346)).add_operation (GALGAS_string ("] ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 346)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("mTokenCode = ").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)).add_operation (object->mAttribute_mTerminalName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalRewindInstructionAST.mSlotID,
                                                    extensionGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode (defineCategoryGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category getter '@lexicalLogInstructionAST generateCocoaInstructionCode'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalLogInstructionAST_generateCocoaInstructionCode (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                                            GALGAS_string /* inArgument_inScannerClassName */,
                                                                                            GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("/* lexicalLog (LINE_AND_SOURCE_FILE) ; */\n") ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalLogInstructionAST_generateCocoaInstructionCode (void) {
  enterCategoryGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalLogInstructionAST.mSlotID,
                                                    extensionGetter_lexicalLogInstructionAST_generateCocoaInstructionCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalLogInstructionAST_generateCocoaInstructionCode (defineCategoryGetter_lexicalLogInstructionAST_generateCocoaInstructionCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category getter '@lexicalImplicitRuleAST generateCocoaCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalImplicitRuleAST_generateCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                               GALGAS_string inArgument_inScannerClassName,
                                                                               GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalImplicitRuleAST * object = (const cPtr_lexicalImplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalImplicitRuleAST) ;
  GALGAS_tokenSortedlist var_tokenSortedList ;
  GALGAS_lexicalExplicitTokenListMap joker_18548 ; // Joker input parameter
  GALGAS_bool joker_18568 ; // Joker input parameter
  inArgument_inLexiqueAnalysisContext.getter_mLexicalTokenListMap (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 375)).method_searchKey (object->mAttribute_mListName, joker_18548, var_tokenSortedList, joker_18568, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 375)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_tokenSortedlist enumerator_18624 (var_tokenSortedList, kEnumeration_down) ;
  while (enumerator_18624.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && [self testForInputString:@"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 378)) ;
    result_outGeneratedCode.plusAssign_operation(enumerator_18624.current_mName (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 379)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (" advance:YES]) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 380)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  mTokenCode = ").add_operation (inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)).add_operation (enumerator_18624.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 381)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 382)) ;
    enumerator_18624.gotoNextObject () ;
  }
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalImplicitRuleAST_generateCocoaCode (void) {
  enterCategoryGetter_generateCocoaCode (kTypeDescriptor_GALGAS_lexicalImplicitRuleAST.mSlotID,
                                         extensionGetter_lexicalImplicitRuleAST_generateCocoaCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalImplicitRuleAST_generateCocoaCode (defineCategoryGetter_lexicalImplicitRuleAST_generateCocoaCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category getter '@lexicalExplicitRuleAST generateCocoaCode'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_lexicalExplicitRuleAST_generateCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                               GALGAS_string inArgument_inScannerClassName,
                                                                               GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalExplicitRuleAST * object = (const cPtr_lexicalExplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalExplicitRuleAST) ;
  result_outGeneratedCode = GALGAS_string ("if (scanningOk && (") ;
  result_outGeneratedCode.plusAssign_operation(callCategoryGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLexicalRuleExpression.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 393)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 394)) ;
  {
  result_outGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 395)) ;
  }
  cEnumerator_lexicalInstructionListAST enumerator_19497 (object->mAttribute_mInstructionList, kEnumeration_up) ;
  while (enumerator_19497.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callCategoryGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_19497.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 397)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 397)) ;
    enumerator_19497.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 399)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 400)) ;
//---
  return result_outGeneratedCode ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_lexicalExplicitRuleAST_generateCocoaCode (void) {
  enterCategoryGetter_generateCocoaCode (kTypeDescriptor_GALGAS_lexicalExplicitRuleAST.mSlotID,
                                         extensionGetter_lexicalExplicitRuleAST_generateCocoaCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_lexicalExplicitRuleAST_generateCocoaCode (defineCategoryGetter_lexicalExplicitRuleAST_generateCocoaCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@lexicalSendTerminalByDefaultAST checkLexicalDefaultAction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                      GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalSendTerminalByDefaultAST * object = (const cPtr_lexicalSendTerminalByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSendTerminalByDefaultAST) ;
  GALGAS_lexicalSentValueList joker_8289 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mTerminalMap (SOURCE_FILE ("lexiqueCompilation.galgas", 163)).method_searchKey (object->mAttribute_mDefaultSentTerminal, joker_8289, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 163)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction (void) {
  enterCategoryMethod_checkLexicalDefaultAction (kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST.mSlotID,
                                                 categoryMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction (defineCategoryMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@lexicalErrorByDefaultAST checkLexicalDefaultAction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                               GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalErrorByDefaultAST * object = (const cPtr_lexicalErrorByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorByDefaultAST) ;
  {
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mLexicalMessageMap.modifier_setMMessageIsUsedForKey (GALGAS_bool (true), object->mAttribute_mDefaultErrorMessageName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 170)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction (void) {
  enterCategoryMethod_checkLexicalDefaultAction (kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST.mSlotID,
                                                 categoryMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction (defineCategoryMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@lexicalOrExpressionAST checkLexicalExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalOrExpressionAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                          GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalOrExpressionAST * object = (const cPtr_lexicalOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalOrExpressionAST) ;
  callCategoryMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLeftOperand.ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 184)) ;
  callCategoryMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) object->mAttribute_mRightOperand.ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 185)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalOrExpressionAST_checkLexicalExpression (void) {
  enterCategoryMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalOrExpressionAST.mSlotID,
                                              categoryMethod_lexicalOrExpressionAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalOrExpressionAST_checkLexicalExpression (defineCategoryMethod_lexicalOrExpressionAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@lexicalCharacterMatchAST checkLexicalExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalCharacterMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * /* inObject */,
                                                                            GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalCharacterMatchAST_checkLexicalExpression (void) {
  enterCategoryMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalCharacterMatchAST.mSlotID,
                                              categoryMethod_lexicalCharacterMatchAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCharacterMatchAST_checkLexicalExpression (defineCategoryMethod_lexicalCharacterMatchAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@lexicalCharacterSetMatchAST checkLexicalExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalCharacterSetMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                               GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCharacterSetMatchAST * object = (const cPtr_lexicalCharacterSetMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterSetMatchAST) ;
  const enumGalgasBool test_0 = ioArgument_ioLexiqueAnalysisContext.mAttribute_mExternUnicodeTestFunctions.getter_hasKey (object->mAttribute_mCharacterSetName.getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 198)) COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 198)).operator_not (SOURCE_FILE ("lexiqueCompilation.galgas", 198)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_s = GALGAS_string ("undefined test function; available functions are:") ;
    cEnumerator_stringset enumerator_10257 (ioArgument_ioLexiqueAnalysisContext.mAttribute_mExternUnicodeTestFunctions, kEnumeration_up) ;
    while (enumerator_10257.hasCurrentObject ()) {
      var_s.plusAssign_operation(GALGAS_string ("\n"
        "-  ").add_operation (enumerator_10257.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 201)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 201)) ;
      enumerator_10257.gotoNextObject () ;
    }
    GALGAS_location location_1 (object->mAttribute_mCharacterSetName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, var_s  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 203)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalCharacterSetMatchAST_checkLexicalExpression (void) {
  enterCategoryMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST.mSlotID,
                                              categoryMethod_lexicalCharacterSetMatchAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCharacterSetMatchAST_checkLexicalExpression (defineCategoryMethod_lexicalCharacterSetMatchAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@lexicalCharacterIntervalMatchAST checkLexicalExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * /* inObject */,
                                                                                    GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression (void) {
  enterCategoryMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST.mSlotID,
                                              categoryMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression (defineCategoryMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@lexicalStringMatchAST checkLexicalExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalStringMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                         GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalStringMatchAST * object = (const cPtr_lexicalStringMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringMatchAST) ;
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (object->mAttribute_mString.getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 217))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 217)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalStringMatchAST_checkLexicalExpression (void) {
  enterCategoryMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalStringMatchAST.mSlotID,
                                              categoryMethod_lexicalStringMatchAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalStringMatchAST_checkLexicalExpression (defineCategoryMethod_lexicalStringMatchAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@lexicalStringNotMatchAST checkLexicalExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalStringNotMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                            GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalStringNotMatchAST * object = (const cPtr_lexicalStringNotMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringNotMatchAST) ;
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (object->mAttribute_mString.getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 224))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 224)) ;
  {
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mLexicalMessageMap.modifier_setMMessageIsUsedForKey (GALGAS_bool (true), object->mAttribute_mErrorMessage.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 225)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalStringNotMatchAST_checkLexicalExpression (void) {
  enterCategoryMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalStringNotMatchAST.mSlotID,
                                              categoryMethod_lexicalStringNotMatchAST_checkLexicalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalStringNotMatchAST_checkLexicalExpression (defineCategoryMethod_lexicalStringNotMatchAST_checkLexicalExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@lexicalAttributeInputArgumentAST checkLexicalFunctionCallArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                              GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                              GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_attributeLexicalType ;
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCompilation.galgas", 243)).method_searchKey (object->mAttribute_mAttributeName, var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 243)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAttributeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 249)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 250)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 251)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 252))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 249)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterCategoryMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                        categoryMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument (defineCategoryMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@lexicalCharacterInputArgumentAST checkLexicalFunctionCallArgument'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                              GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                              GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 263)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mCharacter.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("type error, a literal character has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 264)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 265)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 266))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 264)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterCategoryMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                        categoryMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument (defineCategoryMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@lexicalUnsignedInputArgumentAST checkLexicalFunctionCallArgument'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                             GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                             GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 277)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mUnsigned.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("type error, a literal character has @uint").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 278)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 279)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 280))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 278)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterCategoryMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                        categoryMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument (defineCategoryMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@lexicalCurrentCharacterInputArgumentAST checkLexicalFunctionCallArgument'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                     GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                                     GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCurrentCharacterInputArgumentAST * object = (const cPtr_lexicalCurrentCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 291)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("type error, current character value has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 292)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 293)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 294))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 292)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterCategoryMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                        categoryMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument (defineCategoryMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@lexicalFunctionInputArgumentAST checkLexicalFunctionCallArgument'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                             GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                             GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList ;
  GALGAS_lexicalTypeEnum var_returnedLexicalFormalType ;
  GALGAS_string var_replacementFunctionName ;
  GALGAS_bool joker_15321 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalFunctionMap (SOURCE_FILE ("lexiqueCompilation.galgas", 308)).method_searchKey (object->mAttribute_mFunctionName, var_lexicalFormalTypeList, var_returnedLexicalFormalType, var_replacementFunctionName, joker_15321, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 308)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_replacementFunctionName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFunctionName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticWarning (location_1, GALGAS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 317)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 317))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 317)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_returnedLexicalFormalType.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mFunctionName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 321)).add_operation (GALGAS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 322)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 323)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 324))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 321)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_lexicalFormalTypeList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 328)).objectCompare (object->mAttribute_mFunctionActualArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 328)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mFunctionName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_5, GALGAS_string ("this lexical function names ").add_operation (object->mAttribute_mFunctionActualArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 330)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 329)).add_operation (GALGAS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 330)).add_operation (var_lexicalFormalTypeList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 332)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 331)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 332))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 329)) ;
  }
  cEnumerator_lexicalFunctionFormalArgumentList enumerator_16301 (var_lexicalFormalTypeList, kEnumeration_up) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_16336 (object->mAttribute_mFunctionActualArgumentList, kEnumeration_up) ;
  while (enumerator_16301.hasCurrentObject () && enumerator_16336.hasCurrentObject ()) {
    callCategoryMethod_checkLexicalFunctionCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_16336.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_16301.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 336)) ;
    enumerator_16301.gotoNextObject () ;
    enumerator_16336.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterCategoryMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                        categoryMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument (defineCategoryMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@lexicalAttributeInputArgumentAST checkLexicalRoutineCallArgument'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                             GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                             GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_attributeLexicalType ;
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCompilation.galgas", 358)).method_searchKey (object->mAttribute_mAttributeName, var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 358)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAttributeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 364)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 365)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 366)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 367))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 364)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterCategoryMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                       categoryMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument (defineCategoryMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@lexicalCharacterInputArgumentAST checkLexicalRoutineCallArgument'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                             GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                             GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 378)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mCharacter.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("type error, a literal character has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 379)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 380)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 381))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 379)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterCategoryMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                       categoryMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument (defineCategoryMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@lexicalUnsignedInputArgumentAST checkLexicalRoutineCallArgument'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                            GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                            GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 392)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mUnsigned.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("type error, a literal unsigned value has @uint").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 393)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 394)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 395))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 393)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterCategoryMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                       categoryMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument (defineCategoryMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@lexicalCurrentCharacterInputArgumentAST checkLexicalRoutineCallArgument'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                    GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                                    GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCurrentCharacterInputArgumentAST * object = (const cPtr_lexicalCurrentCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 406)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("type error, current character value has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 407)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 408)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 409))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 407)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterCategoryMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                       categoryMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument (defineCategoryMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@lexicalFunctionInputArgumentAST checkLexicalRoutineCallArgument'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                            GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                            GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList ;
  GALGAS_lexicalTypeEnum var_returnedLexicalFormalType ;
  GALGAS_string var_replacementFunctionName ;
  GALGAS_bool joker_20464 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalFunctionMap (SOURCE_FILE ("lexiqueCompilation.galgas", 423)).method_searchKey (object->mAttribute_mFunctionName, var_lexicalFormalTypeList, var_returnedLexicalFormalType, var_replacementFunctionName, joker_20464, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 423)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_replacementFunctionName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mFunctionName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticWarning (location_1, GALGAS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 432)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 432))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 432)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_returnedLexicalFormalType.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mFunctionName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 436)).add_operation (GALGAS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 437)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 438)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 439))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 436)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_lexicalFormalTypeList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 443)).objectCompare (object->mAttribute_mFunctionActualArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 443)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mFunctionName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_5, GALGAS_string ("this lexical function names ").add_operation (object->mAttribute_mFunctionActualArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 445)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 444)).add_operation (GALGAS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 445)).add_operation (var_lexicalFormalTypeList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 447)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 446)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 447))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 444)) ;
  }
  cEnumerator_lexicalFunctionFormalArgumentList enumerator_21444 (var_lexicalFormalTypeList, kEnumeration_up) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_21479 (object->mAttribute_mFunctionActualArgumentList, kEnumeration_up) ;
  while (enumerator_21444.hasCurrentObject () && enumerator_21479.hasCurrentObject ()) {
    callCategoryMethod_checkLexicalFunctionCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_21479.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_21444.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 451)) ;
    enumerator_21444.gotoNextObject () ;
    enumerator_21479.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterCategoryMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                       categoryMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument (defineCategoryMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@lexicalAttributeInputOutputArgumentAST checkLexicalRoutineCallArgument'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                   GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                                   GALGAS_lexicalArgumentModeAST inArgument_inLexicalRoutineFormalArgumentMode,
                                                                                                   GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalAttributeInputOutputArgumentAST * object = (const cPtr_lexicalAttributeInputOutputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputOutputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_attributeLexicalType ;
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCompilation.galgas", 475)).method_searchKey (object->mAttribute_mAttributeName, var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 475)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAttributeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 481)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 482)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 483)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 484))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 481)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("lexiqueCompilation.galgas", 488)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mActualPassingModeLocation, GALGAS_string ("the output mode (!) is required here, not an output/input mode")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 489)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterCategoryMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST.mSlotID,
                                                       categoryMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument (defineCategoryMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@lexicalFormalInputArgumentAST checkLexicalRoutineCallArgument'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                          GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                          GALGAS_lexicalArgumentModeAST inArgument_inLexicalRoutineFormalArgumentMode,
                                                                                          GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFormalInputArgumentAST * object = (const cPtr_lexicalFormalInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFormalInputArgumentAST) ;
  callCategoryMethod_checkLexicalRoutineCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) object->mAttribute_mRoutineOrFunctionFormalInputArgument.ptr (), ioArgument_ioLexiqueAnalysisContext, inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 500)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("lexiqueCompilation.galgas", 505)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mActualPassingModeLocation, GALGAS_string ("the output/input mode (!\?) is required here, not an input mode")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 506)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterCategoryMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST.mSlotID,
                                                       categoryMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument (defineCategoryMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@lexicalStructuredSendInstructionAST checkLexicalInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                        GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                        GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalStructuredSendInstructionAST * object = (const cPtr_lexicalStructuredSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStructuredSendInstructionAST) ;
  cEnumerator_lexicalSendSearchListAST enumerator_25014 (object->mAttribute_mLexicalSendSearchList, kEnumeration_up) ;
  while (enumerator_25014.hasCurrentObject ()) {
    {
    ioArgument_ioLexiqueAnalysisContext.mAttribute_mLexicalTokenListMap.modifier_setMShouldBeGeneratedForKey (GALGAS_bool (true), enumerator_25014.current_mSearchListName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 524)) ;
    }
    GALGAS_lexicalTypeEnum joker_25210 ; // Joker input parameter
    ioArgument_ioLexiqueAnalysisContext.getter_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCompilation.galgas", 525)).method_searchKey (enumerator_25014.current_mAttributeName (HERE), joker_25210, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 525)) ;
    enumerator_25014.gotoNextObject () ;
  }
  callCategoryMethod_checkLexicalDefaultAction ((const cPtr_lexicalSendDefaultActionAST *) object->mAttribute_mLexicalSendDefaultAction.ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 527)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction (void) {
  enterCategoryMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST.mSlotID,
                                               categoryMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction (defineCategoryMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@lexicalSimpleSendInstructionAST checkLexicalInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                    GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                    GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalSimpleSendInstructionAST * object = (const cPtr_lexicalSimpleSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSimpleSendInstructionAST) ;
  GALGAS_lexicalSentValueList joker_25659 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mTerminalMap (SOURCE_FILE ("lexiqueCompilation.galgas", 535)).method_searchKey (object->mAttribute_mSentTerminal, joker_25659, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 535)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction (void) {
  enterCategoryMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST.mSlotID,
                                               categoryMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction (defineCategoryMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@lexicalRepeatInstructionAST checkLexicalInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalRepeatInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalRepeatInstructionAST * object = (const cPtr_lexicalRepeatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRepeatInstructionAST) ;
  cEnumerator_lexicalWhileBranchListAST enumerator_25974 (object->mAttribute_mLexicalWhileBranchList, kEnumeration_up) ;
  while (enumerator_25974.hasCurrentObject ()) {
    callCategoryMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) enumerator_25974.current_mWhileExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 544)) ;
    GALGAS_lexicalTagMap var_tagMap = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 545)) ;
    cEnumerator_lexicalInstructionListAST enumerator_26149 (enumerator_25974.current_mWhileInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_26149.hasCurrentObject ()) {
      callCategoryMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_26149.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 547)) ;
      enumerator_26149.gotoNextObject () ;
    }
    enumerator_25974.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 550)) ;
  cEnumerator_lexicalInstructionListAST enumerator_26345 (object->mAttribute_mRepeatedInstructionList, kEnumeration_up) ;
  while (enumerator_26345.hasCurrentObject ()) {
    callCategoryMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_26345.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 552)) ;
    enumerator_26345.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalRepeatInstructionAST_checkLexicalInstruction (void) {
  enterCategoryMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST.mSlotID,
                                               categoryMethod_lexicalRepeatInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalRepeatInstructionAST_checkLexicalInstruction (defineCategoryMethod_lexicalRepeatInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@lexicalSelectInstructionAST checkLexicalInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalSelectInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalSelectInstructionAST * object = (const cPtr_lexicalSelectInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSelectInstructionAST) ;
  cEnumerator_lexicalSelectBranchListAST enumerator_26748 (object->mAttribute_mLexicalSelectBranchList, kEnumeration_up) ;
  while (enumerator_26748.hasCurrentObject ()) {
    callCategoryMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) enumerator_26748.current_mSelectExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 562)) ;
    GALGAS_lexicalTagMap var_tagMap = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 563)) ;
    cEnumerator_lexicalInstructionListAST enumerator_26925 (enumerator_26748.current_mSelectInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_26925.hasCurrentObject ()) {
      callCategoryMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_26925.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 565)) ;
      enumerator_26925.gotoNextObject () ;
    }
    enumerator_26748.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 568)) ;
  cEnumerator_lexicalInstructionListAST enumerator_27120 (object->mAttribute_mDefaultInstructionList, kEnumeration_up) ;
  while (enumerator_27120.hasCurrentObject ()) {
    callCategoryMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_27120.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 570)) ;
    enumerator_27120.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalSelectInstructionAST_checkLexicalInstruction (void) {
  enterCategoryMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalSelectInstructionAST.mSlotID,
                                               categoryMethod_lexicalSelectInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalSelectInstructionAST_checkLexicalInstruction (defineCategoryMethod_lexicalSelectInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@lexicalRoutineInstructionAST checkLexicalInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalRoutineInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                 GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalRoutineInstructionAST * object = (const cPtr_lexicalRoutineInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRoutineInstructionAST) ;
  GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList ;
  GALGAS_stringlist var_routineErrorMessageList ;
  GALGAS_bool joker_27757 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalRoutineMessageMap (SOURCE_FILE ("lexiqueCompilation.galgas", 581)).method_searchKey (object->mAttribute_mRoutineName, var_lexicalRoutineFormalArgumentList, var_routineErrorMessageList, joker_27757, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 581)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_lexicalRoutineFormalArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 588)).objectCompare (object->mAttribute_mActualArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 588)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mRoutineName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this lexical routine call names ").add_operation (object->mAttribute_mActualArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 590)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 589)).add_operation (GALGAS_string (" actual argument(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 590)).add_operation (var_lexicalRoutineFormalArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 592)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 591)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 592))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 589)) ;
  }
  cEnumerator_lexicalRoutineFormalArgumentList enumerator_28240 (var_lexicalRoutineFormalArgumentList, kEnumeration_up) ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_28267 (object->mAttribute_mActualArgumentList, kEnumeration_up) ;
  while (enumerator_28240.hasCurrentObject () && enumerator_28267.hasCurrentObject ()) {
    callCategoryMethod_checkLexicalRoutineCallArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_28267.current_mLexicalRoutineActualArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_28240.current_mLexicalFormalArgumentMode (HERE), enumerator_28240.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 596)) ;
    enumerator_28240.gotoNextObject () ;
    enumerator_28267.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_routineErrorMessageList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 603)).objectCompare (object->mAttribute_mErrorMessageList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 603)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mRoutineName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_3, GALGAS_string ("this lexical routine call names ").add_operation (object->mAttribute_mErrorMessageList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 605)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 605)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 604)).add_operation (GALGAS_string (" error message(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 605)).add_operation (var_routineErrorMessageList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 607)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 607)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 606)).add_operation (GALGAS_string (" error message(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 607))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 604)) ;
  }
  cEnumerator_lstringlist enumerator_28879 (object->mAttribute_mErrorMessageList, kEnumeration_up) ;
  while (enumerator_28879.hasCurrentObject ()) {
    {
    ioArgument_ioLexiqueAnalysisContext.mAttribute_mLexicalMessageMap.modifier_setMMessageIsUsedForKey (GALGAS_bool (true), enumerator_28879.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 614)) ;
    }
    enumerator_28879.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalRoutineInstructionAST_checkLexicalInstruction (void) {
  enterCategoryMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST.mSlotID,
                                               categoryMethod_lexicalRoutineInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalRoutineInstructionAST_checkLexicalInstruction (defineCategoryMethod_lexicalRoutineInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@lexicalLogInstructionAST checkLexicalInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalLogInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                             GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                             GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalLogInstructionAST_checkLexicalInstruction (void) {
  enterCategoryMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalLogInstructionAST.mSlotID,
                                               categoryMethod_lexicalLogInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalLogInstructionAST_checkLexicalInstruction (defineCategoryMethod_lexicalLogInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@lexicalRewindInstructionAST checkLexicalInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalRewindInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalRewindInstructionAST * object = (const cPtr_lexicalRewindInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRewindInstructionAST) ;
  ioArgument_ioTagMap.method_searchKey (object->mAttribute_mLexicalTagName, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 630)) ;
  GALGAS_lexicalSentValueList joker_29797 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mTerminalMap (SOURCE_FILE ("lexiqueCompilation.galgas", 631)).method_searchKey (object->mAttribute_mTerminalName, joker_29797, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 631)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalRewindInstructionAST_checkLexicalInstruction (void) {
  enterCategoryMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalRewindInstructionAST.mSlotID,
                                               categoryMethod_lexicalRewindInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalRewindInstructionAST_checkLexicalInstruction (defineCategoryMethod_lexicalRewindInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@lexicalDropInstructionAST checkLexicalInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalDropInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                              GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                              GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalDropInstructionAST * object = (const cPtr_lexicalDropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalDropInstructionAST) ;
  GALGAS_lexicalSentValueList joker_30152 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mTerminalMap (SOURCE_FILE ("lexiqueCompilation.galgas", 639)).method_searchKey (object->mAttribute_mTerminalName, joker_30152, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 639)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalDropInstructionAST_checkLexicalInstruction (void) {
  enterCategoryMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalDropInstructionAST.mSlotID,
                                               categoryMethod_lexicalDropInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalDropInstructionAST_checkLexicalInstruction (defineCategoryMethod_lexicalDropInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@lexicalTagInstructionAST checkLexicalInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalTagInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                             GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                             GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalTagInstructionAST * object = (const cPtr_lexicalTagInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalTagInstructionAST) ;
  {
  ioArgument_ioTagMap.modifier_insertKey (object->mAttribute_mLexicalTagName, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 647)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalTagInstructionAST_checkLexicalInstruction (void) {
  enterCategoryMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalTagInstructionAST.mSlotID,
                                               categoryMethod_lexicalTagInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalTagInstructionAST_checkLexicalInstruction (defineCategoryMethod_lexicalTagInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@lexicalErrorInstructionAST checkLexicalInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalErrorInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                               GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                               GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalErrorInstructionAST * object = (const cPtr_lexicalErrorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorInstructionAST) ;
  {
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mLexicalMessageMap.modifier_setMMessageIsUsedForKey (GALGAS_bool (true), object->mAttribute_mErrorMessageName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 655)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalErrorInstructionAST_checkLexicalInstruction (void) {
  enterCategoryMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalErrorInstructionAST.mSlotID,
                                               categoryMethod_lexicalErrorInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalErrorInstructionAST_checkLexicalInstruction (defineCategoryMethod_lexicalErrorInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@lexicalWarningInstructionAST checkLexicalInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalWarningInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                 GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalWarningInstructionAST * object = (const cPtr_lexicalWarningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalWarningInstructionAST) ;
  {
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mLexicalMessageMap.modifier_setMMessageIsUsedForKey (GALGAS_bool (true), object->mAttribute_mWarningMessageName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 663)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalWarningInstructionAST_checkLexicalInstruction (void) {
  enterCategoryMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalWarningInstructionAST.mSlotID,
                                               categoryMethod_lexicalWarningInstructionAST_checkLexicalInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalWarningInstructionAST_checkLexicalInstruction (defineCategoryMethod_lexicalWarningInstructionAST_checkLexicalInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@lexicalImplicitRuleAST checkLexicalRule'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalImplicitRuleAST_checkLexicalRule (const cPtr_abstractLexicalRuleAST * inObject,
                                                                    GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalImplicitRuleAST * object = (const cPtr_lexicalImplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalImplicitRuleAST) ;
  GALGAS_lexicalExplicitTokenListMap joker_32045 ; // Joker input parameter
  GALGAS_tokenSortedlist joker_32048 ; // Joker input parameter
  GALGAS_bool joker_32051 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalTokenListMap (SOURCE_FILE ("lexiqueCompilation.galgas", 677)).method_searchKey (object->mAttribute_mListName, joker_32045, joker_32048, joker_32051, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 677)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalImplicitRuleAST_checkLexicalRule (void) {
  enterCategoryMethod_checkLexicalRule (kTypeDescriptor_GALGAS_lexicalImplicitRuleAST.mSlotID,
                                        categoryMethod_lexicalImplicitRuleAST_checkLexicalRule) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalImplicitRuleAST_checkLexicalRule (defineCategoryMethod_lexicalImplicitRuleAST_checkLexicalRule, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@lexicalExplicitRuleAST checkLexicalRule'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexicalExplicitRuleAST_checkLexicalRule (const cPtr_abstractLexicalRuleAST * inObject,
                                                                    GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalExplicitRuleAST * object = (const cPtr_lexicalExplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalExplicitRuleAST) ;
  callCategoryMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLexicalRuleExpression.ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 684)) ;
  GALGAS_lexicalTagMap var_tagMap = GALGAS_lexicalTagMap::constructor_emptyMap (SOURCE_FILE ("lexiqueCompilation.galgas", 685)) ;
  cEnumerator_lexicalInstructionListAST enumerator_32436 (object->mAttribute_mInstructionList, kEnumeration_up) ;
  while (enumerator_32436.hasCurrentObject ()) {
    callCategoryMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_32436.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 687)) ;
    enumerator_32436.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexicalExplicitRuleAST_checkLexicalRule (void) {
  enterCategoryMethod_checkLexicalRule (kTypeDescriptor_GALGAS_lexicalExplicitRuleAST.mSlotID,
                                        categoryMethod_lexicalExplicitRuleAST_checkLexicalRule) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexicalExplicitRuleAST_checkLexicalRule (defineCategoryMethod_lexicalExplicitRuleAST_checkLexicalRule, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@stringsetPredefinedTypeAST getEnumerationList'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_stringsetPredefinedTypeAST_getEnumerationList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                          GALGAS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                                          GALGAS_stringlist & outArgument_outEnumerationVariant,
                                                                          GALGAS_string & outArgument_outEnumeratedType,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 28)) ;
  }
  outArgument_outEnumerationList = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 29)) ;
  outArgument_outEnumerationList.addAssign_operation (var_stringTypeIndex, GALGAS_string ("key")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 30)) ;
  outArgument_outEnumerationVariant = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 31)) ;
  outArgument_outEnumerationVariant.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 32)) ;
  outArgument_outEnumerationVariant.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 33)) ;
  outArgument_outEnumeratedType = GALGAS_string ("string") ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_stringsetPredefinedTypeAST_getEnumerationList (void) {
  enterCategoryMethod_getEnumerationList (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                          categoryMethod_stringsetPredefinedTypeAST_getEnumerationList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getEnumerationList (defineCategoryMethod_stringsetPredefinedTypeAST_getEnumerationList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@dataPredefinedTypeAST getEnumerationList'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_dataPredefinedTypeAST_getEnumerationList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                                     GALGAS_stringlist & outArgument_outEnumerationVariant,
                                                                     GALGAS_string & outArgument_outEnumeratedType,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_uintTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), var_uintTypeIndex COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 45)) ;
  }
  outArgument_outEnumerationList = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 46)) ;
  outArgument_outEnumerationList.addAssign_operation (var_uintTypeIndex, GALGAS_string ("data")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 47)) ;
  outArgument_outEnumerationVariant = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 48)) ;
  outArgument_outEnumerationVariant.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 49)) ;
  outArgument_outEnumerationVariant.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 50)) ;
  outArgument_outEnumeratedType = GALGAS_string ("uint") ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_dataPredefinedTypeAST_getEnumerationList (void) {
  enterCategoryMethod_getEnumerationList (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                          categoryMethod_dataPredefinedTypeAST_getEnumerationList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getEnumerationList (defineCategoryMethod_dataPredefinedTypeAST_getEnumerationList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@stringsetPredefinedTypeAST getModifierMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_stringsetPredefinedTypeAST_getModifierMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                      GALGAS_setterMap & outArgument_outModifierMap,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_stringType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringType COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 65)) ;
  }
  outArgument_outModifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypeFeatures.galgas", 66)) ;
  {
  outArgument_outModifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeKey"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 68))  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 68)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsTypeFeatures.galgas", 69)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeFeatures.galgas", 70)), var_stringType, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticsTypeFeatures.galgas", 70)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 70)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsTypeFeatures.galgas", 72)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 67)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_stringsetPredefinedTypeAST_getModifierMap (void) {
  enterCategoryMethod_getModifierMap (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                      categoryMethod_stringsetPredefinedTypeAST_getModifierMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getModifierMap (defineCategoryMethod_stringsetPredefinedTypeAST_getModifierMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category getter '@applicationPredefinedTypeAST getSupportedOperatorFlags'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 84)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterCategoryGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_applicationPredefinedTypeAST.mSlotID,
                                                 extensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags (defineCategoryGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category getter '@bigintPredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)).operator_or (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)).operator_or (function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 90)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 92)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 92)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 92)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 92)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 94)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 93)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 94)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 94)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterCategoryGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                                 extensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags (defineCategoryGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category getter '@timerPredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 100)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_timerPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterCategoryGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_timerPredefinedTypeAST.mSlotID,
                                                 extensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_timerPredefinedTypeAST_getSupportedOperatorFlags (defineCategoryGetter_timerPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category getter '@objectPredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 106)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_objectPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterCategoryGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_objectPredefinedTypeAST.mSlotID,
                                                 extensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_objectPredefinedTypeAST_getSupportedOperatorFlags (defineCategoryGetter_objectPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category getter '@stringPredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 112)).operator_or (function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 112)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 112)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 112)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 113)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_stringPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterCategoryGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                                 extensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_stringPredefinedTypeAST_getSupportedOperatorFlags (defineCategoryGetter_stringPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category getter '@charPredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 119)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 119)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 119)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_charPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterCategoryGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_charPredefinedTypeAST.mSlotID,
                                                 extensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_charPredefinedTypeAST_getSupportedOperatorFlags (defineCategoryGetter_charPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category getter '@boolPredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_prefixNotOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_boolPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterCategoryGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_boolPredefinedTypeAST.mSlotID,
                                                 extensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_boolPredefinedTypeAST_getSupportedOperatorFlags (defineCategoryGetter_boolPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category getter '@uintPredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 132)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 133)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 134)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_uintPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterCategoryGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_uintPredefinedTypeAST.mSlotID,
                                                 extensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_uintPredefinedTypeAST_getSupportedOperatorFlags (defineCategoryGetter_uintPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category getter '@sintPredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 144)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)).operator_or (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 146)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 145)).operator_or (function_prefixMinusOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 146)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 146)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 146)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 147)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_sintPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterCategoryGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_sintPredefinedTypeAST.mSlotID,
                                                 extensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_sintPredefinedTypeAST_getSupportedOperatorFlags (defineCategoryGetter_sintPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category getter '@uint64PredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 157)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 158)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 159)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterCategoryGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST.mSlotID,
                                                 extensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (defineCategoryGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category getter '@sint64PredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 169)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)).operator_or (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 171)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 170)).operator_or (function_prefixMinusOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 171)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 171)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 171)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)).operator_or (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 172)).operator_or (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (function_infixAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (function_infixSubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (function_infixMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterCategoryGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST.mSlotID,
                                                 extensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (defineCategoryGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category getter '@doublePredefinedTypeAST getSupportedOperatorFlags'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_prefixPlusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 182)).operator_or (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (function_infixDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)).operator_or (function_minusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)).operator_or (function_mulEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)).operator_or (function_divEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_doublePredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterCategoryGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_doublePredefinedTypeAST.mSlotID,
                                                 extensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_doublePredefinedTypeAST_getSupportedOperatorFlags (defineCategoryGetter_doublePredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category getter '@stringsetPredefinedTypeAST getSupportedOperatorFlags'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 192)).operator_or (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 192)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)).operator_or (function_generateEnumerationHelperMethods (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)).operator_or (function_generateCopyConstructorAndAssignmentOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 196)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterCategoryGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                                 extensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags (defineCategoryGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category getter '@binarysetPredefinedTypeAST getSupportedOperatorFlags'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)).operator_or (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)).operator_or (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)).operator_or (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 203)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 202)).operator_or (function_infixShiftOperator (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 203)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 203)).operator_or (function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 204)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 203)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterCategoryGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                                 extensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags (defineCategoryGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category getter '@typePredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 210)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_typePredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterCategoryGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_typePredefinedTypeAST.mSlotID,
                                                 extensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_typePredefinedTypeAST_getSupportedOperatorFlags (defineCategoryGetter_typePredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category getter '@dataPredefinedTypeAST getSupportedOperatorFlags'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 216)).operator_or (function_generateEnumerationHelperMethods (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 217)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 216)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_dataPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterCategoryGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                                 extensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_dataPredefinedTypeAST_getSupportedOperatorFlags (defineCategoryGetter_dataPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category getter '@functionPredefinedTypeAST getSupportedOperatorFlags'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 223)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_functionPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterCategoryGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_functionPredefinedTypeAST.mSlotID,
                                                 extensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_functionPredefinedTypeAST_getSupportedOperatorFlags (defineCategoryGetter_functionPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category getter '@locationPredefinedTypeAST getSupportedOperatorFlags'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 229)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_locationPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterCategoryGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_locationPredefinedTypeAST.mSlotID,
                                                 extensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_locationPredefinedTypeAST_getSupportedOperatorFlags (defineCategoryGetter_locationPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category getter '@filewrapperPredefinedTypeAST getSupportedOperatorFlags'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_uint extensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outFlags ; // Returned variable
  result_outFlags = function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 235)) ;
//---
  return result_outFlags ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterCategoryGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST.mSlotID,
                                                 extensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags (defineCategoryGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@stringsetPredefinedTypeAST getAddAssignArgumentList'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                GALGAS_functionSignature & outArgument_outAddAssignArgumentList,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 244)) ;
  }
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 245)) ;
  temp_0.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeFeatures.galgas", 245)), var_stringTypeIndex, GALGAS_string ("inString")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 245)) ;
  outArgument_outAddAssignArgumentList = temp_0 ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList (void) {
  enterCategoryMethod_getAddAssignArgumentList (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                                categoryMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList (defineCategoryMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@locationPredefinedTypeAST getConstructorMap'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_locationPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                        GALGAS_constructorMap & outArgument_outMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 125)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nowhere"), GALGAS_string ("location"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 126)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("here"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 133)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_locationPredefinedTypeAST_getConstructorMap (void) {
  enterCategoryMethod_getConstructorMap (kTypeDescriptor_GALGAS_locationPredefinedTypeAST.mSlotID,
                                         categoryMethod_locationPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_locationPredefinedTypeAST_getConstructorMap (defineCategoryMethod_locationPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@stringPredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_stringPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                      GALGAS_constructorMap & outArgument_outMap,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 147)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("homeDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 148)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("retrieveAndResetTemplateString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 155)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSymbolicLinkContents"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 162)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSourceFilePath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 171)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithCurrentDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 178)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithContentsOfFile"), GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 185)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithCurrentDateTime"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 194)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithEnvironmentVariable"), GALGAS_string ("string"), GALGAS_string ("inEnvironmentVariable"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 201)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithEnvironmentVariableOrEmpty"), GALGAS_string ("string"), GALGAS_string ("inEnvironmentVariable"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 210)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppLineComment"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 219)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppTitleComment"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 226)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 235)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppChar"), GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 244)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("componentsJoinedByString"), GALGAS_string ("stringlist"), GALGAS_string ("inComponents"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 253)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSequenceOfCharacters"), GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 264)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_stringPredefinedTypeAST_getConstructorMap (void) {
  enterCategoryMethod_getConstructorMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                         categoryMethod_stringPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getConstructorMap (defineCategoryMethod_stringPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@applicationPredefinedTypeAST getConstructorMap'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_applicationPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                           GALGAS_constructorMap & outArgument_outMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 282)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("verboseOutput"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 283)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("projectVersionString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 290)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("galgasVersionString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 297)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("commandLineArgumentCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 304)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("commandLineArgumentAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 311)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 321)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 328)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 339)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 350)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 362)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 369)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 380)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 391)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 403)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 410)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 421)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 432)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_applicationPredefinedTypeAST_getConstructorMap (void) {
  enterCategoryMethod_getConstructorMap (kTypeDescriptor_GALGAS_applicationPredefinedTypeAST.mSlotID,
                                         categoryMethod_applicationPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_applicationPredefinedTypeAST_getConstructorMap (defineCategoryMethod_applicationPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@charPredefinedTypeAST getConstructorMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_charPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GALGAS_constructorMap & outArgument_outMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 450)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("replacementCharacter"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 451)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeCharacterWithUnsigned"), GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 458)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_charPredefinedTypeAST_getConstructorMap (void) {
  enterCategoryMethod_getConstructorMap (kTypeDescriptor_GALGAS_charPredefinedTypeAST.mSlotID,
                                         categoryMethod_charPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_charPredefinedTypeAST_getConstructorMap (defineCategoryMethod_charPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@uintPredefinedTypeAST getConstructorMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uintPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GALGAS_constructorMap & outArgument_outMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 474)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compilationMode"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 475)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 482)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("errorCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 489)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("warningCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 496)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("valueWithMask"), GALGAS_string ("uint"), GALGAS_string ("inLowerIndex"), GALGAS_string ("uint"), GALGAS_string ("inUpperIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 503)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uintPredefinedTypeAST_getConstructorMap (void) {
  enterCategoryMethod_getConstructorMap (kTypeDescriptor_GALGAS_uintPredefinedTypeAST.mSlotID,
                                         categoryMethod_uintPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uintPredefinedTypeAST_getConstructorMap (defineCategoryMethod_uintPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@sintPredefinedTypeAST getConstructorMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sintPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GALGAS_constructorMap & outArgument_outMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 521)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 522)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("min"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 529)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sintPredefinedTypeAST_getConstructorMap (void) {
  enterCategoryMethod_getConstructorMap (kTypeDescriptor_GALGAS_sintPredefinedTypeAST.mSlotID,
                                         categoryMethod_sintPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sintPredefinedTypeAST_getConstructorMap (defineCategoryMethod_sintPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@uint64PredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uint_36__34_PredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                            GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                            GALGAS_constructorMap & outArgument_outMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 543)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 544)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64MaskWithCompressedBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 551)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64BaseValueWithCompressedBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 560)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64WithBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 569)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uint_36__34_PredefinedTypeAST_getConstructorMap (void) {
  enterCategoryMethod_getConstructorMap (kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST.mSlotID,
                                         categoryMethod_uint_36__34_PredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uint_36__34_PredefinedTypeAST_getConstructorMap (defineCategoryMethod_uint_36__34_PredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@sint64PredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sint_36__34_PredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                            GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                            GALGAS_constructorMap & outArgument_outMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 585)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 586)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("min"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 593)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sint_36__34_PredefinedTypeAST_getConstructorMap (void) {
  enterCategoryMethod_getConstructorMap (kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST.mSlotID,
                                         categoryMethod_sint_36__34_PredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sint_36__34_PredefinedTypeAST_getConstructorMap (defineCategoryMethod_sint_36__34_PredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@stringsetPredefinedTypeAST getConstructorMap'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_stringsetPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                         GALGAS_constructorMap & outArgument_outMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 607)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 608)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 615)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithStringList"), GALGAS_string ("stringlist"), GALGAS_string ("inStringList"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 624)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithLStringList"), GALGAS_string ("lstringlist"), GALGAS_string ("inLStringList"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 633)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_stringsetPredefinedTypeAST_getConstructorMap (void) {
  enterCategoryMethod_getConstructorMap (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                         categoryMethod_stringsetPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getConstructorMap (defineCategoryMethod_stringsetPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@binarysetPredefinedTypeAST getConstructorMap'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_binarysetPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                         GALGAS_constructorMap & outArgument_outMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 649)) ;
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithBit"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 650)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptyBinarySet"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 659)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fullBinarySet"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 666)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithPredicateString"), GALGAS_string ("string"), GALGAS_string ("inPredicateString"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 673)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithNotEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 682)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 695)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictLowerComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 708)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictGreaterComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 721)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithLowerOrEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 734)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithGreaterOrEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 747)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 760)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithNotEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 773)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictLowerThanConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 786)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictGreaterThanConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 799)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithLowerOrEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 812)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithGreaterOrEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 825)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_binarysetPredefinedTypeAST_getConstructorMap (void) {
  enterCategoryMethod_getConstructorMap (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                         categoryMethod_binarysetPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binarysetPredefinedTypeAST_getConstructorMap (defineCategoryMethod_binarysetPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@typePredefinedTypeAST getConstructorMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_typePredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GALGAS_constructorMap & outArgument_outMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 845)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("typeList"), GALGAS_string ("typelist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 846)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_typePredefinedTypeAST_getConstructorMap (void) {
  enterCategoryMethod_getConstructorMap (kTypeDescriptor_GALGAS_typePredefinedTypeAST.mSlotID,
                                         categoryMethod_typePredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typePredefinedTypeAST_getConstructorMap (defineCategoryMethod_typePredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@bigintPredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_bigintPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                      GALGAS_constructorMap & outArgument_outMap,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 861)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("zero"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 862)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_bigintPredefinedTypeAST_getConstructorMap (void) {
  enterCategoryMethod_getConstructorMap (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                         categoryMethod_bigintPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bigintPredefinedTypeAST_getConstructorMap (defineCategoryMethod_bigintPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@dataPredefinedTypeAST getConstructorMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_dataPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GALGAS_constructorMap & outArgument_outMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 877)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptyData"), GALGAS_string ("data"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 878)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("dataWithContentsOfFile"), GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("data"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 885)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_dataPredefinedTypeAST_getConstructorMap (void) {
  enterCategoryMethod_getConstructorMap (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                         categoryMethod_dataPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getConstructorMap (defineCategoryMethod_dataPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@functionPredefinedTypeAST getConstructorMap'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                        GALGAS_constructorMap & outArgument_outMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 901)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("functionList"), GALGAS_string ("functionlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 902)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("functionWithName"), GALGAS_string ("string"), GALGAS_string ("inName"), GALGAS_string ("function"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 909)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isFunctionDefined"), GALGAS_string ("string"), GALGAS_string ("inFunctionName"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 918)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionPredefinedTypeAST_getConstructorMap (void) {
  enterCategoryMethod_getConstructorMap (kTypeDescriptor_GALGAS_functionPredefinedTypeAST.mSlotID,
                                         categoryMethod_functionPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionPredefinedTypeAST_getConstructorMap (defineCategoryMethod_functionPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@doublePredefinedTypeAST getConstructorMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_doublePredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                      GALGAS_constructorMap & outArgument_outMap,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 935)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("pi"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 936)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("doubleWithBinaryImage"), GALGAS_string ("uint64"), GALGAS_string ("inBinaryImage"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 943)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_doublePredefinedTypeAST_getConstructorMap (void) {
  enterCategoryMethod_getConstructorMap (kTypeDescriptor_GALGAS_doublePredefinedTypeAST.mSlotID,
                                         categoryMethod_doublePredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_doublePredefinedTypeAST_getConstructorMap (defineCategoryMethod_doublePredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@timerPredefinedTypeAST getConstructorMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_timerPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_constructorMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 960)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("start"), GALGAS_string ("timer"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 961)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_timerPredefinedTypeAST_getConstructorMap (void) {
  enterCategoryMethod_getConstructorMap (kTypeDescriptor_GALGAS_timerPredefinedTypeAST.mSlotID,
                                         categoryMethod_timerPredefinedTypeAST_getConstructorMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_timerPredefinedTypeAST_getConstructorMap (defineCategoryMethod_timerPredefinedTypeAST_getConstructorMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@locationPredefinedTypeAST getGetterMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_locationPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                   GALGAS_getterMap & outArgument_outMap,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 377)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("locationString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 378)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("locationIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 385)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("file"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 392)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("line"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 399)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("column"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 406)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isNowhere"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 413)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_locationPredefinedTypeAST_getGetterMap (void) {
  enterCategoryMethod_getGetterMap (kTypeDescriptor_GALGAS_locationPredefinedTypeAST.mSlotID,
                                    categoryMethod_locationPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_locationPredefinedTypeAST_getGetterMap (defineCategoryMethod_locationPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@stringPredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_stringPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GALGAS_getterMap & outArgument_outMap,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 427)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lastCharacter"), GALGAS_string ("char"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 428)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nowhere"), GALGAS_string ("lstring"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 435)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("doesEnvironmentVariableExist"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 442)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 449)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 456)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nameRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 463)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 470)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("HTMLRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 477)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8Representation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 484)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationWithoutDelimiters"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 491)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf32Representation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 498)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByTrimmingWhiteSpaces"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 505)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("md5"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 512)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalUnsignedNumber"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 519)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalUnsignedNumber"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 526)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("capacity"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 533)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isSymbolicLink"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 540)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileExists"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 547)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoryExists"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 554)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("pathExtension"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 561)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nativePathWithUnixPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 568)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unixPathWithNativePath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 575)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lastPathComponent"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 582)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByDeletingPathExtension"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 589)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByCapitalizingFirstCharacter"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 596)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("firstCharacterOrNul"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 603)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByDeletingLastPathComponent"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 610)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByStandardizingPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 617)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lowercaseString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 624)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uppercaseString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 631)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("reversedString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 638)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("currentColumn"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 645)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("system"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 652)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("popen"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 659)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("characterAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("char"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 666)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsCharacter"), GALGAS_string ("char"), GALGAS_string ("inCharacter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 673)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsCharacterInRange"), GALGAS_string ("char"), GALGAS_string ("inFirstCharacter"), GALGAS_string ("char"), GALGAS_string ("inLastCharacter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 680)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRemovingCharacterAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 691)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("subStringFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 698)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("rightSubString"), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 705)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("leftSubString"), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 712)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("subString"), GALGAS_string ("uint"), GALGAS_string ("inStart"), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 719)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("absolutePathFromPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 726)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("relativePathFromPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 733)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("componentsSeparatedByString"), GALGAS_string ("string"), GALGAS_string ("inSeparator"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 740)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByLeftPadding"), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 747)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRightPadding"), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 754)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByLeftAndRightPadding"), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 761)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByReplacingStringByString"), GALGAS_string ("string"), GALGAS_string ("inSearchedString"), GALGAS_string ("string"), GALGAS_string ("inReplacementString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 768)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("regularFiles"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 775)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hiddenFiles"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 782)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directories"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 789)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoriesWithExtensions"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_string ("inExtensionList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 796)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("regularFilesWithExtensions"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_string ("inExtensionList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 803)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_stringPredefinedTypeAST_getGetterMap (void) {
  enterCategoryMethod_getGetterMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                    categoryMethod_stringPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getGetterMap (defineCategoryMethod_stringPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@charPredefinedTypeAST getGetterMap'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_charPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GALGAS_getterMap & outArgument_outMap,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 817)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 818)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf32CharConstantRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 825)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 832)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isalnum"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 839)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isalpha"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 846)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("iscntrl"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 853)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isdigit"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 860)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("islower"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 867)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isupper"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 874)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isxdigit"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 881)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeLetter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 888)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeMark"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 895)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeNumber"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 902)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeSeparator"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 909)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeCommand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 916)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodePunctuation"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 923)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeSymbol"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 930)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 937)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeToLower"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 944)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeToUpper"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 951)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_charPredefinedTypeAST_getGetterMap (void) {
  enterCategoryMethod_getGetterMap (kTypeDescriptor_GALGAS_charPredefinedTypeAST.mSlotID,
                                    categoryMethod_charPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_charPredefinedTypeAST_getGetterMap (defineCategoryMethod_charPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@boolPredefinedTypeAST getGetterMap'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_boolPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GALGAS_getterMap & outArgument_outMap,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 965)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 966)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("ocString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 973)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 980)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 987)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 994)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1001)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1008)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_boolPredefinedTypeAST_getGetterMap (void) {
  enterCategoryMethod_getGetterMap (kTypeDescriptor_GALGAS_boolPredefinedTypeAST.mSlotID,
                                    categoryMethod_boolPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_boolPredefinedTypeAST_getGetterMap (defineCategoryMethod_boolPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@uintPredefinedTypeAST getGetterMap'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uintPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GALGAS_getterMap & outArgument_outMap,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1022)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1023)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1030)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1037)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1044)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1051)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lsbIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1058)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("significantBitCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1065)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("oneBitCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1072)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1079)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1086)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1093)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeValueAssigned"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1100)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isInRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1107)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1115)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1122)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1129)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1136)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uintPredefinedTypeAST_getGetterMap (void) {
  enterCategoryMethod_getGetterMap (kTypeDescriptor_GALGAS_uintPredefinedTypeAST.mSlotID,
                                    categoryMethod_uintPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uintPredefinedTypeAST_getGetterMap (defineCategoryMethod_uintPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@sintPredefinedTypeAST getGetterMap'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sintPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GALGAS_getterMap & outArgument_outMap,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1150)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1151)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1158)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1165)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1172)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1179)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1186)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1193)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1200)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1208)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1215)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1222)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1229)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sintPredefinedTypeAST_getGetterMap (void) {
  enterCategoryMethod_getGetterMap (kTypeDescriptor_GALGAS_sintPredefinedTypeAST.mSlotID,
                                    categoryMethod_sintPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sintPredefinedTypeAST_getGetterMap (defineCategoryMethod_sintPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@uint64PredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uint_36__34_PredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_getterMap & outArgument_outMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1244)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1245)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1252)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1259)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1265)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1272)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintSlice"), GALGAS_string ("uint"), GALGAS_string ("inStartBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1279)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1286)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1293)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1300)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1308)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1315)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1322)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1329)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uint_36__34_PredefinedTypeAST_getGetterMap (void) {
  enterCategoryMethod_getGetterMap (kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST.mSlotID,
                                    categoryMethod_uint_36__34_PredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uint_36__34_PredefinedTypeAST_getGetterMap (defineCategoryMethod_uint_36__34_PredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@sint64PredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sint_36__34_PredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_getterMap & outArgument_outMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1343)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1344)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1351)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1358)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1365)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1372)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1379)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1386)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1393)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1401)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1408)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1415)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1422)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sint_36__34_PredefinedTypeAST_getGetterMap (void) {
  enterCategoryMethod_getGetterMap (kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST.mSlotID,
                                    categoryMethod_sint_36__34_PredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sint_36__34_PredefinedTypeAST_getGetterMap (defineCategoryMethod_sint_36__34_PredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@doublePredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_doublePredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GALGAS_getterMap & outArgument_outMap,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1436)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1437)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1444)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1451)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1458)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1465)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cos"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1472)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sin"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1479)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("tan"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1486)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("log10"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1493)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("log2"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1500)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("logn"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1507)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("exp"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1514)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cosDegree"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1521)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sinDegree"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1528)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("tanDegree"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1535)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sqrt"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1542)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("power"), GALGAS_string ("double"), GALGAS_string ("inExponant"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1549)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryImage"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1556)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_doublePredefinedTypeAST_getGetterMap (void) {
  enterCategoryMethod_getGetterMap (kTypeDescriptor_GALGAS_doublePredefinedTypeAST.mSlotID,
                                    categoryMethod_doublePredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_doublePredefinedTypeAST_getGetterMap (defineCategoryMethod_doublePredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@stringsetPredefinedTypeAST getGetterMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_stringsetPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GALGAS_getterMap & outArgument_outMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1570)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1571)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1578)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("anyString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1585)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1592)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_stringsetPredefinedTypeAST_getGetterMap (void) {
  enterCategoryMethod_getGetterMap (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                    categoryMethod_stringsetPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getGetterMap (defineCategoryMethod_stringsetPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@binarysetPredefinedTypeAST getGetterMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_binarysetPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GALGAS_getterMap & outArgument_outMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1606)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isFull"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1607)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nodeCount"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1614)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isEmpty"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1621)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("significantVariableCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1628)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("ITE"), GALGAS_string ("binaryset"), GALGAS_string ("inTHENoperand"), GALGAS_string ("binaryset"), GALGAS_string ("inELSEoperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1635)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("print"), GALGAS_string ("stringlist"), GALGAS_string ("inVariableList"), GALGAS_string ("uintlist"), GALGAS_string ("inBDDCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1644)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("graphvizDump"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1653)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("stringlist"), GALGAS_string ("inBitNameList"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1660)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transformedBy"), GALGAS_string ("uintlist"), GALGAS_string ("inTransformationArray"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1668)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("forAllOnBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1676)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("forAllOnBitIndexAndBeyond"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1684)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existOnBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1691)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existOnBitIndexAndBeyond"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1698)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("valueCount"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1705)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigValueCount"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("bigint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1714)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compressedValueCount"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1723)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64ValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1730)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1737)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringValueListWithNameList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_string ("inNameList"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1744)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("predicateStringValue"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1751)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compressedStringValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1758)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap10"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1765)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap021"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1772)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap102"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1779)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap120"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1786)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap201"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1793)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap210"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1800)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transitiveClosure"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1807)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("accessibleStates"), GALGAS_string ("binaryset"), GALGAS_string ("inInitialStateSet"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1814)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("implies"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1821)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("equalTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1828)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("notEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1835)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lowerOrEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1842)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("greaterOrEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1849)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("strictGreaterThan"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1856)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("strictLowerThan"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1863)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetByTranslatingFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inFirstIndexToTranslate"), GALGAS_string ("uint"), GALGAS_string ("inTranslation"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1870)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsValue"), GALGAS_string ("uint64"), GALGAS_string ("inValue"), GALGAS_string ("uint"), GALGAS_string ("inFirstBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1877)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existsOnBitRange"), GALGAS_string ("uint"), GALGAS_string ("inFirstBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1884)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_binarysetPredefinedTypeAST_getGetterMap (void) {
  enterCategoryMethod_getGetterMap (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                    categoryMethod_binarysetPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_binarysetPredefinedTypeAST_getGetterMap (defineCategoryMethod_binarysetPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@typePredefinedTypeAST getGetterMap'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_typePredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GALGAS_getterMap & outArgument_outMap,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1898)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("name"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1899)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hasSuperclass"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1906)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("superclass"), GALGAS_string ("type"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1913)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_typePredefinedTypeAST_getGetterMap (void) {
  enterCategoryMethod_getGetterMap (kTypeDescriptor_GALGAS_typePredefinedTypeAST.mSlotID,
                                    categoryMethod_typePredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typePredefinedTypeAST_getGetterMap (defineCategoryMethod_typePredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@dataPredefinedTypeAST getGetterMap'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_dataPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GALGAS_getterMap & outArgument_outMap,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1927)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1928)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cStringRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1935)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_dataPredefinedTypeAST_getGetterMap (void) {
  enterCategoryMethod_getGetterMap (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                    categoryMethod_dataPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getGetterMap (defineCategoryMethod_dataPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@functionPredefinedTypeAST getGetterMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                   GALGAS_getterMap & outArgument_outMap,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1949)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("name"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1950)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("resultType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1957)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("formalParameterTypeList"), GALGAS_string ("typelist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1964)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("invoke"), GALGAS_string ("objectlist"), GALGAS_string ("inParameters"), GALGAS_string ("location"), GALGAS_string ("inErrorLocation"), GALGAS_string ("object"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1971)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionPredefinedTypeAST_getGetterMap (void) {
  enterCategoryMethod_getGetterMap (kTypeDescriptor_GALGAS_functionPredefinedTypeAST.mSlotID,
                                    categoryMethod_functionPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionPredefinedTypeAST_getGetterMap (defineCategoryMethod_functionPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@objectPredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_objectPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GALGAS_getterMap & outArgument_outMap,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1982)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("objectStaticType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1983)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("objectDynamicType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1990)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_objectPredefinedTypeAST_getGetterMap (void) {
  enterCategoryMethod_getGetterMap (kTypeDescriptor_GALGAS_objectPredefinedTypeAST.mSlotID,
                                    categoryMethod_objectPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_objectPredefinedTypeAST_getGetterMap (defineCategoryMethod_objectPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@filewrapperPredefinedTypeAST getGetterMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                      GALGAS_getterMap & outArgument_outMap,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2004)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allTextFilePathes"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2005)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allBinaryFilePathes"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2012)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allDirectoryPathes"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2019)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("currentDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2026)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allFilePathesWithExtension"), GALGAS_string ("string"), GALGAS_string ("inExtension"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2033)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoryExistsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2040)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileExistsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2047)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("textFileContentsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2054)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryFileContentsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("data"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2061)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("absolutePathForPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2068)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoriesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2075)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryFilesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2082)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("textFilesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2089)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperPredefinedTypeAST_getGetterMap (void) {
  enterCategoryMethod_getGetterMap (kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST.mSlotID,
                                    categoryMethod_filewrapperPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperPredefinedTypeAST_getGetterMap (defineCategoryMethod_filewrapperPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@timerPredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_timerPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2104)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("msFromStart"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2105)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2112)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isRunning"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2119)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_timerPredefinedTypeAST_getGetterMap (void) {
  enterCategoryMethod_getGetterMap (kTypeDescriptor_GALGAS_timerPredefinedTypeAST.mSlotID,
                                    categoryMethod_timerPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_timerPredefinedTypeAST_getGetterMap (defineCategoryMethod_timerPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@bigintPredefinedTypeAST getGetterMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_bigintPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GALGAS_getterMap & outArgument_outMap,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2134)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInUInt"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2135)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInSInt"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2142)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInUInt64"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2149)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInSInt64"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2156)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2163)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("spacedString"), GALGAS_string ("uint"), GALGAS_string ("inSeparation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2170)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2178)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2185)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitCountForSignedRepresentation"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2192)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitCountForUnsignedRepresentation"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2199)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2206)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2213)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2220)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2227)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("abs"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2234)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2241)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isZero"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2249)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sign"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2256)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract8ForUnsignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2263)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract8ForSignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2270)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract32ForUnsignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2277)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract32ForSignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2284)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract64ForUnsignedRepresentation"), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2291)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract64ForSignedRepresentation"), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2298)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_bigintPredefinedTypeAST_getGetterMap (void) {
  enterCategoryMethod_getGetterMap (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                    categoryMethod_bigintPredefinedTypeAST_getGetterMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bigintPredefinedTypeAST_getGetterMap (defineCategoryMethod_bigintPredefinedTypeAST_getGetterMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@stringPredefinedTypeAST getModifierMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_stringPredefinedTypeAST_getModifierMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                   GALGAS_setterMap & outArgument_outModifierMap,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outModifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 145)) ;
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inCapacity"), GALGAS_string ("setCapacity"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 146)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inAmount"), GALGAS_string ("incIndentation"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 154)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inAmount"), GALGAS_string ("decIndentation"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 162)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inColumnIndex"), GALGAS_string ("appendSpacesUntilColumn"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 170)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("setCharacterAtIndex"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 178)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_stringPredefinedTypeAST_getModifierMap (void) {
  enterCategoryMethod_getModifierMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                      categoryMethod_stringPredefinedTypeAST_getModifierMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getModifierMap (defineCategoryMethod_stringPredefinedTypeAST_getModifierMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@dataPredefinedTypeAST getModifierMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_dataPredefinedTypeAST_getModifierMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GALGAS_setterMap & outArgument_outModifierMap,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outModifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 195)) ;
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendByte"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 196)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendShortBE"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 204)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendShortLE"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 212)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendUIntBE"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 220)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendUIntLE"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 228)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inValue"), GALGAS_string ("appendUTF8String"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 236)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("data"), GALGAS_string ("inValue"), GALGAS_string ("appendData"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 244)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_dataPredefinedTypeAST_getModifierMap (void) {
  enterCategoryMethod_getModifierMap (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                      categoryMethod_dataPredefinedTypeAST_getModifierMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getModifierMap (defineCategoryMethod_dataPredefinedTypeAST_getModifierMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@filewrapperPredefinedTypeAST getModifierMap'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperPredefinedTypeAST_getModifierMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                        GALGAS_setterMap & outArgument_outModifierMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outModifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 260)) ;
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inDirectoryPath"), GALGAS_string ("setCurrentDirectory"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 261)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperPredefinedTypeAST_getModifierMap (void) {
  enterCategoryMethod_getModifierMap (kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST.mSlotID,
                                      categoryMethod_filewrapperPredefinedTypeAST_getModifierMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperPredefinedTypeAST_getModifierMap (defineCategoryMethod_filewrapperPredefinedTypeAST_getModifierMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@bigintPredefinedTypeAST getModifierMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_bigintPredefinedTypeAST_getModifierMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                   GALGAS_setterMap & outArgument_outModifierMap,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outModifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 277)) ;
  {
  routine_enterModifierWith_32_InputArguments (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), GALGAS_string ("inBit"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("setBitAtIndex"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 278)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outModifierMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("complementBitAtIndex"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 288)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_bigintPredefinedTypeAST_getModifierMap (void) {
  enterCategoryMethod_getModifierMap (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                      categoryMethod_bigintPredefinedTypeAST_getModifierMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bigintPredefinedTypeAST_getModifierMap (defineCategoryMethod_bigintPredefinedTypeAST_getModifierMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@timerPredefinedTypeAST getModifierMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_timerPredefinedTypeAST_getModifierMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                  GALGAS_setterMap & outArgument_outModifierMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outModifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 304)) ;
  {
  routine_enterModifierWithoutArgument (outArgument_outModifierMap, GALGAS_string ("stop"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 305)) ;
  }
  {
  routine_enterModifierWithoutArgument (outArgument_outModifierMap, GALGAS_string ("resume"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 310)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_timerPredefinedTypeAST_getModifierMap (void) {
  enterCategoryMethod_getModifierMap (kTypeDescriptor_GALGAS_timerPredefinedTypeAST.mSlotID,
                                      categoryMethod_timerPredefinedTypeAST_getModifierMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_timerPredefinedTypeAST_getModifierMap (defineCategoryMethod_timerPredefinedTypeAST_getModifierMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@dataPredefinedTypeAST getInstanceMethodMap'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_dataPredefinedTypeAST_getInstanceMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsInstanceMethods.galgas", 89)) ;
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 90)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 98)) ;
  }
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 106)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_t COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 108)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 109)), var_t, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 109)), GALGAS_string ("inFilePath")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 109)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_t COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 110)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 111)), var_t, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 111)), GALGAS_string ("outFileModified")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 111)) ;
  {
  outArgument_outInstanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("writeToFileWhenDifferentContents"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 113))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 113)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 114)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 116)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 118)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 112)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_dataPredefinedTypeAST_getInstanceMethodMap (void) {
  enterCategoryMethod_getInstanceMethodMap (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                            categoryMethod_dataPredefinedTypeAST_getInstanceMethodMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getInstanceMethodMap (defineCategoryMethod_dataPredefinedTypeAST_getInstanceMethodMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@stringPredefinedTypeAST getInstanceMethodMap'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_stringPredefinedTypeAST_getInstanceMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                         GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsInstanceMethods.galgas", 129)) ;
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 130)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 138)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeDirectoryAndWriteToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 146)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeDirectoryAndWriteToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 154)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeSymbolicLinkWithPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 162)) ;
  }
  {
  routine_enterInstanceMethodWithoutArgument (outArgument_outInstanceMethodMap, GALGAS_string ("makeDirectory"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 170)) ;
  }
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 176)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_t COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 177)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 178)), var_t, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 178)), GALGAS_string ("inFilePath")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 178)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_t COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 179)) ;
  }
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 180)), var_t, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 180)), GALGAS_string ("outFileModified")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 180)) ;
  {
  outArgument_outInstanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("writeToFileWhenDifferentContents"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 182))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 182)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 183)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 185)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 187)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 181)) ;
  }
  {
  outArgument_outInstanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("writeToExecutableFileWhenDifferentContents"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 191))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 191)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 192)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 194)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 196)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 190)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_stringPredefinedTypeAST_getInstanceMethodMap (void) {
  enterCategoryMethod_getInstanceMethodMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                            categoryMethod_stringPredefinedTypeAST_getInstanceMethodMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getInstanceMethodMap (defineCategoryMethod_stringPredefinedTypeAST_getInstanceMethodMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@bigintPredefinedTypeAST getInstanceMethodMap'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_bigintPredefinedTypeAST_getInstanceMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                         GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsInstanceMethods.galgas", 207)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_bigIntType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), var_bigIntType COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 209)) ;
  }
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 210)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 211)), var_bigIntType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 211)), GALGAS_string ("inDivisor")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 211)) ;
  var_argList.addAssign_operation (GALGAS_string ("quotient").getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 212)), var_bigIntType, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 212)), GALGAS_string ("outQuotient")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 212)) ;
  var_argList.addAssign_operation (GALGAS_string ("remainder").getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 213)), var_bigIntType, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 213)), GALGAS_string ("outRemainder")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 213)) ;
  {
  outArgument_outInstanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("divideBy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 215))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 215)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 216)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 218)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 220)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 214)) ;
  }
  {
  outArgument_outInstanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("floorDivideBy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 224))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 224)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 225)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 227)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 229)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 223)) ;
  }
  {
  outArgument_outInstanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("ceilDivideBy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 233))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 233)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 234)), var_argList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 236)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 238)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 232)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_bigintPredefinedTypeAST_getInstanceMethodMap (void) {
  enterCategoryMethod_getInstanceMethodMap (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                            categoryMethod_bigintPredefinedTypeAST_getInstanceMethodMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_bigintPredefinedTypeAST_getInstanceMethodMap (defineCategoryMethod_bigintPredefinedTypeAST_getInstanceMethodMap, NULL) ;

