#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-33.h"


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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 506)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 506)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 508)) ;
  GALGAS_string var_testVar = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 516)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 516)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_bool ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 517)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 517)).add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 517)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 517))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 517)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 518)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 518))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 518)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 520)) ;
  }
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 521)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (var_testVar.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 528)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 528)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 528))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 528)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 529)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 530)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 542)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 542)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 545)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 548)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsEqual, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 550)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 550)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 550)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 550)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 561)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 561)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 564)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 567)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsNotEqual, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 569)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 569)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 569)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 569)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 580)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 580)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 583)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 586)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsInfOrEqual, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 588)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 588)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 588)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 588)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 599)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 599)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 602)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 605)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsSupOrEqual, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 607)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 607)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 607)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 607)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 618)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 618)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 621)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 624)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsStrictSup, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 626)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 626)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 626)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 626)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 637)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 637)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 640)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 643)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsStrictInf, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 645)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 645)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 645)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 645)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 656)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 656)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 659)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 662)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".right_shift_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 664)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 664)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 665)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 665)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 665)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 676)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 676)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 679)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 682)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".left_shift_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 684)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 684)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 685)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 685)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 685)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 697)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 697)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 699)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 707)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".add_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 715)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 715)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 716)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 716)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 716)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 716)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 717)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 717)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 729)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 729)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 731)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 739)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".add_operation_no_ovf ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 747)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 747)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 747)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 758)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 758)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 761)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 764)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 766)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 766)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 767)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 767)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 767)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 767)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 767)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 767)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 768)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 768)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 779)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 779)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 782)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 785)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".substract_operation_no_ovf ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 787)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 787)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 787)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_subExpressionNoOverflowForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_subExpressionNoOverflowForGeneration.mSlotID,
                                          categoryMethod_subExpressionNoOverflowForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionNoOverflowForGeneration_generateExpression (defineCategoryMethod_subExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@multiplicationExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_multiplicationExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionForGeneration * object = (const cPtr_multiplicationExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 798)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 798)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 801)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 804)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".multiply_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 806)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 806)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 807)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 807)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 807)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 807)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 807)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 807)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 808)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 808)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_multiplicationExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_multiplicationExpressionForGeneration.mSlotID,
                                          categoryMethod_multiplicationExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multiplicationExpressionForGeneration_generateExpression (defineCategoryMethod_multiplicationExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@multiplicationExpressionNoOverflowForGeneration generateExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                               GALGAS_string & outArgument_outCppExpression,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionNoOverflowForGeneration * object = (const cPtr_multiplicationExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionNoOverflowForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 819)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 819)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 822)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 825)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".multiply_operation_no_ovf ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 827)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 827)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 827)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowForGeneration.mSlotID,
                                          categoryMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression (defineCategoryMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@divisionExpressionForGeneration generateExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_divisionExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               GALGAS_string & outArgument_outCppExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionForGeneration * object = (const cPtr_divisionExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 838)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 838)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 841)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 844)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".divide_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 846)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 846)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 847)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 847)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 847)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 847)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 847)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 847)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 848)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 848)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_divisionExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_divisionExpressionForGeneration.mSlotID,
                                          categoryMethod_divisionExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divisionExpressionForGeneration_generateExpression (defineCategoryMethod_divisionExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@divisionExpressionNoOverflowForGeneration generateExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_divisionExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionNoOverflowForGeneration * object = (const cPtr_divisionExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionNoOverflowForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 859)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 859)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 862)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 865)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".divide_operation_no_ovf ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 867)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 867)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 867)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_divisionExpressionNoOverflowForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_divisionExpressionNoOverflowForGeneration.mSlotID,
                                          categoryMethod_divisionExpressionNoOverflowForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divisionExpressionNoOverflowForGeneration_generateExpression (defineCategoryMethod_divisionExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@moduloExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_moduloExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduloExpressionForGeneration * object = (const cPtr_moduloExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_moduloExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 878)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 878)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 881)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 884)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".modulo_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 886)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 886)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 887)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 887)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 887)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 887)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 887)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 887)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 888)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 888)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_moduloExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_moduloExpressionForGeneration.mSlotID,
                                          categoryMethod_moduloExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduloExpressionForGeneration_generateExpression (defineCategoryMethod_moduloExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@unaryMinusExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_unaryMinusExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusExpressionForGeneration * object = (const cPtr_unaryMinusExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 899)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 899)) ;
  GALGAS_string var_operand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 902)) ;
  outArgument_outCppExpression = var_operand.add_operation (GALGAS_string (".operator_unary_minus ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 904)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 905)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 904)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 905)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 905)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 905)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 906)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 906)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_unaryMinusExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration.mSlotID,
                                          categoryMethod_unaryMinusExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryMinusExpressionForGeneration_generateExpression (defineCategoryMethod_unaryMinusExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@unaryMinusExpressionNoOverflowForGeneration generateExpression'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusExpressionNoOverflowForGeneration * object = (const cPtr_unaryMinusExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusExpressionNoOverflowForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 917)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 917)) ;
  GALGAS_string var_operand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 919)) ;
  outArgument_outCppExpression = var_operand.add_operation (GALGAS_string (".operator_unary_minus_no_ovf ()"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 927)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_unaryMinusExpressionNoOverflowForGeneration.mSlotID,
                                          categoryMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression (defineCategoryMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@notExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_notExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notExpressionForGeneration * object = (const cPtr_notExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_notExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 938)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 938)) ;
  GALGAS_string var_operand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 941)) ;
  outArgument_outCppExpression = var_operand.add_operation (GALGAS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 943)).add_operation (categoryReader_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 943)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 943)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 943)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_notExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_notExpressionForGeneration.mSlotID,
                                          categoryMethod_notExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notExpressionForGeneration_generateExpression (defineCategoryMethod_notExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@structFieldAccessExpressionForGeneration generateExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structFieldAccessExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                        GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structFieldAccessExpressionForGeneration * object = (const cPtr_structFieldAccessExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structFieldAccessExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 954)) ;
  GALGAS_string var_operand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 956)) ;
  outArgument_outCppExpression = var_operand.add_operation (GALGAS_string (".mAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 958)).add_operation (object->mAttribute_mStructFieldName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 958)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 958)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structFieldAccessExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_structFieldAccessExpressionForGeneration.mSlotID,
                                          categoryMethod_structFieldAccessExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structFieldAccessExpressionForGeneration_generateExpression (defineCategoryMethod_structFieldAccessExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@tildeExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_tildeExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_tildeExpressionForGeneration * object = (const cPtr_tildeExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_tildeExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 969)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 969)) ;
  GALGAS_string var_operand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 972)) ;
  outArgument_outCppExpression = var_operand.add_operation (GALGAS_string (".operator_tilde ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 974)).add_operation (categoryReader_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 974)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 974)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 974)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_tildeExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_tildeExpressionForGeneration.mSlotID,
                                          categoryMethod_tildeExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_tildeExpressionForGeneration_generateExpression (defineCategoryMethod_tildeExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@ifExpressionForGeneration generateExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionForGeneration * object = (const cPtr_ifExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionForGeneration) ;
  GALGAS_string var_ifExpression ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mIfExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 987)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 989)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 989)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 989)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mThenExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 990)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 990)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 990)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 990)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 990)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 990))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 990)) ;
  GALGAS_string var_testVar = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 991)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 991)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 991)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 992)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 992)).add_operation (var_ifExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 992)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 992))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 992)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 993)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 993))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 993)) ;
  GALGAS_string var_thenExpression ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 996)) ;
  }
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mThenExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_thenExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 997)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (outArgument_outCppExpression.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 998)).add_operation (var_thenExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 998)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 998))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 998)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 999)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1001)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1001))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1001)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1002)) ;
  }
  GALGAS_string var_elseExpression ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mElseExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_elseExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1004)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (outArgument_outCppExpression.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1005)).add_operation (var_elseExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1005)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1005))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1005)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1006)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1007)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_ifExpressionForGeneration.mSlotID,
                                          categoryMethod_ifExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionForGeneration_generateExpression (defineCategoryMethod_ifExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@literalTypeInExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalTypeInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                    GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                    GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                    GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalTypeInExpressionForGeneration * object = (const cPtr_literalTypeInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalTypeInExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_type (& kTypeDescriptor_GALGAS_").add_operation (object->mAttribute_mTypeName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1019)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1018)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1019)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalTypeInExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalTypeInExpressionForGeneration.mSlotID,
                                          categoryMethod_literalTypeInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalTypeInExpressionForGeneration_generateExpression (defineCategoryMethod_literalTypeInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@extractObjectInExpressionForGeneration generateExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_extractObjectInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      GALGAS_string & outArgument_outCppExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extractObjectInExpressionForGeneration * object = (const cPtr_extractObjectInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extractObjectInExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1030)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1030)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1030)) ;
  GALGAS_string var_receiverExpression ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1032)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1040)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1040)).add_operation (GALGAS_string ("::extractObject ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1040)).add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1041)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1041)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1042)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1042)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1043)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1042)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1043)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1044)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1044)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_extractObjectInExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration.mSlotID,
                                          categoryMethod_extractObjectInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extractObjectInExpressionForGeneration_generateExpression (defineCategoryMethod_extractObjectInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@testDynamicClassInExpressionForGeneration generateExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_testDynamicClassInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testDynamicClassInExpressionForGeneration * object = (const cPtr_testDynamicClassInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_testDynamicClassInExpressionForGeneration) ;
  GALGAS_string var_typeNameRepresentation = object->mAttribute_mCastType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1055)).reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1055)) ;
  GALGAS_string var_receiverExpression ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1057)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mCastType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1065)) ;
  switch (object->mAttribute_mTypeComparisonKind.enumValue ()) {
  case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (").add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1068)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1068)).add_operation (var_typeNameRepresentation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1069)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1070)) ;
    }
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (NULL != dynamic_cast <const cPtr_").add_operation (var_typeNameRepresentation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1072)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1073)).add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1074)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1074)) ;
    }
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool ((").add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1076)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1076)).add_operation (var_typeNameRepresentation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1077)).add_operation (GALGAS_string (") && (NULL != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1078)).add_operation (var_typeNameRepresentation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1078)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1079)).add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1080)).add_operation (GALGAS_string (".ptr ())))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1080)) ;
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_testDynamicClassInExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration.mSlotID,
                                          categoryMethod_testDynamicClassInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_testDynamicClassInExpressionForGeneration_generateExpression (defineCategoryMethod_testDynamicClassInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@castInExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_castInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_castInExpressionForGeneration * object = (const cPtr_castInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_castInExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1092)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1092)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1093)) ;
  GALGAS_string var_receiverExpression ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1095)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTypeName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1103)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1103)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1103)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1104)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1104)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1104)).add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1105)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1105))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1103)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1106)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (NULL != dynamic_cast <const cPtr_").add_operation (object->mAttribute_mTypeName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1110)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1109)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1110)).add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1111)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1111)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1111)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1112)).add_operation (GALGAS_string (" = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1112)).add_operation (object->mAttribute_mTypeName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1112)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1112)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1112)).add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1112)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1113)).add_operation (GALGAS_string ("}else{\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1113))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1108)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1115)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1117)).add_operation (GALGAS_string ("->castError (\""), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1117)).add_operation (object->mAttribute_mTypeName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1118)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1117)).add_operation (GALGAS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1118)).add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1119)).add_operation (GALGAS_string (".ptr ()->classDescriptor ()"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1119)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1120)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1119)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1120))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1116)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1121)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1122)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1122)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1123)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1124)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1125)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_castInExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_castInExpressionForGeneration.mSlotID,
                                          categoryMethod_castInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_castInExpressionForGeneration_generateExpression (defineCategoryMethod_castInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@varInExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                            GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionForGeneration * object = (const cPtr_varInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1136)) ;
  outArgument_outCppExpression = object->mAttribute_mCppVarName ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mNameForCheckingFormalParameterUsing COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1138)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_varInExpressionForGeneration.mSlotID,
                                          categoryMethod_varInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionForGeneration_generateExpression (defineCategoryMethod_varInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@readerCallExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_readerCallExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readerCallExpressionForGeneration * object = (const cPtr_readerCallExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_readerCallExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1152)) ;
  GALGAS_string var_receiverCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1154)) ;
  GALGAS_stringlist var_readerArgumentCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1156)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_51460 (object->mAttribute_mExpressions, kEnumeration_up) ;
  while (enumerator_51460.hasCurrentObject ()) {
    GALGAS_string var_argumentCppName ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_51460.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1159)) ;
    var_readerArgumentCppNameList.addAssign_operation (var_argumentCppName  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1160)) ;
    enumerator_51460.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsCategory:
    {
      categoryMethod_addHeaderFileName (categoryReader_baseType (object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1165)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1165)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1165)) ;
      GALGAS_unifiedTypeMap_2D_proxy var_baseType = object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1166)) ;
      GALGAS_bool var_searching = GALGAS_bool (true) ;
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1168)).isValid ()) {
        uint32_t variant_51952 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1168)).uintValue () ;
        bool loop_51952 = true ;
        while (loop_51952) {
          loop_51952 = var_searching.isValid () ;
          if (loop_51952) {
            loop_51952 = var_searching.boolValue () ;
          }
          if (loop_51952 && (0 == variant_51952)) {
            loop_51952 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1168)) ;
          }
          if (loop_51952) {
            variant_51952 -- ;
            const enumGalgasBool test_0 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1169)).reader_isNull (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1169)).operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1169)).boolEnum () ;
            if (kBoolTrue == test_0) {
              const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1170)).reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1170)).reader_hasKey (object->mAttribute_mReaderName COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1170)).boolEnum () ;
              if (kBoolTrue == test_1) {
                var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1171)) ;
              }else if (kBoolFalse == test_1) {
                var_searching = GALGAS_bool (false) ;
              }
            }else if (kBoolFalse == test_0) {
              var_searching = GALGAS_bool (false) ;
            }
          }
        }
      }
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1179)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1179)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1179)).add_operation (object->mAttribute_mReaderName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1179))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1179)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (var_receiverCppName COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1180)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1181)).reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1181)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1181)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outCppExpression = GALGAS_string ("callCategoryReader_").add_operation (object->mAttribute_mReaderName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1182)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1182)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1182)).add_operation (object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1183)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1183)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1183)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1183)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1183)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1183)) ;
      }else if (kBoolFalse == test_2) {
        categoryMethod_addHeaderFileName (object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1185)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1185)) ;
        outArgument_outCppExpression = GALGAS_string ("categoryReader_").add_operation (object->mAttribute_mReaderName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1186)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1186)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1186)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1186)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1186)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      outArgument_outCppExpression = var_receiverCppName ;
      cEnumerator_stringlist enumerator_53000 (object->mAttribute_mFieldList, kEnumeration_up) ;
      while (enumerator_53000.hasCurrentObject ()) {
        outArgument_outCppExpression.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_53000.current_mValue (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1191)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1191))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1191)) ;
        enumerator_53000.gotoNextObject () ;
      }
      categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1193)) ;
      outArgument_outCppExpression.dotAssign_operation (GALGAS_string (".reader_").add_operation (object->mAttribute_mReaderName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1194)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1194)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1194))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1194)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_53269 (var_readerArgumentCppNameList, kEnumeration_up) ;
  while (enumerator_53269.hasCurrentObject ()) {
    outArgument_outCppExpression.dotAssign_operation (enumerator_53269.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1197)) ;
    if (enumerator_53269.hasNextObject ()) {
      outArgument_outCppExpression.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1198)) ;
    }
    enumerator_53269.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_readerArgumentCppNameList.reader_length (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1200)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1202)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1202)) ;
      }
      outArgument_outCppExpression.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1203)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1203))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1203)) ;
    }
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_5 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1206)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1206)) ;
      }
      outArgument_outCppExpression.dotAssign_operation (GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1207)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1207)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1207))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1207)) ;
    }else if (kBoolFalse == test_5) {
      outArgument_outCppExpression.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1209)) ;
    }
  }
  outArgument_outCppExpression.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1211)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1211))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1211)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_readerCallExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_readerCallExpressionForGeneration.mSlotID,
                                          categoryMethod_readerCallExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readerCallExpressionForGeneration_generateExpression (defineCategoryMethod_readerCallExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@functionCallExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallExpressionForGeneration * object = (const cPtr_functionCallExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1223)) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1225))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1225)) ;
  GALGAS_stringlist var_parameterList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1227)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_54406 (object->mAttribute_mExpressions, kEnumeration_up) ;
  while (enumerator_54406.hasCurrentObject ()) {
    GALGAS_string var_parameter ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_54406.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1230)) ;
    var_parameterList.addAssign_operation (var_parameter  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1231)) ;
    enumerator_54406.gotoNextObject () ;
  }
  outArgument_outCppExpression = GALGAS_string ("function_").add_operation (object->mAttribute_mFunctionName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1233)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1233)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1233)) ;
  cEnumerator_stringlist enumerator_54719 (var_parameterList, kEnumeration_up) ;
  while (enumerator_54719.hasCurrentObject ()) {
    outArgument_outCppExpression.dotAssign_operation (enumerator_54719.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1235))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1235)) ;
    enumerator_54719.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1237)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1237)) ;
  }
  outArgument_outCppExpression.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1238))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1238)) ;
  outArgument_outCppExpression.dotAssign_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1239)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1239))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1239)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_functionCallExpressionForGeneration.mSlotID,
                                          categoryMethod_functionCallExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallExpressionForGeneration_generateExpression (defineCategoryMethod_functionCallExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@filewrapperInExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                    GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperInExpressionForGeneration * object = (const cPtr_filewrapperInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperInExpressionForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1252))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1252)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_filewrapper (gWrapperDirectory_0_").add_operation (object->mAttribute_mFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1253)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1253)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1253)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperInExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration.mSlotID,
                                          categoryMethod_filewrapperInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperInExpressionForGeneration_generateExpression (defineCategoryMethod_filewrapperInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@filewrapperTemplateInExpressionForGeneration generateExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperTemplateInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperTemplateInExpressionForGeneration * object = (const cPtr_filewrapperTemplateInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperTemplateInExpressionForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1265))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1265)) ;
  GALGAS_stringlist var_parameterList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1266)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_56132 (object->mAttribute_mActualOutputParameterList, kEnumeration_up) ;
  while (enumerator_56132.hasCurrentObject ()) {
    GALGAS_string var_parameter ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_56132.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1269)) ;
    var_parameterList.addAssign_operation (var_parameter  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1276)) ;
    enumerator_56132.gotoNextObject () ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (filewrapperTemplate_").add_operation (object->mAttribute_mFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1278)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1278)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1278)).add_operation (object->mAttribute_mFilewrapperTemplateName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1278)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1278)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1278)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1279)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1279)) ;
  cEnumerator_stringlist enumerator_56608 (var_parameterList, kEnumeration_up) ;
  while (enumerator_56608.hasCurrentObject ()) {
    outArgument_outCppExpression.dotAssign_operation (GALGAS_string (", ").add_operation (enumerator_56608.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1281))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1281)) ;
    enumerator_56608.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1283)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1283)) ;
  }
  outArgument_outCppExpression.dotAssign_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1284)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1284))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1284)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperTemplateInExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration.mSlotID,
                                          categoryMethod_filewrapperTemplateInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionForGeneration_generateExpression (defineCategoryMethod_filewrapperTemplateInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@filewrapperStaticPathInExpressionForGeneration generateExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                              GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                              GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                              GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                              GALGAS_string & outArgument_outCppExpression,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperStaticPathInExpressionForGeneration * object = (const cPtr_filewrapperStaticPathInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1296))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1296)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mIsTextFile.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("GALGAS_string") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("GALGAS_data") ;
  }
  outArgument_outCppExpression = temp_0 ;
  outArgument_outCppExpression.dotAssign_operation (GALGAS_string (" (gWrapperFileContent_").add_operation (object->mAttribute_mFilewrapperFileIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1298)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1298)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1298)).add_operation (object->mAttribute_mFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1298)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1298)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1298))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1298)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration.mSlotID,
                                          categoryMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression (defineCategoryMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@lexiqueIntrospectionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexiqueIntrospectionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                 GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueIntrospectionForGeneration * object = (const cPtr_lexiqueIntrospectionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueIntrospectionForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1312))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1312)) ;
  outArgument_outCppExpression = GALGAS_string ("C_Lexique_").add_operation (object->mAttribute_mLexiqueComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1313)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1313)).add_operation (GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1313)).add_operation (object->mAttribute_mLexiqueReaderName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1314)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1313)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1314)).add_operation (categoryReader_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1315)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1315)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1315)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexiqueIntrospectionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration.mSlotID,
                                          categoryMethod_lexiqueIntrospectionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueIntrospectionForGeneration_generateExpression (defineCategoryMethod_lexiqueIntrospectionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@expressionCollectionValueForGeneration generateCollectionElementCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_expressionCollectionValueForGeneration_generateCollectionElementCode (const cPtr_abstractCollectionValueElementForGeneration * inObject,
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
  GALGAS_string var_sourceVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1339)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (constinArgument_inCppTargetVar  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1346)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (".dotAssign_operation (").add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1347)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1347)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mExpressionLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1347)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1347)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1347))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1347)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_expressionCollectionValueForGeneration_generateCollectionElementCode (void) {
  enterCategoryMethod_generateCollectionElementCode (kTypeDescriptor_GALGAS_expressionCollectionValueForGeneration.mSlotID,
                                                     categoryMethod_expressionCollectionValueForGeneration_generateCollectionElementCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionCollectionValueForGeneration_generateCollectionElementCode (defineCategoryMethod_expressionCollectionValueForGeneration_generateCollectionElementCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@expressionListCollectionForGeneration generateCollectionElementCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_expressionListCollectionForGeneration_generateCollectionElementCode (const cPtr_abstractCollectionValueElementForGeneration * inObject,
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
  GALGAS_stringlist var_parameterList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1360)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_60027 (object->mAttribute_mExpressionList, kEnumeration_up) ;
  while (enumerator_60027.hasCurrentObject ()) {
    GALGAS_string var_parameter ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_60027.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1362)) ;
    var_parameterList.addAssign_operation (var_parameter  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1369)) ;
    enumerator_60027.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (constinArgument_inCppTargetVar  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1372)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (".addAssign_operation (")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1374)) ;
  cEnumerator_stringlist enumerator_60413 (var_parameterList, kEnumeration_up) ;
  while (enumerator_60413.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_60413.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1376)) ;
    if (enumerator_60413.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1377)) ;
    }
    enumerator_60413.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTargetType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1379)).operator_and (function_plusEqualOperatorWithFieldListNeedsCompilerArg (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1379)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1379)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1380)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1380))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1380)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1381)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1381)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mExpressionLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1383)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1383)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1383))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1383)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_expressionListCollectionForGeneration_generateCollectionElementCode (void) {
  enterCategoryMethod_generateCollectionElementCode (kTypeDescriptor_GALGAS_expressionListCollectionForGeneration.mSlotID,
                                                     categoryMethod_expressionListCollectionForGeneration_generateCollectionElementCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionListCollectionForGeneration_generateCollectionElementCode (defineCategoryMethod_expressionListCollectionForGeneration_generateCollectionElementCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@expressionCollectionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_expressionCollectionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionForGeneration * object = (const cPtr_expressionCollectionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1395)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1397)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1397)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1397)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1399)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1399)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1399)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1399)).add_operation (GALGAS_string (" = GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1399)).add_operation (object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1400)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1400)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1400)).add_operation (object->mAttribute_mResultType.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1400)).reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1400)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1400)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1400)).add_operation (categoryReader_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1400)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1400)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1400))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1399)) ;
  cEnumerator_collectionValueElementListForGeneration enumerator_61721 (object->mAttribute_mElementList, kEnumeration_up) ;
  while (enumerator_61721.hasCurrentObject ()) {
    callCategoryMethod_generateCollectionElementCode ((const cPtr_abstractCollectionValueElementForGeneration *) enumerator_61721.current_mElement (HERE).ptr (), object->mAttribute_mResultType, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1403)) ;
    enumerator_61721.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_expressionCollectionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_expressionCollectionForGeneration.mSlotID,
                                          categoryMethod_expressionCollectionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionCollectionForGeneration_generateExpression (defineCategoryMethod_expressionCollectionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@outputActualParameterForGeneration generateActualParameter'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_outputActualParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_string & ioArgument_ioImplementation,
                                                                                       GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                       GALGAS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       GALGAS_string & outArgument_outCppName,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputActualParameterForGeneration * object = (const cPtr_outputActualParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_outputActualParameterForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mFormalArgumentType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 26)) ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mOutputActualParameterExpression.ptr (), ioArgument_ioImplementation, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 27)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_outputActualParameterForGeneration_generateActualParameter (void) {
  enterCategoryMethod_generateActualParameter (kTypeDescriptor_GALGAS_outputActualParameterForGeneration.mSlotID,
                                               categoryMethod_outputActualParameterForGeneration_generateActualParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputActualParameterForGeneration_generateActualParameter (defineCategoryMethod_outputActualParameterForGeneration_generateActualParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@outputInputActualParameterForGeneration generateActualParameter'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_outputInputActualParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                            GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                            GALGAS_string & /* ioArgument_ioImplementation */,
                                                                                            GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                            GALGAS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                            GALGAS_string & outArgument_outCppName,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputActualParameterForGeneration * object = (const cPtr_outputInputActualParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputActualParameterForGeneration) ;
  cEnumerator_unifiedTypeMapProxyList enumerator_2989 (object->mAttribute_mTypeList, kEnumeration_up) ;
  while (enumerator_2989.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_2989.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 41)) ;
    enumerator_2989.gotoNextObject () ;
  }
  outArgument_outCppName = object->mAttribute_mOutputInputVariableCppName ;
  cEnumerator_lstringlist enumerator_3117 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_3117.hasCurrentObject ()) {
    outArgument_outCppName.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_3117.current_mValue (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 45))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 45)) ;
    enumerator_3117.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mOutputInputVariableCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 47)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_outputInputActualParameterForGeneration_generateActualParameter (void) {
  enterCategoryMethod_generateActualParameter (kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration.mSlotID,
                                               categoryMethod_outputInputActualParameterForGeneration_generateActualParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputActualParameterForGeneration_generateActualParameter (defineCategoryMethod_outputInputActualParameterForGeneration_generateActualParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@inputActualParameterForGeneration generateActualParameter'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputActualParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                      GALGAS_string & /* ioArgument_ioImplementation */,
                                                                                      GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                      GALGAS_stringlist & ioArgument_ioOutputVariableList,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      GALGAS_string & outArgument_outCppName,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualParameterForGeneration * object = (const cPtr_inputActualParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualParameterForGeneration) ;
  outArgument_outCppName = object->mAttribute_mInputActualCppName ;
  ioArgument_ioOutputVariableList.addAssign_operation (object->mAttribute_mInputActualCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 61)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (outArgument_outCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 62)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputActualParameterForGeneration_generateActualParameter (void) {
  enterCategoryMethod_generateActualParameter (kTypeDescriptor_GALGAS_inputActualParameterForGeneration.mSlotID,
                                               categoryMethod_inputActualParameterForGeneration_generateActualParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualParameterForGeneration_generateActualParameter (defineCategoryMethod_inputActualParameterForGeneration_generateActualParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@inputJokerParameterForGeneration generateActualParameter'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputJokerParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_string & ioArgument_ioImplementation,
                                                                                     GALGAS_stringlist & ioArgument_ioJokerParametersToReleaseList,
                                                                                     GALGAS_stringlist & ioArgument_ioOutputVariableList,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppName,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputJokerParameterForGeneration * object = (const cPtr_inputJokerParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_inputJokerParameterForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mFormalArgumentType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 75)) ;
  outArgument_outCppName = object->mAttribute_mInputActualCppName ;
  ioArgument_ioImplementation.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mFormalArgumentType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)).add_operation (outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)).add_operation (GALGAS_string (" ; // Joker input parameter\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)) ;
  ioArgument_ioJokerParametersToReleaseList.addAssign_operation (object->mAttribute_mInputActualCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)) ;
  ioArgument_ioOutputVariableList.addAssign_operation (object->mAttribute_mInputActualCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 79)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputJokerParameterForGeneration_generateActualParameter (void) {
  enterCategoryMethod_generateActualParameter (kTypeDescriptor_GALGAS_inputJokerParameterForGeneration.mSlotID,
                                               categoryMethod_inputJokerParameterForGeneration_generateActualParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputJokerParameterForGeneration_generateActualParameter (defineCategoryMethod_inputJokerParameterForGeneration_generateActualParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@semanticBlockInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_semanticBlockInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_semanticBlockInstructionForGeneration * object = (const cPtr_semanticBlockInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticBlockInstructionForGeneration) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 90)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 91)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 99)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_semanticBlockInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration.mSlotID,
                                           categoryMethod_semanticBlockInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticBlockInstructionForGeneration_generateInstruction (defineCategoryMethod_semanticBlockInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category method '@localVariableOrConstantDeclarationWithSourceExpressionForGeneration generateInstruction'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                                    const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * object = (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 110)) ;
  GALGAS_string var_sourceVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 111)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTargetType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 118)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 118)).add_operation (object->mAttribute_mCppVariableName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 118)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 118)).add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 118)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 118))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 118)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration.mSlotID,
                                           categoryMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction (defineCategoryMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@localVariableDeclarationForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableDeclarationForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                      GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                      const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationForGeneration * object = (const cPtr_localVariableDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mVariableType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 129)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mVariableType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 130)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 130)).add_operation (object->mAttribute_mCppVariableName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 130)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 130))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 130)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableDeclarationForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration.mSlotID,
                                           categoryMethod_localVariableDeclarationForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableDeclarationForGeneration_generateInstruction (defineCategoryMethod_localVariableDeclarationForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category method '@localVariableOrConstantDeclarationWithDefaultConstructorForGeneration generateInstruction'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                                                      GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                                      const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration * object = (const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 141)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTargetType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 142)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 142)).add_operation (object->mAttribute_mTargetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 143)).add_operation (GALGAS_string (" = GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 143)).add_operation (object->mAttribute_mTargetType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 144)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 144)).add_operation (object->mAttribute_mTargetType.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 146)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 145)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 146)).add_operation (categoryReader_sourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 147)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 147))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 142)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration.mSlotID,
                                           categoryMethod_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration_generateInstruction (defineCategoryMethod_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category method '@localVariableOrConstantDeclarationWithConstructorCallForGeneration generateInstruction' *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableOrConstantDeclarationWithConstructorCallForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                                   const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration * object = (const cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 158)) ;
  GALGAS_stringlist var_parameterList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 159)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_8125 (object->mAttribute_mConstructorArguments, kEnumeration_up) ;
  while (enumerator_8125.hasCurrentObject ()) {
    GALGAS_string var_parameter ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_8125.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 162)) ;
    var_parameterList.addAssign_operation (var_parameter  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 163)) ;
    enumerator_8125.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTargetType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 165)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 165)).add_operation (object->mAttribute_mTargetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 166)).add_operation (GALGAS_string (" = GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 166)).add_operation (object->mAttribute_mTargetType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 167)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 167)).add_operation (object->mAttribute_mConstructorName.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 168)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 168))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 165)) ;
  cEnumerator_stringlist enumerator_8663 (var_parameterList, kEnumeration_up) ;
  while (enumerator_8663.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_8663.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 171)) ;
    if (enumerator_8663.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 172)) ;
    }
    enumerator_8663.gotoNextObject () ;
  }
  GALGAS_bool var_needsComma = GALGAS_bool (kIsStrictSup, var_parameterList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  const enumGalgasBool test_0 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = var_needsComma.boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 177)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 179)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 179)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 180))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 180)) ;
    var_needsComma = GALGAS_bool (true) ;
  }
  const enumGalgasBool test_2 = var_needsComma.boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioGeneratedCode.dotAssign_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 184)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 184))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 184)) ;
  }else if (kBoolFalse == test_2) {
    ioArgument_ioGeneratedCode.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 186)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 186))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 186)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableOrConstantDeclarationWithConstructorCallForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration.mSlotID,
                                           categoryMethod_localVariableOrConstantDeclarationWithConstructorCallForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithConstructorCallForGeneration_generateInstruction (defineCategoryMethod_localVariableOrConstantDeclarationWithConstructorCallForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@assignmentInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assignmentInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionForGeneration * object = (const cPtr_assignmentInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionForGeneration) ;
  GALGAS_string var_sourceVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 199)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mNameForCheckingFormalParameterUsing COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 200)) ;
  }
  GALGAS_string var_receiverCppName = object->mAttribute_mTargetCppName ;
  cEnumerator_lstringlist enumerator_9907 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_9907.hasCurrentObject ()) {
    var_receiverCppName.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_9907.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 204)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 204))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 204)) ;
    enumerator_9907.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 206)).add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 206)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 206))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 206)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mTargetCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 207)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assignmentInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_assignmentInstructionForGeneration.mSlotID,
                                           categoryMethod_assignmentInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionForGeneration_generateInstruction (defineCategoryMethod_assignmentInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@dropInstructionForGeneration generateInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_dropInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                             const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dropInstructionForGeneration * object = (const cPtr_dropInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_dropInstructionForGeneration) ;
  cEnumerator_unifiedTypeMapProxyList enumerator_10555 (object->mAttribute_mDropTypeList, kEnumeration_up) ;
  while (enumerator_10555.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_10555.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 219)) ;
    enumerator_10555.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_10629 (object->mAttribute_mDropList, kEnumeration_up) ;
  while (enumerator_10629.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_10629.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 222)).add_operation (object->mAttribute_mComment, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 222)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 222))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 222)) ;
    enumerator_10629.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_dropInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_dropInstructionForGeneration.mSlotID,
                                           categoryMethod_dropInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dropInstructionForGeneration_generateInstruction (defineCategoryMethod_dropInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@concatInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_concatInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_concatInstructionForGeneration * object = (const cPtr_concatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_concatInstructionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 234)) ;
  GALGAS_string var_sourceVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 235)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mNameForCheckingFormalParameterUsing COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 242)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (object->mAttribute_mTargetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 243)) ;
  cEnumerator_lstringlist enumerator_11484 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_11484.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_11484.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 245))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 245)) ;
    enumerator_11484.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (".dotAssign_operation (").add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 247)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 247)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 247)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 247))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 247)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mTargetVariableCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 248)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_concatInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_concatInstructionForGeneration.mSlotID,
                                           categoryMethod_concatInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_concatInstructionForGeneration_generateInstruction (defineCategoryMethod_concatInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@grammarInstructionWithSourceFileForGeneration generateInstruction'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                              const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionWithSourceFileForGeneration * object = (const cPtr_grammarInstructionWithSourceFileForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionWithSourceFileForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 261))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 261)) ;
  GALGAS_string var_sourceVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSourceFileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 263)) ;
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 271)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 272)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 273)) ;
  cEnumerator_actualParameterListForGeneration enumerator_12719 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_12719.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_12719.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 275)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 284)) ;
    const enumGalgasBool test_0 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_12719.current_mActualParameter (HERE).ptr ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.dotAssign_operation (var_parameterCppName.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 286))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 286)) ;
    }
    enumerator_12719.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = object->mAttribute_mGrammarHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("C_String ").add_operation (object->mAttribute_mSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 290)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 290))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 290)) ;
  }
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = object->mAttribute_mGrammarHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = object->mAttribute_mSyntaxDirectedTranslationResultVarName.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 296)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("cGrammar_").add_operation (object->mAttribute_mGrammarName.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 292)).add_operation (GALGAS_string ("::_performSourceFileParsing_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 292)).add_operation (object->mAttribute_mLabelName.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 293)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 293)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 294)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 295)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 295)).add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 296))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 292)) ;
  cEnumerator_stringlist enumerator_13727 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_13727.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ").add_operation (enumerator_13727.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 299))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 299)) ;
    enumerator_13727.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 301)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 301))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 301)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 302)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 302)) ;
  }
  cEnumerator_stringlist enumerator_13940 (object->mAttribute_mAssignementList, kEnumeration_up) ;
  while (enumerator_13940.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_13940.current (HERE).mAttribute_mValue.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 304))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 304)) ;
    enumerator_13940.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration.mSlotID,
                                           categoryMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction (defineCategoryMethod_grammarInstructionWithSourceFileForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category method '@grammarInstructionWithSourceExpressionForGeneration generateInstruction'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                    const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionWithSourceExpressionForGeneration * object = (const cPtr_grammarInstructionWithSourceExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 316))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 316)) ;
  GALGAS_string var_sourceVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSourceStringExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 319)) ;
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 321)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 322)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 323)) ;
  cEnumerator_actualParameterListForGeneration enumerator_14846 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_14846.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_14846.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 325)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 334)) ;
    const enumGalgasBool test_0 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_14846.current_mActualParameter (HERE).ptr ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.dotAssign_operation (var_parameterCppName.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 336))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 336)) ;
    }
    enumerator_14846.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = object->mAttribute_mGrammarHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("C_String ").add_operation (object->mAttribute_mSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 340)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 340))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 340)) ;
  }
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = object->mAttribute_mGrammarHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = object->mAttribute_mSyntaxDirectedTranslationResultVarName.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 345)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("cGrammar_").add_operation (object->mAttribute_mGrammarName.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 342)).add_operation (GALGAS_string ("::_performSourceStringParsing_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 342)).add_operation (object->mAttribute_mLabelName.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 343)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 343)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 344)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 344)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 344)).add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 345))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 342)) ;
  cEnumerator_stringlist enumerator_15845 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_15845.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ").add_operation (enumerator_15845.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 348))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 348)) ;
    enumerator_15845.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 350)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 350))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 350)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 351)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 351)) ;
  }
  cEnumerator_stringlist enumerator_16058 (object->mAttribute_mAssignementList, kEnumeration_up) ;
  while (enumerator_16058.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_16058.current (HERE).mAttribute_mValue.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 353))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 353)) ;
    enumerator_16058.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration.mSlotID,
                                           categoryMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction (defineCategoryMethod_grammarInstructionWithSourceExpressionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@ifInstructionForGeneration generateInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionForGeneration * object = (const cPtr_ifInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionForGeneration) ;
  GALGAS_string var_cppVarName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mIFexpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 367)) ;
  GALGAS_string var_testVar = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 368)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 368)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 369)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 369)).add_operation (var_cppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 369)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 369))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 369)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 371)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 371))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 371)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_m_5F_then_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 372)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_m_5F_else_5F_instructionList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 380)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 381)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 381))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 381)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_m_5F_else_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 382)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 391)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_ifInstructionForGeneration.mSlotID,
                                           categoryMethod_ifInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionForGeneration_generateInstruction (defineCategoryMethod_ifInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@errorInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_errorInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_errorInstructionForGeneration * object = (const cPtr_errorInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_errorInstructionForGeneration) ;
  GALGAS_string var_receiverCppVarName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 404)) ;
  GALGAS_string var_messageCppVarName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mErrorExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 407)) ;
  const enumGalgasBool test_0 = object->mAttribute_mUseLocationReader.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_locationVar = GALGAS_string ("location_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 410)) ;
    ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 410)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_location ").add_operation (var_locationVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 411)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 411)).add_operation (var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 411)).add_operation (GALGAS_string (".reader_location (HERE)) ; // Implicit use of 'location' reader\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 411))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 411)) ;
    var_receiverCppVarName = var_locationVar ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 415)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 415)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 416)).add_operation (GALGAS_string ("->emitSemanticError ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 416)).add_operation (var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 416)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 416)).add_operation (var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 416)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 416)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 417)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 417))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 416)) ;
  cEnumerator_stringlist enumerator_19110 (object->mAttribute_mBuiltVariableCppNameList, kEnumeration_up) ;
  while (enumerator_19110.hasCurrentObject ()) {
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (enumerator_19110.current_mValue (HERE) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 420)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_19110.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release error dropped variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 421))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 421)) ;
    enumerator_19110.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_errorInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_errorInstructionForGeneration.mSlotID,
                                           categoryMethod_errorInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_errorInstructionForGeneration_generateInstruction (defineCategoryMethod_errorInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@warningInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_warningInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_warningInstructionForGeneration * object = (const cPtr_warningInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_warningInstructionForGeneration) ;
  GALGAS_string var_receiverCppVarName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 435)) ;
  GALGAS_string var_messageCppVarName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWarningExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 438)) ;
  const enumGalgasBool test_0 = object->mAttribute_mUseLocationReader.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_locationVar = GALGAS_string ("location_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 441)) ;
    ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 441)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_location ").add_operation (var_locationVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 442)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 442)).add_operation (var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 442)).add_operation (GALGAS_string (".reader_location (HERE)) ; // Implicit use of 'location' reader\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 442))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 442)) ;
    var_receiverCppVarName = var_locationVar ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 446)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 446)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 447)).add_operation (GALGAS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 447)).add_operation (var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 447)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 447)).add_operation (var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 447)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 447)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 448)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 448)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 448))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 447)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_warningInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_warningInstructionForGeneration.mSlotID,
                                           categoryMethod_warningInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_warningInstructionForGeneration_generateInstruction (defineCategoryMethod_warningInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@methodCallInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_methodCallInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_methodCallInstructionForGeneration * object = (const cPtr_methodCallInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_methodCallInstructionForGeneration) ;
  GALGAS_string var_receiverCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 464)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (var_receiverCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 465)) ;
  }
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 467)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 468)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 469)) ;
  cEnumerator_actualParameterListForGeneration enumerator_21681 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_21681.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_21681.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 472)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 473)) ;
    enumerator_21681.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsCategory:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mMethodBaseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 478)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 478)).add_operation (object->mAttribute_mMethodName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 478))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 478)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 479)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 479)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("callCategoryMethod_").add_operation (object->mAttribute_mMethodName.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 480)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 480)).add_operation (object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 481)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 481)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 481)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 481)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 481))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 480)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("categoryMethod_").add_operation (object->mAttribute_mMethodName.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 483)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 483)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 483)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 483))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 483)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 486)).add_operation (object->mAttribute_mMethodName.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 486)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 486))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 486)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_22717 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_22717.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_22717.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 489)) ;
    if (enumerator_22717.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 490)) ;
    }
    enumerator_22717.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_parameterCppNameList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 492)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 494)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 494)) ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 495))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 495)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 496)) ;
    }
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 499)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 499)) ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 500))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 500)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 501)) ;
    }else if (kBoolFalse == test_3) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 503)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 505)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 505))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 505)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_methodCallInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_methodCallInstructionForGeneration.mSlotID,
                                           categoryMethod_methodCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_methodCallInstructionForGeneration_generateInstruction (defineCategoryMethod_methodCallInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@routineCallInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_routineCallInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routineCallInstructionForGeneration * object = (const cPtr_routineCallInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_routineCallInstructionForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 516))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 516)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 517)) ;
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 519)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 520)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 521)) ;
  cEnumerator_actualParameterListForGeneration enumerator_23994 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_23994.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_23994.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 523)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 532)) ;
    enumerator_23994.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("routine_").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 535)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 535)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 535)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 535))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 535)) ;
  cEnumerator_stringlist enumerator_24456 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_24456.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_24456.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 537))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 537)) ;
    enumerator_24456.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 539)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 539)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 540)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 540)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mRoutineName.reader_location (SOURCE_FILE ("semanticInstructionGeneration.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 540)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 540))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 540)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 541)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_routineCallInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_routineCallInstructionForGeneration.mSlotID,
                                           categoryMethod_routineCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_routineCallInstructionForGeneration_generateInstruction (defineCategoryMethod_routineCallInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@setterCallInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_setterCallInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_setterCallInstructionForGeneration * object = (const cPtr_setterCallInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_setterCallInstructionForGeneration) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 553)) ;
  GALGAS_string var_receiverCppName = object->mAttribute_mReceiverCppName ;
  cEnumerator_lstringlist enumerator_25195 (object->mAttribute_mReceiverStructAttributes, kEnumeration_up) ;
  while (enumerator_25195.hasCurrentObject ()) {
    var_receiverCppName.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_25195.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 556)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 556))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 556)) ;
    enumerator_25195.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mReceiverBaseName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 558)) ;
  }
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 560)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 561)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 562)) ;
  cEnumerator_actualParameterListForGeneration enumerator_25523 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_25523.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_25523.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 564)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 573)) ;
    enumerator_25523.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsCategory:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mMethodBaseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 578)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 578)).add_operation (object->mAttribute_mModifierName.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 578))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 578)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 579)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 579)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mReceiverType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 580)).reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 580)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (object->mAttribute_mReceiverType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 580)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 580)).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (".insulate (HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 581))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 581)) ;
        }
        GALGAS_string var_pointerUniqueName = GALGAS_string ("ptr_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 583)).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 583)) ;
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("cPtr_").add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 584)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 584)).add_operation (var_pointerUniqueName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 584))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 584)) ;
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" = (cPtr_").add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 585)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 585)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 585)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 585))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 585)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mCastType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 586)).objectCompare (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 586)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (object->mAttribute_mCastType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 587))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 587)) ;
          ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if ((NULL != ").add_operation (var_pointerUniqueName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 588)).add_operation (GALGAS_string (") && (dynamic_cast <cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 588)).add_operation (object->mAttribute_mCastType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 589)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 589)).add_operation (var_pointerUniqueName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 589)).add_operation (GALGAS_string (") == NULL)) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 590))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 588)) ;
          {
          ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 591)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 591)) ;
          }
          ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 592)).add_operation (GALGAS_string ("->onTheFlyRunTimeError (\"cannot cast to '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 592)).add_operation (object->mAttribute_mCastType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 592)).add_operation (GALGAS_string ("'\""), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 593)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 593)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 593))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 592)) ;
          ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (var_pointerUniqueName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 594)).add_operation (GALGAS_string (" = NULL ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 594))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 594)) ;
          ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 595)) ;
        }
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("callCategoryModifier_").add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 597)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 597)).add_operation (object->mAttribute_mCastType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 598)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 598)).add_operation (var_pointerUniqueName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 598)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 598))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 597)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("categoryModifier_").add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 600)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 600)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 600)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 600))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 600)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 603)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (".modifier_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 604)).add_operation (object->mAttribute_mModifierName.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 604)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 604)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 604))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 604)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_27843 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_27843.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_27843.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 607)) ;
    if (enumerator_27843.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 608)) ;
    }
    enumerator_27843.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 611)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 612)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 614)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 614)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 615))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 615)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 616)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 617)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 618)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mModifierName.reader_location (SOURCE_FILE ("semanticInstructionGeneration.galgas", 620)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 620)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 620))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 620)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 621)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_setterCallInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_setterCallInstructionForGeneration.mSlotID,
                                           categoryMethod_setterCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_setterCallInstructionForGeneration_generateInstruction (defineCategoryMethod_setterCallInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@selfModifierCallInstructionForGeneration generateInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfModifierCallInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                         const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfModifierCallInstructionForGeneration * object = (const cPtr_selfModifierCallInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selfModifierCallInstructionForGeneration) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 632)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mSelfCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 633)) ;
  }
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 635)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 636)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 637)) ;
  cEnumerator_actualParameterListForGeneration enumerator_29055 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_29055.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_29055.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 639)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 647)) ;
    enumerator_29055.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsCategory:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 652)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 652)).add_operation (object->mAttribute_mModifierName.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 652))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 652)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 653)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 653)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("callCategoryModifier_").add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 654)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 654)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 654)).add_operation (object->mAttribute_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 654)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 654))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 654)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("categoryModifier_").add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 656)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 656)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 656)).add_operation (object->mAttribute_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 656)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 656))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 656)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 659)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 659)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioGeneratedCode.dotAssign_operation (object->mAttribute_mSelfCppName.add_operation (GALGAS_string ("->modifier_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 660)).add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 660)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 660)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 660))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 660)) ;
      }else if (kBoolFalse == test_1) {
        ioArgument_ioGeneratedCode.dotAssign_operation (object->mAttribute_mSelfCppName.add_operation (GALGAS_string (".modifier_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 662)).add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 662)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 662))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 662)) ;
      }
    }
    break ;
  }
  cEnumerator_stringlist enumerator_30200 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_30200.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_30200.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 666)) ;
    if (enumerator_30200.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 667)) ;
    }
    enumerator_30200.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 670)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 671)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 673)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 673)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 674))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 674)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 675)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 676)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 677)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mModifierName.reader_location (SOURCE_FILE ("semanticInstructionGeneration.galgas", 679)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 679)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 679))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 679)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 680)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfModifierCallInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_selfModifierCallInstructionForGeneration.mSlotID,
                                           categoryMethod_selfModifierCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfModifierCallInstructionForGeneration_generateInstruction (defineCategoryMethod_selfModifierCallInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@typeMethodInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_typeMethodInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeMethodInstructionForGeneration * object = (const cPtr_typeMethodInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_typeMethodInstructionForGeneration) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 691)) ;
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 693)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 694)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 695)) ;
  cEnumerator_actualParameterListForGeneration enumerator_31349 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_31349.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_31349.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 697)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 705)) ;
    enumerator_31349.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 708)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 708)).add_operation (GALGAS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 708)).add_operation (object->mAttribute_mMethodName.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 709)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 709)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 709))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 708)) ;
  cEnumerator_stringlist enumerator_31898 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_31898.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_31898.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 711)) ;
    if (enumerator_31898.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 712)) ;
    }
    enumerator_31898.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 715)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 715)) ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_parameterCppNameList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 716)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 717)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 719))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 719)) ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mHasCompilerArgument.operator_or (GALGAS_bool (kIsStrictSup, var_parameterCppNameList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 721)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 721)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 722)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mMethodName.reader_location (SOURCE_FILE ("semanticInstructionGeneration.galgas", 724)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 724)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 724))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 724)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 725)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_typeMethodInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_typeMethodInstructionForGeneration.mSlotID,
                                           categoryMethod_typeMethodInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeMethodInstructionForGeneration_generateInstruction (defineCategoryMethod_typeMethodInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@structuredCastInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structuredCastInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structuredCastInstructionForGeneration * object = (const cPtr_structuredCastInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structuredCastInstructionForGeneration) ;
  GALGAS_string var_castCppVarName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_castCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 739)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_castCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 747)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 747))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 747)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 748)) ;
  }
  cEnumerator_castInstructionBranchListForGeneration enumerator_33263 (object->mAttribute_mCastBranchList, kEnumeration_up) ;
  while (enumerator_33263.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_33263.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 750)) ;
    switch (enumerator_33263.current_mTypeComparisonKind (HERE).enumValue ()) {
    case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
      {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_castCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 753)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 753)).add_operation (enumerator_33263.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 755)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 754)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 755))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 753)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
      {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (NULL != dynamic_cast <const cPtr_").add_operation (enumerator_33263.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 758)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 757)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 758)).add_operation (var_castCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 759)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 759))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 757)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
      {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if ((").add_operation (var_castCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 761)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 761)).add_operation (enumerator_33263.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 763)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 762)).add_operation (GALGAS_string (") && (NULL != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 763)).add_operation (enumerator_33263.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 764)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 763)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 764)).add_operation (var_castCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 765)).add_operation (GALGAS_string (".ptr ()))) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 765))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 761)) ;
      }
      break ;
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_33263.current_mCastedVarCppName (HERE).reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 767)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  GALGAS_").add_operation (enumerator_33263.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 769)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 769)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 769)).add_operation (enumerator_33263.current_mCastedVarCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 770)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 770)).add_operation (enumerator_33263.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 770)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 770)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 770)).add_operation (var_castCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 771)).add_operation (GALGAS_string (".ptr ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 771))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 768)) ;
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_33263.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 773)) ;
    }
    if (enumerator_33263.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 781)) ;
    }
    enumerator_33263.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseInstructionList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 784)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 785)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 786)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 796)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 797)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 798)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structuredCastInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration.mSlotID,
                                           categoryMethod_structuredCastInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structuredCastInstructionForGeneration_generateInstruction (defineCategoryMethod_structuredCastInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@plusEqualnstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_plusEqualnstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualnstructionForGeneration * object = (const cPtr_plusEqualnstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualnstructionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 810)) ;
  GALGAS_stringlist var_parameterList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 811)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_35527 (object->mAttribute_mExpressionList, kEnumeration_up) ;
  while (enumerator_35527.hasCurrentObject ()) {
    GALGAS_string var_parameter ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_35527.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 813)) ;
    var_parameterList.addAssign_operation (var_parameter  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 820)) ;
    enumerator_35527.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mNameForCheckingFormalParameterUsing COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 823)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (object->mAttribute_mReceiverCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 824)) ;
  cEnumerator_lstringlist enumerator_35922 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_35922.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_35922.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 826)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 826)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 826))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 826)) ;
    enumerator_35922.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (".addAssign_operation (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 829)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mReceiverCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 830)) ;
  }
  cEnumerator_stringlist enumerator_36182 (var_parameterList, kEnumeration_up) ;
  while (enumerator_36182.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_36182.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 832)) ;
    if (enumerator_36182.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 833)) ;
    }
    enumerator_36182.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTargetType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 835)).operator_and (function_plusEqualOperatorWithFieldListNeedsCompilerArg (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 835)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 835)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 836)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 836))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 836)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 837)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 837)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 839)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 839)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 839))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 839)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_plusEqualnstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration.mSlotID,
                                           categoryMethod_plusEqualnstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_plusEqualnstructionForGeneration_generateInstruction (defineCategoryMethod_plusEqualnstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@incDecInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incDecInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
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
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mReceiverCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 852)) ;
  }
  GALGAS_string var_receiverCppName = object->mAttribute_mReceiverCppName ;
  cEnumerator_lstringlist enumerator_37118 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_37118.hasCurrentObject ()) {
    var_receiverCppName.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_37118.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 855)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 855)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 855))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 855)) ;
    enumerator_37118.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 860)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 860)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 860)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 860)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 861)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 861)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 861))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 860)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 862)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 862)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (".decrement_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 864)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 864)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 864)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 864)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 865)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 865)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 865))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 864)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 866)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 866)) ;
      }
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incDecInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_incDecInstructionForGeneration.mSlotID,
                                           categoryMethod_incDecInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecInstructionForGeneration_generateInstruction (defineCategoryMethod_incDecInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@incDecNoOVFInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incDecNoOVFInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
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
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mReceiverCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 880)) ;
  }
  GALGAS_string var_receiverCppName = object->mAttribute_mReceiverCppName ;
  cEnumerator_lstringlist enumerator_38318 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_38318.hasCurrentObject ()) {
    var_receiverCppName.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_38318.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 883)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 883)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 883))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 883)) ;
    enumerator_38318.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (".increment_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 888))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 888)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (".decrement_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 890))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 890)) ;
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incDecNoOVFInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration.mSlotID,
                                           categoryMethod_incDecNoOVFInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecNoOVFInstructionForGeneration_generateInstruction (defineCategoryMethod_incDecNoOVFInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@messageInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_messageInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_messageInstructionForGeneration * object = (const cPtr_messageInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_messageInstructionForGeneration) ;
  GALGAS_string var_messageCppVarName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 904)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 912)).add_operation (GALGAS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 912)).add_operation (var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 912))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 912)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 913)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 913)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 913))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 913)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 914)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 914)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_messageInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_messageInstructionForGeneration.mSlotID,
                                           categoryMethod_messageInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_messageInstructionForGeneration_generateInstruction (defineCategoryMethod_messageInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@loopInstructionForGeneration generateInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loopInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionForGeneration * object = (const cPtr_loopInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionForGeneration) ;
  GALGAS_string var_variantCppVarName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mVariantExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 927)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_variantCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 934)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 934))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 934)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 935)) ;
  }
  GALGAS_string var_variantVar = GALGAS_string ("variant_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 936)).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 936)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 936)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("uint32_t ").add_operation (var_variantVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 937)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 937)).add_operation (var_variantCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 937)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 937))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 937)) ;
  GALGAS_string var_loopVar = GALGAS_string ("loop_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 938)).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 938)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 938)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("bool ").add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 939)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 939)).add_operation (GALGAS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 939)).add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 940)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 940))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 939)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 941)) ;
  }
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mFirstInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 942)) ;
  }
  GALGAS_string var_loopExpressionVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLoopExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 951)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (var_loopVar.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 952)).add_operation (var_loopExpressionVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 952)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 952)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 952)).add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 953)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 953)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 953)).add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 954)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 954)).add_operation (var_loopExpressionVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 954)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 954)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 954))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 952)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 956)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 956)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 957)).add_operation (GALGAS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 957)).add_operation (var_variantVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 957)).add_operation (GALGAS_string (")) {\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 957)).add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 958)).add_operation (GALGAS_string (" = false ;\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 958)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 959)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 959)).add_operation (GALGAS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 959)).add_operation (categoryReader_sourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 959)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 959)).add_operation (GALGAS_string (") ;\n"
    "}\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 959)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 960)).add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 961)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 961))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 957)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (var_variantVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 962)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 962))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 962)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mSecondInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 963)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 971)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 972)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 973)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 974)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 975)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loopInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_loopInstructionForGeneration.mSlotID,
                                           categoryMethod_loopInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loopInstructionForGeneration_generateInstruction (defineCategoryMethod_loopInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@readOnlyWithInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_readOnlyWithInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readOnlyWithInstructionForGeneration * object = (const cPtr_readOnlyWithInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_readOnlyWithInstructionForGeneration) ;
  GALGAS_string var_receiverVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 989)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType = object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 990)) ;
  GALGAS_string var_keyVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 992)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const cMapElement_").add_operation (var_receiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 994)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 994)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 994)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 995)).add_operation (GALGAS_string (" = (const cMapElement_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 995)).add_operation (var_receiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 995)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 995)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 995)).add_operation (var_receiverVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 996)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 996))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 994)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("readAccessForWithInstruction (").add_operation (var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 998)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 998))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 998)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("performSearch (").add_operation (var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1000)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1000)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1001)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1001)).add_operation (GALGAS_string (", kSearchErrorMessage_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1001)).add_operation (var_receiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1002)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1002)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1002)).add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1002)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1002)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1003)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1003)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1003))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1000)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1004)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1004)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (NULL != ").add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1006)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1006)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1006)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1007)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1007)).add_operation (var_receiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1007)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1007)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1007))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1006)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mDoBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1008)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseBranchInstructions.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1016)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1017)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1018)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1027)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_readOnlyWithInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration.mSlotID,
                                           categoryMethod_readOnlyWithInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readOnlyWithInstructionForGeneration_generateInstruction (defineCategoryMethod_readOnlyWithInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@readWriteWithInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_readWriteWithInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readWriteWithInstructionForGeneration * object = (const cPtr_readWriteWithInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_readWriteWithInstructionForGeneration) ;
  GALGAS_string var_receiverCppName = object->mAttribute_mReceiverVariableCppName ;
  cEnumerator_lstringlist enumerator_45055 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_45055.hasCurrentObject ()) {
    var_receiverCppName.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_45055.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1040)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1040)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1040))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1040)) ;
    enumerator_45055.gotoNextObject () ;
  }
  GALGAS_string var_keyVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1043)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1045)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1045)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mReceiverVariableCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1046)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("cMapElement_").add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1047)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1047)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1047)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1048)).add_operation (GALGAS_string (" = (cMapElement_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1048)).add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1048)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1048)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1048)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1049)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1049))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1047)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("readWriteAccessForWithInstruction (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1051)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1051)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1051)).add_operation (var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1051))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1051)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("readWriteAccessForWithInstructionWithErrorMessage (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1053)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1053)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1053)).add_operation (var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1053))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1053)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", kSearchErrorMessage_").add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1054)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1054)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1054)).add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1054))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1054)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1056)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1056)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1056)).add_operation (GALGAS_string ("if (NULL != "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1056)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1057)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1057)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1057)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1058)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1058)).add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1058)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1058)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1058))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1056)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mDoBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1059)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseBranchInstructions.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1067)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1068)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1069)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1078)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_readWriteWithInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration.mSlotID,
                                           categoryMethod_readWriteWithInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readWriteWithInstructionForGeneration_generateInstruction (defineCategoryMethod_readWriteWithInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@foreachInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_foreachInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_foreachInstructionForGeneration * object = (const cPtr_foreachInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_foreachInstructionForGeneration) ;
  GALGAS_stringlist var_enumerationVarCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1091)) ;
  cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_47586 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
  while (enumerator_47586.hasCurrentObject ()) {
    GALGAS_string var_enumerationVar ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_47586.current_mEnumeratedExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_enumerationVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1094)) ;
    var_enumerationVarCppNameList.addAssign_operation (var_enumerationVar  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1095)) ;
    enumerator_47586.gotoNextObject () ;
  }
  cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_47859 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
  cEnumerator_stringlist enumerator_47892 (var_enumerationVarCppNameList, kEnumeration_up) ;
  while (enumerator_47859.hasCurrentObject () && enumerator_47892.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("cEnumerator_").add_operation (enumerator_47859.current_mEnumeratedExpression (HERE).reader_mResultType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1098)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1098)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1098)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1098)).add_operation (enumerator_47859.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1098)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1098)).add_operation (enumerator_47892.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1098)).add_operation (GALGAS_string (", kEnumeration_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1098)).add_operation (enumerator_47859.current_mEnumerationOrder (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1099)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1099))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1098)) ;
    enumerator_47859.gotoNextObject () ;
    enumerator_47892.gotoNextObject () ;
  }
  GALGAS_bool var_whileExpressionIsAllwaysTrue = callCategoryReader_isTrueExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhileExpression.ptr (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1102)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBeforeInstructionList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1104)).add_operation (object->mAttribute_mAfterInstructionList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1104)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1104)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_or (var_whileExpressionIsAllwaysTrue.operator_not (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1104)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1104)).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexVariableCppName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_uint ").add_operation (object->mAttribute_mIndexVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1107)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1107))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1107)) ;
    }
    GALGAS_string var_boolVarCppName = GALGAS_string ("bool_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1109)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1109)) ;
    ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1109)) ;
    const enumGalgasBool test_2 = var_whileExpressionIsAllwaysTrue.boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const bool ").add_operation (var_boolVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1111)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1111))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1111)) ;
    }else if (kBoolFalse == test_2) {
      GALGAS_string var_whileVar ;
      callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1114)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("bool ").add_operation (var_boolVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1115)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1115)).add_operation (var_whileVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1115)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1115))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1115)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1117)) ;
    cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_49142 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
    while (enumerator_49142.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_49142.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1119))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1119)) ;
      enumerator_49142.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (var_boolVarCppName.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1121))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1121)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mBeforeInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1122)) ;
    }
    {
    ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1130)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("while (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1131)) ;
    cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_49615 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
    while (enumerator_49615.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_49615.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1133))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1133)) ;
      enumerator_49615.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (var_boolVarCppName.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1135))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1135)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mDoInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1137)) ;
    }
    cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_50066 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
    while (enumerator_50066.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (enumerator_50066.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1147)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1147))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1147)) ;
      enumerator_50066.gotoNextObject () ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexVariableCppName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (object->mAttribute_mIndexVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1150)).add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1150))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1150)) ;
    }
    const enumGalgasBool test_4 = var_whileExpressionIsAllwaysTrue.operator_not (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1153)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  if (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1154)) ;
      cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_50430 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
      while (enumerator_50430.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_50430.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1156))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1156)) ;
        if (enumerator_50430.hasNextObject ()) {
          ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" && ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1157)) ;
        }
        enumerator_50430.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (") {\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1159)) ;
      GALGAS_string var_whileVar ;
      callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1161)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("    ").add_operation (var_boolVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1162)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1162)).add_operation (var_whileVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1162)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1162))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1162)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  }\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1163)) ;
    }
    const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBetweenInstructionList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1166)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1167)) ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1168)) ;
      cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_51091 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
      while (enumerator_51091.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_51091.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1170))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1170)) ;
        enumerator_51091.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (var_boolVarCppName.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1172))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1172)) ;
      {
      routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mBetweenInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1173)) ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1181)) ;
      {
      ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1182)) ;
      }
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1185)) ;
    {
    ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1187)) ;
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mAfterInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1188)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1196)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexVariableCppName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_uint ").add_operation (object->mAttribute_mIndexVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1199)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1199))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1199)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("while (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1201)) ;
    cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_52241 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
    while (enumerator_52241.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_52241.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1203))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1203)) ;
      if (enumerator_52241.hasNextObject ()) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" && ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1204)) ;
      }
      enumerator_52241.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (") {\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1206)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mDoInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1208)) ;
    }
    const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBetweenInstructionList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1217)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_7) {
      {
      ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1218)) ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1219)) ;
      cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_52852 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
      while (enumerator_52852.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_52852.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasNextObject ()"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1221))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1221)) ;
        if (enumerator_52852.hasNextObject ()) {
          ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" && ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1222)) ;
        }
        enumerator_52852.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (") {\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1224)) ;
      {
      routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mBetweenInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1225)) ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1233)) ;
      {
      ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1234)) ;
      }
    }
    cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_53408 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
    while (enumerator_53408.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (enumerator_53408.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1238)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1238))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1238)) ;
      enumerator_53408.gotoNextObject () ;
    }
    const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexVariableCppName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1241)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1241)) ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (object->mAttribute_mIndexVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1242)).add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1242)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1242)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1242)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1242)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1243)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1243)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1243))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1242)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1245)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_foreachInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_foreachInstructionForGeneration.mSlotID,
                                           categoryMethod_foreachInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_foreachInstructionForGeneration_generateInstruction (defineCategoryMethod_foreachInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@logInstructionForGeneration generateInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_logInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logInstructionForGeneration * object = (const cPtr_logInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_logInstructionForGeneration) ;
  GALGAS_string var_logVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLogExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_logVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1259)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (var_logVar.add_operation (GALGAS_string (".log ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1260)).add_operation (object->mAttribute_mLogMessage.mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1260)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1260)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1260)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLogMessage.reader_location (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1261)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1261)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1261)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1261))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1260)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_logInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_logInstructionForGeneration.mSlotID,
                                           categoryMethod_logInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_logInstructionForGeneration_generateInstruction (defineCategoryMethod_logInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@switchInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_switchInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionForGeneration * object = (const cPtr_switchInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionForGeneration) ;
  GALGAS_string var_switchVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSwitchExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1275)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("switch (").add_operation (var_switchVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1282)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1282))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1282)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1283)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1283)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1283)).add_operation (GALGAS_string ("::kNotBuilt:\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1283))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1283)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  break ;\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1284)) ;
  cEnumerator_switchBranchesForGeneration enumerator_55570 (object->mAttribute_mBranches, kEnumeration_up) ;
  while (enumerator_55570.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_55607 (enumerator_55570.current_mSwitchConstantList (HERE), kEnumeration_up) ;
    while (enumerator_55607.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1287)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1287)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1287)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1287)).add_operation (enumerator_55607.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1287)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1287)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1287)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1287))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1287)) ;
      enumerator_55607.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1289)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1290)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_55570.current_mExtractedAssociatedValuesForGeneration (HERE).reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1291)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_type = GALGAS_string ("const cEnumAssociatedValues_").add_operation (object->mAttribute_mEnumType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1292)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1292)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1292)).add_operation (enumerator_55570.current_mSwitchConstantList (HERE).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1293)).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1293)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1293)) ;
      GALGAS_string var_varPtr = GALGAS_string ("extractPtr_").add_operation (enumerator_55570.current_mLocationIndex (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1294)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1294)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (var_type, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1295)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1295)).add_operation (var_varPtr, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1295)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1295)).add_operation (var_type, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1295)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1295)).add_operation (var_switchVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1295)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1295))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1295)) ;
      cEnumerator_extractedAssociatedValuesForGeneration enumerator_56297 (enumerator_55570.current_mExtractedAssociatedValuesForGeneration (HERE), kEnumeration_up) ;
      while (enumerator_56297.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  const GALGAS_").add_operation (enumerator_56297.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1297)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1297)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1297)).add_operation (enumerator_56297.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1297)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1297)).add_operation (var_varPtr, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1298)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1298)).add_operation (enumerator_56297.current_mIndex (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1298)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1298)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1298))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1297)) ;
        enumerator_56297.gotoNextObject () ;
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_55570.current_mInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1301)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1309)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("break ;\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1310)) ;
    {
    ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1311)) ;
    }
    enumerator_55570.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1313)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_switchInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_switchInstructionForGeneration.mSlotID,
                                           categoryMethod_switchInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_switchInstructionForGeneration_generateInstruction (defineCategoryMethod_switchInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@matchInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_matchInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_matchInstructionForGeneration * object = (const cPtr_matchInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_matchInstructionForGeneration) ;
  GALGAS_stringlist var_receiverList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1326)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_57436 (object->mAttribute_mMatchedExpressionList, kEnumeration_up) ;
  while (enumerator_57436.hasCurrentObject ()) {
    GALGAS_string var_variable ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_57436.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variable, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1328)) ;
    var_receiverList.addAssign_operation (var_variable  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1329)) ;
    enumerator_57436.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1331)) ;
  cEnumerator_stringlist enumerator_57678 (var_receiverList, kEnumeration_up) ;
  while (enumerator_57678.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_57678.current_mValue (HERE).add_operation (GALGAS_string (".isValid ()"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1333))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1333)) ;
    if (enumerator_57678.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" && ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1334)) ;
    }
    enumerator_57678.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (") {\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1336)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1337)) ;
  }
  cEnumerator_matchInstructionBranchListForGeneration enumerator_57880 (object->mAttribute_mMatchInstructionBranchList, kEnumeration_up) ;
  while (enumerator_57880.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1339)) ;
    cEnumerator_matchListForGeneration enumerator_57951 (enumerator_57880.current_mMatchListForGeneration (HERE), kEnumeration_up) ;
    cEnumerator_stringlist enumerator_57971 (var_receiverList, kEnumeration_up) ;
    while (enumerator_57951.hasCurrentObject () && enumerator_57971.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_57951.current_mIsType (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("(NULL != dynamic_cast <const cPtr_").add_operation (enumerator_57951.current_mTypeNameOrEnumerationConstantName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1342)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1342)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1342)).add_operation (enumerator_57971.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1343)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1343))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1342)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("(").add_operation (enumerator_57971.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1345)).add_operation (GALGAS_string (".enumValue () == GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1345)).add_operation (enumerator_57951.current_mLocalConstantName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1346)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1345)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1346)).add_operation (enumerator_57951.current_mTypeNameOrEnumerationConstantName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1347)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1347)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1347))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1345)) ;
      }
      if (enumerator_57951.hasNextObject () && enumerator_57971.hasNextObject ()) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" && ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1349)) ;
      }
      enumerator_57951.gotoNextObject () ;
      enumerator_57971.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (") {\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1351)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_57880.current_mMatchBranchInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1352)) ;
    }
    if (enumerator_57880.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1360)) ;
    }
    enumerator_57880.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1362)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1363)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1371)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1372)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1373)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_matchInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_matchInstructionForGeneration.mSlotID,
                                           categoryMethod_matchInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_matchInstructionForGeneration_generateInstruction (defineCategoryMethod_matchInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@grammarForGeneration appendDeclaration1'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_string & outArgument_outHeader,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  cEnumerator_lstringlist enumerator_2208 (object->mAttribute_mSyntaxComponents, kEnumeration_up) ;
  while (enumerator_2208.hasCurrentObject ()) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("syntax-").add_operation (enumerator_2208.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 24))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 24)) ;
    enumerator_2208.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (inCompiler, object->mAttribute_mLexiqueName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 27)), object->mAttribute_mNonTerminalMapForGrammarAnalysis, object->mAttribute_mNonTerminalToAddList, object->mAttribute_mHasIndexing, object->mAttribute_mStartSymbolName, object->mAttribute_mHasTranslateFeature, object->mAttribute_mGrammarName, object->mAttribute_mSyntaxComponents COMMA_SOURCE_FILE ("semanticGeneration.galgas", 26))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                             categoryMethod_grammarForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarForGeneration_appendDeclaration_31_ (defineCategoryMethod_grammarForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@grammarForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_string & outArgument_outImplementation,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 44))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 44)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_2942 (object->mAttribute_mNonTerminalMapForGrammarAnalysis, kEnumeration_up) ;
  while (enumerator_2942.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_2991 (enumerator_2942.current_mNonterminalSymbolParametersMap (HERE), kEnumeration_up) ;
    while (enumerator_2991.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_3032 (enumerator_2991.current_mFormalParametersList (HERE), kEnumeration_up) ;
      while (enumerator_3032.hasCurrentObject ()) {
        switch (enumerator_3032.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inUnifiedTypeMap, enumerator_3032.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 50)) ;
            categoryMethod_addHeaderFileName (var_t, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 51)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_3032.gotoNextObject () ;
      }
      enumerator_2991.gotoNextObject () ;
    }
    enumerator_2942.gotoNextObject () ;
  }
  outArgument_outImplementation = object->mAttribute_mCppFileContents ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                                    categoryMethod_grammarForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarForGeneration_appendSpecificImplementation (defineCategoryMethod_grammarForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@grammarForGeneration implementationCppFileName'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_grammarForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  result_outName = GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 76)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_grammarForGeneration_implementationCppFileName (void) {
  enterCategoryReader_implementationCppFileName (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                                 categoryReader_grammarForGeneration_implementationCppFileName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_grammarForGeneration_implementationCppFileName (defineCategoryReader_grammarForGeneration_implementationCppFileName, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category reader '@grammarForGeneration hasCppHeaderFile'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_grammarForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outHasHeader ; // Returned variable
  result_outHasHeader = GALGAS_bool (false) ;
//---
  return result_outHasHeader ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_grammarForGeneration_hasCppHeaderFile (void) {
  enterCategoryReader_hasCppHeaderFile (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                        categoryReader_grammarForGeneration_hasCppHeaderFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_grammarForGeneration_hasCppHeaderFile (defineCategoryReader_grammarForGeneration_hasCppHeaderFile, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category reader '@grammarForGeneration headerKind'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_grammarForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outHeaderKind ; // Returned variable
  result_outHeaderKind = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 88)) ;
//---
  return result_outHeaderKind ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_grammarForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                  categoryReader_grammarForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_grammarForGeneration_headerKind (defineCategoryReader_grammarForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category reader '@grammarForGeneration isPredefined'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_grammarForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_grammarForGeneration_isPredefined (void) {
  enterCategoryReader_isPredefined (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                    categoryReader_grammarForGeneration_isPredefined) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_grammarForGeneration_isPredefined (defineCategoryReader_grammarForGeneration_isPredefined, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@syntaxDeclarationForGeneration implementationCppFileName'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_syntaxDeclarationForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_syntaxDeclarationForGeneration * object = (const cPtr_syntaxDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxDeclarationForGeneration) ;
  result_outName = GALGAS_string ("syntax-").add_operation (object->mAttribute_mSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 102)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_syntaxDeclarationForGeneration_implementationCppFileName (void) {
  enterCategoryReader_implementationCppFileName (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                                 categoryReader_syntaxDeclarationForGeneration_implementationCppFileName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_syntaxDeclarationForGeneration_implementationCppFileName (defineCategoryReader_syntaxDeclarationForGeneration_implementationCppFileName, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@syntaxDeclarationForGeneration hasCppHeaderFile'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_syntaxDeclarationForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outHasHeader ; // Returned variable
  result_outHasHeader = GALGAS_bool (false) ;
//---
  return result_outHasHeader ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_syntaxDeclarationForGeneration_hasCppHeaderFile (void) {
  enterCategoryReader_hasCppHeaderFile (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                        categoryReader_syntaxDeclarationForGeneration_hasCppHeaderFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_syntaxDeclarationForGeneration_hasCppHeaderFile (defineCategoryReader_syntaxDeclarationForGeneration_hasCppHeaderFile, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@syntaxDeclarationForGeneration headerKind'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_syntaxDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outHeaderKind ; // Returned variable
  result_outHeaderKind = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 114)) ;
//---
  return result_outHeaderKind ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_syntaxDeclarationForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                  categoryReader_syntaxDeclarationForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_syntaxDeclarationForGeneration_headerKind (defineCategoryReader_syntaxDeclarationForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@syntaxDeclarationForGeneration isPredefined'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_syntaxDeclarationForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_syntaxDeclarationForGeneration_isPredefined (void) {
  enterCategoryReader_isPredefined (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                    categoryReader_syntaxDeclarationForGeneration_isPredefined) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_syntaxDeclarationForGeneration_isPredefined (defineCategoryReader_syntaxDeclarationForGeneration_isPredefined, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@syntaxDeclarationForGeneration appendDeclaration1'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_syntaxDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_string & outArgument_outHeader,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syntaxDeclarationForGeneration * object = (const cPtr_syntaxDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxDeclarationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 128))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 128)) ;
  GALGAS_uintlist var_selectMethodList = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 129)) ;
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mSelectMethodCount.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 131)).isValid ()) {
    uint32_t variant_6388 = object->mAttribute_mSelectMethodCount.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 131)).uintValue () ;
    bool loop_6388 = true ;
    while (loop_6388) {
      loop_6388 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mSelectMethodCount)).isValid () ;
      if (loop_6388) {
        loop_6388 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mSelectMethodCount)).boolValue () ;
      }
      if (loop_6388 && (0 == variant_6388)) {
        loop_6388 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 131)) ;
      }
      if (loop_6388) {
        variant_6388 -- ;
        var_selectMethodList.addAssign_operation (var_idx  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 133)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 134)) ;
      }
    }
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (inCompiler, object->mAttribute_mSyntaxComponentName, object->mAttribute_mLexiqueName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 138)), object->mAttribute_mNonterminalDeclarationMap, object->mAttribute_mRuleDeclarationList, var_selectMethodList, object->mAttribute_mHasIndexing, object->mAttribute_mHasTranslateFeature COMMA_SOURCE_FILE ("semanticGeneration.galgas", 136))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_syntaxDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                             categoryMethod_syntaxDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxDeclarationForGeneration_appendDeclaration_31_ (defineCategoryMethod_syntaxDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@syntaxDeclarationForGeneration appendSpecificImplementation'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_syntaxDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_string & outArgument_outImplementation,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syntaxDeclarationForGeneration * object = (const cPtr_syntaxDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxDeclarationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("syntax-").add_operation (object->mAttribute_mSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 153))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 153)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (inCompiler, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 155)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 154))) ;
  GALGAS_string var_lexiqueCppName = GALGAS_string ("C_Lexique_").add_operation (object->mAttribute_mLexiqueName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 158)) ;
  cEnumerator_ruleDeclarationList enumerator_7363 (object->mAttribute_mRuleDeclarationList, kEnumeration_up) ;
  while (enumerator_7363.hasCurrentObject ()) {
    cEnumerator_ruleLabelImplementationList enumerator_7447 (enumerator_7363.current_mLabelImplementationList (HERE), kEnumeration_up) ;
    while (enumerator_7447.hasCurrentObject ()) {
      GALGAS_string var_ruleName = GALGAS_string ("cParser_").add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 162)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 162)).add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 163)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 163)).add_operation (enumerator_7363.current_mNonterminalName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 163)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 164)).add_operation (enumerator_7363.current_mRuleIndex (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 165)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 165)).add_operation (enumerator_7447.current_mLabelName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 165)) ;
      outArgument_outImplementation.dotAssign_operation (GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 166)) ;
      GALGAS_string var_code ;
      {
      routine_generateProcedure (GALGAS_bool (false), var_ruleName, ioArgument_ioInclusionSet, enumerator_7447.current_mSignatureForGeneration (HERE), enumerator_7447.current_mInstructionListForGeneration (HERE), GALGAS_bool (false), var_lexiqueCppName, GALGAS_bool (false), GALGAS_bool (false), object->mAttribute_mHasTranslateFeature, var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 167)) ;
      }
      outArgument_outImplementation.dotAssign_operation (var_code  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 180)) ;
      enumerator_7447.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    GALGAS_lstring joker_8445 ; // Joker input parameter
    GALGAS_formalParameterListForGeneration joker_8448 ; // Joker input parameter
    GALGAS_formalParameterSignature joker_8451 ; // Joker input parameter
    GALGAS_location joker_8454 ; // Joker input parameter
    enumerator_7363.current_mLabelImplementationList (HERE).method_first (joker_8445, joker_8448, joker_8451, joker_8454, var_instructionList, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 184)) ;
    GALGAS_string var_ruleName = GALGAS_string ("cParser_").add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 185)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 185)).add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 186)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 186)).add_operation (enumerator_7363.current_mNonterminalName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 186)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 187)).add_operation (enumerator_7363.current_mRuleIndex (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 188)).add_operation (GALGAS_string ("_parse"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 188)) ;
    outArgument_outImplementation.dotAssign_operation (GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
      "\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 189)) ;
    GALGAS_string var_code ;
    {
    routine_generateProcedure (GALGAS_bool (false), var_ruleName, ioArgument_ioInclusionSet, GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 194)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_instructionList, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 195)), GALGAS_bool (false), var_lexiqueCppName, GALGAS_bool (false), GALGAS_bool (true), object->mAttribute_mHasTranslateFeature, var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 190)) ;
    }
    outArgument_outImplementation.dotAssign_operation (var_code  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 203)) ;
    const enumGalgasBool test_0 = object->mAttribute_mHasIndexing.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_semanticInstructionListForGeneration var_instructionList ;
      GALGAS_lstring joker_9454 ; // Joker input parameter
      GALGAS_formalParameterListForGeneration joker_9457 ; // Joker input parameter
      GALGAS_formalParameterSignature joker_9460 ; // Joker input parameter
      GALGAS_location joker_9463 ; // Joker input parameter
      enumerator_7363.current_mLabelImplementationList (HERE).method_first (joker_9454, joker_9457, joker_9460, joker_9463, var_instructionList, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 207)) ;
      GALGAS_string var_ruleName = GALGAS_string ("cParser_").add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 208)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 208)).add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 209)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 209)).add_operation (enumerator_7363.current_mNonterminalName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 209)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 210)).add_operation (enumerator_7363.current_mRuleIndex (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 211)).add_operation (GALGAS_string ("_indexing"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 211)) ;
      outArgument_outImplementation.dotAssign_operation (GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 212)) ;
      GALGAS_string var_code ;
      {
      routine_generateProcedure (GALGAS_bool (false), var_ruleName, ioArgument_ioInclusionSet, GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 217)), function_syntaxSignatureOfInstructionList (GALGAS_string ("indexing"), var_instructionList, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 218)), GALGAS_bool (false), var_lexiqueCppName, GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 213)) ;
      }
      outArgument_outImplementation.dotAssign_operation (var_code  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 226)) ;
    }
    enumerator_7363.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_syntaxDeclarationForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                                    categoryMethod_syntaxDeclarationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxDeclarationForGeneration_appendSpecificImplementation (defineCategoryMethod_syntaxDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@routinePrototypeDeclarationForGeneration headerKind'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_routinePrototypeDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1096)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_routinePrototypeDeclarationForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration.mSlotID,
                                  categoryReader_routinePrototypeDeclarationForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_routinePrototypeDeclarationForGeneration_headerKind (defineCategoryReader_routinePrototypeDeclarationForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@routinePrototypeDeclarationForGeneration appendDeclaration1'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                           GALGAS_string & outArgument_outHeader,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routinePrototypeDeclarationForGeneration * object = (const cPtr_routinePrototypeDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_routinePrototypeDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (inCompiler, object->mAttribute_mRoutineName, object->mAttribute_mFormalArgumentList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1104))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration.mSlotID,
                                             categoryMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_ (defineCategoryMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@functionPrototypeDeclarationForGeneration headerKind'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_functionPrototypeDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1115)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_functionPrototypeDeclarationForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration.mSlotID,
                                  categoryReader_functionPrototypeDeclarationForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_functionPrototypeDeclarationForGeneration_headerKind (defineCategoryReader_functionPrototypeDeclarationForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@functionPrototypeDeclarationForGeneration appendDeclaration1'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                            GALGAS_string & outArgument_outHeader,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionPrototypeDeclarationForGeneration * object = (const cPtr_functionPrototypeDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_functionPrototypeDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, object->mAttribute_mFunctionName, object->mAttribute_mFormalArgumentList, object->mAttribute_mReturnType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1126)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1123))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration.mSlotID,
                                             categoryMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_ (defineCategoryMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@onceFunctionDeclarationForGeneration headerKind'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_onceFunctionDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1133)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_onceFunctionDeclarationForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration.mSlotID,
                                  categoryReader_onceFunctionDeclarationForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_onceFunctionDeclarationForGeneration_headerKind (defineCategoryReader_onceFunctionDeclarationForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@onceFunctionDeclarationForGeneration appendDeclaration1'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                       GALGAS_string & outArgument_outHeader,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationForGeneration * object = (const cPtr_onceFunctionDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, object->mAttribute_mFunctionName, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1143)), object->mAttribute_mReturnType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1144)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1141))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration.mSlotID,
                                             categoryMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_ (defineCategoryMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@externTypeDeclarationForGeneration appendDeclaration1'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                     GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                     GALGAS_string & outArgument_outHeader,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationForGeneration * object = (const cPtr_externTypeDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1156)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1157)), object->mAttribute_mCppPreDeclarationCode, object->mAttribute_mCppClassCode COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1155))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1162)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1163)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1164)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1165)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1166)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1167)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1168)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1169)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1170)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1171)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1172)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1173)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1161)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1161)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration.mSlotID,
                                             categoryMethod_externTypeDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (defineCategoryMethod_externTypeDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@semanticTypeForGeneration appendTypeGenericImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_semanticTypeForGeneration_appendTypeGenericImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outImplementation ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  result_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1183)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1184)), object->mAttribute_mTypeProxy.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1185)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1186)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1182))) ;
//---
  return result_outImplementation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticTypeForGeneration_appendTypeGenericImplementation (void) {
  enterCategoryReader_appendTypeGenericImplementation (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                                       categoryReader_semanticTypeForGeneration_appendTypeGenericImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticTypeForGeneration_appendTypeGenericImplementation (defineCategoryReader_semanticTypeForGeneration_appendTypeGenericImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@arrayTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_arrayTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayTypeForGeneration * object = (const cPtr_arrayTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1198)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1199)), object->mAttribute_mElementTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1200)), object->mAttribute_mDimension COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1197))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1204)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1205)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1206)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1207)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1208)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1209)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1210)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1211)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1212)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1213)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1214)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1215)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1203)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1203)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_arrayTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_arrayTypeForGeneration.mSlotID,
                                             categoryMethod_arrayTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_arrayTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@arrayTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_arrayTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayTypeForGeneration * object = (const cPtr_arrayTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1225)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1226)) ;
  GALGAS_stringlist var_suffixList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1228)) ;
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mDimension.isValid ()) {
    uint32_t variant_50414 = object->mAttribute_mDimension.uintValue () ;
    bool loop_50414 = true ;
    while (loop_50414) {
      loop_50414 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension)).isValid () ;
      if (loop_50414) {
        loop_50414 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension)).boolValue () ;
      }
      if (loop_50414 && (0 == variant_50414)) {
        loop_50414 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 1230)) ;
      }
      if (loop_50414) {
        variant_50414 -- ;
        var_suffixList.addAssign_operation (var_idx.reader_string (SOURCE_FILE ("semanticGeneration.galgas", 1231))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1231)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1232)) ;
      }
    }
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1235)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1236)), object->mAttribute_mElementTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1237)), object->mAttribute_mDimension, var_suffixList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1234))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_arrayTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_arrayTypeForGeneration.mSlotID,
                                                    categoryMethod_arrayTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_arrayTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@listmapTypeForGeneration appendDeclaration1'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listmapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_string & outArgument_outHeader,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapTypeForGeneration * object = (const cPtr_listmapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listmapTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_51215 (object->mAttribute_mAssociatedListTypedAttributeList, kEnumeration_up) ;
  while (enumerator_51215.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName_31_ (enumerator_51215.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1252)) ;
    enumerator_51215.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1256)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1257)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1255))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1260)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1261)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1262)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1263)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1264)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1265)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1266)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1267)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1268)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1269)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1270)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1271)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1259)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1259)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listmapTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listmapTypeForGeneration.mSlotID,
                                             categoryMethod_listmapTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_listmapTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@listmapTypeForGeneration appendSpecificImplementation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listmapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                  const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_string & outArgument_outImplementation,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapTypeForGeneration * object = (const cPtr_listmapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listmapTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1281)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mAssociatedListMapElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1282)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1284)), object->mAttribute_mAssociatedListTypeIndex.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1285)), object->mAttribute_mAssociatedListTypedAttributeList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1283))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listmapTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listmapTypeForGeneration.mSlotID,
                                                    categoryMethod_listmapTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_listmapTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@mapTypeForGeneration appendDeclaration1'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                       GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                       GALGAS_string & outArgument_outHeader,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1303)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1304)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1302))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1309)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1310)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1311)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1312)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1313)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1314)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1315)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1316)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1317)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1318)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1319)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1320)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1308)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1308)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                             categoryMethod_mapTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_mapTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@mapTypeForGeneration appendDeclaration2'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                       const GALGAS_bool /* constinArgument_inGenerateForGalgas_33_ */,
                                                                       const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_string & outArgument_outHeader,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_54141 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_54141.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName_31_ (enumerator_54141.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1332)) ;
    enumerator_54141.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1336)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1337)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1335))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapTypeForGeneration_appendDeclaration_32_ (void) {
  enterCategoryMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                             categoryMethod_mapTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendDeclaration_32_ (defineCategoryMethod_mapTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@mapTypeForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_string & outArgument_outImplementation,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1348)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1349)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1351)), object->mAttribute_mTypedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mRemoveMethodList, object->mAttribute_mHasInsertOrReplaceModifier COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1350))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                                    categoryMethod_mapTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_mapTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@graphDeclarationForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_graphDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1368)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1369)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1367))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1372)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1373)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1374)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1375)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1376)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1377)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1378)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1379)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1380)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1381)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1382)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1383)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1371)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1371)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_graphDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                             categoryMethod_graphDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendDeclaration_31_ (defineCategoryMethod_graphDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@graphDeclarationForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_graphDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1393)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mAssociatedListTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1394)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mAssociatedListElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1395)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1398)), object->mAttribute_mAssociatedListTypeProxy, object->mAttribute_mInsertModifierList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1396))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_graphDeclarationForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                                    categoryMethod_graphDeclarationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendSpecificImplementation (defineCategoryMethod_graphDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@classTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1411)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1411)).boolEnum () ;
  if (kBoolTrue == test_0) {
    categoryMethod_addHeaderFileName (object->mAttribute_mSuperClass, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1412)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1418)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1418)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1416)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1417)), temp_1, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1421)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1415))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1424)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1425)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1426)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1427)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1428)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1429)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1430)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1431)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1432)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1433)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1434)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1435)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1423)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1423)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                             categoryMethod_classTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_classTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@classTypeForGeneration appendDeclaration2'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         const GALGAS_bool constinArgument_inGenerateForGalgas_33_,
                                                                         const GALGAS_string constinArgument_inOutputDirectory,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_58370 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_58370.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_58370.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1447)) ;
    enumerator_58370.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = object->mAttribute_mGenerateHeaderInSeparateFile.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1454)).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_2) {
      temp_1 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1454)) ;
    }
    GALGAS_string var_part_31_ = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1452)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1453)), temp_1, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1451))) ;
    GALGAS_string temp_3 ;
    const enumGalgasBool test_4 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1462)).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_4) {
      temp_3 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1462)) ;
    }
    GALGAS_string var_part_32_ = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1460)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1461)), temp_3, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1459))) ;
    GALGAS_string var_headerFileName = GALGAS_string ("separateHeaderFor_").add_operation (object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1467)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1467)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1467)) ;
    {
    GALGAS_string temp_5 ;
    const enumGalgasBool test_6 = constinArgument_inGenerateForGalgas_33_.boolEnum () ;
    if (kBoolTrue == test_6) {
      temp_5 = GALGAS_string ("/../user-headers") ;
    }else if (kBoolFalse == test_6) {
      temp_5 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1469)), var_headerFileName, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), var_part_31_, GALGAS_string ("\n"
      "\n"), var_part_32_, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1468)) ;
    }
    outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1479)).add_operation (GALGAS_string ("\"\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1479)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string temp_7 ;
    const enumGalgasBool test_8 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1484)).boolEnum () ;
    if (kBoolTrue == test_8) {
      temp_7 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_8) {
      temp_7 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1484)) ;
    }
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1482)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1483)), temp_7, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1481))) ;
    GALGAS_string temp_9 ;
    const enumGalgasBool test_10 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1492)).boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_10) {
      temp_9 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1492)) ;
    }
    outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1490)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1491)), temp_9, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1489)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1489)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classTypeForGeneration_appendDeclaration_32_ (void) {
  enterCategoryMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                             categoryMethod_classTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classTypeForGeneration_appendDeclaration_32_ (defineCategoryMethod_classTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@classTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1506)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1510)).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1510)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1508)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1509)), temp_0, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mAllTypedAttributeList.reader_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint ((uint32_t) 0U), object->mAttribute_mAllTypedAttributeList.reader_length (SOURCE_FILE ("semanticGeneration.galgas", 1513)).substract_operation (object->mAttribute_mTypedAttributeList.reader_length (SOURCE_FILE ("semanticGeneration.galgas", 1513)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1513))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1513)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1513)), object->mAttribute_mIsAbstract, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1515)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1507))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                                    categoryMethod_classTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_classTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@routineImplementationForGeneration appendSpecificImplementation'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_routineImplementationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                            const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                            GALGAS_string & outArgument_outImplementation,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routineImplementationForGeneration * object = (const cPtr_routineImplementationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_routineImplementationForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mHasHeader.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1528))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1528)) ;
  }
  GALGAS_string var_code ;
  {
  routine_generateProcedure (object->mAttribute_mGenerateStatic, GALGAS_string ("routine_").add_operation (object->mAttribute_mRoutineName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1532)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1532)), ioArgument_ioInclusionSet, object->mAttribute_mFormalArgumentList, object->mAttribute_mRoutineInstructionList, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1530)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (inCompiler, object->mAttribute_mRoutineName, var_code COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1543))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_routineImplementationForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_routineImplementationForGeneration.mSlotID,
                                                    categoryMethod_routineImplementationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_routineImplementationForGeneration_appendSpecificImplementation (defineCategoryMethod_routineImplementationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@functionImplementationForGeneration appendSpecificImplementation'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionImplementationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                             const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_string & outArgument_outImplementation,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionImplementationForGeneration * object = (const cPtr_functionImplementationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_functionImplementationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1555))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1555)) ;
  GALGAS_string var_code ;
  {
  routine_generateFunction (GALGAS_string ("function_").add_operation (object->mAttribute_mFunctionName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1557)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1557)), ioArgument_ioInclusionSet, object->mAttribute_mFormalArgumentList, object->mAttribute_mFunctionInstructionList, GALGAS_string ("C_Compiler"), object->mAttribute_mReturnType, object->mAttribute_mResultVariableCppName, GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1556)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (inCompiler, object->mAttribute_mFunctionName, var_code, object->mAttribute_mFormalArgumentList, object->mAttribute_mReturnType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1571)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1567))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionImplementationForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_functionImplementationForGeneration.mSlotID,
                                                    categoryMethod_functionImplementationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionImplementationForGeneration_appendSpecificImplementation (defineCategoryMethod_functionImplementationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@onceFunctionDeclarationForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                              const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                              GALGAS_string & outArgument_outImplementation,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationForGeneration * object = (const cPtr_onceFunctionDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1581))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1581)) ;
  GALGAS_string var_code ;
  {
  routine_generateFunction (GALGAS_string ("onceFunction_").add_operation (object->mAttribute_mFunctionName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1583)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1583)), ioArgument_ioInclusionSet, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1585)), object->mAttribute_mFunctionInstructionList, GALGAS_string ("C_Compiler"), object->mAttribute_mReturnType, object->mAttribute_mResultVariableCppName, GALGAS_bool (true), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1582)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (inCompiler, object->mAttribute_mFunctionName, var_code, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1596)), object->mAttribute_mReturnType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1597)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1593))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration.mSlotID,
                                                    categoryMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation (defineCategoryMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@abstractCategoryMethodForGeneration appendDeclaration1'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryMethodForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_string & outArgument_outHeader,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryMethodForGeneration * object = (const cPtr_abstractCategoryMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryMethodForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryMethodDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1611)), object->mAttribute_mAbstractCategoryMethodName, object->mAttribute_mAbstractCategoryMethodFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1610))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryMethodForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_abstractCategoryMethodForGeneration.mSlotID,
                                             categoryMethod_abstractCategoryMethodForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryMethodForGeneration_appendDeclaration_31_ (defineCategoryMethod_abstractCategoryMethodForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@abstractCategoryMethodForGeneration headerKind'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_abstractCategoryMethodForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1620)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_abstractCategoryMethodForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_abstractCategoryMethodForGeneration.mSlotID,
                                  categoryReader_abstractCategoryMethodForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractCategoryMethodForGeneration_headerKind (defineCategoryReader_abstractCategoryMethodForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@abstractCategoryMethodForGeneration appendSpecificImplementation'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryMethodForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                             const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_string & outArgument_outImplementation,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryMethodForGeneration * object = (const cPtr_abstractCategoryMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryMethodForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1629)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1629)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1629)).add_operation (object->mAttribute_mAbstractCategoryMethodName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1629))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1629)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1630)) ;
  cEnumerator_formalParameterListForGeneration enumerator_65260 (object->mAttribute_mAbstractCategoryMethodFormalParameterList, kEnumeration_up) ;
  while (enumerator_65260.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_65260.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1632)) ;
    enumerator_65260.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryMethodImplementation (inCompiler, object->mAttribute_mReceiverType, object->mAttribute_mAbstractCategoryMethodName, object->mAttribute_mAbstractCategoryMethodFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1634))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryMethodForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_abstractCategoryMethodForGeneration.mSlotID,
                                                    categoryMethod_abstractCategoryMethodForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryMethodForGeneration_appendSpecificImplementation (defineCategoryMethod_abstractCategoryMethodForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@categoryMethodForGeneration headerKind'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_categoryMethodForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1644)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_categoryMethodForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_categoryMethodForGeneration.mSlotID,
                                  categoryReader_categoryMethodForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_categoryMethodForGeneration_headerKind (defineCategoryReader_categoryMethodForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@categoryMethodForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryMethodForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryMethodForGeneration * object = (const cPtr_categoryMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_categoryMethodForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1654)), object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1653))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1660)), object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1659))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryMethodForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_categoryMethodForGeneration.mSlotID,
                                             categoryMethod_categoryMethodForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryMethodForGeneration_appendDeclaration_31_ (defineCategoryMethod_categoryMethodForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@categoryMethodForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryMethodForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                     const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryMethodForGeneration * object = (const cPtr_categoryMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_categoryMethodForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_formalParameterListForGeneration var_categoryMethodFormalParameterList = object->mAttribute_mCategoryMethodFormalParameterList ;
    {
    var_categoryMethodFormalParameterList.modifier_insertAtIndex (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticGeneration.galgas", 1676)), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticGeneration.galgas", 1677)), object->mAttribute_mReceiverType, GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1679))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1679)), GALGAS_string ("inObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1675)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1683)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1683)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1683)).add_operation (object->mAttribute_mCategoryMethodName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1683))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1683)) ;
    GALGAS_string var_code ;
    {
    routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("categoryMethod_").add_operation (object->mAttribute_mCategoryMethodName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1686)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1686)), ioArgument_ioInclusionSet, var_categoryMethodFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1684)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1698)), object->mAttribute_mCategoryMethodName, var_code COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1697))) ;
  }else if (kBoolFalse == test_0) {
    categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1703)) ;
    cEnumerator_formalParameterListForGeneration enumerator_68003 (object->mAttribute_mCategoryMethodFormalParameterList, kEnumeration_up) ;
    while (enumerator_68003.hasCurrentObject ()) {
      categoryMethod_addHeaderFileName (enumerator_68003.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1705)) ;
      enumerator_68003.gotoNextObject () ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_baseType = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 1709)).isValid ()) {
      uint32_t variant_68164 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 1709)).uintValue () ;
      bool loop_68164 = true ;
      while (loop_68164) {
        loop_68164 = var_searching.isValid () ;
        if (loop_68164) {
          loop_68164 = var_searching.boolValue () ;
        }
        if (loop_68164 && (0 == variant_68164)) {
          loop_68164 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 1709)) ;
        }
        if (loop_68164) {
          variant_68164 -- ;
          const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1710)).reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1710)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1710)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1711)).reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1711)).reader_hasKey (object->mAttribute_mCategoryMethodName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1711)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1712)) ;
            }else if (kBoolFalse == test_2) {
              var_searching = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1720)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1720)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1720)).add_operation (object->mAttribute_mCategoryMethodName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1720))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1720)) ;
    GALGAS_string var_methodImplementation ;
    {
    routine_generateCategoryMethod (object->mAttribute_mReceiverType, GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1721)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1731)), object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList, var_methodImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1730))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryMethodForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_categoryMethodForGeneration.mSlotID,
                                                    categoryMethod_categoryMethodForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryMethodForGeneration_appendSpecificImplementation (defineCategoryMethod_categoryMethodForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@overridingCategoryMethodForGeneration headerKind'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_overridingCategoryMethodForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 1742)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_overridingCategoryMethodForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_overridingCategoryMethodForGeneration.mSlotID,
                                  categoryReader_overridingCategoryMethodForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_overridingCategoryMethodForGeneration_headerKind (defineCategoryReader_overridingCategoryMethodForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@overridingCategoryMethodForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryMethodForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryMethodForGeneration * object = (const cPtr_overridingCategoryMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryMethodForGeneration) ;
  GALGAS_string var_methodImplementation ;
  {
  routine_generateCategoryMethod (object->mAttribute_mReceiverType, object->mAttribute_mBaseTypeName, ioArgument_ioInclusionSet, object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1751)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryMethodImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1761)), object->mAttribute_mCategoryMethodName, var_methodImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1760))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryMethodForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overridingCategoryMethodForGeneration.mSlotID,
                                                    categoryMethod_overridingCategoryMethodForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryMethodForGeneration_appendSpecificImplementation (defineCategoryMethod_overridingCategoryMethodForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@abstractCategoryModifierForGeneration headerKind'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_abstractCategoryModifierForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1774)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_abstractCategoryModifierForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_abstractCategoryModifierForGeneration.mSlotID,
                                  categoryReader_abstractCategoryModifierForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractCategoryModifierForGeneration_headerKind (defineCategoryReader_abstractCategoryModifierForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@abstractCategoryModifierForGeneration appendDeclaration1'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryModifierForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                        GALGAS_string & outArgument_outHeader,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryModifierForGeneration * object = (const cPtr_abstractCategoryModifierForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryModifierForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryModifierDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1783)), object->mAttribute_mAbstractCategoryModifierName, object->mAttribute_mAbstractCategoryModifierFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1782))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryModifierForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_abstractCategoryModifierForGeneration.mSlotID,
                                             categoryMethod_abstractCategoryModifierForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryModifierForGeneration_appendDeclaration_31_ (defineCategoryMethod_abstractCategoryModifierForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@abstractCategoryModifierForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryModifierForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryModifierForGeneration * object = (const cPtr_abstractCategoryModifierForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryModifierForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1795)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1795)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1795)).add_operation (object->mAttribute_mAbstractCategoryModifierName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1795))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1795)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1796)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryModifierImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1798)), object->mAttribute_mAbstractCategoryModifierName, object->mAttribute_mAbstractCategoryModifierFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1797))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryModifierForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_abstractCategoryModifierForGeneration.mSlotID,
                                                    categoryMethod_abstractCategoryModifierForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryModifierForGeneration_appendSpecificImplementation (defineCategoryMethod_abstractCategoryModifierForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@categoryModifierForGeneration headerKind'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_categoryModifierForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1807)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_categoryModifierForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_categoryModifierForGeneration.mSlotID,
                                  categoryReader_categoryModifierForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_categoryModifierForGeneration_headerKind (defineCategoryReader_categoryModifierForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@categoryModifierForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryModifierForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryModifierForGeneration * object = (const cPtr_categoryModifierForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_categoryModifierForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1817)), object->mAttribute_mCategoryModifierName, object->mAttribute_mCategoryModifierFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1816))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1823)), object->mAttribute_mCategoryModifierName, object->mAttribute_mCategoryModifierFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1822))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryModifierForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_categoryModifierForGeneration.mSlotID,
                                             categoryMethod_categoryModifierForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryModifierForGeneration_appendDeclaration_31_ (defineCategoryMethod_categoryModifierForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@categoryModifierForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryModifierForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryModifierForGeneration * object = (const cPtr_categoryModifierForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_categoryModifierForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_formalParameterListForGeneration var_categoryModifierFormalParameterList = object->mAttribute_mCategoryModifierFormalParameterList ;
    {
    var_categoryModifierFormalParameterList.modifier_insertAtIndex (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticGeneration.galgas", 1839)), GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticGeneration.galgas", 1840)), object->mAttribute_mReceiverType, GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1842))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1842)), GALGAS_string ("ioObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1838)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1846)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1846)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1846)).add_operation (object->mAttribute_mCategoryModifierName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1846))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1846)) ;
    GALGAS_string var_code ;
    {
    routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("categoryModifier_").add_operation (object->mAttribute_mCategoryModifierName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1849)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1849)), ioArgument_ioInclusionSet, var_categoryModifierFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1847)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1861)), object->mAttribute_mCategoryModifierName, var_code COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1860))) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_baseType = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 1868)).isValid ()) {
      uint32_t variant_74045 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 1868)).uintValue () ;
      bool loop_74045 = true ;
      while (loop_74045) {
        loop_74045 = var_searching.isValid () ;
        if (loop_74045) {
          loop_74045 = var_searching.boolValue () ;
        }
        if (loop_74045 && (0 == variant_74045)) {
          loop_74045 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 1868)) ;
        }
        if (loop_74045) {
          variant_74045 -- ;
          const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1869)).reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1869)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1869)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1870)).reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1870)).reader_hasKey (object->mAttribute_mCategoryModifierName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1870)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1871)) ;
            }else if (kBoolFalse == test_2) {
              var_searching = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1879)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1879)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1879)).add_operation (object->mAttribute_mCategoryModifierName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1879))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1879)) ;
    categoryMethod_addHeaderFileName (var_baseType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1880)) ;
    GALGAS_string var_modifierImplementation ;
    {
    routine_generateCategoryModifier (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1882)), GALGAS_string::makeEmptyString (), object->mAttribute_mCategoryModifierName, ioArgument_ioInclusionSet, object->mAttribute_mCategoryModifierFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_modifierImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1881)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1891)), object->mAttribute_mCategoryModifierName, object->mAttribute_mCategoryModifierFormalParameterList, var_modifierImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1890))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryModifierForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_categoryModifierForGeneration.mSlotID,
                                                    categoryMethod_categoryModifierForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryModifierForGeneration_appendSpecificImplementation (defineCategoryMethod_categoryModifierForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@overridingCategoryModifierForGeneration headerKind'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_overridingCategoryModifierForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 1902)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_overridingCategoryModifierForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_overridingCategoryModifierForGeneration.mSlotID,
                                  categoryReader_overridingCategoryModifierForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_overridingCategoryModifierForGeneration_headerKind (defineCategoryReader_overridingCategoryModifierForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@overridingCategoryModifierForGeneration appendSpecificImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryModifierForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryModifierForGeneration * object = (const cPtr_overridingCategoryModifierForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryModifierForGeneration) ;
  GALGAS_string var_methodImplementation ;
  {
  routine_generateCategoryModifier (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1912)), object->mAttribute_mBaseTypeName, object->mAttribute_mCategoryModifierName, ioArgument_ioInclusionSet, object->mAttribute_mCategoryModifierFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1911)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_baseType = object->mAttribute_mReceiverType ;
  GALGAS_bool var_searching = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 1922)).isValid ()) {
    uint32_t variant_75892 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 1922)).uintValue () ;
    bool loop_75892 = true ;
    while (loop_75892) {
      loop_75892 = var_searching.isValid () ;
      if (loop_75892) {
        loop_75892 = var_searching.boolValue () ;
      }
      if (loop_75892 && (0 == variant_75892)) {
        loop_75892 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 1922)) ;
      }
      if (loop_75892) {
        variant_75892 -- ;
        const enumGalgasBool test_0 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1923)).reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1923)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1923)).boolEnum () ;
        if (kBoolTrue == test_0) {
          const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1924)).reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1924)).reader_hasKey (object->mAttribute_mCategoryModifierName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1924)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1925)) ;
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }else if (kBoolFalse == test_0) {
          var_searching = GALGAS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1933)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1933)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1933)).add_operation (object->mAttribute_mCategoryModifierName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1933))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1933)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1934)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryModifierImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1936)), object->mAttribute_mCategoryModifierName, var_methodImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1935))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryModifierForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overridingCategoryModifierForGeneration.mSlotID,
                                                    categoryMethod_overridingCategoryModifierForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryModifierForGeneration_appendSpecificImplementation (defineCategoryMethod_overridingCategoryModifierForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@abstractCategoryReaderForGeneration headerKind'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_abstractCategoryReaderForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1949)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_abstractCategoryReaderForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_abstractCategoryReaderForGeneration.mSlotID,
                                  categoryReader_abstractCategoryReaderForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractCategoryReaderForGeneration_headerKind (defineCategoryReader_abstractCategoryReaderForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@abstractCategoryReaderForGeneration appendDeclaration1'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryReaderForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_string & outArgument_outHeader,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryReaderForGeneration * object = (const cPtr_abstractCategoryReaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryReaderForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryReaderDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1959)), object->mAttribute_mAbstractCategoryReaderName, object->mAttribute_mAbstractCategoryReaderFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1958))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryReaderForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_abstractCategoryReaderForGeneration.mSlotID,
                                             categoryMethod_abstractCategoryReaderForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryReaderForGeneration_appendDeclaration_31_ (defineCategoryMethod_abstractCategoryReaderForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@abstractCategoryReaderForGeneration appendSpecificImplementation'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryReaderForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                             const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_string & outArgument_outImplementation,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryReaderForGeneration * object = (const cPtr_abstractCategoryReaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryReaderForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1973)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1973)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1973)).add_operation (object->mAttribute_mAbstractCategoryReaderName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1973))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1973)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1974)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1975)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_77938 (object->mAttribute_mAbstractCategoryReaderFormalParameterList, kEnumeration_up) ;
  while (enumerator_77938.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_77938.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1977)) ;
    enumerator_77938.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryReaderImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1980)), object->mAttribute_mAbstractCategoryReaderName, object->mAttribute_mAbstractCategoryReaderFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1979))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryReaderForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_abstractCategoryReaderForGeneration.mSlotID,
                                                    categoryMethod_abstractCategoryReaderForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryReaderForGeneration_appendSpecificImplementation (defineCategoryMethod_abstractCategoryReaderForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@categoryReaderForGeneration headerKind'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_categoryReaderForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1990)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_categoryReaderForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_categoryReaderForGeneration.mSlotID,
                                  categoryReader_categoryReaderForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_categoryReaderForGeneration_headerKind (defineCategoryReader_categoryReaderForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@categoryReaderForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryReaderForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryReaderForGeneration * object = (const cPtr_categoryReaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_categoryReaderForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2000)), object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderFormalParameterList, object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2003)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1999))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2007)), object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2006))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryReaderForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_categoryReaderForGeneration.mSlotID,
                                             categoryMethod_categoryReaderForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryReaderForGeneration_appendDeclaration_31_ (defineCategoryMethod_categoryReaderForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@categoryReaderForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryReaderForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                     const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryReaderForGeneration * object = (const cPtr_categoryReaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_categoryReaderForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_formalInputParameterListForGeneration var_categoryReaderFormalParameterList = object->mAttribute_mCategoryReaderFormalParameterList ;
    {
    var_categoryReaderFormalParameterList.modifier_insertAtIndex (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticGeneration.galgas", 2024)), object->mAttribute_mReceiverType, GALGAS_string ("inObject"), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2027))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2027)), GALGAS_bool (true), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2023)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2031)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2031)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2031)).add_operation (object->mAttribute_mCategoryReaderName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2031))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2031)) ;
    GALGAS_string var_code ;
    {
    routine_generateFunction (GALGAS_string ("categoryReader_").add_operation (object->mAttribute_mCategoryReaderName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2033)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2033)), ioArgument_ioInclusionSet, var_categoryReaderFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType, object->mAttribute_mResultVarCppName, GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2032)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2044)), object->mAttribute_mCategoryReaderName, var_code COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2043))) ;
  }else if (kBoolFalse == test_0) {
    categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2049)) ;
    categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2050)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_80647 (object->mAttribute_mCategoryReaderFormalParameterList, kEnumeration_up) ;
    while (enumerator_80647.hasCurrentObject ()) {
      categoryMethod_addHeaderFileName (enumerator_80647.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2052)) ;
      enumerator_80647.gotoNextObject () ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_baseType = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2056)).isValid ()) {
      uint32_t variant_80808 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2056)).uintValue () ;
      bool loop_80808 = true ;
      while (loop_80808) {
        loop_80808 = var_searching.isValid () ;
        if (loop_80808) {
          loop_80808 = var_searching.boolValue () ;
        }
        if (loop_80808 && (0 == variant_80808)) {
          loop_80808 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 2056)) ;
        }
        if (loop_80808) {
          variant_80808 -- ;
          const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2057)).reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 2057)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 2057)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2058)).reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2058)).reader_hasKey (object->mAttribute_mCategoryReaderName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2058)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2059)) ;
            }else if (kBoolFalse == test_2) {
              var_searching = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2067)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2067)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2067)).add_operation (object->mAttribute_mCategoryReaderName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2067))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2067)) ;
    GALGAS_string var_categoryReaderCode ;
    {
    routine_generateCategoryReader (object->mAttribute_mReceiverType, GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2076)), object->mAttribute_mResultVarCppName, var_categoryReaderCode, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2068)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2081)), object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderFormalParameterList, object->mAttribute_mResultType, var_categoryReaderCode COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2080))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryReaderForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_categoryReaderForGeneration.mSlotID,
                                                    categoryMethod_categoryReaderForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryReaderForGeneration_appendSpecificImplementation (defineCategoryMethod_categoryReaderForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@overrideCategoryReaderForGeneration headerKind'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_overrideCategoryReaderForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 2093)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_overrideCategoryReaderForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_overrideCategoryReaderForGeneration.mSlotID,
                                  categoryReader_overrideCategoryReaderForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_overrideCategoryReaderForGeneration_headerKind (defineCategoryReader_overrideCategoryReaderForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@overrideCategoryReaderForGeneration appendSpecificImplementation'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overrideCategoryReaderForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                             const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_string & outArgument_outImplementation,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overrideCategoryReaderForGeneration * object = (const cPtr_overrideCategoryReaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overrideCategoryReaderForGeneration) ;
  GALGAS_string var_categoryReaderCode ;
  {
  routine_generateCategoryReader (object->mAttribute_mReceiverType, object->mAttribute_mBaseTypeName, ioArgument_ioInclusionSet, object->mAttribute_mOverridingCategoryReaderName, object->mAttribute_mOverridingCategoryReaderFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2110)), object->mAttribute_mResultVarCppName, var_categoryReaderCode, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2102)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryReaderImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2115)), object->mAttribute_mOverridingCategoryReaderName, object->mAttribute_mResultType, var_categoryReaderCode COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2114))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overrideCategoryReaderForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overrideCategoryReaderForGeneration.mSlotID,
                                                    categoryMethod_overrideCategoryReaderForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overrideCategoryReaderForGeneration_appendSpecificImplementation (defineCategoryMethod_overrideCategoryReaderForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@optionComponentForGeneration isPredefined'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_optionComponentForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  result_outResult = object->mAttribute_mIsPredefined ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_optionComponentForGeneration_isPredefined (void) {
  enterCategoryReader_isPredefined (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                    categoryReader_optionComponentForGeneration_isPredefined) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_optionComponentForGeneration_isPredefined (defineCategoryReader_optionComponentForGeneration_isPredefined, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@optionComponentForGeneration headerKind'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_optionComponentForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  GALGAS_headerKind temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mIsPredefined.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 2135)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2135)) ;
  }
  result_outResult = temp_0 ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_optionComponentForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                  categoryReader_optionComponentForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_optionComponentForGeneration_headerKind (defineCategoryReader_optionComponentForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@optionComponentForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionComponentForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                               GALGAS_string & outArgument_outHeader,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsPredefined.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (inCompiler, object->mAttribute_mOptionComponentName, object->mAttribute_mBoolOptionMap, object->mAttribute_mUIntOptionMap, object->mAttribute_mStringOptionMap, object->mAttribute_mStringListOptionMap COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2146))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionComponentForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                             categoryMethod_optionComponentForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendDeclaration_31_ (defineCategoryMethod_optionComponentForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@optionComponentForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionComponentForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_string & outArgument_outImplementation,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsPredefined.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outImplementation = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2165))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2165)) ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (inCompiler, object->mAttribute_mOptionComponentName, object->mAttribute_mBoolOptionMap, object->mAttribute_mUIntOptionMap, object->mAttribute_mStringOptionMap, object->mAttribute_mStringListOptionMap COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2166))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionComponentForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                                    categoryMethod_optionComponentForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendSpecificImplementation (defineCategoryMethod_optionComponentForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@optionComponentForGeneration appendSpecificFiles'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionComponentForGeneration_appendSpecificFiles (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             const GALGAS_string constinArgument_inProductDirectory,
                                                                             GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 2182)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = object->mAttribute_mIsPredefined.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 2182)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2183)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2183))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2183)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2186)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2186)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (inCompiler, object->mAttribute_mOptionComponentName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2190))), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (inCompiler, object->mAttribute_mOptionComponentName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2194))), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2184)) ;
    }
    ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2200)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2200))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2200)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2203)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2203)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (inCompiler, GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2208)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2208)), object->mAttribute_mOptionComponentName, object->mAttribute_mBoolOptionMap, object->mAttribute_mUIntOptionMap, object->mAttribute_mStringOptionMap, object->mAttribute_mStringListOptionMap COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2207))), GALGAS_string ("\n"
      "\n"), GALGAS_string ("\n"
      "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2201)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionComponentForGeneration_appendSpecificFiles (void) {
  enterCategoryMethod_appendSpecificFiles (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                           categoryMethod_optionComponentForGeneration_appendSpecificFiles) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendSpecificFiles (defineCategoryMethod_optionComponentForGeneration_appendSpecificFiles, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@lexiqueDeclarationForGeneration headerKind'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_lexiqueDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2227)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexiqueDeclarationForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration.mSlotID,
                                  categoryReader_lexiqueDeclarationForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexiqueDeclarationForGeneration_headerKind (defineCategoryReader_lexiqueDeclarationForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@lexiqueDeclarationForGeneration appendDeclaration1'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                  GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                  GALGAS_string & outArgument_outHeader,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueDeclarationForGeneration * object = (const cPtr_lexiqueDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueDeclarationForGeneration) ;
  outArgument_outHeader = object->mAttribute_mHeaderContents ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration.mSlotID,
                                             categoryMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_ (defineCategoryMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@lexiqueDeclarationForGeneration appendSpecificImplementation'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                         const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_string & outArgument_outHeader,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueDeclarationForGeneration * object = (const cPtr_lexiqueDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueDeclarationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2244))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2244)) ;
  outArgument_outHeader = object->mAttribute_mCppContents ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration.mSlotID,
                                                    categoryMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation (defineCategoryMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@lexiqueDeclarationForGeneration appendSpecificFiles'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexiqueDeclarationForGeneration_appendSpecificFiles (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_string constinArgument_inProductDirectory,
                                                                                GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueDeclarationForGeneration * object = (const cPtr_lexiqueDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueDeclarationForGeneration) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2254)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2254))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2254)) ;
  {
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2257)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2257)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
    "\n"), object->mAttribute_mCocoaHeader, GALGAS_string ("\n"
    "\n"), GALGAS_string ("\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2255)) ;
  }
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2268)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2268))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2268)) ;
  {
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2271)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2271)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
    "\n"), object->mAttribute_mCocoaImplementation, GALGAS_string ("\n"
    "\n"), GALGAS_string ("\n"
    "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2269)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexiqueDeclarationForGeneration_appendSpecificFiles (void) {
  enterCategoryMethod_appendSpecificFiles (kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration.mSlotID,
                                           categoryMethod_lexiqueDeclarationForGeneration_appendSpecificFiles) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueDeclarationForGeneration_appendSpecificFiles (defineCategoryMethod_lexiqueDeclarationForGeneration_appendSpecificFiles, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@programComponentForGeneration headerKind'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_programComponentForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 2287)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_programComponentForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_programComponentForGeneration.mSlotID,
                                  categoryReader_programComponentForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_programComponentForGeneration_headerKind (defineCategoryReader_programComponentForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@programComponentForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_programComponentForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_programComponentForGeneration * object = (const cPtr_programComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_programComponentForGeneration) ;
  ioArgument_ioInclusionSet.dotAssign_operation (object->mAttribute_mInclusionSet  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2296)) ;
  outArgument_outImplementation = object->mAttribute_mImplementationString ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_programComponentForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_programComponentForGeneration.mSlotID,
                                                    categoryMethod_programComponentForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_programComponentForGeneration_appendSpecificImplementation (defineCategoryMethod_programComponentForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@filewrapperDeclarationForGeneration headerKind'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_filewrapperDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2307)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_filewrapperDeclarationForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration.mSlotID,
                                  categoryReader_filewrapperDeclarationForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_filewrapperDeclarationForGeneration_headerKind (defineCategoryReader_filewrapperDeclarationForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@filewrapperDeclarationForGeneration appendDeclaration1'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_string & outArgument_outHeader,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationForGeneration * object = (const cPtr_filewrapperDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationForGeneration) ;
  GALGAS_stringlist var_regularFileIndexStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2345)) ;
  GALGAS_stringlist var_regularBinaryContentIndexStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2346)) ;
  GALGAS_stringlist var_regularTextContentIndexStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2347)) ;
  GALGAS_stringlist var_directoryIndexStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2348)) ;
  {
  routine_recursivlyEnumerateRegularFile (object->mAttribute_mFilewrapperFileMap, object->mAttribute_mFilewrapperDirectoryMap, var_regularFileIndexStringList, var_directoryIndexStringList, var_regularTextContentIndexStringList, var_regularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2349)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (inCompiler, var_regularFileIndexStringList, var_directoryIndexStringList, var_regularTextContentIndexStringList, var_regularBinaryContentIndexStringList, object->mAttribute_mFilewrapperName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2357))) ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_92092 (object->mAttribute_mFilewrapperTemplateListForGeneration, kEnumeration_up) ;
  while (enumerator_92092.hasCurrentObject ()) {
    outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (inCompiler, object->mAttribute_mFilewrapperName, enumerator_92092.current_mFilewrapperTemplateName (HERE), enumerator_92092.current_mFilewrapperTemplateFormalInputParameters (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2366)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2366)) ;
    enumerator_92092.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration.mSlotID,
                                             categoryMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_ (defineCategoryMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@filewrapperDeclarationForGeneration appendSpecificImplementation'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                             const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_string & outArgument_outImplementation,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationForGeneration * object = (const cPtr_filewrapperDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2466))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2466)) ;
  GALGAS_string var_filewrapperImplementation = GALGAS_string::makeEmptyString () ;
  {
  routine_generateWrapperContents (object->mAttribute_mFilewrapperName, GALGAS_string::makeEmptyString (), GALGAS_uint ((uint32_t) 0U), object->mAttribute_mFilewrapperFileMap, object->mAttribute_mFilewrapperDirectoryMap, var_filewrapperImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2468)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (inCompiler, object->mAttribute_mFilewrapperName, var_filewrapperImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2476))) ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_97541 (object->mAttribute_mFilewrapperTemplateListForGeneration, kEnumeration_up) ;
  while (enumerator_97541.hasCurrentObject ()) {
    GALGAS_string var_generatedCodeForInstructionList = GALGAS_string::makeEmptyString () ;
    GALGAS_uint var_temporaryVariableIndex = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_stringset var_unusedVariableCppNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 2485)) ;
    var_unusedVariableCppNameSet.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2486))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2486)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_97843 (enumerator_97541.current_mFilewrapperTemplateFormalInputParameters (HERE), kEnumeration_up) ;
    while (enumerator_97843.hasCurrentObject ()) {
      var_unusedVariableCppNameSet.addAssign_operation (enumerator_97843.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2488)) ;
      enumerator_97843.gotoNextObject () ;
    }
    GALGAS_bool var_useColumnMarker = GALGAS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction (enumerator_97541.current_mTemplateInstructionListForGeneration (HERE), var_generatedCodeForInstructionList, ioArgument_ioInclusionSet, var_temporaryVariableIndex, var_unusedVariableCppNameSet, var_useColumnMarker, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2491)) ;
    }
    outArgument_outImplementation.dotAssign_operation (GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (inCompiler, object->mAttribute_mFilewrapperName, enumerator_97541.current_mFilewrapperTemplateName (HERE), enumerator_97541.current_mFilewrapperTemplateFormalInputParameters (HERE), var_unusedVariableCppNameSet, var_useColumnMarker, var_generatedCodeForInstructionList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2500)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2500)) ;
    enumerator_97541.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration.mSlotID,
                                                    categoryMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation (defineCategoryMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@primitiveTypeForGeneration appendPrimitiveTypeDeclaration'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outHeader ; // Returned variable
  const cPtr_primitiveTypeForGeneration * object = (const cPtr_primitiveTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_primitiveTypeForGeneration) ;
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_predefinedTypeKindEnum::kNotBuilt:
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_object:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2572))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2574))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint_36__34_:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2576))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2578))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint_36__34_:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2580))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_char:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2582))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_double:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2584))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_string:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2586))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_stringset:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2588))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bool:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2590))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_binaryset:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2592))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_function:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2594))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_location:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2596))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_type:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2598))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_data:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2600))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_filewrapper:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2602))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_application:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2604))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bigint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2606))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_timer:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2608))) ;
    }
    break ;
  }
  result_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2611)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2612)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2613)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2614)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2615)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2616)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2617)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2618)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2619)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2620)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2621)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2622)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2610)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2610)) ;
//---
  return result_outHeader ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration (void) {
  enterCategoryReader_appendPrimitiveTypeDeclaration (kTypeDescriptor_GALGAS_primitiveTypeForGeneration.mSlotID,
                                                      categoryReader_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration (defineCategoryReader_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@enumDeclarationAST enterDeclarationInGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                       GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                       GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                       GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mEnumTypeName.reader_string (SOURCE_FILE ("enum.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("enum.galgas", 77)), object->mAttribute_mEnumTypeName.reader_location (SOURCE_FILE ("enum.galgas", 77))  COMMA_SOURCE_FILE ("enum.galgas", 77)) ;
  {
  const GALGAS_enumDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("enum.galgas", 78)) ;
  }
  cEnumerator_enumConstantList enumerator_3547 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_3547.hasCurrentObject ()) {
    cEnumerator__32_lstringlist enumerator_3595 (enumerator_3547.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_3595.hasCurrentObject ()) {
      {
      ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3595.current_mValue_30_ (HERE).reader_string (SOURCE_FILE ("enum.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("enum.galgas", 81)), enumerator_3595.current_mValue_30_ (HERE).reader_location (SOURCE_FILE ("enum.galgas", 81))  COMMA_SOURCE_FILE ("enum.galgas", 81)) COMMA_SOURCE_FILE ("enum.galgas", 81)) ;
      }
      enumerator_3595.gotoNextObject () ;
    }
    enumerator_3547.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                               categoryMethod_enumDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_enumDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@enumDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                      const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                      const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                      const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                      GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 96)) ;
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 97)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 98)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 99)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_enumTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumTypeName, var_enumTypeProxy COMMA_SOURCE_FILE ("enum.galgas", 101)) ;
  }
  GALGAS_constantIndexMap var_constantMap = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 103)) ;
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantList enumerator_4854 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_4854.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxyList var_associatedTypeList = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("enum.galgas", 106)) ;
    GALGAS_functionSignature var_argumentTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("enum.galgas", 107)) ;
    cEnumerator__32_lstringlist enumerator_5021 (enumerator_4854.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_5021.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_5021.current_mValue_30_ (HERE), var_associatedTypeProxy COMMA_SOURCE_FILE ("enum.galgas", 109)) ;
      }
      var_argumentTypeList.addAssign_operation (enumerator_5021.current_mValue_31_ (HERE), var_associatedTypeProxy, enumerator_5021.current_mValue_30_ (HERE).mAttribute_string  COMMA_SOURCE_FILE ("enum.galgas", 110)) ;
      var_associatedTypeList.addAssign_operation (var_associatedTypeProxy  COMMA_SOURCE_FILE ("enum.galgas", 111)) ;
      var_hasAssociatedValues = GALGAS_bool (true) ;
      enumerator_5021.gotoNextObject () ;
    }
    {
    var_constantMap.modifier_insertKey (enumerator_4854.current_mConstantName (HERE), var_constantMap.reader_count (SOURCE_FILE ("enum.galgas", 114)), var_associatedTypeList, inCompiler COMMA_SOURCE_FILE ("enum.galgas", 114)) ;
    }
    {
    var_constructorMap.modifier_insertOrReplace (enumerator_4854.current_mConstantName (HERE), var_argumentTypeList, GALGAS_bool (false), var_enumTypeProxy COMMA_SOURCE_FILE ("enum.galgas", 115)) ;
    }
    enumerator_4854.gotoNextObject () ;
  }
  cEnumerator_enumConstantList enumerator_5572 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_5572.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_5572.current_mAssociatedValueDefinitionList (HERE).reader_length (SOURCE_FILE ("enum.galgas", 124)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_unifiedTypeMapProxyList var_associatedTypeList = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("enum.galgas", 125)) ;
      GALGAS_formalParameterSignature var_argumentTypeList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("enum.galgas", 126)) ;
      cEnumerator__32_lstringlist enumerator_5808 (enumerator_5572.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
      while (enumerator_5808.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy ;
        {
        GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_5808.current_mValue_30_ (HERE), var_associatedTypeProxy COMMA_SOURCE_FILE ("enum.galgas", 128)) ;
        }
        var_argumentTypeList.addAssign_operation (enumerator_5808.current_mValue_31_ (HERE), var_associatedTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("enum.galgas", 129)), enumerator_5808.current_mValue_30_ (HERE).mAttribute_string  COMMA_SOURCE_FILE ("enum.galgas", 129)) ;
        var_associatedTypeList.addAssign_operation (var_associatedTypeProxy  COMMA_SOURCE_FILE ("enum.galgas", 130)) ;
        var_hasAssociatedValues = GALGAS_bool (true) ;
        enumerator_5808.gotoNextObject () ;
      }
      {
      var_instanceMethodMap.modifier_insertKey (enumerator_5572.current_mConstantName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("enum.galgas", 135)), var_argumentTypeList, enumerator_5572.current_mConstantName (HERE).mAttribute_location, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("enum.galgas", 139)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("enum.galgas", 133)) ;
      }
    }
    enumerator_5572.gotoNextObject () ;
  }
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("enum.galgas", 145)) ;
  }
  cEnumerator_enumConstantList enumerator_6469 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_6469.hasCurrentObject ()) {
    {
    routine_enterBaseReaderWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("is").add_operation (enumerator_6469.current_mConstantName (HERE).mAttribute_string.reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("enum.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("enum.galgas", 150)), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("enum.galgas", 147)) ;
    }
    enumerator_6469.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mEnumTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("enum.galgas", 156)) ;
  }
  {
  GALGAS_headerKind temp_1 ;
  const enumGalgasBool test_2 = var_hasAssociatedValues.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("enum.galgas", 194)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("enum.galgas", 194)) ;
  }
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mEnumTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("enum.galgas", 171)), GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("enum.galgas", 172)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("enum.galgas", 174)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 175)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("enum.galgas", 176)), var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 181)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("enum.galgas", 182)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("enum.galgas", 183)), function_generateDescriptionReaderUtilityMethod (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 184)).operator_or (function_isComparable (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 184)) COMMA_SOURCE_FILE ("enum.galgas", 184)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("enum.galgas", 185)), var_constantMap, object->mAttribute_mConstantList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("enum.galgas", 188)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("enum.galgas", 189)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("enum.galgas", 191)), GALGAS_string::makeEmptyString (), GALGAS_string ("enum-").add_operation (object->mAttribute_mEnumTypeName.reader_string (SOURCE_FILE ("enum.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("enum.galgas", 193)), temp_1, inCompiler COMMA_SOURCE_FILE ("enum.galgas", 167)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                              categoryMethod_enumDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclarationAST_enterInSemanticContext (defineCategoryMethod_enumDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@enumDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_stringlist var_constantList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("enum.galgas", 208)) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration = GALGAS_enumConstantListForGeneration::constructor_emptyList (SOURCE_FILE ("enum.galgas", 209)) ;
  GALGAS_constantIndexMap var_constantMap = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("enum.galgas", 210)) ;
  cEnumerator_enumConstantList enumerator_8901 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_8901.hasCurrentObject ()) {
    var_constantList.addAssign_operation (enumerator_8901.current_mConstantName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("enum.galgas", 212)) ;
    GALGAS_unifiedTypeMapProxyList var_associatedTypeList = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("enum.galgas", 213)) ;
    GALGAS_stringset var_associatedValueNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("enum.galgas", 214)) ;
    cEnumerator__32_lstringlist enumerator_9087 (enumerator_8901.current_mAssociatedValueDefinitionList (HERE), kEnumeration_up) ;
    while (enumerator_9087.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_9087.current_mValue_30_ (HERE), inCompiler  COMMA_SOURCE_FILE ("enum.galgas", 216)) ;
      var_associatedTypeList.addAssign_operation (var_associatedTypeProxy  COMMA_SOURCE_FILE ("enum.galgas", 217)) ;
      const enumGalgasBool test_0 = var_associatedValueNameSet.reader_hasKey (enumerator_9087.current_mValue_31_ (HERE).mAttribute_string COMMA_SOURCE_FILE ("enum.galgas", 218)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_location location_1 (enumerator_9087.current_mValue_31_ (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_1, GALGAS_string ("duplicated name")  COMMA_SOURCE_FILE ("enum.galgas", 219)) ;
      }
      var_associatedValueNameSet.addAssign_operation (enumerator_9087.current_mValue_31_ (HERE).mAttribute_string  COMMA_SOURCE_FILE ("enum.galgas", 221)) ;
      enumerator_9087.gotoNextObject () ;
    }
    {
    var_constantMap.modifier_insertKey (enumerator_8901.current_mConstantName (HERE), var_constantMap.reader_count (SOURCE_FILE ("enum.galgas", 223)), var_associatedTypeList, inCompiler COMMA_SOURCE_FILE ("enum.galgas", 223)) ;
    }
    var_enumConstantListForGeneration.addAssign_operation (enumerator_8901.current_mConstantName (HERE).mAttribute_string, var_associatedTypeList  COMMA_SOURCE_FILE ("enum.galgas", 224)) ;
    enumerator_8901.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (object->mAttribute_mEnumTypeName.reader_string (SOURCE_FILE ("enum.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("enum.galgas", 228)), GALGAS_enumTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mEnumTypeName, inCompiler  COMMA_SOURCE_FILE ("enum.galgas", 230)), var_enumConstantListForGeneration  COMMA_SOURCE_FILE ("enum.galgas", 229)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("enum.galgas", 227)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                        categoryMethod_enumDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclarationAST_semanticAnalysis (defineCategoryMethod_enumDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@enumTypeForGeneration appendDeclaration1'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_11641 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("enum.galgas", 282)).isValidAndTrue () ;
  if (enumerator_11641.hasCurrentObject () && bool_0) {
    while (enumerator_11641.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues = GALGAS_bool (kIsStrictSup, enumerator_11641.current_mAssociatedValueTypeList (HERE).reader_length (SOURCE_FILE ("enum.galgas", 283)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_11641.gotoNextObject () ;
      if (enumerator_11641.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("enum.galgas", 282)).isValidAndTrue () ;
      }
    }
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 286)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 287)), object->mAttribute_mConstantList, var_hasAssociatedValues COMMA_SOURCE_FILE ("enum.galgas", 285))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 292)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 293)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 294)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 295)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 296)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 297)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 298)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 299)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 300)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 301)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 302)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 303)) COMMA_SOURCE_FILE ("enum.galgas", 291)))  COMMA_SOURCE_FILE ("enum.galgas", 291)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                             categoryMethod_enumTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_enumTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@enumTypeForGeneration appendDeclaration2'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        const GALGAS_bool /* constinArgument_inGenerateForGalgas_33_ */,
                                                                        const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_12813 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("enum.galgas", 315)).isValidAndTrue () ;
  if (enumerator_12813.hasCurrentObject () && bool_0) {
    while (enumerator_12813.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues = GALGAS_bool (kIsStrictSup, enumerator_12813.current_mAssociatedValueTypeList (HERE).reader_length (SOURCE_FILE ("enum.galgas", 316)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_12813.gotoNextObject () ;
      if (enumerator_12813.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("enum.galgas", 315)).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_enumConstantListForGeneration enumerator_12942 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_12942.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapProxyList enumerator_12984 (enumerator_12942.current_mAssociatedValueTypeList (HERE), kEnumeration_up) ;
    while (enumerator_12984.hasCurrentObject ()) {
      categoryMethod_addHeaderFileName (enumerator_12984.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("enum.galgas", 320)) ;
      enumerator_12984.gotoNextObject () ;
    }
    enumerator_12942.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 324)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 325)), object->mAttribute_mConstantList, var_hasAssociatedValues COMMA_SOURCE_FILE ("enum.galgas", 323))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumTypeForGeneration_appendDeclaration_32_ (void) {
  enterCategoryMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                             categoryMethod_enumTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_32_ (defineCategoryMethod_enumTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@enumTypeForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_13586 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("enum.galgas", 338)).isValidAndTrue () ;
  if (enumerator_13586.hasCurrentObject () && bool_0) {
    while (enumerator_13586.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues = GALGAS_bool (kIsStrictSup, enumerator_13586.current_mAssociatedValueTypeList (HERE).reader_length (SOURCE_FILE ("enum.galgas", 339)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_13586.gotoNextObject () ;
      if (enumerator_13586.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("enum.galgas", 338)).isValidAndTrue () ;
      }
    }
  }
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("enum.galgas", 341)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 343)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("enum.galgas", 344)), object->mAttribute_mConstantList, var_hasAssociatedValues COMMA_SOURCE_FILE ("enum.galgas", 342))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                                    categoryMethod_enumTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_enumTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@sharedMapDeclarationAST enterDeclarationInGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sharedMapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                            GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                            GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                            GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                            GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("shared-map.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 266)), object->mAttribute_mMapTypeName.reader_location (SOURCE_FILE ("shared-map.galgas", 266))  COMMA_SOURCE_FILE ("shared-map.galgas", 266)) ;
  {
  const GALGAS_sharedMapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 267)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_10928 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_10928.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_10928.current_mPropertyTypeName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 269)), enumerator_10928.current_mPropertyTypeName (HERE).reader_location (SOURCE_FILE ("shared-map.galgas", 269))  COMMA_SOURCE_FILE ("shared-map.galgas", 269)) COMMA_SOURCE_FILE ("shared-map.galgas", 269)) ;
    }
    enumerator_10928.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sharedMapDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                               categoryMethod_sharedMapDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_sharedMapDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@sharedMapDeclarationAST keyRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_sharedMapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  result_outString = GALGAS_string ("shared map @").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("shared-map.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 278)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_sharedMapDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                         categoryReader_sharedMapDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_sharedMapDeclarationAST_keyRepresentation (defineCategoryReader_sharedMapDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@sharedMapDeclarationAST enterInSemanticContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sharedMapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                           const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                           const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 292)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 294)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringlistTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstringlist"), var_lstringlistTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 296)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 298)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("shared-map.galgas", 298)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = temp_0 ;
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 299)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("shared-map.galgas", 300)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("shared-map.galgas", 301)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_12738 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_12738.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_12738.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_location location_3 (enumerator_12738.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_3, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("shared-map.galgas", 307)) ;
      }
      var_usesSelectorsInInsertAndSearch = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_1) {
      GALGAS_location location_4 (enumerator_12738.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("unknown attribute")  COMMA_SOURCE_FILE ("shared-map.galgas", 311)) ;
    }
    enumerator_12738.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 315)) ;
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 316)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 317)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 318)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyMap"), object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("shared-map.galgas", 320)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 320)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 322)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 329)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 336)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 345)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 354)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("unsolvedProxyCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 361)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("unsolvedProxyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 368)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("edgeGraphvizRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 375)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 383)) ;
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 384)) ;
  GALGAS_string temp_5 ;
  const enumGalgasBool test_6 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList.addAssign_operation (temp_5.reader_nowhere (SOURCE_FILE ("shared-map.galgas", 386)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 388)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("shared-map.galgas", 385)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 390)) ;
  GALGAS_string temp_7 ;
  const enumGalgasBool test_8 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList.addAssign_operation (temp_7.reader_nowhere (SOURCE_FILE ("shared-map.galgas", 392)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 394)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("shared-map.galgas", 391)) ;
  cEnumerator_propertyInCollectionListAST enumerator_15350 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_15350.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_15350.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 398)) ;
    }
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_15350.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("shared-map.galgas", 401)) ;
    var_enumerationDescriptor.addAssign_operation (var_attributeTypeIndex, enumerator_15350.current_mPropertyName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 402))  COMMA_SOURCE_FILE ("shared-map.galgas", 402)) ;
    GALGAS_lstring temp_9 ;
    const enumGalgasBool test_10 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = enumerator_15350.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_10) {
      temp_9 = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 404)) ;
    }
    var_insertMethodFormalArgumentList.addAssign_operation (temp_9, var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 406)), enumerator_15350.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("shared-map.galgas", 403)) ;
    GALGAS_lstring temp_11 ;
    const enumGalgasBool test_12 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
    if (kBoolTrue == test_12) {
      temp_11 = enumerator_15350.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_12) {
      temp_11 = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 409)) ;
    }
    var_removeMethodFormalArgumentList.addAssign_operation (temp_11, var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("shared-map.galgas", 411)), enumerator_15350.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("shared-map.galgas", 408)) ;
    enumerator_15350.gotoNextObject () ;
  }
  cEnumerator_insertMethodListAST enumerator_16191 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_16191.hasCurrentObject ()) {
    const enumGalgasBool test_13 = var_modifierMap.reader_hasKey (enumerator_16191.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 416)) COMMA_SOURCE_FILE ("shared-map.galgas", 416)).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_location location_14 (enumerator_16191.current_mInsertMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_14, GALGAS_string ("the '").add_operation (enumerator_16191.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 417)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 417))  COMMA_SOURCE_FILE ("shared-map.galgas", 417)) ;
    }else if (kBoolFalse == test_13) {
      {
      var_modifierMap.modifier_insertOrReplace (enumerator_16191.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 421)), var_insertMethodFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 424)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("shared-map.galgas", 419)) ;
      }
    }
    enumerator_16191.gotoNextObject () ;
  }
  GALGAS_formalParameterSignature var_enterEdgeFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 430)) ;
  var_enterEdgeFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 431)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 431)), GALGAS_string ("inSource")  COMMA_SOURCE_FILE ("shared-map.galgas", 431)) ;
  var_enterEdgeFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 432)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 432)), GALGAS_string ("inTarget")  COMMA_SOURCE_FILE ("shared-map.galgas", 432)) ;
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_string ("enterEdge").reader_nowhere (SOURCE_FILE ("shared-map.galgas", 434)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 435)), var_enterEdgeFormalArgumentList, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("shared-map.galgas", 438)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("shared-map.galgas", 433)) ;
  }
  GALGAS_formalParameterSignature var_topologicalSortFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 442)) ;
  var_topologicalSortFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 443)), var_lstringlistTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("shared-map.galgas", 443)), GALGAS_string ("outSortedLKeys")  COMMA_SOURCE_FILE ("shared-map.galgas", 443)) ;
  var_topologicalSortFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 444)), var_lstringlistTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("shared-map.galgas", 444)), GALGAS_string ("outUnsortedLKeys")  COMMA_SOURCE_FILE ("shared-map.galgas", 444)) ;
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_string ("topologicalSort").reader_nowhere (SOURCE_FILE ("shared-map.galgas", 446)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 447)), var_topologicalSortFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 449)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("shared-map.galgas", 451)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 445)) ;
  }
  const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("shared-map.galgas", 455)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_15) {
    cEnumerator_mapSearchMethodListAST enumerator_17843 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
    while (enumerator_17843.hasCurrentObject ()) {
      {
      var_instanceMethodMap.modifier_insertKey (enumerator_17843.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 459)), var_removeMethodFormalArgumentList, enumerator_17843.current_mSearchMethodName (HERE).reader_location (SOURCE_FILE ("shared-map.galgas", 461)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 463)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 457)) ;
      }
      enumerator_17843.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_15) {
    cEnumerator_mapSearchMethodListAST enumerator_18159 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
    while (enumerator_18159.hasCurrentObject ()) {
      {
      var_modifierMap.modifier_insertKey (enumerator_18159.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 471)), var_removeMethodFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 474)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 469)) ;
      }
      enumerator_18159.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("shared-map.galgas", 480)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_16) {
    GALGAS_unifiedTypeMap_2D_proxy var_locationTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("location"), var_locationTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 482)) ;
    }
    {
    var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 484))  COMMA_SOURCE_FILE ("shared-map.galgas", 484)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 485)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 486)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("shared-map.galgas", 488)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 483)) ;
    }
    {
    var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 492))  COMMA_SOURCE_FILE ("shared-map.galgas", 492)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 493)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 494)), var_locationTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("shared-map.galgas", 494)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("shared-map.galgas", 494)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 496)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 491)) ;
    }
    {
    var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeOverride"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 500))  COMMA_SOURCE_FILE ("shared-map.galgas", 500)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 501)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 502)), var_locationTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("shared-map.galgas", 502)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("shared-map.galgas", 502)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("shared-map.galgas", 504)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 499)) ;
    }
    {
    var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("checkAutomatonStates"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 508))  COMMA_SOURCE_FILE ("shared-map.galgas", 508)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 509)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 510)), var_locationTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("shared-map.galgas", 510)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("shared-map.galgas", 510)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 511)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 513)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 507)) ;
    }
    cEnumerator_mapOverrideBlockListAST enumerator_19926 (object->mAttribute_mMapOverrideBlockListAST, kEnumeration_up) ;
    while (enumerator_19926.hasCurrentObject ()) {
      {
      var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openOverrideFor").add_operation (enumerator_19926.current_mOverrideBlockName (HERE).mAttribute_string.reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("shared-map.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 518)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 518))  COMMA_SOURCE_FILE ("shared-map.galgas", 518)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 519)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 520)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 522)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 517)) ;
      }
      enumerator_19926.gotoNextObject () ;
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_20324 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_20324.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName = GALGAS_lstring::constructor_new (enumerator_20324.current_mPropertyName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 529)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 529)), enumerator_20324.current_mPropertyName (HERE).reader_location (SOURCE_FILE ("shared-map.galgas", 529))  COMMA_SOURCE_FILE ("shared-map.galgas", 529)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_20324.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 531)) ;
    }
    {
    GALGAS_functionSignature temp_17 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 535)) ;
    temp_17.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 535)), var_stringTypeIndex, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("shared-map.galgas", 535)) ;
    var_getterMap.modifier_insertOrReplace (var_accessorName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 534)), temp_17, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 536)), GALGAS_bool (true), var_attributeTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 539)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("shared-map.galgas", 532)) ;
    }
    enumerator_20324.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_20978 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_20978.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_20978.current_mPropertyName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 545)).reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("shared-map.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 545)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 545)), enumerator_20978.current_mPropertyName (HERE).reader_location (SOURCE_FILE ("shared-map.galgas", 545))  COMMA_SOURCE_FILE ("shared-map.galgas", 545)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_20978.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 546)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 547)) ;
    var_accessorFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 548)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 548)), enumerator_20978.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("shared-map.galgas", 548)) ;
    var_accessorFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 549)), var_stringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 549)), enumerator_20978.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("shared-map.galgas", 549)) ;
    {
    var_modifierMap.modifier_insertOrReplace (var_accessorName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 552)), var_accessorFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 555)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("shared-map.galgas", 550)) ;
    }
    enumerator_20978.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 560)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mMapTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("shared-map.galgas", 575)), GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("shared-map.galgas", 576)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 578)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 579)), var_typedAttributeList, var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 585)), var_enumerationDescriptor, var_enumerationVariants, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 588)).operator_or (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 588)) COMMA_SOURCE_FILE ("shared-map.galgas", 588)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 589)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 590)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 591)), object->mAttribute_mSearchMethodList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 593)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("shared-map.galgas", 595)), GALGAS_string ("emptyMap"), GALGAS_string ("uniquemap-").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("shared-map.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 597)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("shared-map.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 571)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sharedMapDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                              categoryMethod_sharedMapDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_enterInSemanticContext (defineCategoryMethod_sharedMapDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@sharedMapDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sharedMapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                     const GALGAS_string constinArgument_inProductDirectory,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                     GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_stringset var_initialStateSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 678)) ;
  cEnumerator_insertMethodListAST enumerator_25816 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_25816.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("shared-map.galgas", 680)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_25816.current_mInitialStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 681)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_25816.current_mInsertMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("the '").add_operation (enumerator_25816.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 682)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 682)).add_operation (GALGAS_string ("' insert method should name an automaton state"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 682))  COMMA_SOURCE_FILE ("shared-map.galgas", 682)) ;
      }else if (kBoolFalse == test_1) {
        var_initialStateSet.addAssign_operation (enumerator_25816.current_mInitialStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 684))  COMMA_SOURCE_FILE ("shared-map.galgas", 684)) ;
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_25816.current_mInitialStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 686)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (enumerator_25816.current_mInsertMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the '").add_operation (enumerator_25816.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 687)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 687)).add_operation (GALGAS_string ("' insert method should not name an automaton state"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 687))  COMMA_SOURCE_FILE ("shared-map.galgas", 687)) ;
      }
    }
    enumerator_25816.gotoNextObject () ;
  }
  GALGAS_mapAutomatonActionMap var_mapAutomatonActionMap = GALGAS_mapAutomatonActionMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 691)) ;
  cEnumerator_mapSearchMethodListAST enumerator_26387 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_26387.hasCurrentObject ()) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("shared-map.galgas", 693)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_26387.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 694)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (enumerator_26387.current_mSearchMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("the '").add_operation (enumerator_26387.current_mSearchMethodName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 695)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 695)).add_operation (GALGAS_string ("' search method should name an automaton action"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 695))  COMMA_SOURCE_FILE ("shared-map.galgas", 695)) ;
      }else if (kBoolFalse == test_6) {
        const enumGalgasBool test_8 = var_mapAutomatonActionMap.reader_hasKey (enumerator_26387.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 696)) COMMA_SOURCE_FILE ("shared-map.galgas", 696)).operator_not (SOURCE_FILE ("shared-map.galgas", 696)).boolEnum () ;
        if (kBoolTrue == test_8) {
          {
          var_mapAutomatonActionMap.modifier_insertKey (enumerator_26387.current_mActionName (HERE), var_mapAutomatonActionMap.reader_count (SOURCE_FILE ("shared-map.galgas", 698)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 698)) ;
          }
        }
      }
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_26387.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 702)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_location location_10 (enumerator_26387.current_mSearchMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_10, GALGAS_string ("the '").add_operation (enumerator_26387.current_mSearchMethodName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 703)).add_operation (GALGAS_string ("' search method should not name an automaton action"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 703))  COMMA_SOURCE_FILE ("shared-map.galgas", 703)) ;
      }
    }
    enumerator_26387.gotoNextObject () ;
  }
  GALGAS_mapAutomatonStateMap var_mapAutomatonStateMap = GALGAS_mapAutomatonStateMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 707)) ;
  cEnumerator_mapStateList enumerator_27168 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_27168.hasCurrentObject ()) {
    {
    var_mapAutomatonStateMap.modifier_insertKey (enumerator_27168.current_mStateName (HERE), var_mapAutomatonStateMap.reader_count (SOURCE_FILE ("shared-map.galgas", 709)), enumerator_27168.current_mStateMessageKind (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 709)) ;
    }
    enumerator_27168.gotoNextObject () ;
  }
  cEnumerator_mapStateList enumerator_27303 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_27303.hasCurrentObject ()) {
    cEnumerator_mapStateTransitionList enumerator_27336 (enumerator_27303.current_mTransitionList (HERE), kEnumeration_up) ;
    while (enumerator_27336.hasCurrentObject ()) {
      GALGAS_uint joker_27397_2 ; // Joker input parameter
      GALGAS_mapAutomatonMessageKind joker_27397_1 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_27336.current_mTargetStateName (HERE), joker_27397_2, joker_27397_1, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 713)) ;
      enumerator_27336.gotoNextObject () ;
    }
    enumerator_27303.gotoNextObject () ;
  }
  GALGAS_stringset var_allActions = var_mapAutomatonActionMap.reader_keySet (SOURCE_FILE ("shared-map.galgas", 717)) ;
  GALGAS_mapStateSortedList var_mapStateSortedList = GALGAS_mapStateSortedList::constructor_emptySortedList (SOURCE_FILE ("shared-map.galgas", 718)) ;
  cEnumerator_mapStateList enumerator_27592 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_27592.hasCurrentObject ()) {
    GALGAS_stringset var_actionsForCurrentState = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 720)) ;
    GALGAS_mapStateTransitionSortedList var_mapStateTransitionSortedList = GALGAS_mapStateTransitionSortedList::constructor_emptySortedList (SOURCE_FILE ("shared-map.galgas", 721)) ;
    cEnumerator_mapStateTransitionList enumerator_27736 (enumerator_27592.current_mTransitionList (HERE), kEnumeration_up) ;
    while (enumerator_27736.hasCurrentObject ()) {
      GALGAS_uint var_actionIndex ;
      var_mapAutomatonActionMap.method_searchKey (enumerator_27736.current_mActionName (HERE), var_actionIndex, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 723)) ;
      const enumGalgasBool test_11 = var_actionsForCurrentState.reader_hasKey (enumerator_27736.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 724)) COMMA_SOURCE_FILE ("shared-map.galgas", 724)).boolEnum () ;
      if (kBoolTrue == test_11) {
        GALGAS_location location_12 (enumerator_27736.current_mActionName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_12, GALGAS_string ("the '").add_operation (enumerator_27736.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 725)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 725)).add_operation (GALGAS_string ("' action is already used for this state"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 725))  COMMA_SOURCE_FILE ("shared-map.galgas", 725)) ;
      }
      var_actionsForCurrentState.addAssign_operation (enumerator_27736.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 727))  COMMA_SOURCE_FILE ("shared-map.galgas", 727)) ;
      GALGAS_uint var_targetStateIndex ;
      GALGAS_mapAutomatonMessageKind joker_28127 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_27736.current_mTargetStateName (HERE), var_targetStateIndex, joker_28127, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 728)) ;
      var_mapStateTransitionSortedList.addAssign_operation (var_actionIndex, enumerator_27736.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 731)), var_targetStateIndex, enumerator_27736.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 733)), enumerator_27736.current_mTransitionMessageKind (HERE), enumerator_27736.current_mTransitionMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 735))  COMMA_SOURCE_FILE ("shared-map.galgas", 729)) ;
      enumerator_27736.gotoNextObject () ;
    }
    GALGAS_uint var_stateIndex ;
    GALGAS_mapAutomatonMessageKind joker_28428 ; // Joker input parameter
    var_mapAutomatonStateMap.method_searchKey (enumerator_27592.current_mStateName (HERE), var_stateIndex, joker_28428, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 737)) ;
    var_mapStateSortedList.addAssign_operation (var_stateIndex, enumerator_27592.current_mStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 740)), enumerator_27592.current_mStateMessageKind (HERE), enumerator_27592.current_mStateMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 742)), var_mapStateTransitionSortedList  COMMA_SOURCE_FILE ("shared-map.galgas", 738)) ;
    GALGAS_stringset var_missingActions = var_allActions.substract_operation (var_actionsForCurrentState, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 744)) ;
    const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, var_missingActions.reader_count (SOURCE_FILE ("shared-map.galgas", 745)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_28755 (var_missingActions, kEnumeration_up) ;
      while (enumerator_28755.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("'").add_operation (enumerator_28755.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 748)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 748))  COMMA_SOURCE_FILE ("shared-map.galgas", 748)) ;
        if (enumerator_28755.hasNextObject ()) {
          var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("shared-map.galgas", 749)) ;
        }
        enumerator_28755.gotoNextObject () ;
      }
      GALGAS_location location_14 (enumerator_27592.current_mStateName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_14, GALGAS_string ("the following actions are not named in a transition from this state: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 751))  COMMA_SOURCE_FILE ("shared-map.galgas", 751)) ;
    }
    enumerator_27592.gotoNextObject () ;
  }
  GALGAS_stringset var_accessibleStates = var_initialStateSet ;
  GALGAS_bool var_progress = GALGAS_bool (true) ;
  if (object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("shared-map.galgas", 757)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 757)).isValid ()) {
    uint32_t variant_29049 = object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("shared-map.galgas", 757)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 757)).uintValue () ;
    bool loop_29049 = true ;
    while (loop_29049) {
      loop_29049 = var_progress.isValid () ;
      if (loop_29049) {
        loop_29049 = var_progress.boolValue () ;
      }
      if (loop_29049 && (0 == variant_29049)) {
        loop_29049 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("shared-map.galgas", 757)) ;
      }
      if (loop_29049) {
        variant_29049 -- ;
        var_progress = GALGAS_bool (false) ;
        cEnumerator_mapStateList enumerator_29145 (object->mAttribute_mMapStateList, kEnumeration_up) ;
        while (enumerator_29145.hasCurrentObject ()) {
          const enumGalgasBool test_15 = var_accessibleStates.reader_hasKey (enumerator_29145.current_mStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 760)) COMMA_SOURCE_FILE ("shared-map.galgas", 760)).boolEnum () ;
          if (kBoolTrue == test_15) {
            cEnumerator_mapStateTransitionList enumerator_29243 (enumerator_29145.current_mTransitionList (HERE), kEnumeration_up) ;
            while (enumerator_29243.hasCurrentObject ()) {
              const enumGalgasBool test_16 = var_accessibleStates.reader_hasKey (enumerator_29243.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 762)) COMMA_SOURCE_FILE ("shared-map.galgas", 762)).operator_not (SOURCE_FILE ("shared-map.galgas", 762)).boolEnum () ;
              if (kBoolTrue == test_16) {
                var_accessibleStates.addAssign_operation (enumerator_29243.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 763))  COMMA_SOURCE_FILE ("shared-map.galgas", 763)) ;
                var_progress = GALGAS_bool (true) ;
              }
              enumerator_29243.gotoNextObject () ;
            }
          }
          enumerator_29145.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_stringset var_uselessStates = var_mapAutomatonStateMap.reader_keySet (SOURCE_FILE ("shared-map.galgas", 770)).substract_operation (var_accessibleStates, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 770)) ;
  const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, var_uselessStates.reader_count (SOURCE_FILE ("shared-map.galgas", 771)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_29619 (var_uselessStates, kEnumeration_up) ;
    while (enumerator_29619.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string ("'").add_operation (enumerator_29619.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 774)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 774))  COMMA_SOURCE_FILE ("shared-map.galgas", 774)) ;
      if (enumerator_29619.hasNextObject ()) {
        var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("shared-map.galgas", 775)) ;
      }
      enumerator_29619.gotoNextObject () ;
    }
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 777)), GALGAS_string ("the following map automaton states are useless: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 777))  COMMA_SOURCE_FILE ("shared-map.galgas", 777)) ;
  }
  GALGAS_stringset var_neededAssociations = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 781)) ;
  GALGAS_stringset var_accessibilityGraph = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 782)) ;
  cEnumerator_mapAutomatonStateMap enumerator_29964 (var_mapAutomatonStateMap, kEnumeration_up) ;
  while (enumerator_29964.hasCurrentObject ()) {
    GALGAS_stringset var_reachableStates = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 784)) ;
    var_reachableStates.addAssign_operation (enumerator_29964.current_lkey (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 785))  COMMA_SOURCE_FILE ("shared-map.galgas", 785)) ;
    GALGAS_bool var_progress = GALGAS_bool (true) ;
    if (var_mapAutomatonStateMap.reader_count (SOURCE_FILE ("shared-map.galgas", 787)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 787)).isValid ()) {
      uint32_t variant_30076 = var_mapAutomatonStateMap.reader_count (SOURCE_FILE ("shared-map.galgas", 787)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 787)).uintValue () ;
      bool loop_30076 = true ;
      while (loop_30076) {
        loop_30076 = var_progress.isValid () ;
        if (loop_30076) {
          loop_30076 = var_progress.boolValue () ;
        }
        if (loop_30076 && (0 == variant_30076)) {
          loop_30076 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("shared-map.galgas", 787)) ;
        }
        if (loop_30076) {
          variant_30076 -- ;
          var_progress = GALGAS_bool (false) ;
          cEnumerator_mapStateList enumerator_30182 (object->mAttribute_mMapStateList, kEnumeration_up) ;
          while (enumerator_30182.hasCurrentObject ()) {
            const enumGalgasBool test_18 = var_reachableStates.reader_hasKey (enumerator_30182.current_mStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 790)) COMMA_SOURCE_FILE ("shared-map.galgas", 790)).boolEnum () ;
            if (kBoolTrue == test_18) {
              cEnumerator_mapStateTransitionList enumerator_30283 (enumerator_30182.current_mTransitionList (HERE), kEnumeration_up) ;
              while (enumerator_30283.hasCurrentObject ()) {
                const enumGalgasBool test_19 = var_reachableStates.reader_hasKey (enumerator_30283.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 792)) COMMA_SOURCE_FILE ("shared-map.galgas", 792)).operator_not (SOURCE_FILE ("shared-map.galgas", 792)).boolEnum () ;
                if (kBoolTrue == test_19) {
                  var_reachableStates.addAssign_operation (enumerator_30283.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 793))  COMMA_SOURCE_FILE ("shared-map.galgas", 793)) ;
                  var_accessibilityGraph.addAssign_operation (enumerator_29964.current_lkey (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 794)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 794)).add_operation (enumerator_30283.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 794)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 794))  COMMA_SOURCE_FILE ("shared-map.galgas", 794)) ;
                  var_progress = GALGAS_bool (true) ;
                }
                enumerator_30283.gotoNextObject () ;
              }
            }
            enumerator_30182.gotoNextObject () ;
          }
        }
      }
    }
    cEnumerator_stringset enumerator_30627 (var_reachableStates, kEnumeration_up) ;
    while (enumerator_30627.hasCurrentObject ()) {
      const enumGalgasBool test_20 = GALGAS_bool (kIsNotEqual, enumerator_29964.current_lkey (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 802)).objectCompare (enumerator_30627.current_key (HERE))).boolEnum () ;
      if (kBoolTrue == test_20) {
        var_neededAssociations.addAssign_operation (enumerator_29964.current_lkey (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 803)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 803)).add_operation (enumerator_30627.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 803))  COMMA_SOURCE_FILE ("shared-map.galgas", 803)) ;
      }
      enumerator_30627.gotoNextObject () ;
    }
    enumerator_29964.gotoNextObject () ;
  }
  GALGAS_mapOverrideList var_mapOverrideList = GALGAS_mapOverrideList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 808)) ;
  cEnumerator_mapOverrideBlockListAST enumerator_30828 (object->mAttribute_mMapOverrideBlockListAST, kEnumeration_up) ;
  while (enumerator_30828.hasCurrentObject ()) {
    GALGAS_stringset var_handledAssociations = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 810)) ;
    GALGAS_stringset var_neededCombinaisons = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 811)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_31_ = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("shared-map.galgas", 812)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_31087 (enumerator_30828.current_mMapOverrideBlockDescriptor_31_AST (HERE), kEnumeration_up) ;
    while (enumerator_31087.hasCurrentObject ()) {
      GALGAS_uint var_startStateNameIndex ;
      GALGAS_mapAutomatonMessageKind joker_31167 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_31087.current_mLeftState (HERE), var_startStateNameIndex, joker_31167, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 814)) ;
      GALGAS_uint var_currentStateNameIndex ;
      GALGAS_mapAutomatonMessageKind joker_31249 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_31087.current_mRightState (HERE), var_currentStateNameIndex, joker_31249, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 815)) ;
      GALGAS_string var_association = enumerator_31087.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 816)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 816)).add_operation (enumerator_31087.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 816)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 816)) ;
      const enumGalgasBool test_21 = var_neededAssociations.reader_hasKey (var_association COMMA_SOURCE_FILE ("shared-map.galgas", 817)).operator_not (SOURCE_FILE ("shared-map.galgas", 817)).boolEnum () ;
      if (kBoolTrue == test_21) {
        GALGAS_location location_22 (enumerator_31087.current_mRightState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticWarning (location_22, GALGAS_string ("the '").add_operation (var_association, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 818)).add_operation (GALGAS_string ("' association is useless"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 818))  COMMA_SOURCE_FILE ("shared-map.galgas", 818)) ;
      }
      const enumGalgasBool test_23 = var_handledAssociations.reader_hasKey (var_association COMMA_SOURCE_FILE ("shared-map.galgas", 820)).boolEnum () ;
      if (kBoolTrue == test_23) {
        GALGAS_location location_24 (enumerator_31087.current_mRightState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_24, GALGAS_string ("the '").add_operation (var_association, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 822)).add_operation (GALGAS_string ("' association is already defined"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 822))  COMMA_SOURCE_FILE ("shared-map.galgas", 821)) ;
      }
      var_handledAssociations.addAssign_operation (var_association  COMMA_SOURCE_FILE ("shared-map.galgas", 824)) ;
      GALGAS_uint var_finalStateNameIndex ;
      GALGAS_mapAutomatonMessageKind joker_31765 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_31087.current_mResultingState (HERE), var_finalStateNameIndex, joker_31765, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 825)) ;
      const enumGalgasBool test_25 = GALGAS_bool (kIsNotEqual, enumerator_31087.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 826)).objectCompare (enumerator_31087.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 826)))).boolEnum () ;
      if (kBoolTrue == test_25) {
        var_neededCombinaisons.addAssign_operation (enumerator_31087.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 827)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 827)).add_operation (enumerator_31087.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 827)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 827))  COMMA_SOURCE_FILE ("shared-map.galgas", 827)) ;
        var_neededCombinaisons.addAssign_operation (enumerator_31087.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 828)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 828)).add_operation (enumerator_31087.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 828)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 828))  COMMA_SOURCE_FILE ("shared-map.galgas", 828)) ;
        const enumGalgasBool test_26 = var_accessibilityGraph.reader_hasKey (enumerator_31087.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 829)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 829)).add_operation (enumerator_31087.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 829)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 829)) COMMA_SOURCE_FILE ("shared-map.galgas", 829)).operator_not (SOURCE_FILE ("shared-map.galgas", 829)).boolEnum () ;
        if (kBoolTrue == test_26) {
          GALGAS_location location_27 (enumerator_31087.current_mResultingState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_27, GALGAS_string ("the '").add_operation (enumerator_31087.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 831)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 831)).add_operation (GALGAS_string ("' state is not reachable from '"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 831)).add_operation (enumerator_31087.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 831)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 831)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 831))  COMMA_SOURCE_FILE ("shared-map.galgas", 830)) ;
        }
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_31087.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 834)) ;
      }
      var_branchBehaviourSortedListForMapOverride_31_.addAssign_operation (var_startStateNameIndex, enumerator_31087.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 837)), var_currentStateNameIndex, enumerator_31087.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 839)), var_finalStateNameIndex, enumerator_31087.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 841)), enumerator_31087.current_mMessageKind (HERE), enumerator_31087.current_mTransitionMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 843))  COMMA_SOURCE_FILE ("shared-map.galgas", 835)) ;
      enumerator_31087.gotoNextObject () ;
    }
    GALGAS_stringset var_forgottenAssociations = var_neededAssociations.substract_operation (var_handledAssociations, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 845)) ;
    const enumGalgasBool test_28 = GALGAS_bool (kIsStrictSup, var_forgottenAssociations.reader_count (SOURCE_FILE ("shared-map.galgas", 846)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_28) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_32787 (var_forgottenAssociations, kEnumeration_up) ;
      while (enumerator_32787.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("\n"
          "  - ").add_operation (enumerator_32787.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 849))  COMMA_SOURCE_FILE ("shared-map.galgas", 849)) ;
        enumerator_32787.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 851)), var_forgottenAssociations.reader_count (SOURCE_FILE ("shared-map.galgas", 851)).reader_string (SOURCE_FILE ("shared-map.galgas", 851)).add_operation (GALGAS_string (" associations should be defined:"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 851)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 851))  COMMA_SOURCE_FILE ("shared-map.galgas", 851)) ;
    }
    GALGAS_stringset var_definedCombinaisons = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 853)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_32_ = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("shared-map.galgas", 854)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_33150 (enumerator_30828.current_mMapOverrideBlockDescriptor_32_AST (HERE), kEnumeration_up) ;
    while (enumerator_33150.hasCurrentObject ()) {
      GALGAS_uint var_leftStateIndex ;
      GALGAS_mapAutomatonMessageKind joker_33225 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_33150.current_mLeftState (HERE), var_leftStateIndex, joker_33225, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 856)) ;
      GALGAS_uint var_rightStateIndex ;
      GALGAS_mapAutomatonMessageKind joker_33301 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_33150.current_mRightState (HERE), var_rightStateIndex, joker_33301, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 857)) ;
      GALGAS_string var_combinaison = enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 858)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 858)).add_operation (enumerator_33150.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 858)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 858)) ;
      const enumGalgasBool test_29 = var_neededCombinaisons.reader_hasKey (var_combinaison COMMA_SOURCE_FILE ("shared-map.galgas", 859)).operator_not (SOURCE_FILE ("shared-map.galgas", 859)).boolEnum () ;
      if (kBoolTrue == test_29) {
        GALGAS_location location_30 (enumerator_33150.current_mRightState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_30, GALGAS_string ("the '").add_operation (enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 861)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 861)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 861)).add_operation (enumerator_33150.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 861)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 861)).add_operation (GALGAS_string ("' combinaison is useless"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 861))  COMMA_SOURCE_FILE ("shared-map.galgas", 860)) ;
      }
      const enumGalgasBool test_31 = var_definedCombinaisons.reader_hasKey (var_combinaison COMMA_SOURCE_FILE ("shared-map.galgas", 863)).boolEnum () ;
      if (kBoolTrue == test_31) {
        GALGAS_location location_32 (enumerator_33150.current_mRightState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_32, GALGAS_string ("the '").add_operation (enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 865)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 865)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 865)).add_operation (enumerator_33150.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 865)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 865)).add_operation (GALGAS_string ("' combinaison is already defined"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 865))  COMMA_SOURCE_FILE ("shared-map.galgas", 864)) ;
      }
      var_definedCombinaisons.addAssign_operation (var_combinaison  COMMA_SOURCE_FILE ("shared-map.galgas", 867)) ;
      GALGAS_uint var_resultingStateNameIndex ;
      GALGAS_mapAutomatonMessageKind joker_33865 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_33150.current_mResultingState (HERE), var_resultingStateNameIndex, joker_33865, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 868)) ;
      const enumGalgasBool test_33 = GALGAS_bool (kIsNotEqual, enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 869)).objectCompare (enumerator_33150.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 869)))).operator_and (GALGAS_bool (kIsNotEqual, enumerator_33150.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 870)).objectCompare (enumerator_33150.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 870)))) COMMA_SOURCE_FILE ("shared-map.galgas", 869)).operator_and (var_accessibilityGraph.reader_hasKey (enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 871)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 871)).add_operation (enumerator_33150.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 871)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 871)) COMMA_SOURCE_FILE ("shared-map.galgas", 871)).operator_not (SOURCE_FILE ("shared-map.galgas", 871)) COMMA_SOURCE_FILE ("shared-map.galgas", 870)).boolEnum () ;
      if (kBoolTrue == test_33) {
        GALGAS_location location_34 (enumerator_33150.current_mResultingState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_34, GALGAS_string ("the '").add_operation (enumerator_33150.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 873)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 873)).add_operation (GALGAS_string ("' state cannot be reached from the '"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 873)).add_operation (enumerator_33150.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 873)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 873)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 873))  COMMA_SOURCE_FILE ("shared-map.galgas", 872)) ;
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_33150.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 875)) ;
      }
      const enumGalgasBool test_35 = GALGAS_bool (kIsEqual, enumerator_33150.current_mMessageKind (HERE).objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("shared-map.galgas", 876)))).boolEnum () ;
      if (kBoolTrue == test_35) {
        var_definedCombinaisons.addAssign_operation (enumerator_33150.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 877)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 877)).add_operation (enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 877)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 877))  COMMA_SOURCE_FILE ("shared-map.galgas", 877)) ;
        var_branchBehaviourSortedListForMapOverride_32_.addAssign_operation (var_rightStateIndex, enumerator_33150.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 880)), var_leftStateIndex, enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 882)), var_resultingStateNameIndex, enumerator_33150.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 884)), enumerator_33150.current_mMessageKind (HERE), enumerator_33150.current_mTransitionMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 886))  COMMA_SOURCE_FILE ("shared-map.galgas", 878)) ;
      }
      var_branchBehaviourSortedListForMapOverride_32_.addAssign_operation (var_leftStateIndex, enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 890)), var_rightStateIndex, enumerator_33150.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 892)), var_resultingStateNameIndex, enumerator_33150.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 894)), enumerator_33150.current_mMessageKind (HERE), enumerator_33150.current_mTransitionMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 896))  COMMA_SOURCE_FILE ("shared-map.galgas", 888)) ;
      enumerator_33150.gotoNextObject () ;
    }
    const enumGalgasBool test_36 = GALGAS_bool (kIsEqual, var_forgottenAssociations.reader_count (SOURCE_FILE ("shared-map.galgas", 898)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_36) {
      GALGAS_stringset var_forgottenCombinaisons = var_neededCombinaisons.substract_operation (var_definedCombinaisons, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 899)) ;
      const enumGalgasBool test_37 = GALGAS_bool (kIsStrictSup, var_forgottenCombinaisons.reader_count (SOURCE_FILE ("shared-map.galgas", 900)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_37) {
        GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_35323 (var_forgottenCombinaisons, kEnumeration_up) ;
        while (enumerator_35323.hasCurrentObject ()) {
          var_s.dotAssign_operation (GALGAS_string ("\n"
            "  - ").add_operation (enumerator_35323.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 903))  COMMA_SOURCE_FILE ("shared-map.galgas", 903)) ;
          enumerator_35323.gotoNextObject () ;
        }
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 905)), var_forgottenCombinaisons.reader_count (SOURCE_FILE ("shared-map.galgas", 905)).reader_string (SOURCE_FILE ("shared-map.galgas", 905)).add_operation (GALGAS_string (" combinaisons are forgotten:"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 905)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 905))  COMMA_SOURCE_FILE ("shared-map.galgas", 905)) ;
      }
    }
    var_mapOverrideList.addAssign_operation (enumerator_30828.current_mOverrideBlockName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 909)), var_branchBehaviourSortedListForMapOverride_31_, var_branchBehaviourSortedListForMapOverride_32_  COMMA_SOURCE_FILE ("shared-map.galgas", 908)) ;
    enumerator_30828.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 914)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 915)) ;
  cEnumerator_propertyInCollectionListAST enumerator_35787 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_35787.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_35787.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 917)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_t, enumerator_35787.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("shared-map.galgas", 920)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_35787.current_mPropertyName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 925)) ;
    }
    enumerator_35787.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 928)) ;
  cEnumerator_insertMethodListAST enumerator_36176 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_36176.hasCurrentObject ()) {
    {
    var_insertMethodMap.modifier_insertKey (enumerator_36176.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 930)) ;
    }
    cEnumerator_stringlist enumerator_36369 (enumerator_36176.current_mErrorMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 932)).reader_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("shared-map.galgas", 932)), kEnumeration_up) ;
    while (enumerator_36369.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray = enumerator_36369.current_mValue (HERE).reader_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("shared-map.galgas", 933)) ;
      {
      GALGAS_string joker_36482 ; // Joker input parameter
      var_explodedArray.modifier_popFirst (joker_36482, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 934)) ;
      }
      cEnumerator_stringlist enumerator_36514 (var_explodedArray, kEnumeration_up) ;
      while (enumerator_36514.hasCurrentObject ()) {
        const enumGalgasBool test_38 = GALGAS_bool (kIsStrictSup, enumerator_36514.current_mValue (HERE).reader_length (SOURCE_FILE ("shared-map.galgas", 936)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_38) {
          GALGAS_char var_c = enumerator_36514.current_mValue (HERE).reader_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 937)) ;
          const enumGalgasBool test_39 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("shared-map.galgas", 938)).boolEnum () ;
          if (kBoolTrue == test_39) {
            GALGAS_location location_40 (enumerator_36176.current_mErrorMessage (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_40, GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in an insert error message")  COMMA_SOURCE_FILE ("shared-map.galgas", 939)) ;
          }
        }
        enumerator_36514.gotoNextObject () ;
      }
      enumerator_36369.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_36958 (enumerator_36176.current_mShadowErrorMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 945)).reader_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("shared-map.galgas", 945)), kEnumeration_up) ;
    while (enumerator_36958.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray = enumerator_36958.current_mValue (HERE).reader_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("shared-map.galgas", 946)) ;
      {
      GALGAS_string joker_37071 ; // Joker input parameter
      var_explodedArray.modifier_popFirst (joker_37071, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 947)) ;
      }
      cEnumerator_stringlist enumerator_37103 (var_explodedArray, kEnumeration_up) ;
      while (enumerator_37103.hasCurrentObject ()) {
        const enumGalgasBool test_41 = GALGAS_bool (kIsStrictSup, enumerator_37103.current_mValue (HERE).reader_length (SOURCE_FILE ("shared-map.galgas", 949)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_41) {
          GALGAS_char var_c = enumerator_37103.current_mValue (HERE).reader_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 950)) ;
          const enumGalgasBool test_42 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("shared-map.galgas", 951)).boolEnum () ;
          if (kBoolTrue == test_42) {
            GALGAS_location location_43 (enumerator_36176.current_mErrorMessage (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_43, GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in a shadow error message")  COMMA_SOURCE_FILE ("shared-map.galgas", 952)) ;
          }
        }
        enumerator_37103.gotoNextObject () ;
      }
      enumerator_36958.gotoNextObject () ;
    }
    enumerator_36176.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 959)) ;
  cEnumerator_mapSearchMethodListAST enumerator_37498 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_37498.hasCurrentObject ()) {
    const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("shared-map.galgas", 961)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_44) {
      {
      var_searchMethodMap.modifier_insertKey (enumerator_37498.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 962)) ;
      }
    }else if (kBoolFalse == test_44) {
      {
      var_searchMethodMap.modifier_insertKey (enumerator_37498.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 964)) ;
      }
    }
    cEnumerator_stringlist enumerator_37805 (enumerator_37498.current_mErrorMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 967)).reader_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("shared-map.galgas", 967)), kEnumeration_up) ;
    while (enumerator_37805.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray = enumerator_37805.current_mValue (HERE).reader_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("shared-map.galgas", 968)) ;
      {
      GALGAS_string joker_37918 ; // Joker input parameter
      var_explodedArray.modifier_popFirst (joker_37918, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 969)) ;
      }
      cEnumerator_stringlist enumerator_37950 (var_explodedArray, kEnumeration_up) ;
      while (enumerator_37950.hasCurrentObject ()) {
        const enumGalgasBool test_45 = GALGAS_bool (kIsStrictSup, enumerator_37950.current_mValue (HERE).reader_length (SOURCE_FILE ("shared-map.galgas", 971)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_45) {
          GALGAS_char var_c = enumerator_37950.current_mValue (HERE).reader_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 972)) ;
          const enumGalgasBool test_46 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
          if (kBoolTrue == test_46) {
            GALGAS_location location_47 (enumerator_37498.current_mErrorMessage (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_47, GALGAS_string ("only '%K' and '%%' escape sequences are allowed in a search error message")  COMMA_SOURCE_FILE ("shared-map.galgas", 974)) ;
          }
        }
        enumerator_37950.gotoNextObject () ;
      }
      enumerator_37805.gotoNextObject () ;
    }
    enumerator_37498.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("shared map ").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("shared-map.galgas", 982)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 982)), GALGAS_sharedMapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 984)), object->mAttribute_mMapTypeName, var_typedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, var_mapAutomatonStateMap, var_mapAutomatonActionMap, var_mapStateSortedList, var_mapOverrideList  COMMA_SOURCE_FILE ("shared-map.galgas", 983)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("shared-map.galgas", 981)) ;
  GALGAS_string var_graphFile = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/shared-map-"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 996)).add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("shared-map.galgas", 996)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 996)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 996)) ;
  const enumGalgasBool test_48 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateSharedMapAutomatonDotFiles.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_48) {
    GALGAS_string var_theGraph = GALGAS_string ("digraph G {\n") ;
    cEnumerator_mapAutomatonStateMap enumerator_38940 (var_mapAutomatonStateMap, kEnumeration_up) ;
    while (enumerator_38940.hasCurrentObject ()) {
      var_theGraph.dotAssign_operation (GALGAS_string ("\"").add_operation (enumerator_38940.current_lkey (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 1000)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1000)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1000)).add_operation (enumerator_38940.current_lkey (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 1000)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1000)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1000))  COMMA_SOURCE_FILE ("shared-map.galgas", 1000)) ;
      const enumGalgasBool test_49 = var_initialStateSet.reader_hasKey (enumerator_38940.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("shared-map.galgas", 1001)).boolEnum () ;
      if (kBoolTrue == test_49) {
        var_theGraph.dotAssign_operation (GALGAS_string (" shape=box color=blue")  COMMA_SOURCE_FILE ("shared-map.galgas", 1002)) ;
      }else if (kBoolFalse == test_49) {
        var_theGraph.dotAssign_operation (GALGAS_string (" shape=box")  COMMA_SOURCE_FILE ("shared-map.galgas", 1004)) ;
      }
      switch (enumerator_38940.current_mStateMessageKind (HERE).enumValue ()) {
      case GALGAS_mapAutomatonMessageKind::kNotBuilt:
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
        {
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
        {
          var_theGraph.dotAssign_operation (GALGAS_string (" fontcolor=\"orange\"")  COMMA_SOURCE_FILE ("shared-map.galgas", 1009)) ;
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
        {
          var_theGraph.dotAssign_operation (GALGAS_string (" fontcolor=\"red\"")  COMMA_SOURCE_FILE ("shared-map.galgas", 1011)) ;
        }
        break ;
      }
      var_theGraph.dotAssign_operation (GALGAS_string ("];\n")  COMMA_SOURCE_FILE ("shared-map.galgas", 1013)) ;
      enumerator_38940.gotoNextObject () ;
    }
    cEnumerator_mapStateList enumerator_39418 (object->mAttribute_mMapStateList, kEnumeration_up) ;
    while (enumerator_39418.hasCurrentObject ()) {
      cEnumerator_mapStateTransitionList enumerator_39453 (enumerator_39418.current_mTransitionList (HERE), kEnumeration_up) ;
      while (enumerator_39453.hasCurrentObject ()) {
        var_theGraph.dotAssign_operation (GALGAS_string ("\"").add_operation (enumerator_39418.current_mStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 1017)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1017)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1017)).add_operation (enumerator_39453.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 1017)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1017)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1017)).add_operation (enumerator_39453.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 1017)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1017)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1017))  COMMA_SOURCE_FILE ("shared-map.galgas", 1017)) ;
        switch (enumerator_39453.current_mTransitionMessageKind (HERE).enumValue ()) {
        case GALGAS_mapAutomatonMessageKind::kNotBuilt:
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
          {
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
          {
            var_theGraph.dotAssign_operation (GALGAS_string (" fontcolor=\"orange\" color=\"orange\"")  COMMA_SOURCE_FILE ("shared-map.galgas", 1021)) ;
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
          {
            var_theGraph.dotAssign_operation (GALGAS_string (" fontcolor=\"red\" color=\"red\"")  COMMA_SOURCE_FILE ("shared-map.galgas", 1023)) ;
          }
          break ;
        }
        var_theGraph.dotAssign_operation (GALGAS_string ("];\n")  COMMA_SOURCE_FILE ("shared-map.galgas", 1025)) ;
        enumerator_39453.gotoNextObject () ;
      }
      enumerator_39418.gotoNextObject () ;
    }
    var_theGraph.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("shared-map.galgas", 1028)) ;
    GALGAS_bool joker_39948 ; // Joker input parameter
    var_theGraph.method_writeToFileWhenDifferentContents (var_graphFile, joker_39948, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1029)) ;
  }else if (kBoolFalse == test_48) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_graphFile, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1031)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sharedMapDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                        categoryMethod_sharedMapDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_semanticAnalysis (defineCategoryMethod_sharedMapDeclarationAST_semanticAnalysis, NULL) ;

