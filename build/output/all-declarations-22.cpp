#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-22.h"


//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//           Overriding extension method '@templateFileWrapperWithStaticPathAST templateExpressionAnalysis'            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateFileWrapperWithStaticPathAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateFileWrapperWithStaticPathAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFileWrapperWithStaticPathAST.mSlotID,
                                                   extensionMethod_templateFileWrapperWithStaticPathAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateFileWrapperWithStaticPathAST_templateExpressionAnalysis (defineExtensionMethod_templateFileWrapperWithStaticPathAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//            Overriding extension method '@templateFileWrapperTemplateCallAST templateExpressionAnalysis'             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST.mSlotID,
                                                   extensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis (defineExtensionMethod_templateFileWrapperTemplateCallAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@templateAndOperationAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateAndOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateAndOperationAST * object = (const cPtr_templateAndOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateAndOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 254)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 257)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 259)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 262)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 263)).operator_and (function_infixAndOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 263)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 263)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("&"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 260)) ;
  }
  outArgument_outExpression = GALGAS_andExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 269)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateAndOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateAndOperationAST.mSlotID,
                                                   extensionMethod_templateAndOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateAndOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateAndOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@templateOrOperationAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateOrOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateOrOperationAST * object = (const cPtr_templateOrOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateOrOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 283)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 286)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 288)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 291)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 292)).operator_and (function_infixOrOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 292)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 292)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("|"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 289)) ;
  }
  outArgument_outExpression = GALGAS_orExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 298)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateOrOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateOrOperationAST.mSlotID,
                                                   extensionMethod_templateOrOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateOrOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateOrOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@templateXorOperationAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateXorOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateXorOperationAST * object = (const cPtr_templateXorOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateXorOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 312)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 315)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 317)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 320)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 321)).operator_and (function_infixXorOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 321)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 321)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("^"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 318)) ;
  }
  outArgument_outExpression = GALGAS_xorExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 327)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateXorOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateXorOperationAST.mSlotID,
                                                   extensionMethod_templateXorOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateXorOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateXorOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Overriding extension method '@templateTrueBoolAST templateExpressionAnalysis'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateTrueBoolAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                            const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateTrueBoolAST * object = (const cPtr_templateTrueBoolAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateTrueBoolAST) ;
  outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mLocation  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 339)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateTrueBoolAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateTrueBoolAST.mSlotID,
                                                   extensionMethod_templateTrueBoolAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateTrueBoolAST_templateExpressionAnalysis (defineExtensionMethod_templateTrueBoolAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@templateFalseBoolAST templateExpressionAnalysis'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateFalseBoolAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                             const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateFalseBoolAST * object = (const cPtr_templateFalseBoolAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateFalseBoolAST) ;
  outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType, object->mAttribute_mLocation  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 347)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateFalseBoolAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFalseBoolAST.mSlotID,
                                                   extensionMethod_templateFalseBoolAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateFalseBoolAST_templateExpressionAnalysis (defineExtensionMethod_templateFalseBoolAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//            Overriding extension method '@templateLiteralStringExpressionAST templateExpressionAnalysis'             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                           const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralStringExpressionAST * object = (const cPtr_templateLiteralStringExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralStringExpressionAST) ;
  GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
  cEnumerator_stringlist enumerator_17920 (object->mAttribute_mLiteralStringList, kEnumeration_up) ;
  while (enumerator_17920.hasCurrentObject ()) {
    var_s.plusAssign_operation(enumerator_17920.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 357)) ;
    enumerator_17920.gotoNextObject () ;
  }
  outArgument_outExpression = GALGAS_literalStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType, object->mAttribute_mLocation, var_s  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 359)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralStringExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//             Overriding extension method '@templateLiteralUIntExpressionAST templateExpressionAnalysis'              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralUIntExpressionAST * object = (const cPtr_templateLiteralUIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralUIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalUIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, object->mAttribute_mLiteralInt.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 369)), object->mAttribute_mLiteralInt.getter_uint (SOURCE_FILE ("templateAnalysis.galgas", 370))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 367)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralUIntExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//             Overriding extension method '@templateLiteralSIntExpressionAST templateExpressionAnalysis'              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralSIntExpressionAST * object = (const cPtr_templateLiteralSIntExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralSIntExpressionAST) ;
  outArgument_outExpression = GALGAS_literalSIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mSIntType, object->mAttribute_mLiteralInt.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 380)), object->mAttribute_mLiteralInt.getter_sint (SOURCE_FILE ("templateAnalysis.galgas", 381))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 378)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralSIntExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralSIntExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//            Overriding extension method '@templateLiteralUInt64ExpressionAST templateExpressionAnalysis'             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralUInt_36__34_ExpressionAST * object = (const cPtr_templateLiteralUInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralUInt_36__34_ExpressionAST) ;
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUInt_36__34_Type, object->mAttribute_mLiteralInt.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 391)), object->mAttribute_mLiteralInt.getter_uint_36__34_ (SOURCE_FILE ("templateAnalysis.galgas", 392))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 389)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralUInt_36__34_ExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralUInt_36__34_ExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//            Overriding extension method '@templateLiteralSInt64ExpressionAST templateExpressionAnalysis'             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralSInt_36__34_ExpressionAST * object = (const cPtr_templateLiteralSInt_36__34_ExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralSInt_36__34_ExpressionAST) ;
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mSInt_36__34_Type, object->mAttribute_mLiteralInt.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 402)), object->mAttribute_mLiteralInt.getter_sint_36__34_ (SOURCE_FILE ("templateAnalysis.galgas", 403))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 400)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralSInt_36__34_ExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralSInt_36__34_ExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//             Overriding extension method '@templateLiteralCharExpressionAST templateExpressionAnalysis'              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralCharExpressionAST * object = (const cPtr_templateLiteralCharExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralCharExpressionAST) ;
  outArgument_outExpression = GALGAS_literalCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mCharType, object->mAttribute_mLiteralChar.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 413)), object->mAttribute_mLiteralChar.getter_char (SOURCE_FILE ("templateAnalysis.galgas", 414))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 411)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralCharExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//            Overriding extension method '@templateLiteralDoubleExpressionAST templateExpressionAnalysis'             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                           const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLiteralDoubleExpressionAST * object = (const cPtr_templateLiteralDoubleExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLiteralDoubleExpressionAST) ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mDoubleType, object->mAttribute_mLiteralDouble.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 424)), object->mAttribute_mLiteralDouble.getter_double (SOURCE_FILE ("templateAnalysis.galgas", 425))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 422)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST.mSlotID,
                                                   extensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateLiteralDoubleExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//              Overriding extension method '@templateIfThenElseExpressionAST templateExpressionAnalysis'              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateIfThenElseExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                        const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateIfThenElseExpressionAST * object = (const cPtr_templateIfThenElseExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateIfThenElseExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_if_5F_expression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mIfExpression.ptr (), constinArgument_inAnalysisContext, var_if_5F_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 435)) ;
  GALGAS_semanticExpressionForGeneration var_then_5F_expression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mThenExpression.ptr (), constinArgument_inAnalysisContext, var_then_5F_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 438)) ;
  GALGAS_semanticExpressionForGeneration var_else_5F_expression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mElseExpression.ptr (), constinArgument_inAnalysisContext, var_else_5F_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 441)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateIfThenElseExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateIfThenElseExpressionAST.mSlotID,
                                                   extensionMethod_templateIfThenElseExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateIfThenElseExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateIfThenElseExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@templateNotOperatorAST templateExpressionAnalysis'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateNotOperatorAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateNotOperatorAST * object = (const cPtr_templateNotOperatorAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateNotOperatorAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 469)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = var_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 471)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 472)).operator_and (function_prefixNotOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 472)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 472)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 474)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 474))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 473)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 478)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateNotOperatorAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateNotOperatorAST.mSlotID,
                                                   extensionMethod_templateNotOperatorAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateNotOperatorAST_templateExpressionAnalysis (defineExtensionMethod_templateNotOperatorAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@templateLogicalNegateAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLogicalNegateAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLogicalNegateAST * object = (const cPtr_templateLogicalNegateAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLogicalNegateAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 492)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = var_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 494)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 495)).operator_and (function_prefixTildeOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 495)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 495)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 497)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 497))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 496)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 501)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLogicalNegateAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLogicalNegateAST.mSlotID,
                                                   extensionMethod_templateLogicalNegateAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLogicalNegateAST_templateExpressionAnalysis (defineExtensionMethod_templateLogicalNegateAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@templateOptionAccessAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateOptionAccessAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
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
    cEnumerator_commandLineOptionMap enumerator_26910 (var_boolOptionMap, kEnumeration_up) ;
    while (enumerator_26910.hasCurrentObject ()) {
      var_s.plusAssign_operation(GALGAS_string ("\n"
        "-  '").add_operation (enumerator_26910.current_lkey (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 575)).add_operation (GALGAS_string ("' @bool option;"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 575)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 575)) ;
      enumerator_26910.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_26996 (var_uintOptionMap, kEnumeration_up) ;
    while (enumerator_26996.hasCurrentObject ()) {
      var_s.plusAssign_operation(GALGAS_string ("\n"
        "-  '").add_operation (enumerator_26996.current_lkey (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 578)).add_operation (GALGAS_string ("' @uint option;"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 578)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 578)) ;
      enumerator_26996.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_27084 (var_stringOptionMap, kEnumeration_up) ;
    while (enumerator_27084.hasCurrentObject ()) {
      var_s.plusAssign_operation(GALGAS_string ("\n"
        "-  '").add_operation (enumerator_27084.current_lkey (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 581)).add_operation (GALGAS_string ("' @string option;"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 581)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 581)) ;
      enumerator_27084.gotoNextObject () ;
    }
    GALGAS_location location_9 (object->mAttribute_mOptionName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_9, GALGAS_string ("the '").add_operation (object->mAttribute_mOptionComponentName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 584)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 584)).add_operation (object->mAttribute_mOptionName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 584)).add_operation (GALGAS_string ("' option; available options:"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 584)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 584))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 583)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateOptionAccessAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateOptionAccessAST.mSlotID,
                                                   extensionMethod_templateOptionAccessAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateOptionAccessAST_templateExpressionAnalysis (defineExtensionMethod_templateOptionAccessAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@templateFunctionCallAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateFunctionCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
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
    cEnumerator_functionSignature enumerator_28951 (var_functionSignature, kEnumeration_up) ;
    cEnumerator_templateExpressionListAST enumerator_28974 (object->mAttribute_mExpressionList, kEnumeration_up) ;
    while (enumerator_28951.hasCurrentObject () && enumerator_28974.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression ;
      callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_28974.current_mExpression (HERE).ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 620)) ;
      {
      routine_checkAssignmentTypes (enumerator_28951.current_mFormalArgumentType (HERE), var_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 621)), enumerator_28974.current_mEndOfExpressionLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 621)) ;
      }
      var_semanticExpressionListForGeneration.addAssign_operation (var_expression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 622)) ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_28951.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_28974.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_28951.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = enumerator_28951.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 624)) ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_8 (enumerator_28974.current_mActualSelector (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_8, GALGAS_string ("the selector should be '!").add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 624)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 624))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 624)) ;
      }
      enumerator_28951.gotoNextObject () ;
      enumerator_28974.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType, object->mAttribute_mFunctionName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 629)), object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 630)), var_semanticExpressionListForGeneration  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 627)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateFunctionCallAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateFunctionCallAST.mSlotID,
                                                   extensionMethod_templateFunctionCallAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateFunctionCallAST_templateExpressionAnalysis (defineExtensionMethod_templateFunctionCallAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//             Overriding extension method '@templateExtensionTemplateCallAST templateExpressionAnalysis'              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                         const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateExtensionTemplateCallAST * object = (const cPtr_templateExtensionTemplateCallAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateExtensionTemplateCallAST) ;
  GALGAS_location location_0 (object->mAttribute_mTemplateName.getter_location (HERE)) ; // Implicit use of 'location' getter
  inCompiler->emitSemanticError (location_0, GALGAS_string ("INTERNAL ERROR: @templateExtensionTemplateCallAST templateExpressionAnalysis not implemented yet")  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 642)) ;
  outArgument_outExpression.drop () ; // Release error dropped variable
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST.mSlotID,
                                                   extensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis (defineExtensionMethod_templateExtensionTemplateCallAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension method '@templateVarInExpressionAST templateExpressionAnalysis'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateVarInExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateVarInExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateVarInExpressionAST.mSlotID,
                                                   extensionMethod_templateVarInExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateVarInExpressionAST_templateExpressionAnalysis (defineExtensionMethod_templateVarInExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@templateAddOperationAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateAddOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateAddOperationAST * object = (const cPtr_templateAddOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateAddOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 673)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 676)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 678)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 681)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 682)).operator_and (function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 682)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 682)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("+"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 679)) ;
  }
  outArgument_outExpression = GALGAS_addExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 688)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateAddOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateAddOperationAST.mSlotID,
                                                   extensionMethod_templateAddOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateAddOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateAddOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@templateSubOperationAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateSubOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateSubOperationAST * object = (const cPtr_templateSubOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateSubOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 704)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 707)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 709)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 712)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 713)).operator_and (function_infixSubOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 713)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 713)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("-"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 710)) ;
  }
  outArgument_outExpression = GALGAS_subExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 719)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateSubOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateSubOperationAST.mSlotID,
                                                   extensionMethod_templateSubOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateSubOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateSubOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension method '@templateMultiplyOperationAST templateExpressionAnalysis'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateMultiplyOperationAST * object = (const cPtr_templateMultiplyOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateMultiplyOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 735)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 738)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 740)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 743)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 744)).operator_and (function_infixMulOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 744)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 744)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("*"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 741)) ;
  }
  outArgument_outExpression = GALGAS_multiplicationExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 750)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateMultiplyOperationAST.mSlotID,
                                                   extensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateMultiplyOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateMultiplyOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension method '@templateDivideOperationAST templateExpressionAnalysis'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateDivideOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateDivideOperationAST * object = (const cPtr_templateDivideOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateDivideOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 766)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 769)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 771)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 774)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 775)).operator_and (function_infixDivOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 775)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 775)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("/"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 772)) ;
  }
  outArgument_outExpression = GALGAS_divisionExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 781)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateDivideOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateDivideOperationAST.mSlotID,
                                                   extensionMethod_templateDivideOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateDivideOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateDivideOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension method '@templateModuloOperationAST templateExpressionAnalysis'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateModuloOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                   const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateModuloOperationAST * object = (const cPtr_templateModuloOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateModuloOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 797)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 800)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType = var_leftExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 802)) ;
  {
  routine_checkDiadicOperator (var_leftType, var_rightExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 805)), GALGAS_bool (kIsNotEqual, var_leftType.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 806)).operator_and (function_infixModOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 806)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 806)).objectCompare (GALGAS_uint ((uint32_t) 0U))), GALGAS_string ("mod"), object->mAttribute_mOperatorLocation, var_rightExpression, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 803)) ;
  }
  outArgument_outExpression = GALGAS_moduloExpressionForGeneration::constructor_new (var_leftType, object->mAttribute_mOperatorLocation, var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 812)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateModuloOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateModuloOperationAST.mSlotID,
                                                   extensionMethod_templateModuloOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateModuloOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateModuloOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//              Overriding extension method '@templateUnaryMinusOperationAST templateExpressionAnalysis'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateUnaryMinusOperationAST * object = (const cPtr_templateUnaryMinusOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateUnaryMinusOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 828)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = var_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 830)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_type.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 831)).operator_and (function_prefixMinusOperator (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 831)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 831)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type.getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 833)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 833)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 833))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 832)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type, object->mAttribute_mOperatorLocation, var_expression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 837)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateUnaryMinusOperationAST.mSlotID,
                                                   extensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateUnaryMinusOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//          Overriding extension method '@structFieldAccessTemplateExpressionAST templateExpressionAnalysis'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                               const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structFieldAccessTemplateExpressionAST * object = (const cPtr_structFieldAccessTemplateExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structFieldAccessTemplateExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 852)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST.mSlotID,
                                                   extensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis (defineExtensionMethod_structFieldAccessTemplateExpressionAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@templateEqualTestAST templateExpressionAnalysis'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                             const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateEqualTestAST * object = (const cPtr_templateEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 884)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 887)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateEqualTestAST.mSlotID,
                                                   extensionMethod_templateEqualTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateEqualTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@templateNonEqualTestAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateNonEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateNonEqualTestAST * object = (const cPtr_templateNonEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateNonEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 912)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 915)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateNonEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateNonEqualTestAST.mSlotID,
                                                   extensionMethod_templateNonEqualTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateNonEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateNonEqualTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@templateStrictInfTestAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateStrictInfTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateStrictInfTestAST * object = (const cPtr_templateStrictInfTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateStrictInfTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 940)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 943)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateStrictInfTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateStrictInfTestAST.mSlotID,
                                                   extensionMethod_templateStrictInfTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateStrictInfTestAST_templateExpressionAnalysis (defineExtensionMethod_templateStrictInfTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@templateInfOrEqualTestAST templateExpressionAnalysis'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInfOrEqualTestAST * object = (const cPtr_templateInfOrEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInfOrEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 972)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 975)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateInfOrEqualTestAST.mSlotID,
                                                   extensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInfOrEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateInfOrEqualTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@templateStrictSupTestAST templateExpressionAnalysis'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateStrictSupTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                 const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateStrictSupTestAST * object = (const cPtr_templateStrictSupTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateStrictSupTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1004)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1007)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateStrictSupTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateStrictSupTestAST.mSlotID,
                                                   extensionMethod_templateStrictSupTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateStrictSupTestAST_templateExpressionAnalysis (defineExtensionMethod_templateStrictSupTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@templateSupOrEqualTestAST templateExpressionAnalysis'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateSupOrEqualTestAST * object = (const cPtr_templateSupOrEqualTestAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateSupOrEqualTestAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1036)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1039)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateSupOrEqualTestAST.mSlotID,
                                                   extensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateSupOrEqualTestAST_templateExpressionAnalysis (defineExtensionMethod_templateSupOrEqualTestAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension method '@templateLeftShiftOperationAST templateExpressionAnalysis'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateLeftShiftOperationAST * object = (const cPtr_templateLeftShiftOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateLeftShiftOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1068)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1071)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateLeftShiftOperationAST.mSlotID,
                                                   extensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateLeftShiftOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateLeftShiftOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//              Overriding extension method '@templateRightShiftOperationAST templateExpressionAnalysis'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateRightShiftOperationAST * object = (const cPtr_templateRightShiftOperationAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateRightShiftOperationAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inAnalysisContext, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1100)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mRightExpression.ptr (), constinArgument_inAnalysisContext, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1103)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateRightShiftOperationAST.mSlotID,
                                                   extensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateRightShiftOperationAST_templateExpressionAnalysis (defineExtensionMethod_templateRightShiftOperationAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension method '@templateClassToTypeOperandAST templateExpressionAnalysis'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateClassToTypeOperandAST_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateClassToTypeOperandAST * object = (const cPtr_templateClassToTypeOperandAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateClassToTypeOperandAST) ;
  GALGAS_bool joker_52312_26 ; // Joker input parameter
  GALGAS_bool joker_52312_25 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_52312_24 ; // Joker input parameter
  GALGAS_typeKindEnum joker_52312_23 ; // Joker input parameter
  GALGAS_bool joker_52312_22 ; // Joker input parameter
  GALGAS_typedPropertyList joker_52312_21 ; // Joker input parameter
  GALGAS_attributeMap joker_52312_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_52312_19 ; // Joker input parameter
  GALGAS_constructorMap joker_52312_18 ; // Joker input parameter
  GALGAS_getterMap joker_52312_17 ; // Joker input parameter
  GALGAS_setterMap joker_52312_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_52312_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_52312_14 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_52312_13 ; // Joker input parameter
  GALGAS_stringlist joker_52312_12 ; // Joker input parameter
  GALGAS_uint joker_52312_11 ; // Joker input parameter
  GALGAS_functionSignature joker_52312_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_52312_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_52312_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_52312_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_52312_6 ; // Joker input parameter
  GALGAS_bool joker_52312_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_52312_4 ; // Joker input parameter
  GALGAS_string joker_52312_3 ; // Joker input parameter
  GALGAS_string joker_52312_2 ; // Joker input parameter
  GALGAS_headerKind joker_52312_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mTypeName, joker_52312_26, joker_52312_25, joker_52312_24, joker_52312_23, joker_52312_22, joker_52312_21, joker_52312_20, joker_52312_19, joker_52312_18, joker_52312_17, joker_52312_16, joker_52312_15, joker_52312_14, joker_52312_13, joker_52312_12, joker_52312_11, joker_52312_10, joker_52312_9, joker_52312_8, joker_52312_7, joker_52312_6, joker_52312_5, joker_52312_4, joker_52312_3, joker_52312_2, joker_52312_1, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1131)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("type"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1134))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1134)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1134)), object->mAttribute_mTypeName.getter_location (SOURCE_FILE ("templateAnalysis.galgas", 1135)), object->mAttribute_mTypeName.getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1136))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1133)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateClassToTypeOperandAST_templateExpressionAnalysis (void) {
  enterExtensionMethod_templateExpressionAnalysis (kTypeDescriptor_GALGAS_templateClassToTypeOperandAST.mSlotID,
                                                   extensionMethod_templateClassToTypeOperandAST_templateExpressionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateClassToTypeOperandAST_templateExpressionAnalysis (defineExtensionMethod_templateClassToTypeOperandAST_templateExpressionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension method '@templateInstructionStringAST templateInstructionAnalysis'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionStringAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                      const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                      GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionStringAST * object = (const cPtr_templateInstructionStringAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionStringAST) ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionStringForGeneration::constructor_new (object->mAttribute_mTemplateString  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1165))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1165)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionStringAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionStringAST.mSlotID,
                                                    extensionMethod_templateInstructionStringAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionStringAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionStringAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//             Overriding extension method '@templateInstructionExpressionAST templateInstructionAnalysis'             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                          const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionExpressionAST * object = (const cPtr_templateInstructionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1174)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1175)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1175)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("expression type should be '@string' (it is '@").add_operation (var_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1176)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1176)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1176)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1176))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1176)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionExpressionForGeneration::constructor_new (var_expression  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1178))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1178)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionExpressionAST.mSlotID,
                                                    extensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionExpressionAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionExpressionAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension method '@templateBlockInstructionAST templateInstructionAnalysis'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateBlockInstructionAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                     const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                     GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateBlockInstructionAST * object = (const cPtr_templateBlockInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateBlockInstructionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1187)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateBlockInstructionAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateBlockInstructionAST.mSlotID,
                                                    extensionMethod_templateBlockInstructionAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateBlockInstructionAST_templateInstructionAnalysis (defineExtensionMethod_templateBlockInstructionAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//         Overriding extension method '@templateInstructionGetColumnLocationAST templateInstructionAnalysis'          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * /* inObject */,
                                                                                                 const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                                 GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGetColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1201))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1201)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationAST.mSlotID,
                                                    extensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionGetColumnLocationAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//         Overriding extension method '@templateInstructionGotoColumnLocationAST templateInstructionAnalysis'         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * /* inObject */,
                                                                                                  const GALGAS_templateAnalysisContext /* constinArgument_inAnalysisContext */,
                                                                                                  GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionGotoColumnLocationForGeneration::constructor_new (SOURCE_FILE ("templateAnalysis.galgas", 1209))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1209)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationAST.mSlotID,
                                                    extensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionGotoColumnLocationAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//              Overriding extension method '@templateInstructionForeachAST templateInstructionAnalysis'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionForeachAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                       const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionForeachAST * object = (const cPtr_templateInstructionForeachAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionForeachAST) ;
  GALGAS_semanticExpressionForGeneration var_expression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mExpression.ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1219)) ;
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
    var_doVariableMap.setter_insertKey (object->mAttribute_mIndexIdentifier, constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType, var_cppIndexVarName, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1233)) ;
    }
  }
  cEnumerator_enumerationDescriptorList enumerator_58162 (var_enumerationDescriptor, kEnumeration_up) ;
  while (enumerator_58162.hasCurrentObject ()) {
    {
    var_doVariableMap.setter_insertKey (GALGAS_lstring::constructor_new (object->mAttribute_mPrefix.add_operation (enumerator_58162.current_mEnumerationName (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1237)), var_expression.getter_mLocation (SOURCE_FILE ("templateAnalysis.galgas", 1237))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1237)), enumerator_58162.current_mEnumeratedType (HERE), var_enumeratorCppName.add_operation (GALGAS_string (".current_"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1239)).add_operation (enumerator_58162.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("templateAnalysis.galgas", 1239)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1239)).add_operation (GALGAS_string (" (HERE)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1239)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1236)) ;
    }
    enumerator_58162.gotoNextObject () ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionForeachAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionForeachAST.mSlotID,
                                                    extensionMethod_templateInstructionForeachAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionForeachAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionForeachAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@templateInstructionIfAST templateInstructionAnalysis'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionIfAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                  const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionIfAST * object = (const cPtr_templateInstructionIfAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionIfAST) ;
  GALGAS_templateInstructionIfBranchListForGeneration var_templateInstructionIfBranchList = GALGAS_templateInstructionIfBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1271)) ;
  cEnumerator_templateInstructionIfBranchListAST enumerator_59856 (object->mAttribute_mTemplateInstructionIfBranchList, kEnumeration_up) ;
  while (enumerator_59856.hasCurrentObject ()) {
    GALGAS_semanticExpressionForGeneration var_expression ;
    callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) enumerator_59856.current_mExpression (HERE).ptr (), constinArgument_inAnalysisContext, var_expression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1274)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1275)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1275)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      inCompiler->emitSemanticError (var_expression.getter_mLocation (SOURCE_FILE ("templateAnalysis.galgas", 1276)), GALGAS_string ("'if' expression type should be '@bool' (it is '@").add_operation (var_expression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1276)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1276)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1276)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1276))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1276)) ;
    }
    GALGAS_templateInstructionListForGeneration var_instructionList = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1278)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, enumerator_59856.current_mInstructionList (HERE), var_instructionList, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1279)) ;
    }
    var_templateInstructionIfBranchList.addAssign_operation (var_expression, var_instructionList  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1280)) ;
    enumerator_59856.gotoNextObject () ;
  }
  GALGAS_templateInstructionListForGeneration var_elseInstructionList = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1283)) ;
  {
  routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, object->mAttribute_mElseInstructionList, var_elseInstructionList, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1284)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionIfForGeneration::constructor_new (var_templateInstructionIfBranchList, var_elseInstructionList  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1286))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1286)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionIfAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionIfAST.mSlotID,
                                                    extensionMethod_templateInstructionIfAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionIfAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionIfAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension method '@templateInstructionSwitchAST templateInstructionAnalysis'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                                                      const GALGAS_templateAnalysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_templateInstructionListForGeneration & ioArgument_ioInstructionList,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_templateInstructionSwitchAST * object = (const cPtr_templateInstructionSwitchAST *) inObject ;
  macroValidSharedObject (object, cPtr_templateInstructionSwitchAST) ;
  GALGAS_semanticExpressionForGeneration var_switchExpression ;
  callExtensionMethod_templateExpressionAnalysis ((const cPtr_templateExpressionAST *) object->mAttribute_mSwitchExpression.ptr (), constinArgument_inAnalysisContext, var_switchExpression, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1298)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_switchExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1299)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1299)).objectCompare (GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("templateAnalysis.galgas", 1299)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_switchExpression.getter_mLocation (SOURCE_FILE ("templateAnalysis.galgas", 1300)), GALGAS_string ("'switch' expression type should be an enumeration (it is a ").add_operation (extensionGetter_kind (var_switchExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1300)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1300)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1300)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1300)).add_operation (GALGAS_string (" type)"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1300))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1300)) ;
  }
  GALGAS_constantIndexMap var_enumConstantMap = var_switchExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1302)).getter_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1302)) ;
  GALGAS_templateInstructionSwitchBranchListForGeneration var_templateInstructionSwitchBranchList = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1304)) ;
  GALGAS_stringset var_namedConstantSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("templateAnalysis.galgas", 1305)) ;
  cEnumerator_templateInstructionSwitchBranchListAST enumerator_61726 (object->mAttribute_mTemplateInstructionSwitchBranchList, kEnumeration_up) ;
  while (enumerator_61726.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_61757 (enumerator_61726.current_mConstantList (HERE), kEnumeration_up) ;
    while (enumerator_61757.hasCurrentObject ()) {
      const enumGalgasBool test_1 = var_enumConstantMap.getter_hasKey (enumerator_61757.current_mValue (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1308)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1308)).operator_not (SOURCE_FILE ("templateAnalysis.galgas", 1308)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_61757.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("the '").add_operation (enumerator_61757.current_mValue (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1309)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1309)).add_operation (GALGAS_string ("' is not a contant of '@"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1309)).add_operation (var_switchExpression.getter_mResultType (SOURCE_FILE ("templateAnalysis.galgas", 1309)).getter_key (inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1309)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1309)).add_operation (GALGAS_string ("' enumeration type"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1309))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1309)) ;
      }
      const enumGalgasBool test_3 = var_namedConstantSet.getter_hasKey (enumerator_61757.current_mValue (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1311)) COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1311)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (enumerator_61757.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the '").add_operation (enumerator_61757.current_mValue (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1312)), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1312)).add_operation (GALGAS_string ("' constant is already named in the switch instruction"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1312))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1312)) ;
      }
      var_namedConstantSet.addAssign_operation (enumerator_61757.current_mValue (HERE).getter_string (SOURCE_FILE ("templateAnalysis.galgas", 1314))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1314)) ;
      enumerator_61757.gotoNextObject () ;
    }
    GALGAS_templateInstructionListForGeneration var_instructionList = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("templateAnalysis.galgas", 1316)) ;
    {
    routine_templateInstructionListAnalysis (constinArgument_inAnalysisContext, enumerator_61726.current_mInstructionList (HERE), var_instructionList, inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1317)) ;
    }
    var_templateInstructionSwitchBranchList.addAssign_operation (enumerator_61726.current_mConstantList (HERE), var_instructionList  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1318)) ;
    enumerator_61726.gotoNextObject () ;
  }
  GALGAS_stringset var_missingConstants = var_enumConstantMap.getter_keySet (SOURCE_FILE ("templateAnalysis.galgas", 1321)).substract_operation (var_namedConstantSet, inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1321)) ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_missingConstants.getter_count (SOURCE_FILE ("templateAnalysis.galgas", 1322)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_string var_m = GALGAS_string ("all constants should be named in a switch instruction; the following constants are missing:") ;
    cEnumerator_stringset enumerator_62719 (var_missingConstants, kEnumeration_up) ;
    while (enumerator_62719.hasCurrentObject ()) {
      var_m.plusAssign_operation(GALGAS_string ("\n"
        "  - '").add_operation (enumerator_62719.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1325)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1325)), inCompiler  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1325)) ;
      enumerator_62719.gotoNextObject () ;
    }
    inCompiler->emitSemanticError (object->mAttribute_mSwitchExpressionEndLocation, var_m  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1327)) ;
  }
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_templateInstructionSwitchForGeneration::constructor_new (var_switchExpression, var_templateInstructionSwitchBranchList  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1330))  COMMA_SOURCE_FILE ("templateAnalysis.galgas", 1330)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis (void) {
  enterExtensionMethod_templateInstructionAnalysis (kTypeDescriptor_GALGAS_templateInstructionSwitchAST.mSlotID,
                                                    extensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionSwitchAST_templateInstructionAnalysis (defineExtensionMethod_templateInstructionSwitchAST_templateInstructionAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//            Overriding extension method '@templateInstructionStringForGeneration templateCodeGeneration'             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result << ").add_operation (object->mAttribute_mTemplateString.getter_utf_38_Representation (SOURCE_FILE ("templateCodeGeneration.galgas", 54)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 54)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionStringForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionStringForGeneration.mSlotID,
                                               extensionMethod_templateInstructionStringForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionStringForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionStringForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//          Overriding extension method '@templateInstructionExpressionForGeneration templateCodeGeneration'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_string var_cppName ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 67)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("result << ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 68)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 68)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration.mSlotID,
                                               extensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionExpressionForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionExpressionForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//             Overriding extension method '@templateBlockInstructionForGeneration templateCodeGeneration'             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_string var_indendationVarCppName ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_indendationVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 81)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 82)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation ((int32_t) ").add_operation (var_indendationVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 83)).add_operation (GALGAS_string (".uintValue ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 83)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 84)) ;
  {
  routine_templateCodeGenerationForListInstruction (object->mAttribute_mBlockInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 85)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_indendationVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 93)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  result.incIndentation (- ((int32_t) ").add_operation (var_indendationVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 94)).add_operation (GALGAS_string (".uintValue ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 94)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 95)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration.mSlotID,
                                               extensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateBlockInstructionForGeneration_templateCodeGeneration (defineExtensionMethod_templateBlockInstructionForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//       Overriding extension method '@templateInstructionGetColumnLocationForGeneration templateCodeGeneration'       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionGetColumnLocationForGeneration.mSlotID,
                                               extensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionGetColumnLocationForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//      Overriding extension method '@templateInstructionGotoColumnLocationForGeneration templateCodeGeneration'       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionGotoColumnLocationForGeneration.mSlotID,
                                               extensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionGotoColumnLocationForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//            Overriding extension method '@templateInstructionForeachForGeneration templateCodeGeneration'            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_string var_foreachVarCppName ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_foreachVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 132)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mIndexCppName.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 134)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_uint ").add_operation (object->mAttribute_mIndexCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)).add_operation (GALGAS_string (" (0) ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 135)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (var_foreachVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 138)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 138)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 138)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 139)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = object->mAttribute_mIsAscending.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string ("kEnumeration_up") ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_string ("kEnumeration_down") ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("cEnumerator_").add_operation (object->mAttribute_mExpression.getter_mResultType (SOURCE_FILE ("templateCodeGeneration.galgas", 140)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (var_foreachVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 140)) ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBeforeInstructionList.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 143)).add_operation (object->mAttribute_mAfterInstructionList.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 143)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const bool nonEmpty_").add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)).add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)).add_operation (GALGAS_string (".hasCurrentObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 144)) ;
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBeforeInstructionList.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 146)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 147)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 147)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 148)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (object->mAttribute_mBeforeInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 149)) ;
    }
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 157)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 158)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("while (").add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 160)).add_operation (GALGAS_string (".hasCurrentObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 160)) ;
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 161)) ;
  }
  {
  routine_templateCodeGenerationForListInstruction (object->mAttribute_mDoInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 163)) ;
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBetweenInstructionList.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 172)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (").add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 173)).add_operation (GALGAS_string (".hasNextObject ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 173)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 174)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (object->mAttribute_mBetweenInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 175)) ;
    }
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 183)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 184)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, object->mAttribute_mIndexCppName.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 187)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    ioArgument_ioGeneratedCode.plusAssign_operation(object->mAttribute_mIndexCppName.add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 188)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(object->mAttribute_mEnumeratorCppName.add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 191)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 191)) ;
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 192)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 193)) ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, object->mAttribute_mAfterInstructionList.getter_length (SOURCE_FILE ("templateCodeGeneration.galgas", 195)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_7) {
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (nonEmpty_").add_operation (object->mAttribute_mEnumeratorCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 196)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 196)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 196)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 197)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (object->mAttribute_mAfterInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 198)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration.mSlotID,
                                               extensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionForeachForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionForeachForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//              Overriding extension method '@templateInstructionIfForGeneration templateCodeGeneration'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_9835 (object->mAttribute_mTemplateInstructionIfBranchList, kEnumeration_up) ;
  while (enumerator_9835.hasCurrentObject ()) {
    GALGAS_string var_ifVarCppName ;
    callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_9835.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 225)) ;
    GALGAS_string var_testVar = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("templateCodeGeneration.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 226)) ;
    ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 226)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)).add_operation (var_ifVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 227)) ;
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 228)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 228)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 228)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 229)) ;
    }
    {
    routine_templateCodeGenerationForListInstruction (enumerator_9835.current_mInstructionList (HERE), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 230)) ;
    }
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 238)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 239)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 239)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 240)) ;
    }
    enumerator_9835.gotoNextObject () ;
  }
  {
  routine_templateCodeGenerationForListInstruction (object->mAttribute_mElseInstructionList, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioUseColumnMarker, inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 243)) ;
  }
  cEnumerator_templateInstructionIfBranchListForGeneration enumerator_10982 (object->mAttribute_mTemplateInstructionIfBranchList, kEnumeration_up) ;
  while (enumerator_10982.hasCurrentObject ()) {
    {
    ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 252)) ;
    }
    ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 253)) ;
    enumerator_10982.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionIfForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionIfForGeneration.mSlotID,
                                               extensionMethod_templateInstructionIfForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionIfForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionIfForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//            Overriding extension method '@templateInstructionSwitchForGeneration templateCodeGeneration'             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_string var_switchVarCppName ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSwitchExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 267)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("switch (").add_operation (var_switchVarCppName, inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 269)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 269)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.getter_mResultType (SOURCE_FILE ("templateCodeGeneration.galgas", 270)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 270)).add_operation (GALGAS_string ("::kNotBuilt :\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 270)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 270)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("  break ;\n"), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 271)) ;
  cEnumerator_templateInstructionSwitchBranchListForGeneration enumerator_11909 (object->mAttribute_mTemplateInstructionSwitchBranchList, kEnumeration_up) ;
  while (enumerator_11909.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_11940 (enumerator_11909.current_mConstantList (HERE), kEnumeration_up) ;
    while (enumerator_11940.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.getter_mResultType (SOURCE_FILE ("templateCodeGeneration.galgas", 275)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)).add_operation (enumerator_11940.current_mValue (HERE).getter_string (SOURCE_FILE ("templateCodeGeneration.galgas", 275)).getter_identifierRepresentation (SOURCE_FILE ("templateCodeGeneration.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)).add_operation (GALGAS_string (" :\n"), inCompiler COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)), inCompiler  COMMA_SOURCE_FILE ("templateCodeGeneration.galgas", 275)) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (void) {
  enterExtensionMethod_templateCodeGeneration (kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration.mSlotID,
                                               extensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionSwitchForGeneration_templateCodeGeneration (defineExtensionMethod_templateInstructionSwitchForGeneration_templateCodeGeneration, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension getter '@lexicalOrExpressionAST generateConditionCode'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalOrExpressionAST_generateConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                   GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalOrExpressionAST * object = (const cPtr_lexicalOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalOrExpressionAST) ;
  result_outGeneratedCode = callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLeftOperand.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 29)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 30)) ;
  result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mRightOperand.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 31)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalOrExpressionAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalOrExpressionAST.mSlotID,
                                              extensionGetter_lexicalOrExpressionAST_generateConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalOrExpressionAST_generateConditionCode (defineExtensionGetter_lexicalOrExpressionAST_generateConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension getter '@lexicalCharacterIntervalMatchAST generateConditionCode'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST.mSlotID,
                                              extensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalCharacterIntervalMatchAST_generateConditionCode (defineExtensionGetter_lexicalCharacterIntervalMatchAST_generateConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension getter '@lexicalStringMatchAST generateConditionCode'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalStringMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalStringMatchAST.mSlotID,
                                              extensionGetter_lexicalStringMatchAST_generateConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalStringMatchAST_generateConditionCode (defineExtensionGetter_lexicalStringMatchAST_generateConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Overriding extension getter '@lexicalStringNotMatchAST generateConditionCode'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalStringNotMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalStringNotMatchAST.mSlotID,
                                              extensionGetter_lexicalStringNotMatchAST_generateConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalStringNotMatchAST_generateConditionCode (defineExtensionGetter_lexicalStringNotMatchAST_generateConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Overriding extension getter '@lexicalCharacterMatchAST generateConditionCode'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalCharacterMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterMatchAST.mSlotID,
                                              extensionGetter_lexicalCharacterMatchAST_generateConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalCharacterMatchAST_generateConditionCode (defineExtensionGetter_lexicalCharacterMatchAST_generateConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension getter '@lexicalCharacterSetMatchAST generateConditionCode'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalCharacterSetMatchAST_generateConditionCode (void) {
  enterExtensionGetter_generateConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST.mSlotID,
                                              extensionGetter_lexicalCharacterSetMatchAST_generateConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalCharacterSetMatchAST_generateConditionCode (defineExtensionGetter_lexicalCharacterSetMatchAST_generateConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//          Overriding extension getter '@lexicalAttributeInputArgumentAST generateRoutineOrFunctionArgument'          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalAttributeInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//          Overriding extension getter '@lexicalCharacterInputArgumentAST generateRoutineOrFunctionArgument'          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalCharacterInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//          Overriding extension getter '@lexicalUnsignedInputArgumentAST generateRoutineOrFunctionArgument'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalUnsignedInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//      Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateRoutineOrFunctionArgument'       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * /* inObject */,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("previousChar ()") ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalCurrentCharacterInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//          Overriding extension getter '@lexicalFunctionInputArgumentAST generateRoutineOrFunctionArgument'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("::scanner_function_").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("lexiqueGeneration.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 132)).add_operation (GALGAS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 132)) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_7662 (object->mAttribute_mFunctionActualArgumentList, kEnumeration_up) ;
  while (enumerator_7662.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_7662.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 134)) ;
    enumerator_7662.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 136)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                          extensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument (defineExtensionGetter_lexicalFunctionInputArgumentAST_generateRoutineOrFunctionArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//            Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateRoutineArgument'            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument (void) {
  enterExtensionGetter_generateRoutineArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST.mSlotID,
                                                extensionGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument (defineExtensionGetter_lexicalAttributeInputOutputArgumentAST_generateRoutineArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension getter '@lexicalFormalInputArgumentAST generateRoutineArgument'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFormalInputArgumentAST * object = (const cPtr_lexicalFormalInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFormalInputArgumentAST) ;
  result_outGeneratedCode = callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) object->mAttribute_mRoutineOrFunctionFormalInputArgument.ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 157)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument (void) {
  enterExtensionGetter_generateRoutineArgument (kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST.mSlotID,
                                                extensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFormalInputArgumentAST_generateRoutineArgument (defineExtensionGetter_lexicalFormalInputArgumentAST_generateRoutineArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension getter '@lexicalSendTerminalByDefaultAST generateDefaultSendCode'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode (void) {
  enterExtensionGetter_generateDefaultSendCode (kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST.mSlotID,
                                                extensionGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode (defineExtensionGetter_lexicalSendTerminalByDefaultAST_generateDefaultSendCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension getter '@lexicalErrorByDefaultAST generateDefaultSendCode'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalErrorByDefaultAST_generateDefaultSendCode (void) {
  enterExtensionGetter_generateDefaultSendCode (kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST.mSlotID,
                                                extensionGetter_lexicalErrorByDefaultAST_generateDefaultSendCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalErrorByDefaultAST_generateDefaultSendCode (defineExtensionGetter_lexicalErrorByDefaultAST_generateDefaultSendCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//             Overriding extension getter '@lexicalStructuredSendInstructionAST generateInstructionCode'              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (callExtensionGetter_generateDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) object->mAttribute_mLexicalSendDefaultAction.ptr (), inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 206)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 206)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 207)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 208)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalStructuredSendInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST.mSlotID,
                                                extensionGetter_lexicalStructuredSendInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalStructuredSendInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalStructuredSendInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension getter '@lexicalDropInstructionAST generateInstructionCode'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalDropInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalDropInstructionAST.mSlotID,
                                                extensionGetter_lexicalDropInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalDropInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalDropInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension getter '@lexicalSimpleSendInstructionAST generateInstructionCode'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalSimpleSendInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST.mSlotID,
                                                extensionGetter_lexicalSimpleSendInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalSimpleSendInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalSimpleSendInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension getter '@lexicalRepeatInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 239)) ;
  }
  cEnumerator_lexicalInstructionListAST enumerator_12946 (object->mAttribute_mRepeatedInstructionList, kEnumeration_up) ;
  while (enumerator_12946.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_12946.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 242)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 242)) ;
    enumerator_12946.gotoNextObject () ;
  }
  cEnumerator_lexicalWhileBranchListAST enumerator_13105 (object->mAttribute_mLexicalWhileBranchList, kEnumeration_up) ;
  while (enumerator_13105.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 247)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_13105.current_mWhileExpression (HERE).ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 248)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 249)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 250)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_13351 (enumerator_13105.current_mWhileInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_13351.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_13351.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 252)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 252)) ;
      enumerator_13351.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 254)) ;
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
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 261)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}while (mLoop) ;\n"
    "mLoop = true ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 262)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalRepeatInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST.mSlotID,
                                                extensionGetter_lexicalRepeatInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalRepeatInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalRepeatInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension getter '@lexicalSelectInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_14169.current_mSelectExpression (HERE).ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 277)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 277)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 278)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 279)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_14417 (enumerator_14169.current_mSelectInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_14417.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_14417.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 281)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 281)) ;
      enumerator_14417.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 283)) ;
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
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 290)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_14814 (object->mAttribute_mDefaultInstructionList, kEnumeration_up) ;
    while (enumerator_14814.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_14814.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 292)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 292)) ;
      enumerator_14814.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 294)) ;
    }
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 296)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalSelectInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalSelectInstructionAST.mSlotID,
                                                extensionGetter_lexicalSelectInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalSelectInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalSelectInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension getter '@lexicalRoutineInstructionAST generateInstructionCode'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_15430.current_mLexicalRoutineActualArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 307)) ;
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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalRoutineInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST.mSlotID,
                                                extensionGetter_lexicalRoutineInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalRoutineInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalRoutineInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension getter '@lexicalErrorInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalErrorInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalErrorInstructionAST.mSlotID,
                                                extensionGetter_lexicalErrorInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalErrorInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalErrorInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension getter '@lexicalWarningInstructionAST generateInstructionCode'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalWarningInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalWarningInstructionAST.mSlotID,
                                                extensionGetter_lexicalWarningInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalWarningInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalWarningInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension getter '@lexicalTagInstructionAST generateInstructionCode'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalTagInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalTagInstructionAST.mSlotID,
                                                extensionGetter_lexicalTagInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalTagInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalTagInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension getter '@lexicalRewindInstructionAST generateInstructionCode'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalRewindInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalRewindInstructionAST.mSlotID,
                                                extensionGetter_lexicalRewindInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalRewindInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalRewindInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension getter '@lexicalLogInstructionAST generateInstructionCode'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalLogInstructionAST_generateInstructionCode (void) {
  enterExtensionGetter_generateInstructionCode (kTypeDescriptor_GALGAS_lexicalLogInstructionAST.mSlotID,
                                                extensionGetter_lexicalLogInstructionAST_generateInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalLogInstructionAST_generateInstructionCode (defineExtensionGetter_lexicalLogInstructionAST_generateInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Overriding extension getter '@lexicalImplicitRuleAST generateCode'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalImplicitRuleAST_generateCode (void) {
  enterExtensionGetter_generateCode (kTypeDescriptor_GALGAS_lexicalImplicitRuleAST.mSlotID,
                                     extensionGetter_lexicalImplicitRuleAST_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalImplicitRuleAST_generateCode (defineExtensionGetter_lexicalImplicitRuleAST_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Overriding extension getter '@lexicalExplicitRuleAST generateCode'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalExplicitRuleAST_generateCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                          GALGAS_string inArgument_inScannerClassName,
                                                                          GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalExplicitRuleAST * object = (const cPtr_lexicalExplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalExplicitRuleAST) ;
  result_outGeneratedCode = GALGAS_string ("if (") ;
  result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLexicalRuleExpression.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 403)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 403)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 404)) ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 405)) ;
  }
  cEnumerator_lexicalInstructionListAST enumerator_20361 (object->mAttribute_mInstructionList, kEnumeration_up) ;
  while (enumerator_20361.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_20361.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 407)) ;
    enumerator_20361.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 409)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueGeneration.galgas", 410)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalExplicitRuleAST_generateCode (void) {
  enterExtensionGetter_generateCode (kTypeDescriptor_GALGAS_lexicalExplicitRuleAST.mSlotID,
                                     extensionGetter_lexicalExplicitRuleAST_generateCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalExplicitRuleAST_generateCode (defineExtensionGetter_lexicalExplicitRuleAST_generateCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension getter '@lexicalOrExpressionAST generateCocoaConditionCode'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalOrExpressionAST_generateCocoaConditionCode (const cPtr_lexicalExpressionAST * inObject,
                                                                                        GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalOrExpressionAST * object = (const cPtr_lexicalOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalOrExpressionAST) ;
  result_outGeneratedCode = callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLeftOperand.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 29)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 30)) ;
  result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mRightOperand.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 31)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalOrExpressionAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalOrExpressionAST.mSlotID,
                                                   extensionGetter_lexicalOrExpressionAST_generateCocoaConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalOrExpressionAST_generateCocoaConditionCode (defineExtensionGetter_lexicalOrExpressionAST_generateCocoaConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//             Overriding extension getter '@lexicalCharacterIntervalMatchAST generateCocoaConditionCode'              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST.mSlotID,
                                                   extensionGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode (defineExtensionGetter_lexicalCharacterIntervalMatchAST_generateCocoaConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension getter '@lexicalStringMatchAST generateCocoaConditionCode'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalStringMatchAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalStringMatchAST.mSlotID,
                                                   extensionGetter_lexicalStringMatchAST_generateCocoaConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalStringMatchAST_generateCocoaConditionCode (defineExtensionGetter_lexicalStringMatchAST_generateCocoaConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension getter '@lexicalStringNotMatchAST generateCocoaConditionCode'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalStringNotMatchAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalStringNotMatchAST.mSlotID,
                                                   extensionGetter_lexicalStringNotMatchAST_generateCocoaConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalStringNotMatchAST_generateCocoaConditionCode (defineExtensionGetter_lexicalStringNotMatchAST_generateCocoaConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension getter '@lexicalCharacterMatchAST generateCocoaConditionCode'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalCharacterMatchAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterMatchAST.mSlotID,
                                                   extensionGetter_lexicalCharacterMatchAST_generateCocoaConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalCharacterMatchAST_generateCocoaConditionCode (defineExtensionGetter_lexicalCharacterMatchAST_generateCocoaConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension getter '@lexicalCharacterSetMatchAST generateCocoaConditionCode'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode (void) {
  enterExtensionGetter_generateCocoaConditionCode (kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST.mSlotID,
                                                   extensionGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode (defineExtensionGetter_lexicalCharacterSetMatchAST_generateCocoaConditionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//       Overriding extension getter '@lexicalAttributeInputArgumentAST generateCocoaRoutineOrFunctionArgument'        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                               extensionGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineExtensionGetter_lexicalAttributeInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//       Overriding extension getter '@lexicalCharacterInputArgumentAST generateCocoaRoutineOrFunctionArgument'        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                               extensionGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineExtensionGetter_lexicalCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//        Overriding extension getter '@lexicalUnsignedInputArgumentAST generateCocoaRoutineOrFunctionArgument'        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                               extensionGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineExtensionGetter_lexicalUnsignedInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//    Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateCocoaRoutineOrFunctionArgument'    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * /* inObject */,
                                                                                                                     C_Compiler * /* inCompiler */
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("mPreviousChar") ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                               extensionGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineExtensionGetter_lexicalCurrentCharacterInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//        Overriding extension getter '@lexicalFunctionInputArgumentAST generateCocoaRoutineOrFunctionArgument'        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_function_").add_operation (object->mAttribute_mFunctionName.getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 125)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 125)) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_7080 (object->mAttribute_mFunctionActualArgumentList, kEnumeration_up) ;
  while (enumerator_7080.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_7080.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 127)) ;
    if (enumerator_7080.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 128)) ;
    }
    enumerator_7080.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 130)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument (void) {
  enterExtensionGetter_generateCocoaRoutineOrFunctionArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                               extensionGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument (defineExtensionGetter_lexicalFunctionInputArgumentAST_generateCocoaRoutineOrFunctionArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//         Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateCocoaRoutineArgument'          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument (void) {
  enterExtensionGetter_generateCocoaRoutineArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST.mSlotID,
                                                     extensionGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument (defineExtensionGetter_lexicalAttributeInputOutputArgumentAST_generateCocoaRoutineArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//              Overriding extension getter '@lexicalFormalInputArgumentAST generateCocoaRoutineArgument'              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                 GALGAS_lexiqueAnalysisContext /* inArgument_inLexiqueAnalysisContext */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalFormalInputArgumentAST * object = (const cPtr_lexicalFormalInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFormalInputArgumentAST) ;
  result_outGeneratedCode = callExtensionGetter_generateCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) object->mAttribute_mRoutineOrFunctionFormalInputArgument.ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 161)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument (void) {
  enterExtensionGetter_generateCocoaRoutineArgument (kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST.mSlotID,
                                                     extensionGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument (defineExtensionGetter_lexicalFormalInputArgumentAST_generateCocoaRoutineArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//             Overriding extension getter '@lexicalSendTerminalByDefaultAST generateCocoaDefaultSendCode'             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode (void) {
  enterExtensionGetter_generateCocoaDefaultSendCode (kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST.mSlotID,
                                                     extensionGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode (defineExtensionGetter_lexicalSendTerminalByDefaultAST_generateCocoaDefaultSendCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension getter '@lexicalErrorByDefaultAST generateCocoaDefaultSendCode'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * /* inObject */,
                                                                                            GALGAS_string /* inArgument_inScannerClassName */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = NO ;\n") ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode (void) {
  enterExtensionGetter_generateCocoaDefaultSendCode (kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST.mSlotID,
                                                     extensionGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode (defineExtensionGetter_lexicalErrorByDefaultAST_generateCocoaDefaultSendCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//           Overriding extension getter '@lexicalStructuredSendInstructionAST generateCocoaInstructionCode'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (callExtensionGetter_generateCocoaDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) object->mAttribute_mLexicalSendDefaultAction.ptr (), inArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 210)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 210)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 211)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST.mSlotID,
                                                     extensionGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalStructuredSendInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//             Overriding extension getter '@lexicalSimpleSendInstructionAST generateCocoaInstructionCode'             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST.mSlotID,
                                                     extensionGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalSimpleSendInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension getter '@lexicalRepeatInstructionAST generateCocoaInstructionCode'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 230)) ;
  }
  cEnumerator_lexicalInstructionListAST enumerator_12247 (object->mAttribute_mRepeatedInstructionList, kEnumeration_up) ;
  while (enumerator_12247.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_12247.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 233)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 233)) ;
    enumerator_12247.gotoNextObject () ;
  }
  cEnumerator_lexicalWhileBranchListAST enumerator_12411 (object->mAttribute_mLexicalWhileBranchList, kEnumeration_up) ;
  while (enumerator_12411.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 238)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_12411.current_mWhileExpression (HERE).ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 239)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 240)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 241)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_12670 (enumerator_12411.current_mWhileInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_12670.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_12670.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 243)) ;
      enumerator_12670.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 245)) ;
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
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 252)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}while (mLoop && scanningOk) ;\n"
    "mLoop = YES ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 253)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST.mSlotID,
                                                     extensionGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalRepeatInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension getter '@lexicalSelectInstructionAST generateCocoaInstructionCode'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_13508.current_mSelectExpression (HERE).ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 268)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 268)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 269)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 270)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_13769 (enumerator_13508.current_mSelectInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_13769.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_13769.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 272)) ;
      enumerator_13769.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 274)) ;
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
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 281)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_14171 (object->mAttribute_mDefaultInstructionList, kEnumeration_up) ;
    while (enumerator_14171.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_14171.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 283)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 283)) ;
      enumerator_14171.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 285)) ;
    }
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 287)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalSelectInstructionAST.mSlotID,
                                                     extensionGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalSelectInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//              Overriding extension getter '@lexicalRoutineInstructionAST generateCocoaInstructionCode'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateCocoaRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_14808.current_mLexicalRoutineActualArgument (HERE).ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 298)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 298)) ;
    enumerator_14808.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 300)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST.mSlotID,
                                                     extensionGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalRoutineInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension getter '@lexicalDropInstructionAST generateCocoaInstructionCode'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalDropInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalDropInstructionAST.mSlotID,
                                                     extensionGetter_lexicalDropInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalDropInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalDropInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension getter '@lexicalErrorInstructionAST generateCocoaInstructionCode'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalErrorInstructionAST.mSlotID,
                                                     extensionGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalErrorInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//              Overriding extension getter '@lexicalWarningInstructionAST generateCocoaInstructionCode'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalWarningInstructionAST.mSlotID,
                                                     extensionGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalWarningInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension getter '@lexicalTagInstructionAST generateCocoaInstructionCode'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalTagInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalTagInstructionAST.mSlotID,
                                                     extensionGetter_lexicalTagInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalTagInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalTagInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension getter '@lexicalRewindInstructionAST generateCocoaInstructionCode'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalRewindInstructionAST.mSlotID,
                                                     extensionGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalRewindInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension getter '@lexicalLogInstructionAST generateCocoaInstructionCode'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalLogInstructionAST_generateCocoaInstructionCode (void) {
  enterExtensionGetter_generateCocoaInstructionCode (kTypeDescriptor_GALGAS_lexicalLogInstructionAST.mSlotID,
                                                     extensionGetter_lexicalLogInstructionAST_generateCocoaInstructionCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalLogInstructionAST_generateCocoaInstructionCode (defineExtensionGetter_lexicalLogInstructionAST_generateCocoaInstructionCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension getter '@lexicalImplicitRuleAST generateCocoaCode'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalImplicitRuleAST_generateCocoaCode (void) {
  enterExtensionGetter_generateCocoaCode (kTypeDescriptor_GALGAS_lexicalImplicitRuleAST.mSlotID,
                                          extensionGetter_lexicalImplicitRuleAST_generateCocoaCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalImplicitRuleAST_generateCocoaCode (defineExtensionGetter_lexicalImplicitRuleAST_generateCocoaCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension getter '@lexicalExplicitRuleAST generateCocoaCode'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexicalExplicitRuleAST_generateCocoaCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                                               GALGAS_string inArgument_inScannerClassName,
                                                                               GALGAS_lexiqueAnalysisContext inArgument_inLexiqueAnalysisContext,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const cPtr_lexicalExplicitRuleAST * object = (const cPtr_lexicalExplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalExplicitRuleAST) ;
  result_outGeneratedCode = GALGAS_string ("if (scanningOk && (") ;
  result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaConditionCode ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLexicalRuleExpression.ptr (), inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 393)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 393)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 394)) ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 395)) ;
  }
  cEnumerator_lexicalInstructionListAST enumerator_19497 (object->mAttribute_mInstructionList, kEnumeration_up) ;
  while (enumerator_19497.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_19497.current_mInstruction (HERE).ptr (), inArgument_inScannerClassName, inArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 397)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 397)) ;
    enumerator_19497.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 399)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 400)) ;
//---
  return result_outGeneratedCode ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexicalExplicitRuleAST_generateCocoaCode (void) {
  enterExtensionGetter_generateCocoaCode (kTypeDescriptor_GALGAS_lexicalExplicitRuleAST.mSlotID,
                                          extensionGetter_lexicalExplicitRuleAST_generateCocoaCode) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexicalExplicitRuleAST_generateCocoaCode (defineExtensionGetter_lexicalExplicitRuleAST_generateCocoaCode, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//              Overriding extension method '@lexicalSendTerminalByDefaultAST checkLexicalDefaultAction'               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                       GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalSendTerminalByDefaultAST * object = (const cPtr_lexicalSendTerminalByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSendTerminalByDefaultAST) ;
  GALGAS_lexicalSentValueList joker_8289 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mTerminalMap (SOURCE_FILE ("lexiqueCompilation.galgas", 163)).method_searchKey (object->mAttribute_mDefaultSentTerminal, joker_8289, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 163)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction (void) {
  enterExtensionMethod_checkLexicalDefaultAction (kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST.mSlotID,
                                                  extensionMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction (defineExtensionMethod_lexicalSendTerminalByDefaultAST_checkLexicalDefaultAction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@lexicalErrorByDefaultAST checkLexicalDefaultAction'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                                                GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalErrorByDefaultAST * object = (const cPtr_lexicalErrorByDefaultAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorByDefaultAST) ;
  {
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), object->mAttribute_mDefaultErrorMessageName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 170)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction (void) {
  enterExtensionMethod_checkLexicalDefaultAction (kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST.mSlotID,
                                                  extensionMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction (defineExtensionMethod_lexicalErrorByDefaultAST_checkLexicalDefaultAction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Overriding extension method '@lexicalOrExpressionAST checkLexicalExpression'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalOrExpressionAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                           GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalOrExpressionAST * object = (const cPtr_lexicalOrExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalOrExpressionAST) ;
  callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLeftOperand.ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 184)) ;
  callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) object->mAttribute_mRightOperand.ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 185)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalOrExpressionAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalOrExpressionAST.mSlotID,
                                               extensionMethod_lexicalOrExpressionAST_checkLexicalExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalOrExpressionAST_checkLexicalExpression (defineExtensionMethod_lexicalOrExpressionAST_checkLexicalExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@lexicalCharacterMatchAST checkLexicalExpression'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalCharacterMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * /* inObject */,
                                                                             GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalCharacterMatchAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalCharacterMatchAST.mSlotID,
                                               extensionMethod_lexicalCharacterMatchAST_checkLexicalExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalCharacterMatchAST_checkLexicalExpression (defineExtensionMethod_lexicalCharacterMatchAST_checkLexicalExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@lexicalCharacterSetMatchAST checkLexicalExpression'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalCharacterSetMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalCharacterSetMatchAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST.mSlotID,
                                               extensionMethod_lexicalCharacterSetMatchAST_checkLexicalExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalCharacterSetMatchAST_checkLexicalExpression (defineExtensionMethod_lexicalCharacterSetMatchAST_checkLexicalExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension method '@lexicalCharacterIntervalMatchAST checkLexicalExpression'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * /* inObject */,
                                                                                     GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                     C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST.mSlotID,
                                               extensionMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression (defineExtensionMethod_lexicalCharacterIntervalMatchAST_checkLexicalExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension method '@lexicalStringMatchAST checkLexicalExpression'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalStringMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                          GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalStringMatchAST * object = (const cPtr_lexicalStringMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringMatchAST) ;
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (object->mAttribute_mString.getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 217))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 217)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalStringMatchAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalStringMatchAST.mSlotID,
                                               extensionMethod_lexicalStringMatchAST_checkLexicalExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalStringMatchAST_checkLexicalExpression (defineExtensionMethod_lexicalStringMatchAST_checkLexicalExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@lexicalStringNotMatchAST checkLexicalExpression'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalStringNotMatchAST_checkLexicalExpression (const cPtr_lexicalExpressionAST * inObject,
                                                                             GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalStringNotMatchAST * object = (const cPtr_lexicalStringNotMatchAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStringNotMatchAST) ;
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (object->mAttribute_mString.getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 224))  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 224)) ;
  {
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), object->mAttribute_mErrorMessage.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 225)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalStringNotMatchAST_checkLexicalExpression (void) {
  enterExtensionMethod_checkLexicalExpression (kTypeDescriptor_GALGAS_lexicalStringNotMatchAST.mSlotID,
                                               extensionMethod_lexicalStringNotMatchAST_checkLexicalExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalStringNotMatchAST_checkLexicalExpression (defineExtensionMethod_lexicalStringNotMatchAST_checkLexicalExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//          Overriding extension method '@lexicalAttributeInputArgumentAST checkLexicalFunctionCallArgument'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterExtensionMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                         extensionMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument (defineExtensionMethod_lexicalAttributeInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//          Overriding extension method '@lexicalCharacterInputArgumentAST checkLexicalFunctionCallArgument'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterExtensionMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                         extensionMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument (defineExtensionMethod_lexicalCharacterInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//           Overriding extension method '@lexicalUnsignedInputArgumentAST checkLexicalFunctionCallArgument'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterExtensionMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                         extensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument (defineExtensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//       Overriding extension method '@lexicalCurrentCharacterInputArgumentAST checkLexicalFunctionCallArgument'       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterExtensionMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                         extensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument (defineExtensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//           Overriding extension method '@lexicalFunctionInputArgumentAST checkLexicalFunctionCallArgument'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
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
    callExtensionMethod_checkLexicalFunctionCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_16336.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_16301.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 336)) ;
    enumerator_16301.gotoNextObject () ;
    enumerator_16336.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument (void) {
  enterExtensionMethod_checkLexicalFunctionCallArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                         extensionMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument (defineExtensionMethod_lexicalFunctionInputArgumentAST_checkLexicalFunctionCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//           Overriding extension method '@lexicalAttributeInputArgumentAST checkLexicalRoutineCallArgument'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//           Overriding extension method '@lexicalCharacterInputArgumentAST checkLexicalRoutineCallArgument'           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//           Overriding extension method '@lexicalUnsignedInputArgumentAST checkLexicalRoutineCallArgument'            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//       Overriding extension method '@lexicalCurrentCharacterInputArgumentAST checkLexicalRoutineCallArgument'        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//           Overriding extension method '@lexicalFunctionInputArgumentAST checkLexicalRoutineCallArgument'            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
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
    callExtensionMethod_checkLexicalFunctionCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_21479.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_21444.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 451)) ;
    enumerator_21444.gotoNextObject () ;
    enumerator_21479.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalFunctionInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//        Overriding extension method '@lexicalAttributeInputOutputArgumentAST checkLexicalRoutineCallArgument'        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalAttributeInputOutputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//            Overriding extension method '@lexicalFormalInputArgumentAST checkLexicalRoutineCallArgument'             *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                           GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                           GALGAS_lexicalArgumentModeAST inArgument_inLexicalRoutineFormalArgumentMode,
                                                                                           GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFormalInputArgumentAST * object = (const cPtr_lexicalFormalInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFormalInputArgumentAST) ;
  callExtensionMethod_checkLexicalRoutineCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) object->mAttribute_mRoutineOrFunctionFormalInputArgument.ptr (), ioArgument_ioLexiqueAnalysisContext, inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 500)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("lexiqueCompilation.galgas", 505)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mActualPassingModeLocation, GALGAS_string ("the output/input mode (!\?) is required here, not an input mode")  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 506)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument (void) {
  enterExtensionMethod_checkLexicalRoutineCallArgument (kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST.mSlotID,
                                                        extensionMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument (defineExtensionMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//             Overriding extension method '@lexicalStructuredSendInstructionAST checkLexicalInstruction'              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                         GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                         GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalStructuredSendInstructionAST * object = (const cPtr_lexicalStructuredSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStructuredSendInstructionAST) ;
  cEnumerator_lexicalSendSearchListAST enumerator_25014 (object->mAttribute_mLexicalSendSearchList, kEnumeration_up) ;
  while (enumerator_25014.hasCurrentObject ()) {
    {
    ioArgument_ioLexiqueAnalysisContext.mAttribute_mLexicalTokenListMap.setter_setMShouldBeGeneratedForKey (GALGAS_bool (true), enumerator_25014.current_mSearchListName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 524)) ;
    }
    GALGAS_lexicalTypeEnum joker_25210 ; // Joker input parameter
    ioArgument_ioLexiqueAnalysisContext.getter_mLexicalAttributeMap (SOURCE_FILE ("lexiqueCompilation.galgas", 525)).method_searchKey (enumerator_25014.current_mAttributeName (HERE), joker_25210, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 525)) ;
    enumerator_25014.gotoNextObject () ;
  }
  callExtensionMethod_checkLexicalDefaultAction ((const cPtr_lexicalSendDefaultActionAST *) object->mAttribute_mLexicalSendDefaultAction.ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 527)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST.mSlotID,
                                                extensionMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//               Overriding extension method '@lexicalSimpleSendInstructionAST checkLexicalInstruction'                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                     GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                     GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalSimpleSendInstructionAST * object = (const cPtr_lexicalSimpleSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSimpleSendInstructionAST) ;
  GALGAS_lexicalSentValueList joker_25659 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mTerminalMap (SOURCE_FILE ("lexiqueCompilation.galgas", 535)).method_searchKey (object->mAttribute_mSentTerminal, joker_25659, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 535)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST.mSlotID,
                                                extensionMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@lexicalRepeatInstructionAST checkLexicalInstruction'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalRepeatInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                 GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalRepeatInstructionAST * object = (const cPtr_lexicalRepeatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRepeatInstructionAST) ;
  cEnumerator_lexicalWhileBranchListAST enumerator_25974 (object->mAttribute_mLexicalWhileBranchList, kEnumeration_up) ;
  while (enumerator_25974.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) enumerator_25974.current_mWhileExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 544)) ;
    GALGAS_lexicalTagMap var_tagMap = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 545)) ;
    cEnumerator_lexicalInstructionListAST enumerator_26149 (enumerator_25974.current_mWhileInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_26149.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_26149.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 547)) ;
      enumerator_26149.gotoNextObject () ;
    }
    enumerator_25974.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 550)) ;
  cEnumerator_lexicalInstructionListAST enumerator_26345 (object->mAttribute_mRepeatedInstructionList, kEnumeration_up) ;
  while (enumerator_26345.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_26345.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 552)) ;
    enumerator_26345.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalRepeatInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST.mSlotID,
                                                extensionMethod_lexicalRepeatInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalRepeatInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalRepeatInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@lexicalSelectInstructionAST checkLexicalInstruction'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalSelectInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                 GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalSelectInstructionAST * object = (const cPtr_lexicalSelectInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSelectInstructionAST) ;
  cEnumerator_lexicalSelectBranchListAST enumerator_26748 (object->mAttribute_mLexicalSelectBranchList, kEnumeration_up) ;
  while (enumerator_26748.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) enumerator_26748.current_mSelectExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 562)) ;
    GALGAS_lexicalTagMap var_tagMap = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 563)) ;
    cEnumerator_lexicalInstructionListAST enumerator_26925 (enumerator_26748.current_mSelectInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_26925.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_26925.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 565)) ;
      enumerator_26925.gotoNextObject () ;
    }
    enumerator_26748.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 568)) ;
  cEnumerator_lexicalInstructionListAST enumerator_27120 (object->mAttribute_mDefaultInstructionList, kEnumeration_up) ;
  while (enumerator_27120.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_27120.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 570)) ;
    enumerator_27120.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalSelectInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalSelectInstructionAST.mSlotID,
                                                extensionMethod_lexicalSelectInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalSelectInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalSelectInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@lexicalRoutineInstructionAST checkLexicalInstruction'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalRoutineInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
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
    callExtensionMethod_checkLexicalRoutineCallArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_28267.current_mLexicalRoutineActualArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_28240.current_mLexicalFormalArgumentMode (HERE), enumerator_28240.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 596)) ;
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
    ioArgument_ioLexiqueAnalysisContext.mAttribute_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), enumerator_28879.current_mValue (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 614)) ;
    }
    enumerator_28879.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalRoutineInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST.mSlotID,
                                                extensionMethod_lexicalRoutineInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalRoutineInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalRoutineInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@lexicalLogInstructionAST checkLexicalInstruction'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalLogInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                              GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                              GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalLogInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalLogInstructionAST.mSlotID,
                                                extensionMethod_lexicalLogInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalLogInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalLogInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@lexicalRewindInstructionAST checkLexicalInstruction'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalRewindInstructionAST.mSlotID,
                                                extensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalRewindInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@lexicalDropInstructionAST checkLexicalInstruction'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalDropInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                               GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                               GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalDropInstructionAST * object = (const cPtr_lexicalDropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalDropInstructionAST) ;
  GALGAS_lexicalSentValueList joker_30152 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mTerminalMap (SOURCE_FILE ("lexiqueCompilation.galgas", 639)).method_searchKey (object->mAttribute_mTerminalName, joker_30152, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 639)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalDropInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalDropInstructionAST.mSlotID,
                                                extensionMethod_lexicalDropInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalDropInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalDropInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@lexicalTagInstructionAST checkLexicalInstruction'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalTagInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                              GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                              GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalTagInstructionAST * object = (const cPtr_lexicalTagInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalTagInstructionAST) ;
  {
  ioArgument_ioTagMap.setter_insertKey (object->mAttribute_mLexicalTagName, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 647)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalTagInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalTagInstructionAST.mSlotID,
                                                extensionMethod_lexicalTagInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalTagInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalTagInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@lexicalErrorInstructionAST checkLexicalInstruction'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalErrorInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalErrorInstructionAST * object = (const cPtr_lexicalErrorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorInstructionAST) ;
  {
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), object->mAttribute_mErrorMessageName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 655)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalErrorInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalErrorInstructionAST.mSlotID,
                                                extensionMethod_lexicalErrorInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalErrorInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalErrorInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@lexicalWarningInstructionAST checkLexicalInstruction'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalWarningInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                  GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                  GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalWarningInstructionAST * object = (const cPtr_lexicalWarningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalWarningInstructionAST) ;
  {
  ioArgument_ioLexiqueAnalysisContext.mAttribute_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), object->mAttribute_mWarningMessageName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 663)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalWarningInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalWarningInstructionAST.mSlotID,
                                                extensionMethod_lexicalWarningInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalWarningInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalWarningInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension method '@lexicalImplicitRuleAST checkLexicalRule'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalImplicitRuleAST_checkLexicalRule (const cPtr_abstractLexicalRuleAST * inObject,
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

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalImplicitRuleAST_checkLexicalRule (void) {
  enterExtensionMethod_checkLexicalRule (kTypeDescriptor_GALGAS_lexicalImplicitRuleAST.mSlotID,
                                         extensionMethod_lexicalImplicitRuleAST_checkLexicalRule) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalImplicitRuleAST_checkLexicalRule (defineExtensionMethod_lexicalImplicitRuleAST_checkLexicalRule, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension method '@lexicalExplicitRuleAST checkLexicalRule'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalExplicitRuleAST_checkLexicalRule (const cPtr_abstractLexicalRuleAST * inObject,
                                                                     GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalExplicitRuleAST * object = (const cPtr_lexicalExplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalExplicitRuleAST) ;
  callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) object->mAttribute_mLexicalRuleExpression.ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 684)) ;
  GALGAS_lexicalTagMap var_tagMap = GALGAS_lexicalTagMap::constructor_emptyMap (SOURCE_FILE ("lexiqueCompilation.galgas", 685)) ;
  cEnumerator_lexicalInstructionListAST enumerator_32436 (object->mAttribute_mInstructionList, kEnumeration_up) ;
  while (enumerator_32436.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_32436.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 687)) ;
    enumerator_32436.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalExplicitRuleAST_checkLexicalRule (void) {
  enterExtensionMethod_checkLexicalRule (kTypeDescriptor_GALGAS_lexicalExplicitRuleAST.mSlotID,
                                         extensionMethod_lexicalExplicitRuleAST_checkLexicalRule) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalExplicitRuleAST_checkLexicalRule (defineExtensionMethod_lexicalExplicitRuleAST_checkLexicalRule, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension method '@arrayDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mArrayTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 46)), object->mAttribute_mArrayTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 46))  COMMA_SOURCE_FILE ("type-array.galgas", 46)) ;
  {
  const GALGAS_arrayDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 47)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mElementTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 48)), object->mAttribute_mElementTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 48))  COMMA_SOURCE_FILE ("type-array.galgas", 48)) COMMA_SOURCE_FILE ("type-array.galgas", 48)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_arrayDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                                extensionMethod_arrayDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_arrayDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_arrayDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@arrayDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GALGAS_extensionModifierMapForBuildingContext /* constinArgument_inExtensionModifierMapForBuildingContext */,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 61)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mDimension.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the dimension of an array should be > 0")  COMMA_SOURCE_FILE ("type-array.galgas", 62)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_arrayTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mArrayTypeName, var_arrayTypeIndex COMMA_SOURCE_FILE ("type-array.galgas", 66)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_elementTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mElementTypeName, var_elementTypeIndex COMMA_SOURCE_FILE ("type-array.galgas", 69)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 71)) ;
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 72)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 73)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 74)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_boolType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("bool"), var_boolType COMMA_SOURCE_FILE ("type-array.galgas", 77)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_uintType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("uint"), var_uintType COMMA_SOURCE_FILE ("type-array.galgas", 80)) ;
  }
  GALGAS_functionSignature var_uintArgs = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 82)) ;
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 84)).isValid ()) {
    uint32_t variant_4239 = object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 84)).uintValue () ;
    bool loop_4239 = true ;
    while (loop_4239) {
      loop_4239 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 84)))).isValid () ;
      if (loop_4239) {
        loop_4239 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 84)))).boolValue () ;
      }
      if (loop_4239 && (0 == variant_4239)) {
        loop_4239 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 84)) ;
      }
      if (loop_4239) {
        variant_4239 -- ;
        var_uintArgs.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 85)), var_uintType, GALGAS_string ("inSize").add_operation (var_idx.getter_string (SOURCE_FILE ("type-array.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 85))  COMMA_SOURCE_FILE ("type-array.galgas", 85)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 86)) ;
      }
    }
  }
  {
  var_constructorMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 90))  COMMA_SOURCE_FILE ("type-array.galgas", 90)), var_uintArgs, GALGAS_bool (false), var_arrayTypeIndex, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 89)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("axisCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 96)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("sizeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 97)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("rangeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("range"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 98)) ;
  }
  {
  var_getterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("isValueValidAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 100))  COMMA_SOURCE_FILE ("type-array.galgas", 100)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 101)), var_uintArgs, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 103)), GALGAS_bool (true), var_boolType, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 106)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-array.galgas", 99)) ;
  }
  {
  var_getterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("valueAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 110))  COMMA_SOURCE_FILE ("type-array.galgas", 110)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 111)), var_uintArgs, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 113)), GALGAS_bool (true), var_elementTypeIndex, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 116)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-array.galgas", 109)) ;
  }
  GALGAS_formalParameterSignature var_modifierFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 120)) ;
  var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 121)), var_elementTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 121)), GALGAS_string ("InValue")  COMMA_SOURCE_FILE ("type-array.galgas", 121)) ;
  var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 123)).isValid ()) {
    uint32_t variant_5654 = object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 123)).uintValue () ;
    bool loop_5654 = true ;
    while (loop_5654) {
      loop_5654 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 123)))).isValid () ;
      if (loop_5654) {
        loop_5654 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 123)))).boolValue () ;
      }
      if (loop_5654 && (0 == variant_5654)) {
        loop_5654 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 123)) ;
      }
      if (loop_5654) {
        variant_5654 -- ;
        var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 124)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 124)), GALGAS_string ("inIndex").add_operation (var_idx.getter_string (SOURCE_FILE ("type-array.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 124))  COMMA_SOURCE_FILE ("type-array.galgas", 124)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 125)) ;
      }
    }
  }
  {
  var_modifierMap.setter_insertKey (GALGAS_string ("setValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 128)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 129)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 132)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 127)) ;
  }
  {
  var_modifierMap.setter_insertKey (GALGAS_string ("forceValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 136)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 137)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 140)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 135)) ;
  }
  {
  GALGAS_lstring joker_6258_4 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_6258_3 ; // Joker input parameter
  GALGAS_formalArgumentPassingModeAST joker_6258_2 ; // Joker input parameter
  GALGAS_string joker_6258_1 ; // Joker input parameter
  var_modifierFormalArgumentList.setter_popFirst (joker_6258_4, joker_6258_3, joker_6258_2, joker_6258_1, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 143)) ;
  }
  {
  var_modifierMap.setter_insertKey (GALGAS_string ("invalidateValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 145)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 146)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 149)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 144)) ;
  }
  {
  var_modifierMap.setter_insertKey (GALGAS_string ("setSize").getter_nowhere (SOURCE_FILE ("type-array.galgas", 153)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 154)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 157)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 152)) ;
  }
  var_modifierFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 160)) ;
  var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 161)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 161)), GALGAS_string ("inSize")  COMMA_SOURCE_FILE ("type-array.galgas", 161)) ;
  var_modifierFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 162)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 162)), GALGAS_string ("inAxisIndex")  COMMA_SOURCE_FILE ("type-array.galgas", 162)) ;
  {
  var_modifierMap.setter_insertKey (GALGAS_string ("setSizeForAxis").getter_nowhere (SOURCE_FILE ("type-array.galgas", 164)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 165)), var_modifierFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 168)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 163)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mArrayTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-array.galgas", 176)), GALGAS_typeKindEnum::constructor_listMapType (SOURCE_FILE ("type-array.galgas", 177)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 179)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 180)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 181)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 186)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 187)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 188)), GALGAS_uint ((uint32_t) 0U), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 190)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 191)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 192)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 193)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 194)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-array.galgas", 196)), GALGAS_string::makeEmptyString (), GALGAS_string ("array-").add_operation (object->mAttribute_mArrayTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 198)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-array.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 172)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_arrayDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                               extensionMethod_arrayDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_arrayDeclarationAST_enterInSemanticContext (defineExtensionMethod_arrayDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Overriding extension method '@arrayDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("array ").add_operation (object->mAttribute_mArrayTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 214)), GALGAS_arrayTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mArrayTypeName, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 216)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mElementTypeName, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 217)), object->mAttribute_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 218))  COMMA_SOURCE_FILE ("type-array.galgas", 215)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-array.galgas", 213)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_arrayDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                         extensionMethod_arrayDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_arrayDeclarationAST_semanticAnalysis (defineExtensionMethod_arrayDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@arrayTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayTypeForGeneration * object = (const cPtr_arrayTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 237)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 238)), object->mAttribute_mElementTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 239)), object->mAttribute_mDimension COMMA_SOURCE_FILE ("type-array.galgas", 236))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 243)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 244)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 245)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 246)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 247)), object->mAttribute_mTypeProxy.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 248)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 249)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 250)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 251)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 252)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 253)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 254)) COMMA_SOURCE_FILE ("type-array.galgas", 242))), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 242)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_arrayTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_arrayTypeForGeneration.mSlotID,
                                              extensionMethod_arrayTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_arrayTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_arrayTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@arrayTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayTypeForGeneration * object = (const cPtr_arrayTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 264)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 265)) ;
  GALGAS_stringlist var_suffixList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 267)) ;
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mDimension.isValid ()) {
    uint32_t variant_10908 = object->mAttribute_mDimension.uintValue () ;
    bool loop_10908 = true ;
    while (loop_10908) {
      loop_10908 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension)).isValid () ;
      if (loop_10908) {
        loop_10908 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension)).boolValue () ;
      }
      if (loop_10908 && (0 == variant_10908)) {
        loop_10908 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 269)) ;
      }
      if (loop_10908) {
        variant_10908 -- ;
        var_suffixList.addAssign_operation (var_idx.getter_string (SOURCE_FILE ("type-array.galgas", 270))  COMMA_SOURCE_FILE ("type-array.galgas", 270)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 271)) ;
      }
    }
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 274)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 275)), object->mAttribute_mElementTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 276)), object->mAttribute_mDimension, var_suffixList COMMA_SOURCE_FILE ("type-array.galgas", 273))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_arrayTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_arrayTypeForGeneration.mSlotID,
                                                     extensionMethod_arrayTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_arrayTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_arrayTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension method '@classDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mClassTypeName.getter_string (SOURCE_FILE ("type-class.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 85)), object->mAttribute_mClassTypeName.getter_location (SOURCE_FILE ("type-class.galgas", 85))  COMMA_SOURCE_FILE ("type-class.galgas", 85)) ;
  {
  const GALGAS_classDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 86)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSuperClassName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 88)), object->mAttribute_mSuperClassName.mAttribute_location  COMMA_SOURCE_FILE ("type-class.galgas", 88)) COMMA_SOURCE_FILE ("type-class.galgas", 88)) ;
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_3495 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3495.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3495.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 91)), object->mAttribute_mSuperClassName.mAttribute_location  COMMA_SOURCE_FILE ("type-class.galgas", 91)) COMMA_SOURCE_FILE ("type-class.galgas", 91)) ;
    }
    enumerator_3495.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_classDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                                extensionMethod_classDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_classDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_classDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@classDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionModifierMapForBuildingContext constinArgument_inExtensionModifierMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_uintType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("uint"), var_uintType COMMA_SOURCE_FILE ("type-class.galgas", 105)) ;
  }
  GALGAS_getterMap var_getterMap ;
  GALGAS_setterMap var_modifierMap ;
  GALGAS_instanceMethodMap var_instanceMethodMap ;
  GALGAS_typedPropertyList var_inheritedTypedAttributeList ;
  GALGAS_attributeMap var_attributeMap = GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 111)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_superClassIndex ;
  GALGAS_bool var_generateHeaderInSeparateFile ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 115)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_superClassIndex = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 116)) ;
    {
    routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 117)) ;
    }
    var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 118)) ;
    var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 119)) ;
    var_inheritedTypedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 120)) ;
    var_attributeMap = GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 121)) ;
    var_generateHeaderInSeparateFile = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_5196 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
    while (enumerator_5196.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_5196.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 124)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_generateHeaderInSeparateFile = GALGAS_bool (true) ;
      }
      enumerator_5196.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSuperClassName, var_superClassIndex COMMA_SOURCE_FILE ("type-class.galgas", 129)) ;
    }
    GALGAS_typeKindEnum var_typeKindEnum ;
    GALGAS_getterMap var_inheritedGetterMap ;
    GALGAS_setterMap var_inheritedModifierMap ;
    GALGAS_instanceMethodMap var_inheritedMethodMap ;
    GALGAS_bool joker_5644_3 ; // Joker input parameter
    GALGAS_bool joker_5644_2 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy joker_5644_1 ; // Joker input parameter
    GALGAS_bool joker_5674 ; // Joker input parameter
    GALGAS_typedPropertyList joker_5738_2 ; // Joker input parameter
    GALGAS_constructorMap joker_5738_1 ; // Joker input parameter
    GALGAS_classMethodMap joker_5828_9 ; // Joker input parameter
    GALGAS_enumerationDescriptorList joker_5828_8 ; // Joker input parameter
    GALGAS_stringlist joker_5828_7 ; // Joker input parameter
    GALGAS_uint joker_5828_6 ; // Joker input parameter
    GALGAS_functionSignature joker_5828_5 ; // Joker input parameter
    GALGAS_constantIndexMap joker_5828_4 ; // Joker input parameter
    GALGAS_enumConstantList joker_5828_3 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_5828_2 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_5828_1 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy joker_5874_4 ; // Joker input parameter
    GALGAS_string joker_5874_3 ; // Joker input parameter
    GALGAS_string joker_5874_2 ; // Joker input parameter
    GALGAS_headerKind joker_5874_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mSuperClassName, joker_5644_3, joker_5644_2, joker_5644_1, var_typeKindEnum, joker_5674, var_inheritedTypedAttributeList, var_attributeMap, joker_5738_2, joker_5738_1, var_inheritedGetterMap, var_inheritedModifierMap, var_inheritedMethodMap, joker_5828_9, joker_5828_8, joker_5828_7, joker_5828_6, joker_5828_5, joker_5828_4, joker_5828_3, joker_5828_2, joker_5828_1, var_generateHeaderInSeparateFile, joker_5874_4, joker_5874_3, joker_5874_2, joker_5874_1, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 134)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_typeKindEnum.objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("type-class.galgas", 150)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mSuperClassName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the @").add_operation (object->mAttribute_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 151)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 151))  COMMA_SOURCE_FILE ("type-class.galgas", 151)) ;
    }
    var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 154)) ;
    cEnumerator_setterMap enumerator_6147 (var_inheritedModifierMap, kEnumeration_up) ;
    while (enumerator_6147.hasCurrentObject ()) {
      {
      var_modifierMap.setter_insertKey (enumerator_6147.current_lkey (HERE), enumerator_6147.current_mKind (HERE), enumerator_6147.current_mParameterList (HERE), enumerator_6147.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 161)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 156)) ;
      }
      enumerator_6147.gotoNextObject () ;
    }
    var_getterMap = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 166)) ;
    cEnumerator_getterMap enumerator_6458 (var_inheritedGetterMap, kEnumeration_up) ;
    while (enumerator_6458.hasCurrentObject ()) {
      {
      var_getterMap.setter_insertKey (enumerator_6458.current_lkey (HERE), enumerator_6458.current_mKind (HERE), enumerator_6458.current_mArgumentTypeList (HERE), enumerator_6458.current_mDeclarationLocation (HERE), enumerator_6458.current_mHasCompilerArgument (HERE), enumerator_6458.current_mReturnedType (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 175)), enumerator_6458.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 168)) ;
      }
      enumerator_6458.gotoNextObject () ;
    }
    var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 180)) ;
    cEnumerator_instanceMethodMap enumerator_6831 (var_inheritedMethodMap, kEnumeration_up) ;
    while (enumerator_6831.hasCurrentObject ()) {
      {
      var_instanceMethodMap.setter_insertKey (enumerator_6831.current_lkey (HERE), enumerator_6831.current_mKind (HERE), enumerator_6831.current_mParameterList (HERE), enumerator_6831.current_mDeclarationLocation (HERE), enumerator_6831.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 188)), enumerator_6831.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 182)) ;
      }
      enumerator_6831.gotoNextObject () ;
    }
  }
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 194)) ;
  cEnumerator_typedPropertyList enumerator_7231 (var_inheritedTypedAttributeList, kEnumeration_up) ;
  while (enumerator_7231.hasCurrentObject ()) {
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 196)), enumerator_7231.current_mAttributeTypeProxy (HERE), enumerator_7231.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-class.galgas", 196)) ;
    enumerator_7231.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_7361 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_7361.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_7361.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("type-class.galgas", 200)) ;
    }
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 201)), var_attributeTypeIndex, enumerator_7361.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-class.galgas", 201)) ;
    {
    var_attributeMap.setter_insertKey (enumerator_7361.current_mPropertyName (HERE), var_attributeTypeIndex, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 202)) ;
    }
    const enumGalgasBool test_4 = var_getterMap.getter_hasKey (enumerator_7361.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 207)) COMMA_SOURCE_FILE ("type-class.galgas", 207)).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_location location_5 (enumerator_7361.current_mPropertyName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_5, GALGAS_string ("'").add_operation (enumerator_7361.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 208)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined getter"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 208))  COMMA_SOURCE_FILE ("type-class.galgas", 208)) ;
    }
    enumerator_7361.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_classIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mClassTypeName, var_classIndex COMMA_SOURCE_FILE ("type-class.galgas", 212)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 218)) ;
  const enumGalgasBool test_6 = object->mAttribute_mIsAbstract.operator_not (SOURCE_FILE ("type-class.galgas", 219)).boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    var_constructorMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 221))  COMMA_SOURCE_FILE ("type-class.galgas", 221)), var_constructorAttributeTypeList, GALGAS_bool (false), var_classIndex, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 220)) ;
    }
  }
  GALGAS_typedPropertyList var_currentClassTypedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 228)) ;
  GALGAS_typedPropertyList var_allTypedAttributeList = var_inheritedTypedAttributeList ;
  cEnumerator_propertyInCollectionListAST enumerator_8489 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_8489.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_8489.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("type-class.galgas", 232)) ;
    }
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_8725 (enumerator_8489.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_8725.hasCurrentObject ()) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_8725.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 236)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
      if (kBoolTrue == test_7) {
        var_hasSetter = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_7) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_8725.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 238)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_hasGetter = GALGAS_bool (false) ;
        }
      }
      enumerator_8725.gotoNextObject () ;
    }
    var_currentClassTypedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_8489.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("type-class.galgas", 242)) ;
    var_allTypedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_8489.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("type-class.galgas", 243)) ;
    const enumGalgasBool test_9 = var_hasGetter.boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      var_getterMap.setter_insertKey (enumerator_8489.current_mPropertyName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 247)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 248)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 249)), GALGAS_bool (false), var_attributeTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-class.galgas", 252)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 245)) ;
      }
    }
    enumerator_8489.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_9487 (var_currentClassTypedAttributeList, kEnumeration_up) ;
  while (enumerator_9487.hasCurrentObject ()) {
    const enumGalgasBool test_10 = enumerator_9487.current_mHasSetter (HERE).boolEnum () ;
    if (kBoolTrue == test_10) {
      {
      GALGAS_formalParameterSignature temp_11 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 263)) ;
      temp_11.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 263)), enumerator_9487.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-class.galgas", 263)), enumerator_9487.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-class.galgas", 263)) ;
      var_modifierMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_9487.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 261)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-class.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 261)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 261))  COMMA_SOURCE_FILE ("type-class.galgas", 261)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 262)), temp_11, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-class.galgas", 265)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 260)) ;
      }
    }
    enumerator_9487.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mClassTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 271)) ;
  }
  GALGAS_string var_defaultConstructorName ;
  const enumGalgasBool test_12 = var_superClassIndex.getter_isNull (SOURCE_FILE ("type-class.galgas", 283)).boolEnum () ;
  if (kBoolTrue == test_12) {
    var_defaultConstructorName = GALGAS_string ("default") ;
  }else if (kBoolFalse == test_12) {
    var_defaultConstructorName = var_superClassIndex.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 286)) ;
  }
  cEnumerator_typedPropertyList enumerator_10483 (var_currentClassTypedAttributeList, kEnumeration_up) ;
  bool bool_13 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_10483.hasCurrentObject () && bool_13) {
    while (enumerator_10483.hasCurrentObject () && bool_13) {
      const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, enumerator_10483.current_mAttributeTypeProxy (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 289)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_10483.current_mAttributeTypeProxy (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 289)).operator_not (SOURCE_FILE ("type-class.galgas", 289)) COMMA_SOURCE_FILE ("type-class.galgas", 289)).boolEnum () ;
      if (kBoolTrue == test_14) {
        var_defaultConstructorName = GALGAS_string::makeEmptyString () ;
      }
      enumerator_10483.gotoNextObject () ;
      if (enumerator_10483.hasCurrentObject ()) {
        bool_13 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mClassTypeName, object->mAttribute_mIsPredefined, object->mAttribute_mIsAbstract.operator_not (SOURCE_FILE ("type-class.galgas", 297)), var_superClassIndex, GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("type-class.galgas", 299)), GALGAS_bool (false), var_allTypedAttributeList, var_attributeMap, var_currentClassTypedAttributeList, var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 308)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 309)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 310)), GALGAS_uint ((uint32_t) 0U), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 312)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 313)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 314)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 315)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 316)), var_generateHeaderInSeparateFile, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 318)), var_defaultConstructorName, GALGAS_string ("class-").add_operation (object->mAttribute_mClassTypeName.getter_string (SOURCE_FILE ("type-class.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 320)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-class.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 294)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_classDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                               extensionMethod_classDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_classDeclarationAST_enterInSemanticContext (defineExtensionMethod_classDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Overriding extension method '@classDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_selfType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mClassTypeName, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 335)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_superClassProxy ;
  GALGAS_typedPropertyList var_allAttributeList ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 341)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_superClassProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 342)) ;
    var_allAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 343)) ;
    GALGAS_bool var_generatedInSeparateFileFeature = GALGAS_bool (false) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mClassFeatureList.getter_length (SOURCE_FILE ("type-class.galgas", 345)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_lstringlist enumerator_12829 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
      while (enumerator_12829.hasCurrentObject ()) {
        const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_12829.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 347)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          const enumGalgasBool test_3 = var_generatedInSeparateFileFeature.boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_location location_4 (enumerator_12829.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_4, GALGAS_string ("the 'generatedInSeparateFile' is already named")  COMMA_SOURCE_FILE ("type-class.galgas", 349)) ;
          }
          var_generatedInSeparateFileFeature = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_2) {
          GALGAS_location location_5 (enumerator_12829.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_5, GALGAS_string ("only the 'generatedInSeparateFile' feature is allowed here")  COMMA_SOURCE_FILE ("type-class.galgas", 353)) ;
        }
        enumerator_12829.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
    var_superClassProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mSuperClassName, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 358)) ;
    var_allAttributeList = var_superClassProxy.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 359)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, object->mAttribute_mClassFeatureList.getter_length (SOURCE_FILE ("type-class.galgas", 360)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      cEnumerator_lstringlist enumerator_13454 (object->mAttribute_mClassFeatureList, kEnumeration_up) ;
      while (enumerator_13454.hasCurrentObject ()) {
        GALGAS_location location_7 (enumerator_13454.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("a class that has a super class does not accept any feature")  COMMA_SOURCE_FILE ("type-class.galgas", 362)) ;
        enumerator_13454.gotoNextObject () ;
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 367)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 368)) ;
  cEnumerator_propertyInCollectionListAST enumerator_13722 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_13722.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_13722.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 370)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_13900 (enumerator_13722.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_13900.hasCurrentObject ()) {
      const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_13900.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 374)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
      if (kBoolTrue == test_8) {
        const enumGalgasBool test_9 = var_hasSetter.boolEnum () ;
        if (kBoolTrue == test_9) {
          GALGAS_location location_10 (enumerator_13900.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_10, GALGAS_string ("the 'setter' feature is already named")  COMMA_SOURCE_FILE ("type-class.galgas", 376)) ;
        }
        var_hasSetter = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_8) {
        const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_13900.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 379)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
        if (kBoolTrue == test_11) {
          const enumGalgasBool test_12 = var_hasGetter.operator_not (SOURCE_FILE ("type-class.galgas", 380)).boolEnum () ;
          if (kBoolTrue == test_12) {
            GALGAS_location location_13 (enumerator_13900.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_13, GALGAS_string ("the 'nogetter' feature is already named")  COMMA_SOURCE_FILE ("type-class.galgas", 381)) ;
          }
          var_hasGetter = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_11) {
          GALGAS_location location_14 (enumerator_13900.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_14, GALGAS_string ("only the 'setter' or 'nogetter' are allowed here")  COMMA_SOURCE_FILE ("type-class.galgas", 385)) ;
        }
      }
      enumerator_13900.gotoNextObject () ;
    }
    var_typedAttributeList.addAssign_operation (var_t, enumerator_13722.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("type-class.galgas", 388)) ;
    var_allAttributeList.addAssign_operation (var_t, enumerator_13722.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("type-class.galgas", 393)) ;
    {
    var_attributeMap.setter_insertKey (enumerator_13722.current_mPropertyName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 398)) ;
    }
    enumerator_13722.gotoNextObject () ;
  }
  GALGAS_string var_sortString = var_selfType.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 401)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t = var_selfType.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 402)) ;
  if (constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("type-class.galgas", 403)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 403)).isValid ()) {
    uint32_t variant_14748 = constinArgument_inSemanticContext.mAttribute_mTypeMap.getter_count (SOURCE_FILE ("type-class.galgas", 403)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 403)).uintValue () ;
    bool loop_14748 = true ;
    while (loop_14748) {
      loop_14748 = var_t.getter_isNull (SOURCE_FILE ("type-class.galgas", 404)).operator_not (SOURCE_FILE ("type-class.galgas", 404)).isValid () ;
      if (loop_14748) {
        loop_14748 = var_t.getter_isNull (SOURCE_FILE ("type-class.galgas", 404)).operator_not (SOURCE_FILE ("type-class.galgas", 404)).boolValue () ;
      }
      if (loop_14748 && (0 == variant_14748)) {
        loop_14748 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-class.galgas", 403)) ;
      }
      if (loop_14748) {
        variant_14748 -- ;
        var_sortString = var_t.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 405)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 405)).add_operation (var_sortString, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 405)) ;
        var_t = var_t.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 406)) ;
      }
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (object->mAttribute_mClassTypeName.getter_string (SOURCE_FILE ("type-class.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 410)), GALGAS_classTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mClassTypeName, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 412)), object->mAttribute_mIsAbstract, object->mAttribute_mClassTypeName, var_superClassProxy, var_allAttributeList, var_typedAttributeList, var_selfType.getter_mGenerateHeaderInSeparateFile (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 418))  COMMA_SOURCE_FILE ("type-class.galgas", 411)), var_sortString  COMMA_SOURCE_FILE ("type-class.galgas", 409)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_classDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                         extensionMethod_classDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_classDeclarationAST_semanticAnalysis (defineExtensionMethod_classDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@classTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 440)).operator_not (SOURCE_FILE ("type-class.galgas", 440)).boolEnum () ;
  if (kBoolTrue == test_0) {
    extensionMethod_addHeaderFileName (object->mAttribute_mSuperClass, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 441)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = object->mAttribute_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 447)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = object->mAttribute_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 447)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 445)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 446)), temp_1, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 450)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 444))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 453)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 454)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 455)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 456)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 457)), object->mAttribute_mTypeProxy.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 458)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 459)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 460)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 461)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 462)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 463)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 464)) COMMA_SOURCE_FILE ("type-class.galgas", 452))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 452)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_classTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                              extensionMethod_classTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_classTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_classTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@classTypeForGeneration appendDeclaration2'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          const GALGAS_string constinArgument_inOutputDirectory,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_17466 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_17466.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_17466.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 475)) ;
    enumerator_17466.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = object->mAttribute_mGenerateHeaderInSeparateFile.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = object->mAttribute_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 482)).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_2) {
      temp_1 = object->mAttribute_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 482)) ;
    }
    GALGAS_string var_part_31_ = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 480)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 481)), temp_1, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 479))) ;
    GALGAS_string temp_3 ;
    const enumGalgasBool test_4 = object->mAttribute_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 490)).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_4) {
      temp_3 = object->mAttribute_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 490)) ;
    }
    GALGAS_string var_part_32_ = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 488)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 489)), temp_3, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 487))) ;
    GALGAS_string var_headerFileName = GALGAS_string ("separateHeaderFor_").add_operation (object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 495)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 495)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 497)), var_headerFileName, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), var_part_31_, GALGAS_string ("\n"
      "\n"), var_part_32_, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 496)) ;
    }
    outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 507)).add_operation (GALGAS_string ("\"\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 507)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string temp_5 ;
    const enumGalgasBool test_6 = object->mAttribute_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 512)).boolEnum () ;
    if (kBoolTrue == test_6) {
      temp_5 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_6) {
      temp_5 = object->mAttribute_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 512)) ;
    }
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 510)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 511)), temp_5, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 509))) ;
    GALGAS_string temp_7 ;
    const enumGalgasBool test_8 = object->mAttribute_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 520)).boolEnum () ;
    if (kBoolTrue == test_8) {
      temp_7 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_8) {
      temp_7 = object->mAttribute_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 520)) ;
    }
    outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 518)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 519)), temp_7, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 517))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 517)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_classTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                              extensionMethod_classTypeForGeneration_appendDeclaration_32_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_classTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_classTypeForGeneration_appendDeclaration_32_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                 Overriding extension method '@classTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 534)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 538)).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = object->mAttribute_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 538)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 536)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 537)), temp_0, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mAllTypedAttributeList.getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint ((uint32_t) 0U), object->mAttribute_mAllTypedAttributeList.getter_length (SOURCE_FILE ("type-class.galgas", 541)).substract_operation (object->mAttribute_mTypedAttributeList.getter_length (SOURCE_FILE ("type-class.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 541))  COMMA_SOURCE_FILE ("type-class.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 541)), object->mAttribute_mIsAbstract, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 543)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 535))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_classTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                                     extensionMethod_classTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_classTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_classTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@enumDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mEnumTypeName.getter_string (SOURCE_FILE ("type-enum.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 75)), object->mAttribute_mEnumTypeName.getter_location (SOURCE_FILE ("type-enum.galgas", 75))  COMMA_SOURCE_FILE ("type-enum.galgas", 75)) ;
  {
  const GALGAS_enumDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 76)) ;
  }
  GALGAS_bool var_circularReference = GALGAS_bool (true) ;
  cEnumerator_enumConstantList enumerator_3670 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_3670.hasCurrentObject ()) {
    GALGAS_bool var_namesCurrentType = GALGAS_bool (false) ;
    cEnumerator__32_lstringlist enumerator_3751 (enumerator_3670.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_3751.hasCurrentObject ()) {
      GALGAS_lstring var_propertyKey = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3751.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("type-enum.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 82)), enumerator_3751.current_mValue_30_ (HERE).getter_location (SOURCE_FILE ("type-enum.galgas", 82))  COMMA_SOURCE_FILE ("type-enum.galgas", 82)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_propertyKey.mAttribute_string.objectCompare (var_key.mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_namesCurrentType = GALGAS_bool (true) ;
      }
      enumerator_3751.gotoNextObject () ;
    }
    const enumGalgasBool test_2 = var_namesCurrentType.operator_not (SOURCE_FILE ("type-enum.galgas", 87)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_circularReference = GALGAS_bool (false) ;
    }
    enumerator_3670.gotoNextObject () ;
  }
  cEnumerator_enumConstantList enumerator_4082 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_4082.hasCurrentObject ()) {
    cEnumerator__32_lstringlist enumerator_4130 (enumerator_4082.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_4130.hasCurrentObject ()) {
      GALGAS_lstring var_propertyKey = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_4130.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("type-enum.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 94)), enumerator_4130.current_mValue_30_ (HERE).getter_location (SOURCE_FILE ("type-enum.galgas", 94))  COMMA_SOURCE_FILE ("type-enum.galgas", 94)) ;
      GALGAS_bool test_3 = GALGAS_bool (kIsNotEqual, var_propertyKey.mAttribute_string.objectCompare (var_key.mAttribute_string)) ;
      if (kBoolTrue != test_3.boolEnum ()) {
        test_3 = var_circularReference ;
      }
      const enumGalgasBool test_4 = test_3.boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, var_propertyKey COMMA_SOURCE_FILE ("type-enum.galgas", 96)) ;
        }
      }
      enumerator_4130.gotoNextObject () ;
    }
    enumerator_4082.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                                extensionMethod_enumDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_enumDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@enumDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionModifierMapForBuildingContext constinArgument_inExtensionModifierMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 112)) ;
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 113)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 114)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 115)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_enumTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumTypeName, var_enumTypeProxy COMMA_SOURCE_FILE ("type-enum.galgas", 117)) ;
  }
  GALGAS_constantIndexMap var_constantMap = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 119)) ;
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantList enumerator_5513 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_5513.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxyList var_associatedTypeList = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 122)) ;
    GALGAS_functionSignature var_argumentTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 123)) ;
    cEnumerator__32_lstringlist enumerator_5680 (enumerator_5513.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_5680.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_5680.current_mValue_30_ (HERE), var_associatedTypeProxy COMMA_SOURCE_FILE ("type-enum.galgas", 125)) ;
      }
      var_argumentTypeList.addAssign_operation (enumerator_5680.current_mValue_31_ (HERE), var_associatedTypeProxy, enumerator_5680.current_mValue_30_ (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-enum.galgas", 126)) ;
      var_associatedTypeList.addAssign_operation (var_associatedTypeProxy  COMMA_SOURCE_FILE ("type-enum.galgas", 127)) ;
      var_hasAssociatedValues = GALGAS_bool (true) ;
      enumerator_5680.gotoNextObject () ;
    }
    {
    var_constantMap.setter_insertKey (enumerator_5513.current_mConstantName (HERE), var_constantMap.getter_count (SOURCE_FILE ("type-enum.galgas", 130)), var_associatedTypeList, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 130)) ;
    }
    {
    var_constructorMap.setter_insertOrReplace (enumerator_5513.current_mConstantName (HERE), var_argumentTypeList, GALGAS_bool (false), var_enumTypeProxy COMMA_SOURCE_FILE ("type-enum.galgas", 131)) ;
    }
    enumerator_5513.gotoNextObject () ;
  }
  cEnumerator_enumConstantList enumerator_6231 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_6231.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_6231.current_mAssociatedValueDefinitionList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 140)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_unifiedTypeMapProxyList var_associatedTypeList = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 141)) ;
      GALGAS_formalParameterSignature var_argumentTypeList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 142)) ;
      cEnumerator__32_lstringlist enumerator_6467 (enumerator_6231.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
      while (enumerator_6467.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy ;
        {
        GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_6467.current_mValue_30_ (HERE), var_associatedTypeProxy COMMA_SOURCE_FILE ("type-enum.galgas", 144)) ;
        }
        var_argumentTypeList.addAssign_operation (enumerator_6467.current_mValue_31_ (HERE), var_associatedTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-enum.galgas", 145)), enumerator_6467.current_mValue_30_ (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-enum.galgas", 145)) ;
        var_associatedTypeList.addAssign_operation (var_associatedTypeProxy  COMMA_SOURCE_FILE ("type-enum.galgas", 146)) ;
        var_hasAssociatedValues = GALGAS_bool (true) ;
        enumerator_6467.gotoNextObject () ;
      }
      {
      var_instanceMethodMap.setter_insertKey (enumerator_6231.current_mConstantName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-enum.galgas", 151)), var_argumentTypeList, enumerator_6231.current_mConstantName (HERE).mAttribute_location, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-enum.galgas", 155)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 149)) ;
      }
    }
    enumerator_6231.gotoNextObject () ;
  }
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 161)) ;
  }
  cEnumerator_enumConstantList enumerator_7128 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_7128.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("is").add_operation (enumerator_7128.current_mConstantName (HERE).mAttribute_string.getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-enum.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 166)), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 163)) ;
    }
    enumerator_7128.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mEnumTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 172)) ;
  }
  {
  GALGAS_headerKind temp_1 ;
  const enumGalgasBool test_2 = var_hasAssociatedValues.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-enum.galgas", 210)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-enum.galgas", 210)) ;
  }
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mEnumTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-enum.galgas", 187)), GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("type-enum.galgas", 188)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 190)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 191)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 192)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 197)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 198)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 199)), function_generateDescriptionGetterUtilityMethod (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 200)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 200)) COMMA_SOURCE_FILE ("type-enum.galgas", 200)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 201)), var_constantMap, object->mAttribute_mConstantList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 204)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 205)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-enum.galgas", 207)), GALGAS_string::makeEmptyString (), GALGAS_string ("enum-").add_operation (object->mAttribute_mEnumTypeName.getter_string (SOURCE_FILE ("type-enum.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 209)), temp_1, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 183)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                               extensionMethod_enumDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumDeclarationAST_enterInSemanticContext (defineExtensionMethod_enumDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Overriding extension method '@enumDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_stringlist var_constantList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 224)) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration = GALGAS_enumConstantListForGeneration::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 225)) ;
  GALGAS_constantIndexMap var_constantMap = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 226)) ;
  cEnumerator_enumConstantList enumerator_9556 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_9556.hasCurrentObject ()) {
    var_constantList.addAssign_operation (enumerator_9556.current_mConstantName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-enum.galgas", 228)) ;
    GALGAS_unifiedTypeMapProxyList var_associatedTypeList = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 229)) ;
    GALGAS_stringset var_associatedValueNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-enum.galgas", 230)) ;
    cEnumerator__32_lstringlist enumerator_9742 (enumerator_9556.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_9742.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_9742.current_mValue_30_ (HERE), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 232)) ;
      var_associatedTypeList.addAssign_operation (var_associatedTypeProxy  COMMA_SOURCE_FILE ("type-enum.galgas", 233)) ;
      const enumGalgasBool test_0 = var_associatedValueNameSet.getter_hasKey (enumerator_9742.current_mValue_31_ (HERE).mAttribute_string COMMA_SOURCE_FILE ("type-enum.galgas", 234)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_location location_1 (enumerator_9742.current_mValue_31_ (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_1, GALGAS_string ("duplicated name")  COMMA_SOURCE_FILE ("type-enum.galgas", 235)) ;
      }
      var_associatedValueNameSet.addAssign_operation (enumerator_9742.current_mValue_31_ (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-enum.galgas", 237)) ;
      enumerator_9742.gotoNextObject () ;
    }
    {
    var_constantMap.setter_insertKey (enumerator_9556.current_mConstantName (HERE), var_constantMap.getter_count (SOURCE_FILE ("type-enum.galgas", 239)), var_associatedTypeList, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 239)) ;
    }
    var_enumConstantListForGeneration.addAssign_operation (enumerator_9556.current_mConstantName (HERE).mAttribute_string, var_associatedTypeList  COMMA_SOURCE_FILE ("type-enum.galgas", 240)) ;
    enumerator_9556.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (object->mAttribute_mEnumTypeName.getter_string (SOURCE_FILE ("type-enum.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 244)), GALGAS_enumTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumTypeName, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 246)), var_enumConstantListForGeneration  COMMA_SOURCE_FILE ("type-enum.galgas", 245)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-enum.galgas", 243)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                         extensionMethod_enumDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumDeclarationAST_semanticAnalysis (defineExtensionMethod_enumDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension method '@enumTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_12296 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("type-enum.galgas", 298)).isValidAndTrue () ;
  if (enumerator_12296.hasCurrentObject () && bool_0) {
    while (enumerator_12296.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues = GALGAS_bool (kIsStrictSup, enumerator_12296.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 299)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_12296.gotoNextObject () ;
      if (enumerator_12296.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("type-enum.galgas", 298)).isValidAndTrue () ;
      }
    }
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 302)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 303)), object->mAttribute_mConstantList, var_hasAssociatedValues COMMA_SOURCE_FILE ("type-enum.galgas", 301))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 308)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 309)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 310)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 311)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 312)), object->mAttribute_mTypeProxy.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 313)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 314)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 315)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 316)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 317)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 318)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 319)) COMMA_SOURCE_FILE ("type-enum.galgas", 307))), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 307)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                              extensionMethod_enumTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_enumTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension method '@enumTypeForGeneration appendDeclaration2'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_13427 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("type-enum.galgas", 330)).isValidAndTrue () ;
  if (enumerator_13427.hasCurrentObject () && bool_0) {
    while (enumerator_13427.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues = GALGAS_bool (kIsStrictSup, enumerator_13427.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 331)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_13427.gotoNextObject () ;
      if (enumerator_13427.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("type-enum.galgas", 330)).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_enumConstantListForGeneration enumerator_13556 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_13556.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapProxyList enumerator_13598 (enumerator_13556.current_mAssociatedValueTypeList (HERE), kEnumeration_up) ;
    while (enumerator_13598.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_13598.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 335)) ;
      enumerator_13598.gotoNextObject () ;
    }
    enumerator_13556.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 339)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 340)), object->mAttribute_mConstantList, var_hasAssociatedValues COMMA_SOURCE_FILE ("type-enum.galgas", 338))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                              extensionMethod_enumTypeForGeneration_appendDeclaration_32_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_enumTypeForGeneration_appendDeclaration_32_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@enumTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_14200 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("type-enum.galgas", 353)).isValidAndTrue () ;
  if (enumerator_14200.hasCurrentObject () && bool_0) {
    while (enumerator_14200.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues = GALGAS_bool (kIsStrictSup, enumerator_14200.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 354)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_14200.gotoNextObject () ;
      if (enumerator_14200.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("type-enum.galgas", 353)).isValidAndTrue () ;
      }
    }
  }
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 356)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 358)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 359)), object->mAttribute_mConstantList, var_hasAssociatedValues COMMA_SOURCE_FILE ("type-enum.galgas", 357))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                                     extensionMethod_enumTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_enumTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@externTypeDeclarationAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externTypeDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                              GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mExternTypeName.getter_string (SOURCE_FILE ("type-extern.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 162)), object->mAttribute_mExternTypeName.getter_location (SOURCE_FILE ("type-extern.galgas", 162))  COMMA_SOURCE_FILE ("type-extern.galgas", 162)) ;
  {
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 163)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externTypeDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                                extensionMethod_externTypeDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_externTypeDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@externTypeDeclarationAST enterInSemanticContext'                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externTypeDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                             const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                             const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                             const GALGAS_extensionModifierMapForBuildingContext /* constinArgument_inExtensionModifierMapForBuildingContext */,
                                                                             GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 176)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 177)) ;
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 178)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 179)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 180)) ;
  cEnumerator_externTypeConstructorList enumerator_7199 (object->mAttribute_mExternTypeConstructorList, kEnumeration_up) ;
  while (enumerator_7199.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeProxy ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_7199.current_mResultTypeName (HERE), var_returnedTypeProxy COMMA_SOURCE_FILE ("type-extern.galgas", 184)) ;
    }
    GALGAS_functionSignature var_arguments = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 186)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_7435 (enumerator_7199.current_mParameterList (HERE), kEnumeration_up) ;
    while (enumerator_7435.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeProxy ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_7435.current_mFormalParameterTypeName (HERE), var_argumentTypeProxy COMMA_SOURCE_FILE ("type-extern.galgas", 189)) ;
      }
      var_arguments.addAssign_operation (enumerator_7435.current_mFormalSelector (HERE), var_argumentTypeProxy, enumerator_7435.current_mFormalParameterName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-extern.galgas", 190)) ;
      enumerator_7435.gotoNextObject () ;
    }
    {
    var_constructorMap.setter_insertKey (enumerator_7199.current_mConstructorName (HERE), var_arguments, GALGAS_bool (true), var_returnedTypeProxy, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 193)) ;
    }
    enumerator_7199.gotoNextObject () ;
  }
  cEnumerator_externTypeGetterList enumerator_7900 (object->mAttribute_mExternTypeGetterList, kEnumeration_up) ;
  while (enumerator_7900.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeProxy ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_7900.current_mResultTypeName (HERE), var_returnedTypeProxy COMMA_SOURCE_FILE ("type-extern.galgas", 203)) ;
    }
    GALGAS_functionSignature var_arguments = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 205)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_8124 (enumerator_7900.current_mParameterList (HERE), kEnumeration_up) ;
    while (enumerator_8124.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeProxy ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_8124.current_mFormalParameterTypeName (HERE), var_argumentTypeProxy COMMA_SOURCE_FILE ("type-extern.galgas", 208)) ;
      }
      var_arguments.addAssign_operation (enumerator_8124.current_mFormalSelector (HERE), var_argumentTypeProxy, enumerator_8124.current_mFormalParameterName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-extern.galgas", 209)) ;
      enumerator_8124.gotoNextObject () ;
    }
    {
    var_getterMap.setter_insertKey (enumerator_7900.current_mGetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 214)), var_arguments, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 216)), GALGAS_bool (true), var_returnedTypeProxy, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 219)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 212)) ;
    }
    enumerator_7900.gotoNextObject () ;
  }
  cEnumerator_externTypeModifierList enumerator_8706 (object->mAttribute_mExternTypeModifierList, kEnumeration_up) ;
  while (enumerator_8706.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 225)) ;
    cEnumerator_formalParameterListAST enumerator_8808 (enumerator_8706.current_mFormalParameterList (HERE), kEnumeration_up) ;
    while (enumerator_8808.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_8808.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("type-extern.galgas", 227)) ;
      }
      var_routineSignature.addAssign_operation (enumerator_8808.current_mFormalSelector (HERE), var_parameterTypeIndex, enumerator_8808.current_mFormalArgumentPassingMode (HERE), enumerator_8808.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-extern.galgas", 232)) ;
      enumerator_8808.gotoNextObject () ;
    }
    {
    var_modifierMap.setter_insertKey (enumerator_8706.current_mModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 237)), var_routineSignature, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 240)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 235)) ;
    }
    enumerator_8706.gotoNextObject () ;
  }
  cEnumerator_externTypeMethodList enumerator_9396 (object->mAttribute_mExternTypeMethodList, kEnumeration_up) ;
  while (enumerator_9396.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 246)) ;
    cEnumerator_formalParameterListAST enumerator_9498 (enumerator_9396.current_mFormalParameterList (HERE), kEnumeration_up) ;
    while (enumerator_9498.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_9498.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex COMMA_SOURCE_FILE ("type-extern.galgas", 249)) ;
      }
      var_routineSignature.addAssign_operation (enumerator_9498.current_mFormalSelector (HERE), var_parameterTypeIndex, enumerator_9498.current_mFormalArgumentPassingMode (HERE), enumerator_9498.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-extern.galgas", 254)) ;
      enumerator_9498.gotoNextObject () ;
    }
    {
    var_instanceMethodMap.setter_insertKey (enumerator_9396.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 259)), var_routineSignature, enumerator_9396.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 263)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 257)) ;
    }
    enumerator_9396.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mExternTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-extern.galgas", 272)), GALGAS_typeKindEnum::constructor_externType (SOURCE_FILE ("type-extern.galgas", 273)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 275)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 276)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 277)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 282)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 283)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 284)), GALGAS_uint ((uint32_t) 0U), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 286)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 287)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 288)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 289)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 290)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-extern.galgas", 292)), GALGAS_string ("default"), GALGAS_string ("externtype-").add_operation (object->mAttribute_mExternTypeName.getter_string (SOURCE_FILE ("type-extern.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 294)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-extern.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 268)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externTypeDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                               extensionMethod_externTypeDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterInSemanticContext (defineExtensionMethod_externTypeDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@externTypeDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externTypeDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                       GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_externTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mExternTypeName, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 309)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (object->mAttribute_mExternTypeName.getter_string (SOURCE_FILE ("type-extern.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 312)), GALGAS_externTypeDeclarationForGeneration::constructor_new (var_externTypeProxy, object->mAttribute_mExternTypeName.mAttribute_string, object->mAttribute_mCppPreDeclarationCode, object->mAttribute_mCppClassCode  COMMA_SOURCE_FILE ("type-extern.galgas", 313)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-extern.galgas", 311)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externTypeDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                         extensionMethod_externTypeDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externTypeDeclarationAST_semanticAnalysis (defineExtensionMethod_externTypeDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension method '@externTypeDeclarationForGeneration appendDeclaration1'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_string & outArgument_outHeader,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationForGeneration * object = (const cPtr_externTypeDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 338)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 339)), object->mAttribute_mCppPreDeclarationCode, object->mAttribute_mCppClassCode COMMA_SOURCE_FILE ("type-extern.galgas", 337))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 344)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 345)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 346)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 347)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 348)), object->mAttribute_mTypeProxy.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 349)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 350)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 351)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 352)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 353)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 354)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 355)) COMMA_SOURCE_FILE ("type-extern.galgas", 343))), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 343)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration.mSlotID,
                                              extensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension method '@graphDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mGraphTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 64)), object->mAttribute_mGraphTypeName.getter_location (SOURCE_FILE ("type-graph.galgas", 64))  COMMA_SOURCE_FILE ("type-graph.galgas", 64)) ;
  {
  const GALGAS_graphDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 65)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 66)), object->mAttribute_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-graph.galgas", 66))  COMMA_SOURCE_FILE ("type-graph.galgas", 66)) COMMA_SOURCE_FILE ("type-graph.galgas", 66)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                                extensionMethod_graphDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_graphDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@graphDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionModifierMapForBuildingContext constinArgument_inExtensionModifierMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeProxy COMMA_SOURCE_FILE ("type-graph.galgas", 79)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeProxy COMMA_SOURCE_FILE ("type-graph.galgas", 85)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_graphTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mGraphTypeName, var_graphTypeProxy COMMA_SOURCE_FILE ("type-graph.galgas", 91)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, var_associatedListTypeProxy COMMA_SOURCE_FILE ("type-graph.galgas", 97)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringListTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeProxy COMMA_SOURCE_FILE ("type-graph.galgas", 103)) ;
  }
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 109)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 110)) ;
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 111)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 112)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 113)) ;
  GALGAS_formalParameterSignature var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 115)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 117)), var_associatedListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 119)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 116)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 122)), var_lstringListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 124)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 121)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 127)), var_associatedListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 129)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 126)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 132)), var_lstringListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 134)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 131)) ;
  {
  var_instanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("topologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 137))  COMMA_SOURCE_FILE ("type-graph.galgas", 137)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 138)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 140)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 142)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 136)) ;
  }
  {
  var_instanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 146))  COMMA_SOURCE_FILE ("type-graph.galgas", 146)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 147)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 149)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 151)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 145)) ;
  }
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 156)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 158)), var_associatedListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 160)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 157)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 163)), var_lstringListTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 165)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 162)) ;
  {
  var_instanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("circularities"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 168))  COMMA_SOURCE_FILE ("type-graph.galgas", 168)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 169)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 171)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 173)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 167)) ;
  }
  {
  var_instanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 177))  COMMA_SOURCE_FILE ("type-graph.galgas", 177)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 178)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 180)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 182)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 176)) ;
  }
  {
  var_instanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 186))  COMMA_SOURCE_FILE ("type-graph.galgas", 186)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 187)), var_formalParameterList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 189)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 191)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 185)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("reversedGraph"), object->mAttribute_mGraphTypeName.mAttribute_string, GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 196)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 204)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 212)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 220)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 228)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isNodeDefined"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 236)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 246)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lkeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 254)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("edges"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 262)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), object->mAttribute_mGraphTypeName.mAttribute_string, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 270)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("accessibleNodesFromNodes"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeStringList"), GALGAS_string ("lstringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 282)) ;
  }
  {
  var_constructorMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("emptyGraph"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 293))  COMMA_SOURCE_FILE ("type-graph.galgas", 293)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 294)), GALGAS_bool (false), var_graphTypeProxy, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 292)) ;
  }
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 299)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 301)), var_lstringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 303)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 300)) ;
  cEnumerator_functionSignature enumerator_10402 (var_associatedListTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 305)), kEnumeration_up) ;
  while (enumerator_10402.hasCurrentObject ()) {
    var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 307)), enumerator_10402.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 309)), enumerator_10402.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 306)) ;
    enumerator_10402.gotoNextObject () ;
  }
  cEnumerator_graphInsertModifierList enumerator_10592 (object->mAttribute_mInsertModifierList, kEnumeration_up) ;
  while (enumerator_10592.hasCurrentObject ()) {
    {
    var_modifierMap.setter_insertOrReplace (enumerator_10592.current_mInsertModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 315)), var_formalParameterList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 318)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-graph.galgas", 313)) ;
    }
    enumerator_10592.gotoNextObject () ;
  }
  {
  var_modifierMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 325))  COMMA_SOURCE_FILE ("type-graph.galgas", 325)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 326)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 327)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 329)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 324)) ;
  }
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 333)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 334)), var_stringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 334)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("type-graph.galgas", 334)) ;
  {
  var_modifierMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 336))  COMMA_SOURCE_FILE ("type-graph.galgas", 336)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 337)), var_formalParameterList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 340)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 335)) ;
  }
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 345)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 346)), var_lstringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 346)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 346)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 347)), var_lstringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 347)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 347)) ;
  {
  var_modifierMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("addEdge"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 349))  COMMA_SOURCE_FILE ("type-graph.galgas", 349)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 350)), var_formalParameterList, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 353)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 348)) ;
  }
  var_formalParameterList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 358)) ;
  var_formalParameterList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 359)), var_lstringTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 359)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 359)) ;
  {
  var_modifierMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("noteNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 361))  COMMA_SOURCE_FILE ("type-graph.galgas", 361)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 362)), var_formalParameterList, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 365)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 360)) ;
  }
  {
  routine_addCategories (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mGraphTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 370)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mGraphTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-graph.galgas", 385)), GALGAS_typeKindEnum::constructor_graphType (SOURCE_FILE ("type-graph.galgas", 386)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 388)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 389)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 390)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 395)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 396)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 397)), function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 398)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 399)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 400)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 401)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 402)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 403)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-graph.galgas", 405)), GALGAS_string ("emptyGraph"), GALGAS_string ("graph-").add_operation (object->mAttribute_mGraphTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 407)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-graph.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 381)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                               extensionMethod_graphDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationAST_enterInSemanticContext (defineExtensionMethod_graphDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Overriding extension method '@graphDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_graphTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mGraphTypeName, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 421)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 422)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListElementTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mAssociatedListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 425)), object->mAttribute_mAssociatedListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-graph.galgas", 425)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 423)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_associatedListTypeProxy.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 426)).objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-graph.galgas", 426)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedListTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '@").add_operation (object->mAttribute_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 427)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 427))  COMMA_SOURCE_FILE ("type-graph.galgas", 427)) ;
  }
  GALGAS_stringset var_reservedModifierNames = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-graph.galgas", 430)) ;
  var_reservedModifierNames.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("type-graph.galgas", 431)) ;
  var_reservedModifierNames.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("type-graph.galgas", 432)) ;
  cEnumerator_graphInsertModifierList enumerator_15310 (object->mAttribute_mInsertModifierList, kEnumeration_up) ;
  while (enumerator_15310.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_reservedModifierNames.getter_hasKey (enumerator_15310.current_mInsertModifierName (HERE).getter_string (SOURCE_FILE ("type-graph.galgas", 434)) COMMA_SOURCE_FILE ("type-graph.galgas", 434)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (enumerator_15310.current_mInsertModifierName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (enumerator_15310.current_mInsertModifierName (HERE).getter_string (SOURCE_FILE ("type-graph.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 435)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 435))  COMMA_SOURCE_FILE ("type-graph.galgas", 435)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_15310.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 437)) ;
    }
    enumerator_15310.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (object->mAttribute_mGraphTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 441)), GALGAS_graphDeclarationForGeneration::constructor_new (var_graphTypeProxy, var_associatedListTypeProxy, var_associatedListElementTypeProxy, object->mAttribute_mInsertModifierList  COMMA_SOURCE_FILE ("type-graph.galgas", 442)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-graph.galgas", 440)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                         extensionMethod_graphDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationAST_semanticAnalysis (defineExtensionMethod_graphDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                   Overriding extension method '@graphDeclarationForGeneration appendDeclaration1'                   *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_string & outArgument_outHeader,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 466)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 467)) COMMA_SOURCE_FILE ("type-graph.galgas", 465))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 470)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 471)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 472)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 473)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 474)), object->mAttribute_mTypeProxy.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 475)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 476)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 477)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 478)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 479)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 480)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 481)) COMMA_SOURCE_FILE ("type-graph.galgas", 469))), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 469)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                              extensionMethod_graphDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_graphDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//              Overriding extension method '@graphDeclarationForGeneration appendSpecificImplementation'              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_string & outArgument_outImplementation,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 491)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mAssociatedListTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 492)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mAssociatedListElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 493)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy, object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 496)), object->mAttribute_mAssociatedListTypeProxy, object->mAttribute_mInsertModifierList COMMA_SOURCE_FILE ("type-graph.galgas", 494))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                                     extensionMethod_graphDeclarationForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_graphDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@listDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 48)), object->mAttribute_mListTypeName.getter_location (SOURCE_FILE ("type-list.galgas", 48))  COMMA_SOURCE_FILE ("type-list.galgas", 48)) ;
  {
  const GALGAS_listDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 49)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_2411 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_2411.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2411.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 51)), enumerator_2411.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 51))  COMMA_SOURCE_FILE ("type-list.galgas", 51)) COMMA_SOURCE_FILE ("type-list.galgas", 51)) ;
    }
    enumerator_2411.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                                extensionMethod_listDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_listDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@listDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionModifierMapForBuildingContext constinArgument_inExtensionModifierMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 65)) ;
  cEnumerator_propertyInCollectionListAST enumerator_3368 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3368.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_3368.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("type-list.galgas", 67)) ;
    }
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_3585 (enumerator_3368.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_3585.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_3585.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_hasGetter = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_3585.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_hasSetter = GALGAS_bool (true) ;
        }
      }
      enumerator_3585.gotoNextObject () ;
    }
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_3368.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("type-list.galgas", 77)) ;
    enumerator_3368.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_uintType ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("uint"), var_uintType COMMA_SOURCE_FILE ("type-list.galgas", 80)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListTypeName, var_listTypeIndex COMMA_SOURCE_FILE ("type-list.galgas", 82)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 86)), object->mAttribute_mListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-list.galgas", 86)), var_listElementTypeIndex COMMA_SOURCE_FILE ("type-list.galgas", 84)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 90)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 91)) ;
  GALGAS_formalParameterSignature var_modifierOutputFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 92)) ;
  GALGAS_formalParameterSignature var_modifierInputFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 93)) ;
  cEnumerator_typedPropertyList enumerator_4701 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_4701.hasCurrentObject ()) {
    var_enumerationDescriptor.addAssign_operation (enumerator_4701.current_mAttributeTypeProxy (HERE), enumerator_4701.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 95))  COMMA_SOURCE_FILE ("type-list.galgas", 95)) ;
    var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 96)), enumerator_4701.current_mAttributeTypeProxy (HERE), enumerator_4701.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-list.galgas", 96)) ;
    var_modifierOutputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 97)), enumerator_4701.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-list.galgas", 97)), enumerator_4701.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-list.galgas", 97)) ;
    var_modifierInputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 98)), enumerator_4701.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 98)), enumerator_4701.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-list.galgas", 98)) ;
    enumerator_4701.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 101)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyList"), object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 106)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 102)) ;
  }
  {
  var_constructorMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("listWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 110))  COMMA_SOURCE_FILE ("type-list.galgas", 110)), var_constructorAttributeTypeList, GALGAS_bool (false), var_listTypeIndex, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 109)) ;
  }
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 116)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 117)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 124)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 135)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 131)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subListToIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 142)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 138)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 149)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 145)) ;
  }
  cEnumerator_typedPropertyList enumerator_6578 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_6578.hasCurrentObject ()) {
    const enumGalgasBool test_2 = enumerator_6578.current_mHasGetter (HERE).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      GALGAS_functionSignature temp_3 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 157)) ;
      temp_3.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 157)), var_uintType, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 157)) ;
      var_getterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (enumerator_6578.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 155)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 155)), enumerator_6578.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 155))  COMMA_SOURCE_FILE ("type-list.galgas", 155)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 156)), temp_3, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 158)), GALGAS_bool (true), enumerator_6578.current_mAttributeTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 161)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 154)) ;
      }
    }
    enumerator_6578.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 167)) ;
  {
  var_instanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("first"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 169))  COMMA_SOURCE_FILE ("type-list.galgas", 169)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 170)), var_modifierOutputFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 172)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 174)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 168)) ;
  }
  {
  var_instanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("last"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 178))  COMMA_SOURCE_FILE ("type-list.galgas", 178)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 179)), var_modifierOutputFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 181)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 183)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 177)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 187)) ;
  {
  var_modifierMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popFirst"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 189))  COMMA_SOURCE_FILE ("type-list.galgas", 189)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 190)), var_modifierOutputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 193)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 188)) ;
  }
  {
  var_modifierMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popLast"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 197))  COMMA_SOURCE_FILE ("type-list.galgas", 197)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 198)), var_modifierOutputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 201)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 196)) ;
  }
  var_modifierOutputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 204)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 204)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 204)) ;
  {
  var_modifierMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 206))  COMMA_SOURCE_FILE ("type-list.galgas", 206)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 207)), var_modifierOutputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 210)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 205)) ;
  }
  cEnumerator_typedPropertyList enumerator_8427 (var_typedAttributeList, kEnumeration_up) ;
  while (enumerator_8427.hasCurrentObject ()) {
    const enumGalgasBool test_4 = enumerator_8427.current_mHasSetter (HERE).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_formalParameterSignature var_setterFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 216)) ;
      var_setterFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 217)), enumerator_8427.current_mAttributeTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 217)), enumerator_8427.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-list.galgas", 217)) ;
      var_setterFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 218)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 218)), enumerator_8427.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-list.galgas", 218)) ;
      {
      var_modifierMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_8427.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 220)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-list.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 220)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 220)), enumerator_8427.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 220))  COMMA_SOURCE_FILE ("type-list.galgas", 220)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 221)), var_setterFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 224)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 219)) ;
      }
    }
    enumerator_8427.gotoNextObject () ;
  }
  var_modifierInputFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 230)), var_uintType, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 230)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 230)) ;
  {
  var_modifierMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 232))  COMMA_SOURCE_FILE ("type-list.galgas", 232)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 233)), var_modifierInputFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 236)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 231)) ;
  }
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 241)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("type-list.galgas", 242)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("type-list.galgas", 243)) ;
  {
  routine_addCategories (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mListTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 245)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mListTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-list.galgas", 260)), GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-list.galgas", 261)), GALGAS_bool (true), var_typedAttributeList, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 264)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 265)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 270)), var_enumerationDescriptor, var_enumerationVariants, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 273)).operator_or (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 273)) COMMA_SOURCE_FILE ("type-list.galgas", 273)).operator_or (function_infixAddOperator (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 273)) COMMA_SOURCE_FILE ("type-list.galgas", 273)), var_constructorAttributeTypeList, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 275)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 276)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 277)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 278)), GALGAS_bool (false), var_listElementTypeIndex, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 282)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-list.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 256)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                               extensionMethod_listDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listDeclarationAST_enterInSemanticContext (defineExtensionMethod_listDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension method '@listDeclarationAST addAssociatedElement'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 292)) ;
  cEnumerator_propertyInCollectionListAST enumerator_11238 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_11238.hasCurrentObject ()) {
    var_structAttributeList.addAssign_operation (enumerator_11238.current_mPropertyTypeName (HERE), enumerator_11238.current_mPropertyName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 297))  COMMA_SOURCE_FILE ("type-list.galgas", 294)) ;
    enumerator_11238.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 301)), object->mAttribute_mListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-list.galgas", 301)), var_structAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-list.galgas", 299))  COMMA_SOURCE_FILE ("type-list.galgas", 299)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                             extensionMethod_listDeclarationAST_addAssociatedElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listDeclarationAST_addAssociatedElement (defineExtensionMethod_listDeclarationAST_addAssociatedElement, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                         Overriding extension method '@listDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 317)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 318)) ;
  cEnumerator_propertyInCollectionListAST enumerator_12307 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_12307.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_12307.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 320)) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_12481 (enumerator_12307.current_mFeatureList (HERE), kEnumeration_up) ;
    while (enumerator_12481.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_12481.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = var_hasGetter.operator_not (SOURCE_FILE ("type-list.galgas", 325)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_location location_2 (enumerator_12481.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_2, GALGAS_string ("duplicate feature")  COMMA_SOURCE_FILE ("type-list.galgas", 326)) ;
        }
        var_hasGetter = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_12481.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const enumGalgasBool test_4 = var_hasSetter.boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_location location_5 (enumerator_12481.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_5, GALGAS_string ("duplicate feature")  COMMA_SOURCE_FILE ("type-list.galgas", 331)) ;
          }
          var_hasSetter = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_3) {
          GALGAS_location location_6 (enumerator_12481.current_mValue (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_6, GALGAS_string ("unknown feature; the features available here are: 'nogetter', 'setter'")  COMMA_SOURCE_FILE ("type-list.galgas", 335)) ;
        }
      }
      enumerator_12481.gotoNextObject () ;
    }
    var_typedAttributeList.addAssign_operation (var_t, enumerator_12307.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("type-list.galgas", 338)) ;
    {
    var_attributeMap.setter_insertKey (enumerator_12307.current_mPropertyName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 343)) ;
    }
    enumerator_12307.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (object->mAttribute_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 347)), GALGAS_listTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListTypeName, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 349)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 350)), object->mAttribute_mListTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-list.galgas", 350)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 350)), var_typedAttributeList  COMMA_SOURCE_FILE ("type-list.galgas", 348)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-list.galgas", 346)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                         extensionMethod_listDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listDeclarationAST_semanticAnalysis (defineExtensionMethod_listDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                       Overriding extension method '@listTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 387)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 388)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("type-list.galgas", 386))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 392)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 393)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 394)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 395)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 396)), object->mAttribute_mTypeProxy.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 397)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 398)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 399)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 400)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 401)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 402)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 403)) COMMA_SOURCE_FILE ("type-list.galgas", 391))), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 391)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                              extensionMethod_listTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_listTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                  Overriding extension method '@listTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_15689 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_15689.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_15689.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 414)) ;
    enumerator_15689.gotoNextObject () ;
  }
  extensionMethod_addHeaderFileName (object->mAttribute_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 416)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 417)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 419)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 420)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("type-list.galgas", 418))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                                     extensionMethod_listTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_listTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                      Overriding extension method '@listmapDeclarationAST addAssociatedElement'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 37)) ;
  var_structAttributeList.addAssign_operation (GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 40)), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 41)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 42))  COMMA_SOURCE_FILE ("type-listmap.galgas", 38)) ;
  var_structAttributeList.addAssign_operation (object->mAttribute_mAssociatedListTypeName, GALGAS_string ("mList").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 46)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 47))  COMMA_SOURCE_FILE ("type-listmap.galgas", 43)) ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mListmapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 51)), object->mAttribute_mListmapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-listmap.galgas", 51)), var_structAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 49))  COMMA_SOURCE_FILE ("type-listmap.galgas", 49)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                             extensionMethod_listmapDeclarationAST_addAssociatedElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapDeclarationAST_addAssociatedElement (defineExtensionMethod_listmapDeclarationAST_addAssociatedElement, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                    Overriding extension method '@listmapDeclarationAST enterDeclarationInGraph'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                           GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                           GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                           GALGAS_extensionModifierMapForBuildingContext & /* ioArgument_ioExtensionModifierMapForBuildingContext */,
                                                                           GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mListmapTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 67)), object->mAttribute_mListmapTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 67))  COMMA_SOURCE_FILE ("type-listmap.galgas", 67)) ;
  {
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 68)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 69)), object->mAttribute_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 69))  COMMA_SOURCE_FILE ("type-listmap.galgas", 69)) COMMA_SOURCE_FILE ("type-listmap.galgas", 69)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                                extensionMethod_listmapDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_listmapDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension method '@listmapDeclarationAST enterInSemanticContext'                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                          const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                          const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                          const GALGAS_extensionModifierMapForBuildingContext constinArgument_inExtensionModifierMapForBuildingContext,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum ;
  GALGAS_typedPropertyList var_listTypedAttributeList ;
  GALGAS_bool joker_4267_3 ; // Joker input parameter
  GALGAS_bool joker_4267_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_4267_1 ; // Joker input parameter
  GALGAS_bool joker_4311 ; // Joker input parameter
  GALGAS_attributeMap joker_4369_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_4369_19 ; // Joker input parameter
  GALGAS_constructorMap joker_4369_18 ; // Joker input parameter
  GALGAS_getterMap joker_4369_17 ; // Joker input parameter
  GALGAS_setterMap joker_4369_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_4369_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_4369_14 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_4369_13 ; // Joker input parameter
  GALGAS_stringlist joker_4369_12 ; // Joker input parameter
  GALGAS_uint joker_4369_11 ; // Joker input parameter
  GALGAS_functionSignature joker_4369_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_4369_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_4369_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_4369_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_4369_6 ; // Joker input parameter
  GALGAS_bool joker_4369_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_4369_4 ; // Joker input parameter
  GALGAS_string joker_4369_3 ; // Joker input parameter
  GALGAS_string joker_4369_2 ; // Joker input parameter
  GALGAS_headerKind joker_4369_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedListTypeName, joker_4267_3, joker_4267_2, joker_4267_1, var_typeKindEnum, joker_4311, var_listTypedAttributeList, joker_4369_20, joker_4369_19, joker_4369_18, joker_4369_17, joker_4369_16, joker_4369_15, joker_4369_14, joker_4369_13, joker_4369_12, joker_4369_11, joker_4369_10, joker_4369_9, joker_4369_8, joker_4369_7, joker_4369_6, joker_4369_5, joker_4369_4, joker_4369_3, joker_4369_2, joker_4369_1, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 82)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 90)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedListTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '@").add_operation (object->mAttribute_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 91)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 91))  COMMA_SOURCE_FILE ("type-listmap.galgas", 91)) ;
    var_listTypedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 92)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 95)) ;
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 96)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 97)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 98)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, var_associatedListTypeIndex COMMA_SOURCE_FILE ("type-listmap.galgas", 100)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("type-listmap.galgas", 102)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 104)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 111)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 118)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("listForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), object->mAttribute_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 131)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 125)) ;
  }
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyMap"), object->mAttribute_mListmapTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 139)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 135)) ;
  }
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 143)) ;
  var_enumeratorDescriptor.addAssign_operation (var_stringTypeIndex, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-listmap.galgas", 144)) ;
  var_enumeratorDescriptor.addAssign_operation (var_associatedListTypeIndex, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("type-listmap.galgas", 145)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 147)) ;
  var_addAssignOperatorDescription.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 148)), var_stringTypeIndex, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-listmap.galgas", 148)) ;
  cEnumerator_typedPropertyList enumerator_6490 (var_listTypedAttributeList, kEnumeration_up) ;
  while (enumerator_6490.hasCurrentObject ()) {
    var_addAssignOperatorDescription.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 150)), enumerator_6490.current_mAttributeTypeProxy (HERE), enumerator_6490.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("type-listmap.galgas", 150)) ;
    enumerator_6490.gotoNextObject () ;
  }
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 153)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("type-listmap.galgas", 154)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("type-listmap.galgas", 155)) ;
  {
  routine_addCategories (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mListmapTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 157)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListmapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 170)), object->mAttribute_mListmapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-listmap.galgas", 170)), var_listElementTypeIndex COMMA_SOURCE_FILE ("type-listmap.galgas", 168)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.setter_insertKey (object->mAttribute_mListmapTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-listmap.galgas", 178)), GALGAS_typeKindEnum::constructor_arrayType (SOURCE_FILE ("type-listmap.galgas", 179)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 181)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 182)), var_listTypedAttributeList, var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 188)), var_enumeratorDescriptor, var_enumerationVariants, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 191)), var_addAssignOperatorDescription, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 193)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 194)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 195)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 196)), GALGAS_bool (false), var_listElementTypeIndex, GALGAS_string ("emptyMap"), GALGAS_string ("listmap-").add_operation (object->mAttribute_mListmapTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 200)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-listmap.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 174)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                               extensionMethod_listmapDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterInSemanticContext (defineExtensionMethod_listmapDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Overriding extension method '@listmapDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

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
  GALGAS_bool joker_8912_3 ; // Joker input parameter
  GALGAS_bool joker_8912_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_8912_1 ; // Joker input parameter
  GALGAS_bool joker_8956 ; // Joker input parameter
  GALGAS_attributeMap joker_9013_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9013_19 ; // Joker input parameter
  GALGAS_constructorMap joker_9013_18 ; // Joker input parameter
  GALGAS_getterMap joker_9013_17 ; // Joker input parameter
  GALGAS_setterMap joker_9013_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9013_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_9013_14 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9013_13 ; // Joker input parameter
  GALGAS_stringlist joker_9013_12 ; // Joker input parameter
  GALGAS_uint joker_9013_11 ; // Joker input parameter
  GALGAS_functionSignature joker_9013_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9013_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_9013_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9013_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9013_6 ; // Joker input parameter
  GALGAS_bool joker_9013_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9013_4 ; // Joker input parameter
  GALGAS_string joker_9013_3 ; // Joker input parameter
  GALGAS_string joker_9013_2 ; // Joker input parameter
  GALGAS_headerKind joker_9013_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedListTypeName, joker_8912_3, joker_8912_2, joker_8912_1, var_typeKindEnum, joker_8956, var_listTypeAttributeList, joker_9013_20, joker_9013_19, joker_9013_18, joker_9013_17, joker_9013_16, joker_9013_15, joker_9013_14, joker_9013_13, joker_9013_12, joker_9013_11, joker_9013_10, joker_9013_9, joker_9013_8, joker_9013_7, joker_9013_6, joker_9013_5, joker_9013_4, joker_9013_3, joker_9013_2, joker_9013_1, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 216)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 225)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedListTypeName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("associated type should be a list type")  COMMA_SOURCE_FILE ("type-listmap.galgas", 226)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (object->mAttribute_mListmapTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 230)), GALGAS_listmapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mListmapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 232)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedListTypeName, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 233)), var_listTypeAttributeList, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (object->mAttribute_mListmapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 235)), object->mAttribute_mListmapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-listmap.galgas", 235)), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 235))  COMMA_SOURCE_FILE ("type-listmap.galgas", 231)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 229)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                         extensionMethod_listmapDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapDeclarationAST_semanticAnalysis (defineExtensionMethod_listmapDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                     Overriding extension method '@listmapTypeForGeneration appendDeclaration1'                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapTypeForGeneration * object = (const cPtr_listmapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listmapTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_10530 (object->mAttribute_mAssociatedListTypedAttributeList, kEnumeration_up) ;
  while (enumerator_10530.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_10530.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 256)) ;
    enumerator_10530.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 260)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 261)) COMMA_SOURCE_FILE ("type-listmap.galgas", 259))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 264)), object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 265)), object->mAttribute_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 266)), object->mAttribute_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 267)), object->mAttribute_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 268)), object->mAttribute_mTypeProxy.getter_mModifierMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 269)), object->mAttribute_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 270)), object->mAttribute_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 271)), object->mAttribute_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 272)), object->mAttribute_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 273)), object->mAttribute_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 274)), object->mAttribute_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 275)) COMMA_SOURCE_FILE ("type-listmap.galgas", 263))), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 263)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listmapTypeForGeneration.mSlotID,
                                              extensionMethod_listmapTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_listmapTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                Overriding extension method '@listmapTypeForGeneration appendSpecificImplementation'                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                   const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapTypeForGeneration * object = (const cPtr_listmapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listmapTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 285)) ;
  extensionMethod_addHeaderFileName (object->mAttribute_mAssociatedListMapElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 286)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 288)), object->mAttribute_mAssociatedListTypeIndex.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 289)), object->mAttribute_mAssociatedListTypedAttributeList COMMA_SOURCE_FILE ("type-listmap.galgas", 287))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listmapTypeForGeneration.mSlotID,
                                                     extensionMethod_listmapTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_listmapTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                        Overriding extension method '@mapDeclarationAST addAssociatedElement'                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 155)) ;
  var_structAttributeList.addAssign_operation (GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("type-map.galgas", 158)), GALGAS_string ("lkey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 159)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 160))  COMMA_SOURCE_FILE ("type-map.galgas", 156)) ;
  cEnumerator_propertyInCollectionListAST enumerator_5648 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_5648.hasCurrentObject ()) {
    var_structAttributeList.addAssign_operation (enumerator_5648.current_mPropertyTypeName (HERE), enumerator_5648.current_mPropertyName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 166))  COMMA_SOURCE_FILE ("type-map.galgas", 162)) ;
    enumerator_5648.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mAttribute_mIsPredefined, GALGAS_lstring::constructor_new (object->mAttribute_mMapTypeName.mAttribute_string.add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 170)), object->mAttribute_mMapTypeName.mAttribute_location  COMMA_SOURCE_FILE ("type-map.galgas", 170)), var_structAttributeList, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-map.galgas", 168))  COMMA_SOURCE_FILE ("type-map.galgas", 168)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                             extensionMethod_mapDeclarationAST_addAssociatedElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapDeclarationAST_addAssociatedElement (defineExtensionMethod_mapDeclarationAST_addAssociatedElement, NULL) ;

