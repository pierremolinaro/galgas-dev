#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-24.h"


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
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (TO_UNICODE (").add_operation (object->mAttribute_mCharacter.reader_uint (SOURCE_FILE ("semanticExpressionGeneration.galgas", 99)).reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 99)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 99)) ;
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
    outArgument_outCppExpression = GALGAS_string ("GALGAS_string (").add_operation (object->mAttribute_mString.reader_utf_38_Representation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 113)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 113)) ;
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
  outArgument_outCppExpression = GALGAS_string ("GALGAS_double (").add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 125)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 125)) ;
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
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint ((uint32_t) ").add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 136)).add_operation (GALGAS_string ("U)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 136)) ;
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
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint_36__34_ ((uint64_t) ").add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 147)).add_operation (GALGAS_string ("ULL)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 147)) ;
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
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint ((int32_t) ").add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 158)).add_operation (GALGAS_string ("L)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 158)) ;
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
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint_36__34_ ((int64_t) ").add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 169)).add_operation (GALGAS_string ("LL)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 169)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 180)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 182)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 182)).add_operation (object->mAttribute_mResultType.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 184)).reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 183)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 184)).add_operation (categoryReader_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 185)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 185)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 196)) ;
  GALGAS_stringlist var_parameterList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 197)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_8325 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_8325.hasCurrentObject ()) {
    GALGAS_string var_parameter ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_8325.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 200)) ;
    var_parameterList.addAssign_operation (var_parameter  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 201)) ;
    enumerator_8325.gotoNextObject () ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mConstructorType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 203)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 203)).add_operation (object->mAttribute_mConstructorName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 204)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 204)) ;
  cEnumerator_stringlist enumerator_8744 (var_parameterList, kEnumeration_up) ;
  while (enumerator_8744.hasCurrentObject ()) {
    outArgument_outCppExpression.dotAssign_operation (enumerator_8744.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 207)) ;
    if (enumerator_8744.hasNextObject ()) {
      outArgument_outCppExpression.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 208)) ;
    }
    enumerator_8744.gotoNextObject () ;
  }
  GALGAS_bool var_needsComma = GALGAS_bool (kIsStrictSup, var_parameterList.reader_length (SOURCE_FILE ("semanticExpressionGeneration.galgas", 210)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  const enumGalgasBool test_0 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = var_needsComma.boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outCppExpression.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 213)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 215)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 215)) ;
    }
    outArgument_outCppExpression.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 216))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 216)) ;
    var_needsComma = GALGAS_bool (true) ;
  }
  const enumGalgasBool test_2 = var_needsComma.boolEnum () ;
  if (kBoolTrue == test_2) {
    outArgument_outCppExpression.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 220)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 220))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 220)) ;
  }else if (kBoolFalse == test_2) {
    outArgument_outCppExpression.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 222)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 222))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 222)) ;
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
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 238)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 239))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 239)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 241)).add_operation (GALGAS_string (" (gOption_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 241)).add_operation (object->mAttribute_mOptionComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 241)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 241)).add_operation (object->mAttribute_mOptionEntryName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 242)).add_operation (GALGAS_string (".reader_value ())"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 242)) ;
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
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 253)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 254))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 254)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (gOption_").add_operation (object->mAttribute_mOptionComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 256)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 256)).add_operation (object->mAttribute_mOptionEntryName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 257)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 257)).add_operation (GALGAS_string (".reader_char ())"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 257)) ;
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
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 268)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 269))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 269)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (gOption_").add_operation (object->mAttribute_mOptionComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 271)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 271)).add_operation (object->mAttribute_mOptionEntryName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 272)).add_operation (GALGAS_string (".reader_string ())"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 272)) ;
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
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 283)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 284))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 284)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("gOption_").add_operation (object->mAttribute_mOptionComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 286)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 286)).add_operation (object->mAttribute_mOptionEntryName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 287)).add_operation (GALGAS_string (".reader_comment ()"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 287)) ;
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
//                   Overriding category method '@concatExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_concatExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_concatExpressionForGeneration * object = (const cPtr_concatExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_concatExpressionForGeneration) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 300)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 303)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".operator_concat ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 305)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 305)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 306)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 306)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 306)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_concatExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_concatExpressionForGeneration.mSlotID,
                                          categoryMethod_concatExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_concatExpressionForGeneration_generateExpression (defineCategoryMethod_concatExpressionForGeneration_generateExpression, NULL) ;

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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 317)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 317)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 320)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 323)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".operator_or ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 325)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 325)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 326)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 326)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 337)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 337)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 339)) ;
  GALGAS_string var_testVar = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 347)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 347)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_bool ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 348)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 348)).add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 348)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 348))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 348)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (kBoolTrue != ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 349)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 349))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 349)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 351)) ;
  }
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 352)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (var_testVar.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 359)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 359)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 359))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 359)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 360)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 361)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 373)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 373)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 376)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 379)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".operator_xor ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 381)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 381)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 382)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 382)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 393)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 393)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 395)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 403)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".operator_and ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 411)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 411)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 412)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 412)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 423)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 423)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 425)) ;
  GALGAS_string var_testVar = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 433)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 433)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 433)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_bool ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)).add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 435)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 435))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 435)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 437)) ;
  }
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 438)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (var_testVar.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 445)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 445)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 445))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 445)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 446)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 447)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 459)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 459)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 462)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 465)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsEqual, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 467)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 467)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 467)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 467)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 478)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 478)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 481)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 484)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsNotEqual, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 486)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 486)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 486)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 486)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 497)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 497)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 500)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 503)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsInfOrEqual, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 505)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 505)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 505)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 505)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 516)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 516)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 519)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 522)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsSupOrEqual, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 524)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 524)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 524)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 524)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 535)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 535)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 538)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 541)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsStrictSup, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 543)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 543)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 543)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 543)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 554)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 554)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 557)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 560)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsStrictInf, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 562)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 562)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 562)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 562)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 573)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 573)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 576)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 579)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".right_shift_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 581)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 581)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 582)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 582)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 593)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 593)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 596)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 599)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".left_shift_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 601)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 601)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 602)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 602)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 613)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 613)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 616)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 619)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".add_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 621)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 621)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 622)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 622)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 622)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 622)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 623)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 623)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 634)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 634)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 637)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 640)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 642)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 642)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 643)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 643)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 643)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 643)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 643)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 643)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 644)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 644)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 655)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 655)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 658)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 661)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".multiply_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 663)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 663)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 664)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 664)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 664)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 664)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 664)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 664)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 665)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 665)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 676)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 676)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 679)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 682)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".divide_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 684)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 684)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 685)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 685)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 685)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 685)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 685)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 685)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 686)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 686)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 697)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 697)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 700)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 703)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".modulo_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 705)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 705)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 706)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 706)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 706)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 706)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 706)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 706)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 707)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 707)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 718)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 718)) ;
  GALGAS_string var_operand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 721)) ;
  outArgument_outCppExpression = var_operand.add_operation (GALGAS_string (".operator_unary_minus ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 723)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 724)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 723)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 724)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 724)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 724)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 725)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 725)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 736)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 736)) ;
  GALGAS_string var_operand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 739)) ;
  outArgument_outCppExpression = var_operand.add_operation (GALGAS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 741)).add_operation (categoryReader_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 741)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 741)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 741)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 752)) ;
  GALGAS_string var_operand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 754)) ;
  outArgument_outCppExpression = var_operand.add_operation (GALGAS_string (".mAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 756)).add_operation (object->mAttribute_mStructFieldName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 756)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 756)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 767)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 767)) ;
  GALGAS_string var_operand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 770)) ;
  outArgument_outCppExpression = var_operand.add_operation (GALGAS_string (".operator_tilde ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 772)).add_operation (categoryReader_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 772)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 772)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 772)) ;
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
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mIfExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 785)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 787)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 787)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 787)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mThenExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 788)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 788)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 788)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 788)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 788)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 788))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 788)) ;
  GALGAS_string var_testVar = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 789)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 789)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 789)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 790)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 790)).add_operation (var_ifExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 790)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 790))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 790)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 791)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 791))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 791)) ;
  GALGAS_string var_thenExpression ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 794)) ;
  }
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mThenExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_thenExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 795)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (outArgument_outCppExpression.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 796)).add_operation (var_thenExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 796)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 796))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 796)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 797)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 799)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 799))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 799)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 800)) ;
  }
  GALGAS_string var_elseExpression ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mElseExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_elseExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 802)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (outArgument_outCppExpression.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 803)).add_operation (var_elseExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 803)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 803))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 803)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 804)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 805)) ;
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
  outArgument_outCppExpression = GALGAS_string ("GALGAS_type (& kTypeDescriptor_GALGAS_").add_operation (object->mAttribute_mTypeName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 817)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 816)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 817)) ;
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
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 828)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 828)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 828)) ;
  GALGAS_string var_receiverExpression ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 830)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 838)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 838)).add_operation (GALGAS_string ("::extractObject ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 838)).add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 839)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 839)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 840)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 840)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 841)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 840)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 841)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 842)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 842)) ;
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
  GALGAS_string var_typeNameRepresentation = object->mAttribute_mCastType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 853)).reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 853)) ;
  GALGAS_string var_receiverExpression ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 855)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mCastType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 863)) ;
  if (object->mAttribute_mTypeComparisonKind.isValid ()) {
    switch (object->mAttribute_mTypeComparisonKind.enumValue ()) {
    case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_equal: {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (").add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 866)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 866)).add_operation (var_typeNameRepresentation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 867)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 868)) ;
      } break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_inherited: {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (NULL != dynamic_cast <const cPtr_").add_operation (var_typeNameRepresentation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 870)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 871)).add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 872)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 872)) ;
      } break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited: {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool ((").add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 874)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 874)).add_operation (var_typeNameRepresentation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 875)).add_operation (GALGAS_string (") && (NULL != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 876)).add_operation (var_typeNameRepresentation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 876)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 877)).add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 878)).add_operation (GALGAS_string (".ptr ())))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 878)) ;
      } break ;
    }
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
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 890)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 890)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 891)) ;
  GALGAS_string var_receiverExpression ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 893)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTypeName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 901)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 901)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 901)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 902)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 902)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 902)).add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 903)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 903))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 901)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 904)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (NULL != dynamic_cast <const cPtr_").add_operation (object->mAttribute_mTypeName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 908)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 907)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 908)).add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 909)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 909)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 909)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 910)).add_operation (GALGAS_string (" = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 910)).add_operation (object->mAttribute_mTypeName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 910)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 910)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 910)).add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 910)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 911)).add_operation (GALGAS_string ("}else{\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 911))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 906)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 913)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 915)).add_operation (GALGAS_string ("->castError (\""), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 915)).add_operation (object->mAttribute_mTypeName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 916)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 915)).add_operation (GALGAS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 916)).add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 917)).add_operation (GALGAS_string (".ptr ()->classDescriptor ()"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 917)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 918)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 917)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 918))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 914)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 919)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 920)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 920)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 921)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 922)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 923)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 934)) ;
  outArgument_outCppExpression = object->mAttribute_mCppVarName ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mNameForCheckingFormalParameterUsing COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 936)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 950)) ;
  GALGAS_string var_receiverCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 952)) ;
  GALGAS_stringlist var_readerArgumentCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 954)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_41089 (object->mAttribute_mExpressions, kEnumeration_up) ;
  while (enumerator_41089.hasCurrentObject ()) {
    GALGAS_string var_argumentCppName ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_41089.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 957)) ;
    var_readerArgumentCppNameList.addAssign_operation (var_argumentCppName  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 958)) ;
    enumerator_41089.gotoNextObject () ;
  }
  if (object->mAttribute_mKind.isValid ()) {
    switch (object->mAttribute_mKind.enumValue ()) {
    case GALGAS_methodKind::kNotBuilt:
      break ;
    case GALGAS_methodKind::kEnum_definedAsCategory: {
      categoryMethod_addHeaderFileName (categoryReader_baseType (object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 963)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 963)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 963)) ;
      GALGAS_unifiedTypeMap_2D_proxy var_baseType = object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 964)) ;
      GALGAS_bool var_searching = GALGAS_bool (true) ;
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionGeneration.galgas", 966)).isValid ()) {
        uint32_t variant_41581 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionGeneration.galgas", 966)).uintValue () ;
        bool loop_41581 = true ;
        while (loop_41581) {
          loop_41581 = var_searching.isValid () ;
          if (loop_41581) {
            loop_41581 = var_searching.boolValue () ;
          }
          if (loop_41581 && (0 == variant_41581)) {
            loop_41581 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionGeneration.galgas", 966)) ;
          }
          if (loop_41581) {
            variant_41581 -- ;
            const enumGalgasBool test_0 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 967)).reader_isNull (SOURCE_FILE ("semanticExpressionGeneration.galgas", 967)).operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 967)).boolEnum () ;
            if (kBoolTrue == test_0) {
              const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 968)).reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 968)).reader_hasKey (object->mAttribute_mReaderName COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 968)).boolEnum () ;
              if (kBoolTrue == test_1) {
                var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 969)) ;
              }else if (kBoolFalse == test_1) {
                var_searching = GALGAS_bool (false) ;
              }
            }else if (kBoolFalse == test_0) {
              var_searching = GALGAS_bool (false) ;
            }
          }
        }
      }
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 977)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 977)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 977)).add_operation (object->mAttribute_mReaderName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 977))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 977)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (var_receiverCppName COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 978)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 979)).reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 979)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 979)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outCppExpression = GALGAS_string ("callCategoryReader_").add_operation (object->mAttribute_mReaderName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 980)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 980)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 980)).add_operation (object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 981)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 981)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 981)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 981)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 981)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 981)) ;
      }else if (kBoolFalse == test_2) {
        categoryMethod_addHeaderFileName (object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 983)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 983)) ;
        outArgument_outCppExpression = GALGAS_string ("categoryReader_").add_operation (object->mAttribute_mReaderName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 984)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 984)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 984)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 984)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 984)) ;
      }
      } break ;
    case GALGAS_methodKind::kEnum_definedAsMember: {
      outArgument_outCppExpression = var_receiverCppName ;
      cEnumerator_stringlist enumerator_42630 (object->mAttribute_mFieldList, kEnumeration_up) ;
      while (enumerator_42630.hasCurrentObject ()) {
        outArgument_outCppExpression.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_42630.current_mValue (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 989)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 989))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 989)) ;
        enumerator_42630.gotoNextObject () ;
      }
      categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 991)) ;
      outArgument_outCppExpression.dotAssign_operation (GALGAS_string (".reader_").add_operation (object->mAttribute_mReaderName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 992)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 992)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 992))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 992)) ;
      } break ;
    }
  }
  cEnumerator_stringlist enumerator_42900 (var_readerArgumentCppNameList, kEnumeration_up) ;
  while (enumerator_42900.hasCurrentObject ()) {
    outArgument_outCppExpression.dotAssign_operation (enumerator_42900.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 995)) ;
    if (enumerator_42900.hasNextObject ()) {
      outArgument_outCppExpression.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 996)) ;
    }
    enumerator_42900.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_readerArgumentCppNameList.reader_length (SOURCE_FILE ("semanticExpressionGeneration.galgas", 998)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1000)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1000)) ;
      }
      outArgument_outCppExpression.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1001)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1001))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1001)) ;
    }
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_5 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1004)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1004)) ;
      }
      outArgument_outCppExpression.dotAssign_operation (GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1005)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1005)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1005))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1005)) ;
    }else if (kBoolFalse == test_5) {
      outArgument_outCppExpression.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1007)) ;
    }
  }
  outArgument_outCppExpression.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1009)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1009))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1009)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1021)) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1023))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1023)) ;
  GALGAS_stringlist var_parameterList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1025)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_43995 (object->mAttribute_mExpressions, kEnumeration_up) ;
  while (enumerator_43995.hasCurrentObject ()) {
    GALGAS_string var_parameter ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_43995.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1028)) ;
    var_parameterList.addAssign_operation (var_parameter  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1029)) ;
    enumerator_43995.gotoNextObject () ;
  }
  outArgument_outCppExpression = GALGAS_string ("function_").add_operation (object->mAttribute_mFunctionName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1031)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1031)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1031)) ;
  cEnumerator_stringlist enumerator_44309 (var_parameterList, kEnumeration_up) ;
  while (enumerator_44309.hasCurrentObject ()) {
    outArgument_outCppExpression.dotAssign_operation (enumerator_44309.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1033))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1033)) ;
    enumerator_44309.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1035)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1035)) ;
  }
  outArgument_outCppExpression.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1036))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1036)) ;
  outArgument_outCppExpression.dotAssign_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1037)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1037))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1037)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1050))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1050)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_filewrapper (gWrapperDirectory_0_").add_operation (object->mAttribute_mFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1051)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1051)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1051)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1063))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1063)) ;
  GALGAS_stringlist var_parameterList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1064)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_45594 (object->mAttribute_mActualOutputParameterList, kEnumeration_up) ;
  while (enumerator_45594.hasCurrentObject ()) {
    GALGAS_string var_parameter ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_45594.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1067)) ;
    var_parameterList.addAssign_operation (var_parameter  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1074)) ;
    enumerator_45594.gotoNextObject () ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (filewrapperTemplate_").add_operation (object->mAttribute_mFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1076)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1076)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1076)).add_operation (object->mAttribute_mFilewrapperTemplateName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1076)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1076)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1076)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1077)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1077)) ;
  cEnumerator_stringlist enumerator_46071 (var_parameterList, kEnumeration_up) ;
  while (enumerator_46071.hasCurrentObject ()) {
    outArgument_outCppExpression.dotAssign_operation (GALGAS_string (", ").add_operation (enumerator_46071.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1079))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1079)) ;
    enumerator_46071.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1081)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1081)) ;
  }
  outArgument_outCppExpression.dotAssign_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1082)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1082))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1082)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1094))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1094)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mIsTextFile.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("GALGAS_string") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("GALGAS_data") ;
  }
  outArgument_outCppExpression = temp_0 ;
  outArgument_outCppExpression.dotAssign_operation (GALGAS_string (" (gWrapperFileContent_").add_operation (object->mAttribute_mFilewrapperFileIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1096)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1096)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1096)).add_operation (object->mAttribute_mFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1096)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1096)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1096))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1096)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1110))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1110)) ;
  outArgument_outCppExpression = GALGAS_string ("C_Lexique_").add_operation (object->mAttribute_mLexiqueComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1111)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1111)).add_operation (GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1111)).add_operation (object->mAttribute_mLexiqueReaderName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1112)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1111)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1112)).add_operation (categoryReader_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1113)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1113)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1113)) ;
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
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1137)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (constinArgument_inCppTargetVar  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1144)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (".dotAssign_operation (").add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1145)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1145)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mExpressionLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1145)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1145)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1145))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1145)) ;
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
  GALGAS_stringlist var_parameterList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1158)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_49190 (object->mAttribute_mExpressionList, kEnumeration_up) ;
  while (enumerator_49190.hasCurrentObject ()) {
    GALGAS_string var_parameter ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_49190.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1160)) ;
    var_parameterList.addAssign_operation (var_parameter  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1167)) ;
    enumerator_49190.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (constinArgument_inCppTargetVar  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1170)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (".addAssign_operation (")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1172)) ;
  cEnumerator_stringlist enumerator_49577 (var_parameterList, kEnumeration_up) ;
  while (enumerator_49577.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_49577.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1174)) ;
    if (enumerator_49577.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1175)) ;
    }
    enumerator_49577.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTargetType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1177)).operator_and (function_plusEqualOperatorWithFieldListNeedsCompilerArg (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1177)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1177)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1178)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1178))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1178)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1179)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1179)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mExpressionLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1181)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1181)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1181))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1181)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1193)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1195)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1195)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1195)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1197)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1197)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1197)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1197)).add_operation (GALGAS_string (" = GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1197)).add_operation (object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1198)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1198)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1198)).add_operation (object->mAttribute_mResultType.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1198)).reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1198)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1198)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1198)).add_operation (categoryReader_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1198)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1198)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1198))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1197)) ;
  cEnumerator_collectionValueElementListForGeneration enumerator_50842 (object->mAttribute_mElementList, kEnumeration_up) ;
  while (enumerator_50842.hasCurrentObject ()) {
    callCategoryMethod_generateCollectionElementCode ((const cPtr_abstractCollectionValueElementForGeneration *) enumerator_50842.current_mElement (HERE).ptr (), object->mAttribute_mResultType, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1201)) ;
    enumerator_50842.gotoNextObject () ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mFormalArgumentType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 32)) ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mOutputActualParameterExpression.ptr (), ioArgument_ioImplementation, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 33)) ;
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
  cEnumerator_unifiedTypeMapProxyList enumerator_2495 (object->mAttribute_mTypeList, kEnumeration_up) ;
  while (enumerator_2495.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_2495.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 47)) ;
    enumerator_2495.gotoNextObject () ;
  }
  outArgument_outCppName = object->mAttribute_mOutputInputVariableCppName ;
  cEnumerator_lstringlist enumerator_2624 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_2624.hasCurrentObject ()) {
    outArgument_outCppName.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_2624.current_mValue (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 51))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 51)) ;
    enumerator_2624.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mOutputInputVariableCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 53)) ;
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
  ioArgument_ioOutputVariableList.addAssign_operation (object->mAttribute_mInputActualCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 67)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (outArgument_outCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 68)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mFormalArgumentType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 81)) ;
  outArgument_outCppName = object->mAttribute_mInputActualCppName ;
  ioArgument_ioImplementation.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mFormalArgumentType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 83)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 83)).add_operation (outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 83)).add_operation (GALGAS_string (" ; // Joker input parameter\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 83))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 83)) ;
  ioArgument_ioJokerParametersToReleaseList.addAssign_operation (object->mAttribute_mInputActualCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 84)) ;
  ioArgument_ioOutputVariableList.addAssign_operation (object->mAttribute_mInputActualCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 85)) ;
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
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 96)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 97)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 105)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 116)) ;
  GALGAS_string var_sourceVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 117)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTargetType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 124)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 124)).add_operation (object->mAttribute_mCppVariableName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 124)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 124)).add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 124)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 124))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 124)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mVariableType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 135)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mVariableType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 136)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 136)).add_operation (object->mAttribute_mCppVariableName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 136)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 136))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 136)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 147)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTargetType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 148)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 148)).add_operation (object->mAttribute_mTargetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 149)).add_operation (GALGAS_string (" = GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 149)).add_operation (object->mAttribute_mTargetType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 150)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 150)).add_operation (object->mAttribute_mTargetType.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 152)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 151)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 152)).add_operation (categoryReader_sourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 153)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 153))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 148)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 164)) ;
  GALGAS_stringlist var_parameterList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 165)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_7332 (object->mAttribute_mConstructorArguments, kEnumeration_up) ;
  while (enumerator_7332.hasCurrentObject ()) {
    GALGAS_string var_parameter ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_7332.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 168)) ;
    var_parameterList.addAssign_operation (var_parameter  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 169)) ;
    enumerator_7332.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTargetType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 171)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 171)).add_operation (object->mAttribute_mTargetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 172)).add_operation (GALGAS_string (" = GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 172)).add_operation (object->mAttribute_mTargetType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 173)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 173)).add_operation (object->mAttribute_mConstructorName.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 174)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 174))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 171)) ;
  cEnumerator_stringlist enumerator_7871 (var_parameterList, kEnumeration_up) ;
  while (enumerator_7871.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_7871.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 177)) ;
    if (enumerator_7871.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 178)) ;
    }
    enumerator_7871.gotoNextObject () ;
  }
  GALGAS_bool var_needsComma = GALGAS_bool (kIsStrictSup, var_parameterList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 180)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  const enumGalgasBool test_0 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = var_needsComma.boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 183)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 185)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 185)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 186))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 186)) ;
    var_needsComma = GALGAS_bool (true) ;
  }
  const enumGalgasBool test_2 = var_needsComma.boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioGeneratedCode.dotAssign_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 190)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 190))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 190)) ;
  }else if (kBoolFalse == test_2) {
    ioArgument_ioGeneratedCode.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 192)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 192))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 192)) ;
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
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 205)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mNameForCheckingFormalParameterUsing COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 206)) ;
  }
  GALGAS_string var_receiverCppName = object->mAttribute_mTargetCppName ;
  cEnumerator_lstringlist enumerator_9073 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_9073.hasCurrentObject ()) {
    var_receiverCppName.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_9073.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 210)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 210))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 210)) ;
    enumerator_9073.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 212)).add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 212)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 212))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 212)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mTargetCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 213)) ;
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
  cEnumerator_unifiedTypeMapProxyList enumerator_9678 (object->mAttribute_mDropTypeList, kEnumeration_up) ;
  while (enumerator_9678.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_9678.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 225)) ;
    enumerator_9678.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_9753 (object->mAttribute_mDropList, kEnumeration_up) ;
  while (enumerator_9753.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_9753.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 228)).add_operation (object->mAttribute_mComment, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 228)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 228))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 228)) ;
    enumerator_9753.gotoNextObject () ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 240)) ;
  GALGAS_string var_sourceVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 241)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mNameForCheckingFormalParameterUsing COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 248)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (object->mAttribute_mTargetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 249)) ;
  cEnumerator_lstringlist enumerator_10566 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_10566.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_10566.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 251))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 251)) ;
    enumerator_10566.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (".dotAssign_operation (").add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 253)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 253)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 253)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 253))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 253)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mTargetVariableCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 254)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 267))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 267)) ;
  GALGAS_string var_sourceVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSourceFileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 269)) ;
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 277)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 278)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 279)) ;
  cEnumerator_actualParameterListForGeneration enumerator_11716 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_11716.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_11716.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 281)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 290)) ;
    const enumGalgasBool test_0 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_11716.current_mActualParameter (HERE).ptr ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.dotAssign_operation (var_parameterCppName.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 292))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 292)) ;
    }
    enumerator_11716.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = object->mAttribute_mGrammarHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("C_String ").add_operation (object->mAttribute_mSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 296)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 296))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 296)) ;
  }
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = object->mAttribute_mGrammarHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = object->mAttribute_mSyntaxDirectedTranslationResultVarName.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 302)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("cGrammar_").add_operation (object->mAttribute_mGrammarName.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 298)).add_operation (GALGAS_string ("::_performSourceFileParsing_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 298)).add_operation (object->mAttribute_mLabelName.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 299)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 299)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 300)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 301)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 301)).add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 302))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 298)) ;
  cEnumerator_stringlist enumerator_12725 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_12725.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ").add_operation (enumerator_12725.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 305))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 305)) ;
    enumerator_12725.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 307)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 307))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 307)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 308)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 308)) ;
  }
  cEnumerator_stringlist enumerator_12938 (object->mAttribute_mAssignementList, kEnumeration_up) ;
  while (enumerator_12938.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_12938.current (HERE).mAttribute_mValue.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 310))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 310)) ;
    enumerator_12938.gotoNextObject () ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 322))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 322)) ;
  GALGAS_string var_sourceVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSourceStringExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 325)) ;
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 327)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 328)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 329)) ;
  cEnumerator_actualParameterListForGeneration enumerator_13802 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_13802.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_13802.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 331)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 340)) ;
    const enumGalgasBool test_0 = GALGAS_bool (NULL != dynamic_cast <const cPtr_inputActualParameterForGeneration *> (enumerator_13802.current_mActualParameter (HERE).ptr ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.dotAssign_operation (var_parameterCppName.add_operation (GALGAS_string (".drop () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 342))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 342)) ;
    }
    enumerator_13802.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = object->mAttribute_mGrammarHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("C_String ").add_operation (object->mAttribute_mSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 346)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 346))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 346)) ;
  }
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = object->mAttribute_mGrammarHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = object->mAttribute_mSyntaxDirectedTranslationResultVarName.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 351)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string::makeEmptyString () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("cGrammar_").add_operation (object->mAttribute_mGrammarName.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 348)).add_operation (GALGAS_string ("::_performSourceStringParsing_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 348)).add_operation (object->mAttribute_mLabelName.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 349)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 349)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 350)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 350)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 350)).add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 351))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 348)) ;
  cEnumerator_stringlist enumerator_14802 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_14802.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ").add_operation (enumerator_14802.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 354))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 354)) ;
    enumerator_14802.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 356)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 356))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 356)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 357)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 357)) ;
  }
  cEnumerator_stringlist enumerator_15015 (object->mAttribute_mAssignementList, kEnumeration_up) ;
  while (enumerator_15015.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_15015.current (HERE).mAttribute_mValue.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 359))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 359)) ;
    enumerator_15015.gotoNextObject () ;
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
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mIFexpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 373)) ;
  GALGAS_string var_testVar = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 374)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 374)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 375)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 375)).add_operation (var_cppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 375)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 375))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 375)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 377)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 377))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 377)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_m_5F_then_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 378)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_m_5F_else_5F_instructionList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 386)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 387)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 387))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 387)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_m_5F_else_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 388)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 397)) ;
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
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 410)) ;
  GALGAS_string var_messageCppVarName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mErrorExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 413)) ;
  const enumGalgasBool test_0 = object->mAttribute_mUseLocationReader.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_locationVar = GALGAS_string ("location_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 416)) ;
    ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 416)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_location ").add_operation (var_locationVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 417)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 417)).add_operation (var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 417)).add_operation (GALGAS_string (".reader_location (HERE)) ; // Implicit use of 'location' reader\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 417))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 417)) ;
    var_receiverCppVarName = var_locationVar ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 421)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 421)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 422)).add_operation (GALGAS_string ("->emitSemanticError ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 422)).add_operation (var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 422)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 422)).add_operation (var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 422)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 422)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 423)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 423))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 422)) ;
  cEnumerator_stringlist enumerator_17982 (object->mAttribute_mBuiltVariableCppNameList, kEnumeration_up) ;
  while (enumerator_17982.hasCurrentObject ()) {
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (enumerator_17982.current_mValue (HERE) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 426)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_17982.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release error dropped variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 427))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 427)) ;
    enumerator_17982.gotoNextObject () ;
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
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 441)) ;
  GALGAS_string var_messageCppVarName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWarningExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 444)) ;
  const enumGalgasBool test_0 = object->mAttribute_mUseLocationReader.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_locationVar = GALGAS_string ("location_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 447)) ;
    ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 447)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_location ").add_operation (var_locationVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 448)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 448)).add_operation (var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 448)).add_operation (GALGAS_string (".reader_location (HERE)) ; // Implicit use of 'location' reader\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 448))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 448)) ;
    var_receiverCppVarName = var_locationVar ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 452)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 452)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 453)).add_operation (GALGAS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 453)).add_operation (var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 453)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 453)).add_operation (var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 453)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 453)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 454)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 454)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 454))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 453)) ;
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
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 470)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (var_receiverCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 471)) ;
  }
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 473)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 474)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 475)) ;
  cEnumerator_actualParameterListForGeneration enumerator_20425 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_20425.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_20425.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 478)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 479)) ;
    enumerator_20425.gotoNextObject () ;
  }
  if (object->mAttribute_mKind.isValid ()) {
    switch (object->mAttribute_mKind.enumValue ()) {
    case GALGAS_methodKind::kNotBuilt:
      break ;
    case GALGAS_methodKind::kEnum_definedAsCategory: {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mMethodBaseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 484)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 484)).add_operation (object->mAttribute_mMethodName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 484))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 484)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 485)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 485)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("callCategoryMethod_").add_operation (object->mAttribute_mMethodName.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 486)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 486)).add_operation (object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 487)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 487)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 487)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 487)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 487))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 486)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("categoryMethod_").add_operation (object->mAttribute_mMethodName.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 489)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 489)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 489)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 489))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 489)) ;
      }
      } break ;
    case GALGAS_methodKind::kEnum_definedAsMember: {
      ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 492)).add_operation (object->mAttribute_mMethodName.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 492)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 492))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 492)) ;
      } break ;
    }
  }
  cEnumerator_stringlist enumerator_21462 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_21462.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_21462.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 495)) ;
    if (enumerator_21462.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 496)) ;
    }
    enumerator_21462.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_parameterCppNameList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 498)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 500)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 500)) ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 501))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 501)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 502)) ;
    }
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 505)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 505)) ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 506)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 506))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 506)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 507)) ;
    }else if (kBoolFalse == test_3) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 509)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 511)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 511))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 511)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 522))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 522)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 523)) ;
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 525)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 526)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 527)) ;
  cEnumerator_actualParameterListForGeneration enumerator_22697 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_22697.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_22697.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 530)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 531)) ;
    enumerator_22697.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("routine_").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 534)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 534)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 534))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 534)) ;
  cEnumerator_stringlist enumerator_23138 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_23138.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_23138.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 536))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 536)) ;
    enumerator_23138.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 538)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 538)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 539)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 539)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mRoutineName.reader_location (SOURCE_FILE ("semanticInstructionGeneration.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 539)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 539)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 539))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 539)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 540)) ;
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
//               Overriding category method '@modifierCallInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_modifierCallInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_modifierCallInstructionForGeneration * object = (const cPtr_modifierCallInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_modifierCallInstructionForGeneration) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 551)) ;
  GALGAS_string var_receiverCppName = object->mAttribute_mReceiverCppName ;
  cEnumerator_lstringlist enumerator_23841 (object->mAttribute_mReceiverStructAttributes, kEnumeration_up) ;
  while (enumerator_23841.hasCurrentObject ()) {
    var_receiverCppName.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_23841.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 554)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 554))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 554)) ;
    enumerator_23841.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mReceiverBaseName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 556)) ;
  }
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 558)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 559)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 560)) ;
  cEnumerator_actualParameterListForGeneration enumerator_24206 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_24206.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_24206.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 563)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 572)) ;
    enumerator_24206.gotoNextObject () ;
  }
  if (object->mAttribute_mKind.isValid ()) {
    switch (object->mAttribute_mKind.enumValue ()) {
    case GALGAS_methodKind::kNotBuilt:
      break ;
    case GALGAS_methodKind::kEnum_definedAsCategory: {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mMethodBaseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 577)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 577)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 577)).add_operation (object->mAttribute_mModifierName.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 577)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 577))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 577)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 578)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 578)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mReceiverType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 579)).reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 579)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (object->mAttribute_mReceiverType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 579)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 579)).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (".insulate (HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 580))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 580)) ;
        }
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("callCategoryModifier_").add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 582)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 582)).add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 583)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 583)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 583)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 583))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 582)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("categoryModifier_").add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 585)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 585)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 585)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 585))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 585)) ;
      }
      } break ;
    case GALGAS_methodKind::kEnum_definedAsMember: {
      categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 588)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (".modifier_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 589)).add_operation (object->mAttribute_mModifierName.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 589)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 589)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 589))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 589)) ;
      } break ;
    }
  }
  cEnumerator_stringlist enumerator_25517 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_25517.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_25517.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 592)) ;
    if (enumerator_25517.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 593)) ;
    }
    enumerator_25517.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 596)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 597)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 599)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 599)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 600))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 600)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 601)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 602)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 603)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mModifierName.reader_location (SOURCE_FILE ("semanticInstructionGeneration.galgas", 605)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 605)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 605))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 605)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 606)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_modifierCallInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_modifierCallInstructionForGeneration.mSlotID,
                                           categoryMethod_modifierCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_modifierCallInstructionForGeneration_generateInstruction (defineCategoryMethod_modifierCallInstructionForGeneration_generateInstruction, NULL) ;

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
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 617)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mSelfCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 618)) ;
  }
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 620)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 621)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 622)) ;
  cEnumerator_actualParameterListForGeneration enumerator_26687 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_26687.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_26687.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 624)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 632)) ;
    enumerator_26687.gotoNextObject () ;
  }
  if (object->mAttribute_mKind.isValid ()) {
    switch (object->mAttribute_mKind.enumValue ()) {
    case GALGAS_methodKind::kNotBuilt:
      break ;
    case GALGAS_methodKind::kEnum_definedAsCategory: {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 637)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 637)).add_operation (object->mAttribute_mModifierName.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 637))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 637)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 638)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 638)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("callCategoryModifier_").add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 639)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 639)).add_operation (object->mAttribute_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 639)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 639))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 639)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("categoryModifier_").add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 641)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 641)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 641)).add_operation (object->mAttribute_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 641)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 641))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 641)) ;
      }
      } break ;
    case GALGAS_methodKind::kEnum_definedAsMember: {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 644)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 644)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioGeneratedCode.dotAssign_operation (object->mAttribute_mSelfCppName.add_operation (GALGAS_string ("->modifier_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 645)).add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 645)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 645))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 645)) ;
      }else if (kBoolFalse == test_1) {
        ioArgument_ioGeneratedCode.dotAssign_operation (object->mAttribute_mSelfCppName.add_operation (GALGAS_string (".modifier_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 647)).add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 647)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 647)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 647))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 647)) ;
      }
      } break ;
    }
  }
  cEnumerator_stringlist enumerator_27833 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_27833.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_27833.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 651)) ;
    if (enumerator_27833.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 652)) ;
    }
    enumerator_27833.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 655)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 656)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 658)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 658)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 659))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 659)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 660)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 661)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 662)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mModifierName.reader_location (SOURCE_FILE ("semanticInstructionGeneration.galgas", 664)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 664)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 664))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 664)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 665)) ;
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
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 676)) ;
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 678)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 679)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 680)) ;
  cEnumerator_actualParameterListForGeneration enumerator_28940 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_28940.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_28940.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 682)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 690)) ;
    enumerator_28940.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 693)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 693)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 693)).add_operation (GALGAS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 693)).add_operation (object->mAttribute_mMethodName.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 694)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 694)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 694)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 694))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 693)) ;
  cEnumerator_stringlist enumerator_29490 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_29490.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_29490.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 696)) ;
    if (enumerator_29490.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 697)) ;
    }
    enumerator_29490.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 700)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 700)) ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_parameterCppNameList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 701)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 702)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 704))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 704)) ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mHasCompilerArgument.operator_or (GALGAS_bool (kIsStrictSup, var_parameterCppNameList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 706)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 706)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 707)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mMethodName.reader_location (SOURCE_FILE ("semanticInstructionGeneration.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 709)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 709))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 709)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 710)) ;
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
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_castCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 724)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_castCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 732)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 732))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 732)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 733)) ;
  }
  cEnumerator_castInstructionBranchListForGeneration enumerator_30770 (object->mAttribute_mCastBranchList, kEnumeration_up) ;
  while (enumerator_30770.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_30770.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 735)) ;
    if (enumerator_30770.current_mTypeComparisonKind (HERE).isValid ()) {
      switch (enumerator_30770.current_mTypeComparisonKind (HERE).enumValue ()) {
      case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
        break ;
      case GALGAS_dynamicTypeComparisonKind::kEnum_equal: {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_castCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 738)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 738)).add_operation (enumerator_30770.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 740)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 739)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 740))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 738)) ;
        } break ;
      case GALGAS_dynamicTypeComparisonKind::kEnum_inherited: {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (NULL != dynamic_cast <const cPtr_").add_operation (enumerator_30770.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 743)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 742)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 743)).add_operation (var_castCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 744)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 744))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 742)) ;
        } break ;
      case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited: {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if ((").add_operation (var_castCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 746)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 746)).add_operation (enumerator_30770.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 748)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 747)).add_operation (GALGAS_string (") && (NULL != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 748)).add_operation (enumerator_30770.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 749)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 748)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 749)).add_operation (var_castCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 750)).add_operation (GALGAS_string (".ptr ()))) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 750))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 746)) ;
        } break ;
      }
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_30770.current_mCastedVarCppName (HERE).reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 752)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  GALGAS_").add_operation (enumerator_30770.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 754)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 754)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 754)).add_operation (enumerator_30770.current_mCastedVarCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 755)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 755)).add_operation (enumerator_30770.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 755)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 755)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 755)).add_operation (var_castCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 756)).add_operation (GALGAS_string (".ptr ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 756))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 753)) ;
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_30770.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 758)) ;
    }
    if (enumerator_30770.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 766)) ;
    }
    enumerator_30770.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseInstructionList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 769)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 770)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 771)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 781)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 782)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 783)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 795)) ;
  GALGAS_stringlist var_parameterList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 796)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_32992 (object->mAttribute_mExpressionList, kEnumeration_up) ;
  while (enumerator_32992.hasCurrentObject ()) {
    GALGAS_string var_parameter ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_32992.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 798)) ;
    var_parameterList.addAssign_operation (var_parameter  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 805)) ;
    enumerator_32992.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mNameForCheckingFormalParameterUsing COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 808)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (object->mAttribute_mReceiverCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 809)) ;
  cEnumerator_lstringlist enumerator_33388 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_33388.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_33388.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 811)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 811)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 811))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 811)) ;
    enumerator_33388.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (".addAssign_operation (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 814)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mReceiverCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 815)) ;
  }
  cEnumerator_stringlist enumerator_33649 (var_parameterList, kEnumeration_up) ;
  while (enumerator_33649.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_33649.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 817)) ;
    if (enumerator_33649.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 818)) ;
    }
    enumerator_33649.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTargetType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 820)).operator_and (function_plusEqualOperatorWithFieldListNeedsCompilerArg (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 820)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 820)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 821)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 821))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 821)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 822)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 822)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 824)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 824)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 824))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 824)) ;
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
//                 Overriding category method '@incrementInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incrementInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                  GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                  GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incrementInstructionForGeneration * object = (const cPtr_incrementInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_incrementInstructionForGeneration) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mReceiverCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 836)) ;
  }
  GALGAS_string var_receiverCppName = object->mAttribute_mReceiverCppName ;
  cEnumerator_lstringlist enumerator_34546 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_34546.hasCurrentObject ()) {
    var_receiverCppName.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_34546.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 839)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 839)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 839))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 839)) ;
    enumerator_34546.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 842)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 842)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 842)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 842)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 843)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 843)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 843))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 842)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 844)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 844)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incrementInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_incrementInstructionForGeneration.mSlotID,
                                           categoryMethod_incrementInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incrementInstructionForGeneration_generateInstruction (defineCategoryMethod_incrementInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@decrementInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_decrementInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                  GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                  GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_decrementInstructionForGeneration * object = (const cPtr_decrementInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_decrementInstructionForGeneration) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mReceiverCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 856)) ;
  }
  GALGAS_string var_receiverCppName = object->mAttribute_mReceiverCppName ;
  cEnumerator_lstringlist enumerator_35408 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_35408.hasCurrentObject ()) {
    var_receiverCppName.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_35408.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 859)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 859)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 859))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 859)) ;
    enumerator_35408.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (".decrement_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 862)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 862)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 862)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 862)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 863)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 863)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 863))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 862)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 864)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 864)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_decrementInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_decrementInstructionForGeneration.mSlotID,
                                           categoryMethod_decrementInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_decrementInstructionForGeneration_generateInstruction (defineCategoryMethod_decrementInstructionForGeneration_generateInstruction, NULL) ;

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
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 876)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 878)).add_operation (GALGAS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 878)).add_operation (var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 878))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 878)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 879)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 879)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 879))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 879)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 880)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 880)) ;
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
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mVariantExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 893)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_variantCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 894)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 894))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 894)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 895)) ;
  }
  GALGAS_string var_variantVar = GALGAS_string ("variant_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 896)).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 896)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 896)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("uint32_t ").add_operation (var_variantVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 897)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 897)).add_operation (var_variantCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 897)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 897))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 897)) ;
  GALGAS_string var_loopVar = GALGAS_string ("loop_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 898)).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 898)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 898)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("bool ").add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 899)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 899)).add_operation (GALGAS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 899)).add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 900)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 900))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 899)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 901)) ;
  }
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mFirstInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 902)) ;
  }
  GALGAS_string var_loopExpressionVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLoopExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 911)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (var_loopVar.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 912)).add_operation (var_loopExpressionVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 912)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 912)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 912)).add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 913)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 913)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 913)).add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 914)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 914)).add_operation (var_loopExpressionVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 914)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 914)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 914))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 912)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 916)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 916)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 917)).add_operation (GALGAS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 917)).add_operation (var_variantVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 917)).add_operation (GALGAS_string (")) {\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 917)).add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 918)).add_operation (GALGAS_string (" = false ;\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 918)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 919)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 919)).add_operation (GALGAS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 919)).add_operation (categoryReader_sourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 919)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 919)).add_operation (GALGAS_string (") ;\n"
    "}\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 919)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 920)).add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 921)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 921))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 917)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (var_variantVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 922)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 922))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 922)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mSecondInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 923)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 931)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 932)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 933)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 934)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 935)) ;
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
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 949)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType = object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 950)) ;
  GALGAS_string var_keyVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 952)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const cMapElement_").add_operation (var_receiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 954)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 954)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 954)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 955)).add_operation (GALGAS_string (" = (const cMapElement_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 955)).add_operation (var_receiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 955)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 955)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 955)).add_operation (var_receiverVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 956)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 956))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 954)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("readAccessForWithInstruction (").add_operation (var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 958)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 958))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 958)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("performSearch (").add_operation (var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 960)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 960)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 961)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 961)).add_operation (GALGAS_string (", kSearchErrorMessage_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 961)).add_operation (var_receiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 962)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 962)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 962)).add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 962)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 962)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 963)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 963)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 963))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 960)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 964)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 964)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (NULL != ").add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 966)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 966)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 966)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 967)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 967)).add_operation (var_receiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 967)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 967)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 967))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 966)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mDoBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 968)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseBranchInstructions.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 976)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 977)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 978)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 987)) ;
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
  cEnumerator_lstringlist enumerator_41899 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_41899.hasCurrentObject ()) {
    var_receiverCppName.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_41899.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1000)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1000)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1000))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1000)) ;
    enumerator_41899.gotoNextObject () ;
  }
  GALGAS_string var_keyVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1003)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1005)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1005)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mReceiverVariableCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1006)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("cMapElement_").add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1007)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1007)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1007)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1008)).add_operation (GALGAS_string (" = (cMapElement_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1008)).add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1008)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1008)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1008)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1009)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1009))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1007)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("readWriteAccessForWithInstruction (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1011)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1011)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1011)).add_operation (var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1011))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1011)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("readWriteAccessForWithInstructionWithErrorMessage (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1013)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1013)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1013)).add_operation (var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1013))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1013)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", kSearchErrorMessage_").add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1014)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1014)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1014)).add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1014))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1014)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1016)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1016)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1016)).add_operation (GALGAS_string ("if (NULL != "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1016)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1017)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1017)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1017)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1018)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1018)).add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1018)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1018)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1018))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1016)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mDoBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1019)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseBranchInstructions.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1027)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1028)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1029)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1038)) ;
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
  GALGAS_stringlist var_enumerationVarCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1051)) ;
  cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_44345 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
  while (enumerator_44345.hasCurrentObject ()) {
    GALGAS_string var_enumerationVar ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_44345.current_mEnumeratedExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_enumerationVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1054)) ;
    var_enumerationVarCppNameList.addAssign_operation (var_enumerationVar  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1055)) ;
    enumerator_44345.gotoNextObject () ;
  }
  cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_44619 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
  cEnumerator_stringlist enumerator_44653 (var_enumerationVarCppNameList, kEnumeration_up) ;
  while (enumerator_44619.hasCurrentObject () && enumerator_44653.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("cEnumerator_").add_operation (enumerator_44619.current_mEnumeratedExpression (HERE).reader_mResultType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1058)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1058)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1058)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1058)).add_operation (enumerator_44619.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1058)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1058)).add_operation (enumerator_44653.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1058)).add_operation (GALGAS_string (", kEnumeration_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1058)).add_operation (enumerator_44619.current_mEnumerationOrder (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1059)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1059))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1058)) ;
    enumerator_44619.gotoNextObject () ;
    enumerator_44653.gotoNextObject () ;
  }
  GALGAS_bool var_whileExpressionIsAllwaysTrue = callCategoryReader_isTrueExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhileExpression.ptr (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1062)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBeforeInstructionList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1064)).add_operation (object->mAttribute_mAfterInstructionList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1064)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1064)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_or (var_whileExpressionIsAllwaysTrue.operator_not (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1064)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1064)).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexVariableCppName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_uint ").add_operation (object->mAttribute_mIndexVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1067)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1067))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1067)) ;
    }
    GALGAS_string var_boolVarCppName = GALGAS_string ("bool_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1069)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1069)) ;
    ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1069)) ;
    const enumGalgasBool test_2 = var_whileExpressionIsAllwaysTrue.boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const bool ").add_operation (var_boolVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1071)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1071))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1071)) ;
    }else if (kBoolFalse == test_2) {
      GALGAS_string var_whileVar ;
      callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1074)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("bool ").add_operation (var_boolVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1075)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1075)).add_operation (var_whileVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1075)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1075))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1075)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1077)) ;
    cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_45904 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
    while (enumerator_45904.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_45904.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1079))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1079)) ;
      enumerator_45904.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (var_boolVarCppName.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1081))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1081)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mBeforeInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1082)) ;
    }
    {
    ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1090)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("while (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1091)) ;
    cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_46378 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
    while (enumerator_46378.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_46378.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1093))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1093)) ;
      enumerator_46378.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (var_boolVarCppName.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1095))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1095)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mDoInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1097)) ;
    }
    cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_46830 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
    while (enumerator_46830.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (enumerator_46830.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1107)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1107))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1107)) ;
      enumerator_46830.gotoNextObject () ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexVariableCppName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (object->mAttribute_mIndexVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1110)).add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1110))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1110)) ;
    }
    const enumGalgasBool test_4 = var_whileExpressionIsAllwaysTrue.operator_not (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1113)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  if (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1114)) ;
      cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_47195 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
      while (enumerator_47195.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_47195.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1116))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1116)) ;
        if (enumerator_47195.hasNextObject ()) {
          ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" && ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1117)) ;
        }
        enumerator_47195.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (") {\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1119)) ;
      GALGAS_string var_whileVar ;
      callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1121)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("    ").add_operation (var_boolVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1122)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1122)).add_operation (var_whileVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1122)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1122))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1122)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  }\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1123)) ;
    }
    const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBetweenInstructionList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1126)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1127)) ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1128)) ;
      cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_47857 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
      while (enumerator_47857.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_47857.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1130))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1130)) ;
        enumerator_47857.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (var_boolVarCppName.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1132))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1132)) ;
      {
      routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mBetweenInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1133)) ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1141)) ;
      {
      ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1142)) ;
      }
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1145)) ;
    {
    ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1147)) ;
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mAfterInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1148)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1156)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexVariableCppName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_uint ").add_operation (object->mAttribute_mIndexVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1159)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1159))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1159)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("while (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1161)) ;
    cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_49008 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
    while (enumerator_49008.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_49008.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1163))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1163)) ;
      if (enumerator_49008.hasNextObject ()) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" && ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1164)) ;
      }
      enumerator_49008.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (") {\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1166)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mDoInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1168)) ;
    }
    const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBetweenInstructionList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1177)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_7) {
      {
      ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1178)) ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1179)) ;
      cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_49620 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
      while (enumerator_49620.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_49620.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasNextObject ()"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1181))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1181)) ;
        if (enumerator_49620.hasNextObject ()) {
          ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" && ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1182)) ;
        }
        enumerator_49620.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (") {\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1184)) ;
      {
      routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mBetweenInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1185)) ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1193)) ;
      {
      ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1194)) ;
      }
    }
    cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_50177 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
    while (enumerator_50177.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (enumerator_50177.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1198)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1198))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1198)) ;
      enumerator_50177.gotoNextObject () ;
    }
    const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexVariableCppName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1201)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1201)) ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (object->mAttribute_mIndexVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1202)).add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1202)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1202)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1202)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1202)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1203)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1203)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1203))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1202)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1205)) ;
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
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLogExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_logVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1219)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (var_logVar.add_operation (GALGAS_string (".log ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1220)).add_operation (object->mAttribute_mLogMessage.mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1220)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1220)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1220)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLogMessage.reader_location (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1221)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1221)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1221)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1221))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1220)) ;
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
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSwitchExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1235)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_switchVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1236)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1236))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1236)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1237)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("switch (").add_operation (var_switchVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1238)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1238))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1238)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1239)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1239)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1239)).add_operation (GALGAS_string ("::kNotBuilt:\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1239))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1239)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  break ;\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1240)) ;
  cEnumerator_switchBranchesForGeneration enumerator_52246 (object->mAttribute_mBranches, kEnumeration_up) ;
  while (enumerator_52246.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_52284 (enumerator_52246.current_mSwitchConstantList (HERE), kEnumeration_up) ;
    while (enumerator_52284.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1243)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1243)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1243)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1243)).add_operation (enumerator_52284.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1243)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1243)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1243)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1243))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1243)) ;
      enumerator_52284.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1245)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_52246.current_mExtractedAssociatedValuesForGeneration (HERE).reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1246)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_type = GALGAS_string ("const cEnumAssociatedValues_").add_operation (object->mAttribute_mEnumType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1247)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1247)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1247)).add_operation (enumerator_52246.current_mSwitchConstantList (HERE).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1247)).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1247)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1247)) ;
      GALGAS_string var_varPtr = GALGAS_string ("extractPtr_").add_operation (enumerator_52246.current_mLocationIndex (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1248)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1248)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (var_type, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1249)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1249)).add_operation (var_varPtr, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1249)).add_operation (GALGAS_string (" = dynamic_cast<"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1249)).add_operation (var_type, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1249)).add_operation (GALGAS_string ("> ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1249)).add_operation (var_switchVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1249)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1249))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1249)) ;
      cEnumerator_extractedAssociatedValuesForGeneration enumerator_52935 (enumerator_52246.current_mExtractedAssociatedValuesForGeneration (HERE), kEnumeration_up) ;
      GALGAS_uint index_52889 ((uint32_t) 0) ;
      while (enumerator_52935.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  const GALGAS_").add_operation (enumerator_52935.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1251)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1251)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1251)).add_operation (enumerator_52935.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1251)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1251)).add_operation (var_varPtr, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1251)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1251)).add_operation (index_52889.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1251)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1251)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1251))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1251)) ;
        enumerator_52935.gotoNextObject () ;
        index_52889.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1250)) ;
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_52246.current_mInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1254)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  } break ;\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1262)) ;
    enumerator_52246.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1264)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1265)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1266)) ;
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
  GALGAS_stringlist var_receiverList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1279)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_53982 (object->mAttribute_mMatchedExpressionList, kEnumeration_up) ;
  while (enumerator_53982.hasCurrentObject ()) {
    GALGAS_string var_variable ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_53982.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variable, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1281)) ;
    var_receiverList.addAssign_operation (var_variable  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1282)) ;
    enumerator_53982.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1284)) ;
  cEnumerator_stringlist enumerator_54225 (var_receiverList, kEnumeration_up) ;
  while (enumerator_54225.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_54225.current_mValue (HERE).add_operation (GALGAS_string (".isValid ()"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1286))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1286)) ;
    if (enumerator_54225.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" && ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1287)) ;
    }
    enumerator_54225.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (") {\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1289)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1290)) ;
  }
  cEnumerator_matchInstructionBranchListForGeneration enumerator_54428 (object->mAttribute_mMatchInstructionBranchList, kEnumeration_up) ;
  while (enumerator_54428.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1292)) ;
    cEnumerator_matchListForGeneration enumerator_54500 (enumerator_54428.current_mMatchListForGeneration (HERE), kEnumeration_up) ;
    cEnumerator_stringlist enumerator_54521 (var_receiverList, kEnumeration_up) ;
    while (enumerator_54500.hasCurrentObject () && enumerator_54521.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_54500.current_mIsType (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("(NULL != dynamic_cast <const cPtr_").add_operation (enumerator_54500.current_mTypeNameOrEnumerationConstantName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1295)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1295)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1295)).add_operation (enumerator_54521.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1296)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1296))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1295)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("(").add_operation (enumerator_54521.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1298)).add_operation (GALGAS_string (".enumValue () == GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1298)).add_operation (enumerator_54500.current_mLocalConstantName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1299)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1298)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1299)).add_operation (enumerator_54500.current_mTypeNameOrEnumerationConstantName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1300)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1300)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1300))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1298)) ;
      }
      if (enumerator_54500.hasNextObject () && enumerator_54521.hasNextObject ()) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" && ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1302)) ;
      }
      enumerator_54500.gotoNextObject () ;
      enumerator_54521.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (") {\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1304)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_54428.current_mMatchBranchInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1305)) ;
    }
    if (enumerator_54428.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1313)) ;
    }
    enumerator_54428.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1315)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1316)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1324)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1325)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1326)) ;
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
  cEnumerator_lstringlist enumerator_1714 (object->mAttribute_mSyntaxComponents, kEnumeration_up) ;
  while (enumerator_1714.hasCurrentObject ()) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("syntax-").add_operation (enumerator_1714.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 30)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 30))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 30)) ;
    enumerator_1714.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (inCompiler, object->mAttribute_mLexiqueName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 33)), object->mAttribute_mNonTerminalMapForGrammarAnalysis, object->mAttribute_mNonTerminalToAddList, object->mAttribute_mHasIndexing, object->mAttribute_mStartSymbolName, object->mAttribute_mHasTranslateFeature, object->mAttribute_mGrammarName, object->mAttribute_mSyntaxComponents COMMA_SOURCE_FILE ("semanticGeneration.galgas", 32))) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 50))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 50)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_2405 (object->mAttribute_mNonTerminalMapForGrammarAnalysis, kEnumeration_up) ;
  while (enumerator_2405.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_2454 (enumerator_2405.current_mNonterminalSymbolParametersMap (HERE), kEnumeration_up) ;
    while (enumerator_2454.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_2495 (enumerator_2454.current_mFormalParametersList (HERE), kEnumeration_up) ;
      while (enumerator_2495.hasCurrentObject ()) {
        if (enumerator_2495.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).isValid ()) {
          switch (enumerator_2495.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
          case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn: case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn: {
            GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inUnifiedTypeMap, enumerator_2495.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 56)) ;
            categoryMethod_addHeaderFileName (var_t, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 57)) ;
            } break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut: case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut: {
            } break ;
          }
        }
        enumerator_2495.gotoNextObject () ;
      }
      enumerator_2454.gotoNextObject () ;
    }
    enumerator_2405.gotoNextObject () ;
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
//                       Overriding category method '@grammarForGeneration appendSpecificFiles'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarForGeneration_appendSpecificFiles (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                     const GALGAS_string constinArgument_inProductDirectory,
                                                                     GALGAS_stringset & /* ioArgument_ioAllProductFileSet */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  GALGAS_string var_HTMLFilePath = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 71)).add_operation (object->mAttribute_mGrammarName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 71)).add_operation (GALGAS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 71)) ;
  const enumGalgasBool test_0 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_bool joker_3322 ; // Joker input parameter
    object->mAttribute_mHTLMHelperContents.method_writeToFileWhenDifferentContents (var_HTMLFilePath, joker_3322, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 73)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_HTMLFilePath, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 75)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarForGeneration_appendSpecificFiles (void) {
  enterCategoryMethod_appendSpecificFiles (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                           categoryMethod_grammarForGeneration_appendSpecificFiles) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarForGeneration_appendSpecificFiles (defineCategoryMethod_grammarForGeneration_appendSpecificFiles, NULL) ;

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
  result_outName = GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 82)) ;
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
  result_outHeaderKind = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 94)) ;
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
  result_outName = GALGAS_string ("syntax-").add_operation (object->mAttribute_mSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 108)) ;
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
  result_outHeaderKind = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 120)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 134))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 134)) ;
  GALGAS_uintlist var_selectMethodList = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 135)) ;
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mSelectMethodCount.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 137)).isValid ()) {
    uint32_t variant_5369 = object->mAttribute_mSelectMethodCount.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 137)).uintValue () ;
    bool loop_5369 = true ;
    while (loop_5369) {
      loop_5369 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mSelectMethodCount)).isValid () ;
      if (loop_5369) {
        loop_5369 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mSelectMethodCount)).boolValue () ;
      }
      if (loop_5369 && (0 == variant_5369)) {
        loop_5369 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 137)) ;
      }
      if (loop_5369) {
        variant_5369 -- ;
        var_selectMethodList.addAssign_operation (var_idx  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 139)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 140)) ;
      }
    }
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (inCompiler, object->mAttribute_mSyntaxComponentName, object->mAttribute_mLexiqueName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 144)), object->mAttribute_mNonterminalDeclarationMap, object->mAttribute_mRuleDeclarationList, var_selectMethodList, object->mAttribute_mHasIndexing, object->mAttribute_mHasTranslateFeature COMMA_SOURCE_FILE ("semanticGeneration.galgas", 142))) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("syntax-").add_operation (object->mAttribute_mSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 159))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 159)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (inCompiler, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 161)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 160))) ;
  GALGAS_string var_lexiqueCppName = GALGAS_string ("C_Lexique_").add_operation (object->mAttribute_mLexiqueName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 164)) ;
  cEnumerator_ruleDeclarationList enumerator_6302 (object->mAttribute_mRuleDeclarationList, kEnumeration_up) ;
  while (enumerator_6302.hasCurrentObject ()) {
    cEnumerator_ruleLabelImplementationList enumerator_6387 (enumerator_6302.current_mLabelImplementationList (HERE), kEnumeration_up) ;
    while (enumerator_6387.hasCurrentObject ()) {
      GALGAS_string var_ruleName = GALGAS_string ("cParser_").add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 168)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 168)).add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 169)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 169)).add_operation (enumerator_6302.current_mNonterminalName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 169)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 170)).add_operation (enumerator_6302.current_mRuleIndex (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 171)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 171)).add_operation (enumerator_6387.current_mLabelName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 171)) ;
      outArgument_outImplementation.dotAssign_operation (GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 172)) ;
      GALGAS_string var_code ;
      {
      routine_generateProcedure (GALGAS_bool (false), var_ruleName, ioArgument_ioInclusionSet, enumerator_6387.current_mSignatureForGeneration (HERE), enumerator_6387.current_mInstructionListForGeneration (HERE), GALGAS_bool (false), var_lexiqueCppName, GALGAS_bool (false), GALGAS_bool (false), object->mAttribute_mHasTranslateFeature, var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 173)) ;
      }
      outArgument_outImplementation.dotAssign_operation (var_code  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 186)) ;
      enumerator_6387.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    GALGAS_lstring joker_7385 ; // Joker input parameter
    GALGAS_formalParameterListForGeneration joker_7388 ; // Joker input parameter
    GALGAS_formalParameterSignature joker_7391 ; // Joker input parameter
    GALGAS_location joker_7394 ; // Joker input parameter
    enumerator_6302.current_mLabelImplementationList (HERE).method_first (joker_7385, joker_7388, joker_7391, joker_7394, var_instructionList, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 190)) ;
    GALGAS_string var_ruleName = GALGAS_string ("cParser_").add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 191)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 191)).add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 192)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 192)).add_operation (enumerator_6302.current_mNonterminalName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 192)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 193)).add_operation (enumerator_6302.current_mRuleIndex (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 194)).add_operation (GALGAS_string ("_parse"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 194)) ;
    outArgument_outImplementation.dotAssign_operation (GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
      "\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 195)) ;
    GALGAS_string var_code ;
    {
    routine_generateProcedure (GALGAS_bool (false), var_ruleName, ioArgument_ioInclusionSet, GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 200)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_instructionList, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 201)), GALGAS_bool (false), var_lexiqueCppName, GALGAS_bool (false), GALGAS_bool (true), object->mAttribute_mHasTranslateFeature, var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 196)) ;
    }
    outArgument_outImplementation.dotAssign_operation (var_code  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 209)) ;
    const enumGalgasBool test_0 = object->mAttribute_mHasIndexing.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_semanticInstructionListForGeneration var_instructionList ;
      GALGAS_lstring joker_8394 ; // Joker input parameter
      GALGAS_formalParameterListForGeneration joker_8397 ; // Joker input parameter
      GALGAS_formalParameterSignature joker_8400 ; // Joker input parameter
      GALGAS_location joker_8403 ; // Joker input parameter
      enumerator_6302.current_mLabelImplementationList (HERE).method_first (joker_8394, joker_8397, joker_8400, joker_8403, var_instructionList, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 213)) ;
      GALGAS_string var_ruleName = GALGAS_string ("cParser_").add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 214)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 214)).add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 215)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 215)).add_operation (enumerator_6302.current_mNonterminalName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 216)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 215)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 216)).add_operation (enumerator_6302.current_mRuleIndex (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 217)).add_operation (GALGAS_string ("_indexing"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 217)) ;
      outArgument_outImplementation.dotAssign_operation (GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 218)) ;
      GALGAS_string var_code ;
      {
      routine_generateProcedure (GALGAS_bool (false), var_ruleName, ioArgument_ioInclusionSet, GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 223)), function_syntaxSignatureOfInstructionList (GALGAS_string ("indexing"), var_instructionList, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 224)), GALGAS_bool (false), var_lexiqueCppName, GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 219)) ;
      }
      outArgument_outImplementation.dotAssign_operation (var_code  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 232)) ;
    }
    enumerator_6302.gotoNextObject () ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1193)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (inCompiler, object->mAttribute_mRoutineName, object->mAttribute_mFormalArgumentList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1201))) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1212)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, object->mAttribute_mFunctionName, object->mAttribute_mFormalArgumentList, object->mAttribute_mReturnType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1223)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1220))) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1230)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, object->mAttribute_mFunctionName, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1240)), object->mAttribute_mReturnType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1241)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1238))) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1253)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1254)), object->mAttribute_mCppPreDeclarationCode, object->mAttribute_mCppClassCode COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1252))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1259)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1260)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1261)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1262)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1263)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1264)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1265)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1266)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1267)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1268)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1269)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1271)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1258)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1258)) ;
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
  result_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1281)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1282)), object->mAttribute_mTypeProxy.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1283)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1284)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1280))) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1296)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1297)), object->mAttribute_mElementTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1298)), object->mAttribute_mDimension COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1295))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1302)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1303)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1304)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1305)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1306)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1307)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1308)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1309)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1310)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1311)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1312)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1314)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1301)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1301)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1324)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1325)) ;
  GALGAS_stringlist var_suffixList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1327)) ;
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mDimension.isValid ()) {
    uint32_t variant_50274 = object->mAttribute_mDimension.uintValue () ;
    bool loop_50274 = true ;
    while (loop_50274) {
      loop_50274 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension)).isValid () ;
      if (loop_50274) {
        loop_50274 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension)).boolValue () ;
      }
      if (loop_50274 && (0 == variant_50274)) {
        loop_50274 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 1329)) ;
      }
      if (loop_50274) {
        variant_50274 -- ;
        var_suffixList.addAssign_operation (var_idx.reader_string (SOURCE_FILE ("semanticGeneration.galgas", 1330))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1330)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1331)) ;
      }
    }
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1334)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1335)), object->mAttribute_mElementTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1336)), object->mAttribute_mDimension, var_suffixList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1333))) ;
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
  cEnumerator_typedAttributeList enumerator_50989 (object->mAttribute_mAssociatedListTypedAttributeList, kEnumeration_up) ;
  while (enumerator_50989.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName_31_ (enumerator_50989.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1351)) ;
    enumerator_50989.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1355)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1356)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1354))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1359)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1360)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1361)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1362)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1363)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1364)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1365)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1366)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1367)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1368)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1369)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1371)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1358)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1358)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1381)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mAssociatedListMapElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1382)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1384)), object->mAttribute_mAssociatedListTypeIndex.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1385)), object->mAttribute_mAssociatedListTypedAttributeList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1383))) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1403)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1404)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1402))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1409)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1411)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1412)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1414)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1415)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1416)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1417)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1418)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1421)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)) ;
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
  cEnumerator_typedAttributeList enumerator_53815 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_53815.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName_31_ (enumerator_53815.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1433)) ;
    enumerator_53815.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1437)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1438)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1436))) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1449)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1450)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1452)), object->mAttribute_mTypedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mRemoveMethodList, object->mAttribute_mHasInsertOrReplaceModifier COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1451))) ;
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
//                     Overriding category method '@uniqueMapTypeForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uniqueMapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uniqueMapTypeForGeneration * object = (const cPtr_uniqueMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_uniqueMapTypeForGeneration) ;
  cEnumerator_typedAttributeList enumerator_55053 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_55053.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName_31_ (enumerator_55053.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1471)) ;
    enumerator_55053.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_uniqueMapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1475)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1476)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1474))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1481)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1482)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1483)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1484)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1485)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1486)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1487)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1488)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1489)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1490)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1491)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1493)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1480)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1480)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uniqueMapTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_uniqueMapTypeForGeneration.mSlotID,
                                             categoryMethod_uniqueMapTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uniqueMapTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_uniqueMapTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@uniqueMapTypeForGeneration appendDeclaration2'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uniqueMapTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             const GALGAS_bool /* constinArgument_inGenerateForGalgas_33_ */,
                                                                             const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uniqueMapTypeForGeneration * object = (const cPtr_uniqueMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_uniqueMapTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_uniqueMapTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1505)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1506)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1504))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uniqueMapTypeForGeneration_appendDeclaration_32_ (void) {
  enterCategoryMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_uniqueMapTypeForGeneration.mSlotID,
                                             categoryMethod_uniqueMapTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uniqueMapTypeForGeneration_appendDeclaration_32_ (defineCategoryMethod_uniqueMapTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@uniqueMapTypeForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uniqueMapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                    const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uniqueMapTypeForGeneration * object = (const cPtr_uniqueMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_uniqueMapTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1517)) ;
  GALGAS_keySortedList var_keySortedList = GALGAS_keySortedList::constructor_emptySortedList (SOURCE_FILE ("semanticGeneration.galgas", 1518)) ;
  cEnumerator_mapAutomatonStateMap enumerator_56689 (object->mAttribute_mMapAutomatonStateMap, kEnumeration_up) ;
  while (enumerator_56689.hasCurrentObject ()) {
    var_keySortedList.addAssign_operation (enumerator_56689.current_lkey (HERE).mAttribute_string, enumerator_56689.current_mStateIndex (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1520)) ;
    enumerator_56689.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_uniqueMapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1523)), object->mAttribute_mTypedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mMapAutomatonStateMap, object->mAttribute_mMapAutomatonActionMap, object->mAttribute_mMapStateSortedList, object->mAttribute_mMapOverrideList, var_keySortedList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1522))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uniqueMapTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_uniqueMapTypeForGeneration.mSlotID,
                                                    categoryMethod_uniqueMapTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uniqueMapTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_uniqueMapTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@sortedListTypeForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sortedListTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListTypeForGeneration * object = (const cPtr_sortedListTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1544)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1545)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1543))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1549)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1550)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1551)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1552)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1553)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1554)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1555)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1556)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1557)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1558)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1559)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1561)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1548)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1548)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sortedListTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_sortedListTypeForGeneration.mSlotID,
                                             categoryMethod_sortedListTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_sortedListTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@sortedListTypeForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sortedListTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                     const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListTypeForGeneration * object = (const cPtr_sortedListTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListTypeForGeneration) ;
  cEnumerator_typedAttributeList enumerator_58408 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_58408.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_58408.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1572)) ;
    enumerator_58408.gotoNextObject () ;
  }
  categoryMethod_addHeaderFileName (object->mAttribute_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1574)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1575)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1577)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSortDescriptorList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1576))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sortedListTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_sortedListTypeForGeneration.mSlotID,
                                                    categoryMethod_sortedListTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_sortedListTypeForGeneration_appendSpecificImplementation, NULL) ;

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
  cEnumerator_enumConstantListForGeneration enumerator_59112 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1591)).isValidAndTrue () ;
  if (enumerator_59112.hasCurrentObject () && bool_0) {
    while (enumerator_59112.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues = GALGAS_bool (kIsStrictSup, enumerator_59112.current_mAssociatedValueTypeList (HERE).reader_length (SOURCE_FILE ("semanticGeneration.galgas", 1592)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_59112.gotoNextObject () ;
      if (enumerator_59112.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1591)).isValidAndTrue () ;
      }
    }
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_enumTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1595)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1596)), object->mAttribute_mConstantList, var_hasAssociatedValues COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1594))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1601)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1602)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1603)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1604)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1605)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1606)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1607)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1608)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1609)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1610)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1611)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1612)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1600)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1600)) ;
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
  cEnumerator_enumConstantListForGeneration enumerator_60241 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1624)).isValidAndTrue () ;
  if (enumerator_60241.hasCurrentObject () && bool_0) {
    while (enumerator_60241.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues = GALGAS_bool (kIsStrictSup, enumerator_60241.current_mAssociatedValueTypeList (HERE).reader_length (SOURCE_FILE ("semanticGeneration.galgas", 1625)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_60241.gotoNextObject () ;
      if (enumerator_60241.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1624)).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_enumConstantListForGeneration enumerator_60370 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_60370.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapProxyList enumerator_60412 (enumerator_60370.current_mAssociatedValueTypeList (HERE), kEnumeration_up) ;
    while (enumerator_60412.hasCurrentObject ()) {
      categoryMethod_addHeaderFileName (enumerator_60412.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1629)) ;
      enumerator_60412.gotoNextObject () ;
    }
    enumerator_60370.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_enumTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1633)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1634)), object->mAttribute_mConstantList, var_hasAssociatedValues COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1632))) ;
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
  cEnumerator_enumConstantListForGeneration enumerator_60971 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1647)).isValidAndTrue () ;
  if (enumerator_60971.hasCurrentObject () && bool_0) {
    while (enumerator_60971.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues = GALGAS_bool (kIsStrictSup, enumerator_60971.current_mAssociatedValueTypeList (HERE).reader_length (SOURCE_FILE ("semanticGeneration.galgas", 1648)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_60971.gotoNextObject () ;
      if (enumerator_60971.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1647)).isValidAndTrue () ;
      }
    }
  }
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1650)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_enumTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1652)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1653)), object->mAttribute_mConstantList, var_hasAssociatedValues COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1651))) ;
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
//                     Overriding category method '@mapProxyTypeForGeneration appendDeclaration1'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyTypeForGeneration * object = (const cPtr_mapProxyTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapProxyTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1671)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1672)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1670))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1675)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1676)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1677)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1678)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1679)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1680)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1681)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1682)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1683)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1684)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1685)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1686)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1674)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1674)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_mapProxyTypeForGeneration.mSlotID,
                                             categoryMethod_mapProxyTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_mapProxyTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@mapProxyTypeForGeneration appendSpecificImplementation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapProxyTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                   const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyTypeForGeneration * object = (const cPtr_mapProxyTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1696)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mAssociatedMapTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1697)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapProxyTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1699)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1700)), object->mAttribute_mAssociatedMapTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1701)), object->mAttribute_mAssociatedMapTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1698))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapProxyTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_mapProxyTypeForGeneration.mSlotID,
                                                    categoryMethod_mapProxyTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_mapProxyTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@structTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structTypeForGeneration * object = (const cPtr_structTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structTypeForGeneration) ;
  cEnumerator_typedAttributeList enumerator_63362 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_63362.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName_31_ (enumerator_63362.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1715)) ;
    enumerator_63362.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_structTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1719)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1720)), object->mAttribute_mTypedAttributeList, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1722)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1718))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1725)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1726)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1727)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1728)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1729)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1730)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1731)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1732)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1733)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1734)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1735)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1737)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1724)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1724)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_structTypeForGeneration.mSlotID,
                                             categoryMethod_structTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_structTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@structTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structTypeForGeneration * object = (const cPtr_structTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1747)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_structTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1749)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1750)), object->mAttribute_mTypedAttributeList, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1752)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1748))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_structTypeForGeneration.mSlotID,
                                                    categoryMethod_structTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_structTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@listTypeForGeneration appendDeclaration1'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1764)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1765)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1763))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1769)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1770)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1771)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1772)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1773)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1774)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1775)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1776)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1777)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1778)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1779)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1781)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1768)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1768)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                             categoryMethod_listTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_listTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@listTypeForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  cEnumerator_typedAttributeList enumerator_65990 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_65990.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_65990.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1792)) ;
    enumerator_65990.gotoNextObject () ;
  }
  categoryMethod_addHeaderFileName (object->mAttribute_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1794)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1795)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1797)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1798)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1796))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                                    categoryMethod_listTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_listTypeForGeneration_appendSpecificImplementation, NULL) ;

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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1811)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1812)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1810))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1815)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1816)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1817)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1818)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1819)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1820)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1821)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1822)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1823)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1824)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1825)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1827)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1814)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1814)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1837)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mAssociatedListTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1838)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mAssociatedListElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1839)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1842)), object->mAttribute_mAssociatedListTypeProxy, object->mAttribute_mInsertModifierList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1840))) ;
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
  const enumGalgasBool test_0 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1855)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1855)).boolEnum () ;
  if (kBoolTrue == test_0) {
    categoryMethod_addHeaderFileName (object->mAttribute_mSuperClass, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1856)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1862)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1862)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1860)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1861)), temp_1, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1865)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1859))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1868)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1869)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1870)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1871)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1872)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1873)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1874)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1875)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1876)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1877)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1878)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1879)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1867)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1867)) ;
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
  cEnumerator_typedAttributeList enumerator_69467 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_69467.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_69467.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1891)) ;
    enumerator_69467.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = object->mAttribute_mGenerateHeaderInSeparateFile.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1898)).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_2) {
      temp_1 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1898)) ;
    }
    GALGAS_string var_part_31_ = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1896)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1897)), temp_1, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1895))) ;
    GALGAS_string temp_3 ;
    const enumGalgasBool test_4 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1906)).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_4) {
      temp_3 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1906)) ;
    }
    GALGAS_string var_part_32_ = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1904)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1905)), temp_3, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1903))) ;
    GALGAS_string var_headerFileName = GALGAS_string ("separateHeaderFor_").add_operation (object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1911)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1911)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1911)) ;
    {
    GALGAS_string temp_5 ;
    const enumGalgasBool test_6 = constinArgument_inGenerateForGalgas_33_.boolEnum () ;
    if (kBoolTrue == test_6) {
      temp_5 = GALGAS_string ("/../user-headers") ;
    }else if (kBoolFalse == test_6) {
      temp_5 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1913)), var_headerFileName, GALGAS_string ("//"), GALGAS_string ("\n"
      "\n"), var_part_31_, GALGAS_string ("\n"
      "\n"), var_part_32_, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1912)) ;
    }
    outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1921)).add_operation (GALGAS_string ("\"\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1921)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string temp_7 ;
    const enumGalgasBool test_8 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1926)).boolEnum () ;
    if (kBoolTrue == test_8) {
      temp_7 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_8) {
      temp_7 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1926)) ;
    }
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1924)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1925)), temp_7, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1923))) ;
    GALGAS_string temp_9 ;
    const enumGalgasBool test_10 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1934)).boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_10) {
      temp_9 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1934)) ;
    }
    outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1932)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1933)), temp_9, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1931)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1931)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1948)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1952)).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1952)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1950)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1951)), temp_0, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mAllTypedAttributeList.reader_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint ((uint32_t) 0U), object->mAttribute_mAllTypedAttributeList.reader_length (SOURCE_FILE ("semanticGeneration.galgas", 1955)).substract_operation (object->mAttribute_mTypedAttributeList.reader_length (SOURCE_FILE ("semanticGeneration.galgas", 1955)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1955))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1955)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1955)), object->mAttribute_mIsAbstract, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1957)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1949))) ;
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
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1970))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1970)) ;
  }
  GALGAS_string var_code ;
  {
  routine_generateProcedure (object->mAttribute_mGenerateStatic, GALGAS_string ("routine_").add_operation (object->mAttribute_mRoutineName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1974)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1974)), ioArgument_ioInclusionSet, object->mAttribute_mFormalArgumentList, object->mAttribute_mRoutineInstructionList, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1972)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (inCompiler, object->mAttribute_mRoutineName, var_code COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1985))) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1997))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1997)) ;
  GALGAS_string var_code ;
  {
  routine_generateFunction (GALGAS_string ("function_").add_operation (object->mAttribute_mFunctionName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1999)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1999)), ioArgument_ioInclusionSet, object->mAttribute_mFormalArgumentList, object->mAttribute_mFunctionInstructionList, GALGAS_string ("C_Compiler"), object->mAttribute_mReturnType, object->mAttribute_mResultVariableCppName, GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1998)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (inCompiler, object->mAttribute_mFunctionName, var_code, object->mAttribute_mFormalArgumentList, object->mAttribute_mReturnType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2013)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2009))) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2023))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2023)) ;
  GALGAS_string var_code ;
  {
  routine_generateFunction (GALGAS_string ("onceFunction_").add_operation (object->mAttribute_mFunctionName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2025)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2025)), ioArgument_ioInclusionSet, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2027)), object->mAttribute_mFunctionInstructionList, GALGAS_string ("C_Compiler"), object->mAttribute_mReturnType, object->mAttribute_mResultVariableCppName, GALGAS_bool (true), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2024)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (inCompiler, object->mAttribute_mFunctionName, var_code, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2038)), object->mAttribute_mReturnType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2039)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2035))) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryMethodDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2053)), object->mAttribute_mAbstractCategoryMethodName, object->mAttribute_mAbstractCategoryMethodFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2052))) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2062)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2071)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2071)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2071)).add_operation (object->mAttribute_mAbstractCategoryMethodName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2071))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2071)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2072)) ;
  cEnumerator_formalParameterListForGeneration enumerator_75823 (object->mAttribute_mAbstractCategoryMethodFormalParameterList, kEnumeration_up) ;
  while (enumerator_75823.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_75823.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2074)) ;
    enumerator_75823.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryMethodImplementation (inCompiler, object->mAttribute_mReceiverType, object->mAttribute_mAbstractCategoryMethodName, object->mAttribute_mAbstractCategoryMethodFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2076))) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2086)) ;
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
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2096)), object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2095))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2102)), object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2101))) ;
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
    var_categoryMethodFormalParameterList.modifier_insertAtIndex (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticGeneration.galgas", 2118)), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticGeneration.galgas", 2119)), object->mAttribute_mReceiverType, GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2121))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2121)), GALGAS_string ("inObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2117)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2125)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2125)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2125)).add_operation (object->mAttribute_mCategoryMethodName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2125))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2125)) ;
    GALGAS_string var_code ;
    {
    routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("categoryMethod_").add_operation (object->mAttribute_mCategoryMethodName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2128)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2128)), ioArgument_ioInclusionSet, var_categoryMethodFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2126)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2140)), object->mAttribute_mCategoryMethodName, var_code COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2139))) ;
  }else if (kBoolFalse == test_0) {
    categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2145)) ;
    cEnumerator_formalParameterListForGeneration enumerator_78439 (object->mAttribute_mCategoryMethodFormalParameterList, kEnumeration_up) ;
    while (enumerator_78439.hasCurrentObject ()) {
      categoryMethod_addHeaderFileName (enumerator_78439.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2147)) ;
      enumerator_78439.gotoNextObject () ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_baseType = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2151)).isValid ()) {
      uint32_t variant_78600 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2151)).uintValue () ;
      bool loop_78600 = true ;
      while (loop_78600) {
        loop_78600 = var_searching.isValid () ;
        if (loop_78600) {
          loop_78600 = var_searching.boolValue () ;
        }
        if (loop_78600 && (0 == variant_78600)) {
          loop_78600 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 2151)) ;
        }
        if (loop_78600) {
          variant_78600 -- ;
          const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2152)).reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 2152)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 2152)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2153)).reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2153)).reader_hasKey (object->mAttribute_mCategoryMethodName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2153)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2154)) ;
            }else if (kBoolFalse == test_2) {
              var_searching = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2162)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2162)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2162)).add_operation (object->mAttribute_mCategoryMethodName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2162))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2162)) ;
    GALGAS_string var_methodImplementation ;
    {
    routine_generateCategoryMethod (object->mAttribute_mReceiverType, GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2163)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2173)), object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList, var_methodImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2172))) ;
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
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 2184)) ;
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
  routine_generateCategoryMethod (object->mAttribute_mReceiverType, object->mAttribute_mBaseTypeName, ioArgument_ioInclusionSet, object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2193)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryMethodImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2203)), object->mAttribute_mCategoryMethodName, var_methodImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2202))) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2216)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryModifierDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2225)), object->mAttribute_mAbstractCategoryModifierName, object->mAttribute_mAbstractCategoryModifierFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2224))) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2237)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2237)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2237)).add_operation (object->mAttribute_mAbstractCategoryModifierName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2237))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2237)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2238)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryModifierImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2240)), object->mAttribute_mAbstractCategoryModifierName, object->mAttribute_mAbstractCategoryModifierFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2239))) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2249)) ;
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
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2259)), object->mAttribute_mCategoryModifierName, object->mAttribute_mCategoryModifierFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2258))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2265)), object->mAttribute_mCategoryModifierName, object->mAttribute_mCategoryModifierFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2264))) ;
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
    var_categoryModifierFormalParameterList.modifier_insertAtIndex (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticGeneration.galgas", 2281)), GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticGeneration.galgas", 2282)), object->mAttribute_mReceiverType, GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2284))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2284)), GALGAS_string ("ioObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2280)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2288)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2288)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2288)).add_operation (object->mAttribute_mCategoryModifierName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2288))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2288)) ;
    GALGAS_string var_code ;
    {
    routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("categoryModifier_").add_operation (object->mAttribute_mCategoryModifierName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2291)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2291)), ioArgument_ioInclusionSet, var_categoryModifierFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2289)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2303)), object->mAttribute_mCategoryModifierName, var_code COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2302))) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_baseType = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2310)).isValid ()) {
      uint32_t variant_84096 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2310)).uintValue () ;
      bool loop_84096 = true ;
      while (loop_84096) {
        loop_84096 = var_searching.isValid () ;
        if (loop_84096) {
          loop_84096 = var_searching.boolValue () ;
        }
        if (loop_84096 && (0 == variant_84096)) {
          loop_84096 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 2310)) ;
        }
        if (loop_84096) {
          variant_84096 -- ;
          const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2311)).reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 2311)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 2311)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2312)).reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2312)).reader_hasKey (object->mAttribute_mCategoryModifierName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2312)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2313)) ;
            }else if (kBoolFalse == test_2) {
              var_searching = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2321)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2321)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2321)).add_operation (object->mAttribute_mCategoryModifierName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2321))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2321)) ;
    categoryMethod_addHeaderFileName (var_baseType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2322)) ;
    GALGAS_string var_modifierImplementation ;
    {
    routine_generateCategoryModifier (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2324)), GALGAS_string::makeEmptyString (), object->mAttribute_mCategoryModifierName, ioArgument_ioInclusionSet, object->mAttribute_mCategoryModifierFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_modifierImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2323)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2333)), object->mAttribute_mCategoryModifierName, object->mAttribute_mCategoryModifierFormalParameterList, var_modifierImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2332))) ;
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
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 2344)) ;
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
  routine_generateCategoryModifier (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2354)), object->mAttribute_mBaseTypeName, object->mAttribute_mCategoryModifierName, ioArgument_ioInclusionSet, object->mAttribute_mCategoryModifierFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2353)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_baseType = object->mAttribute_mReceiverType ;
  GALGAS_bool var_searching = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2364)).isValid ()) {
    uint32_t variant_85857 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2364)).uintValue () ;
    bool loop_85857 = true ;
    while (loop_85857) {
      loop_85857 = var_searching.isValid () ;
      if (loop_85857) {
        loop_85857 = var_searching.boolValue () ;
      }
      if (loop_85857 && (0 == variant_85857)) {
        loop_85857 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 2364)) ;
      }
      if (loop_85857) {
        variant_85857 -- ;
        const enumGalgasBool test_0 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2365)).reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 2365)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 2365)).boolEnum () ;
        if (kBoolTrue == test_0) {
          const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2366)).reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2366)).reader_hasKey (object->mAttribute_mCategoryModifierName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2366)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2367)) ;
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }else if (kBoolFalse == test_0) {
          var_searching = GALGAS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2375)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2375)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2375)).add_operation (object->mAttribute_mCategoryModifierName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2375))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2375)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2376)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryModifierImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2378)), object->mAttribute_mCategoryModifierName, var_methodImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2377))) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2391)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryReaderDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2400)), object->mAttribute_mAbstractCategoryReaderName, object->mAttribute_mAbstractCategoryReaderFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2399))) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2413)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2413)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2413)).add_operation (object->mAttribute_mAbstractCategoryReaderName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2413))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2413)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2414)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2415)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_87731 (object->mAttribute_mAbstractCategoryReaderFormalParameterList, kEnumeration_up) ;
  while (enumerator_87731.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_87731.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2417)) ;
    enumerator_87731.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryReaderImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2420)), object->mAttribute_mAbstractCategoryReaderName, object->mAttribute_mAbstractCategoryReaderFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2419))) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2430)) ;
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
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2440)), object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderFormalParameterList, object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2443)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2439))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2447)), object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2446))) ;
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
    var_categoryReaderFormalParameterList.modifier_insertAtIndex (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticGeneration.galgas", 2464)), object->mAttribute_mReceiverType, GALGAS_string ("inObject"), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2467))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2467)), GALGAS_bool (true), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2463)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2471)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2471)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2471)).add_operation (object->mAttribute_mCategoryReaderName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2471))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2471)) ;
    GALGAS_string var_code ;
    {
    routine_generateFunction (GALGAS_string ("categoryReader_").add_operation (object->mAttribute_mCategoryReaderName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2473)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2473)), ioArgument_ioInclusionSet, var_categoryReaderFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType, object->mAttribute_mResultVarCppName, GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2472)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2484)), object->mAttribute_mCategoryReaderName, var_code COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2483))) ;
  }else if (kBoolFalse == test_0) {
    categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2489)) ;
    categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2490)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_90313 (object->mAttribute_mCategoryReaderFormalParameterList, kEnumeration_up) ;
    while (enumerator_90313.hasCurrentObject ()) {
      categoryMethod_addHeaderFileName (enumerator_90313.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2492)) ;
      enumerator_90313.gotoNextObject () ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_baseType = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2496)).isValid ()) {
      uint32_t variant_90474 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2496)).uintValue () ;
      bool loop_90474 = true ;
      while (loop_90474) {
        loop_90474 = var_searching.isValid () ;
        if (loop_90474) {
          loop_90474 = var_searching.boolValue () ;
        }
        if (loop_90474 && (0 == variant_90474)) {
          loop_90474 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 2496)) ;
        }
        if (loop_90474) {
          variant_90474 -- ;
          const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2497)).reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 2497)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 2497)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2498)).reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2498)).reader_hasKey (object->mAttribute_mCategoryReaderName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2498)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2499)) ;
            }else if (kBoolFalse == test_2) {
              var_searching = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2507)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2507)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2507)).add_operation (object->mAttribute_mCategoryReaderName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2507))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2507)) ;
    GALGAS_string var_categoryReaderCode ;
    {
    routine_generateCategoryReader (object->mAttribute_mReceiverType, GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2516)), object->mAttribute_mResultVarCppName, var_categoryReaderCode, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2508)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2521)), object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderFormalParameterList, object->mAttribute_mResultType, var_categoryReaderCode COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2520))) ;
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
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 2533)) ;
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
  routine_generateCategoryReader (object->mAttribute_mReceiverType, object->mAttribute_mBaseTypeName, ioArgument_ioInclusionSet, object->mAttribute_mOverridingCategoryReaderName, object->mAttribute_mOverridingCategoryReaderFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2550)), object->mAttribute_mResultVarCppName, var_categoryReaderCode, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2542)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryReaderImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2555)), object->mAttribute_mOverridingCategoryReaderName, object->mAttribute_mResultType, var_categoryReaderCode COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2554))) ;
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
    temp_0 = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 2575)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2575)) ;
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
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (inCompiler, object->mAttribute_mOptionComponentName, object->mAttribute_mBoolOptionMap, object->mAttribute_mUIntOptionMap, object->mAttribute_mStringOptionMap COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2586))) ;
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
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2604))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2604)) ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (inCompiler, object->mAttribute_mOptionComponentName, object->mAttribute_mBoolOptionMap, object->mAttribute_mUIntOptionMap, object->mAttribute_mStringOptionMap COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2605))) ;
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
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 2620)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = object->mAttribute_mIsPredefined.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 2620)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2621)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2621))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2621)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2624)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2624)), GALGAS_string ("//"), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (inCompiler, object->mAttribute_mOptionComponentName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2627))), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (inCompiler, object->mAttribute_mOptionComponentName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2631))), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2622)) ;
    }
    ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2636)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2636))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2636)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2639)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2639)), GALGAS_string ("//"), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (inCompiler, GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2643)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2643)), object->mAttribute_mOptionComponentName, object->mAttribute_mBoolOptionMap, object->mAttribute_mUIntOptionMap, object->mAttribute_mStringOptionMap COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2642))), GALGAS_string ("\n"
      "\n"), GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2637)) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2660)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2677))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2677)) ;
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
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2687)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2687))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2687)) ;
  {
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2690)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2690)), GALGAS_string ("//"), GALGAS_string ("\n"
    "\n"), object->mAttribute_mCocoaHeader, GALGAS_string ("\n"
    "\n"), GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2688)) ;
  }
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2699)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2699))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2699)) ;
  {
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2702)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2702)), GALGAS_string ("//"), GALGAS_string ("\n"
    "\n"), object->mAttribute_mCocoaImplementation, GALGAS_string ("\n"
    "\n"), GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2700)) ;
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
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 2716)) ;
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
  ioArgument_ioInclusionSet.dotAssign_operation (object->mAttribute_mInclusionSet  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2725)) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2736)) ;
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
  GALGAS_stringlist var_regularFileIndexStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2774)) ;
  GALGAS_stringlist var_regularBinaryContentIndexStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2775)) ;
  GALGAS_stringlist var_regularTextContentIndexStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2776)) ;
  GALGAS_stringlist var_directoryIndexStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2777)) ;
  {
  routine_recursivlyEnumerateRegularFile (object->mAttribute_mFilewrapperFileMap, object->mAttribute_mFilewrapperDirectoryMap, var_regularFileIndexStringList, var_directoryIndexStringList, var_regularTextContentIndexStringList, var_regularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2778)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (inCompiler, var_regularFileIndexStringList, var_directoryIndexStringList, var_regularTextContentIndexStringList, var_regularBinaryContentIndexStringList, object->mAttribute_mFilewrapperName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2786))) ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_100226 (object->mAttribute_mFilewrapperTemplateListForGeneration, kEnumeration_up) ;
  while (enumerator_100226.hasCurrentObject ()) {
    outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (inCompiler, object->mAttribute_mFilewrapperName, enumerator_100226.current_mFilewrapperTemplateName (HERE), enumerator_100226.current_mFilewrapperTemplateFormalInputParameters (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2795)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2795)) ;
    enumerator_100226.gotoNextObject () ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2895))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2895)) ;
  GALGAS_string var_filewrapperImplementation = GALGAS_string::makeEmptyString () ;
  {
  routine_generateWrapperContents (object->mAttribute_mFilewrapperName, GALGAS_string::makeEmptyString (), GALGAS_uint ((uint32_t) 0U), object->mAttribute_mFilewrapperFileMap, object->mAttribute_mFilewrapperDirectoryMap, var_filewrapperImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2897)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (inCompiler, object->mAttribute_mFilewrapperName, var_filewrapperImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2905))) ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_105596 (object->mAttribute_mFilewrapperTemplateListForGeneration, kEnumeration_up) ;
  while (enumerator_105596.hasCurrentObject ()) {
    GALGAS_string var_generatedCodeForInstructionList = GALGAS_string::makeEmptyString () ;
    GALGAS_uint var_temporaryVariableIndex = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_stringset var_unusedVariableCppNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 2914)) ;
    var_unusedVariableCppNameSet.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2915))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2915)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_105899 (enumerator_105596.current_mFilewrapperTemplateFormalInputParameters (HERE), kEnumeration_up) ;
    while (enumerator_105899.hasCurrentObject ()) {
      var_unusedVariableCppNameSet.addAssign_operation (enumerator_105899.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2917)) ;
      enumerator_105899.gotoNextObject () ;
    }
    GALGAS_bool var_useColumnMarker = GALGAS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction (enumerator_105596.current_mTemplateInstructionListForGeneration (HERE), var_generatedCodeForInstructionList, ioArgument_ioInclusionSet, var_temporaryVariableIndex, var_unusedVariableCppNameSet, var_useColumnMarker, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2920)) ;
    }
    outArgument_outImplementation.dotAssign_operation (GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (inCompiler, object->mAttribute_mFilewrapperName, enumerator_105596.current_mFilewrapperTemplateName (HERE), enumerator_105596.current_mFilewrapperTemplateFormalInputParameters (HERE), var_unusedVariableCppNameSet, var_useColumnMarker, var_generatedCodeForInstructionList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2929)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2929)) ;
    enumerator_105596.gotoNextObject () ;
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
  if (object->mAttribute_mKind.isValid ()) {
    switch (object->mAttribute_mKind.enumValue ()) {
    case GALGAS_predefinedTypeKindEnum::kNotBuilt:
      break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_object: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2997))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2999))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint_36__34_: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3001))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3003))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint_36__34_: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3005))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_char: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3007))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_double: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3009))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_string: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3011))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_stringset: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3013))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bool: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3015))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_binaryset: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3017))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_function: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3019))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_location: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3021))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_type: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3023))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_data: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3025))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_filewrapper: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3027))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_application: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3029))) ;
      } break ;
    }
  }
  result_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3032)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3033)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3034)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3035)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3036)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3037)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3038)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3039)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3040)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3041)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3042)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3043)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3031)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3031)) ;
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
//               Overriding category method '@nonterminalInstructionForGeneration appendSyntaxSignature'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                      const GALGAS_string constinArgument_inPosfix,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName, constinArgument_inPosfix, GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 53)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("syntaxSignature.galgas", 54))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 49))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 49)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                             categoryMethod_nonterminalInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_nonterminalInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@terminalCheckInstructionForGeneration appendSyntaxSignature'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                        const GALGAS_string /* constinArgument_inPosfix */,
                                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstructionForGeneration * object = (const cPtr_terminalCheckInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, object->mAttribute_mLexiqueIdentifier, GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 66)), object->mAttribute_mIndexingKeyList, GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("syntaxSignature.galgas", 68)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("syntaxSignature.galgas", 69))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 62))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 62)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration.mSlotID,
                                             categoryMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@repeatInstructionForGeneration appendSyntaxSignature'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_repeatInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                 const GALGAS_string constinArgument_inPosfix,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstructionForGeneration * object = (const cPtr_repeatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGeneration) ;
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList = function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_m_5F_repeated_5F_instructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 77)) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 78)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_4046 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_4046.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_4046.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 81)), enumerator_4046.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 80)) ;
    enumerator_4046.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSyntaxComponentName, object->mAttribute_mChoiceIndex, var_repeated_5F_instructionList, object->mAttribute_mEndOfRepeatedInstructions, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 85))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 85)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_repeatInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_repeatInstructionForGeneration.mSlotID,
                                             categoryMethod_repeatInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_repeatInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@selectInstructionForGeneration appendSyntaxSignature'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selectInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                 const GALGAS_string constinArgument_inPosfix,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstructionForGeneration * object = (const cPtr_selectInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionForGeneration) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 99)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_4880 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_4880.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_4880.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 102)), enumerator_4880.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 101)) ;
    enumerator_4880.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSyntaxComponentName, object->mAttribute_mChoiceIndex, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 105))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 105)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selectInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_selectInstructionForGeneration.mSlotID,
                                             categoryMethod_selectInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_selectInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@parseRewindInstructionForGeneration appendSyntaxSignature'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseRewindInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                      const GALGAS_string constinArgument_inPosfix,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseRewindInstructionForGeneration * object = (const cPtr_parseRewindInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseRewindInstructionForGeneration) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  GALGAS_location joker_5617 ; // Joker input parameter
  object->mAttribute_mListOfSemanticInstructionListForGeneration.method_first (var_instructionList, joker_5617, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 118)) ;
  ioArgument_ioInstructionListForGeneration.dotAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, var_instructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 119))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 119)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseRewindInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration.mSlotID,
                                             categoryMethod_parseRewindInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseRewindInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_parseRewindInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@parseLoopInstructionForGeneration appendSyntaxSignature'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseLoopInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                    const GALGAS_string constinArgument_inPosfix,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseLoopInstructionForGeneration * object = (const cPtr_parseLoopInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseLoopInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.dotAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 127))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 127)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseLoopInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration.mSlotID,
                                             categoryMethod_parseLoopInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseLoopInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_parseLoopInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@parseWhenInstructionForGeneration appendSyntaxSignature'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseWhenInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                    const GALGAS_string constinArgument_inPosfix,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseWhenInstructionForGeneration * object = (const cPtr_parseWhenInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseWhenInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.dotAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 135))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 135)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseWhenInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration.mSlotID,
                                             categoryMethod_parseWhenInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseWhenInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_parseWhenInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category reader '@terminalCheckInstructionForGeneration compareSyntaxInstruction'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_terminalCheckInstructionForGeneration_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                  const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_terminalCheckInstructionForGeneration * object = (const cPtr_terminalCheckInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_terminalCheckInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_terminalCheckInstructionForGeneration cast_8904_si ((cPtr_terminalCheckInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("syntaxSignature.galgas", 191)).objectCompare (cast_8904_si.reader_mTerminalName (SOURCE_FILE ("syntaxSignature.galgas", 191)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 191)))) ;
      const enumGalgasBool test_0 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 192)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_8904_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 193)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("syntaxSignature.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 194)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 194))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 193)) ;
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_9203_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_9203_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 197)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("syntaxSignature.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 198)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 198))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 197)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 201)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_1 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 204)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 205)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_terminalCheckInstructionForGeneration_compareSyntaxInstruction (void) {
  enterCategoryReader_compareSyntaxInstruction (kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration.mSlotID,
                                                categoryReader_terminalCheckInstructionForGeneration_compareSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_terminalCheckInstructionForGeneration_compareSyntaxInstruction (defineCategoryReader_terminalCheckInstructionForGeneration_compareSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category reader '@nonterminalInstructionForGeneration compareSyntaxInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_nonterminalInstructionForGeneration_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_nonterminalInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_nonterminalInstructionForGeneration cast_9877_si ((cPtr_nonterminalInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mAttribute_mNonterminalName.objectCompare (cast_9877_si.reader_mNonterminalName (SOURCE_FILE ("syntaxSignature.galgas", 217)))) ;
      const enumGalgasBool test_0 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 218)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_9877_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 219)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mAttribute_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 220)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 220))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 219)) ;
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_10175_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_10175_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 223)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mAttribute_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 224)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 224))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 223)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 227)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_1 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 230)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 231)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_nonterminalInstructionForGeneration_compareSyntaxInstruction (void) {
  enterCategoryReader_compareSyntaxInstruction (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                                categoryReader_nonterminalInstructionForGeneration_compareSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_nonterminalInstructionForGeneration_compareSyntaxInstruction (defineCategoryReader_nonterminalInstructionForGeneration_compareSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@repeatInstructionForGeneration compareSyntaxInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_repeatInstructionForGeneration_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                           const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_repeatInstructionForGeneration * object = (const cPtr_repeatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_repeatInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_repeatInstructionForGeneration cast_10850_si ((cPtr_repeatInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = function_compareSyntaxSignature (object->mAttribute_m_5F_repeated_5F_instructionList, cast_10850_si.reader_m_5F_repeated_5F_instructionList (SOURCE_FILE ("syntaxSignature.galgas", 243)), cast_10850_si.reader_mEndOfRepeatedInstructions (SOURCE_FILE ("syntaxSignature.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 243)) ;
      const enumGalgasBool test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 244)).objectCompare (cast_10850_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 244)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 244)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 244)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_10850_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 245)), GALGAS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 247)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 246)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 247)).add_operation (cast_10850_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 249)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 249)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 248))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 245)) ;
        result_outOk = GALGAS_bool (false) ;
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_11532 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_11595 (cast_10850_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 252)), kEnumeration_up) ;
      bool bool_1 = result_outOk.isValidAndTrue () ;
      if (enumerator_11532.hasCurrentObject () && enumerator_11595.hasCurrentObject () && bool_1) {
        while (enumerator_11532.hasCurrentObject () && enumerator_11595.hasCurrentObject () && bool_1) {
          result_outOk = function_compareSyntaxSignature (enumerator_11532.current_mInstructionList (HERE), enumerator_11595.current_mInstructionList (HERE), enumerator_11595.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 253)) ;
          enumerator_11532.gotoNextObject () ;
          enumerator_11595.gotoNextObject () ;
          if (enumerator_11532.hasCurrentObject () && enumerator_11595.hasCurrentObject ()) {
            bool_1 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_11779_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_11779_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 256)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 256)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 260)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_2 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 263)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 264)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_repeatInstructionForGeneration_compareSyntaxInstruction (void) {
  enterCategoryReader_compareSyntaxInstruction (kTypeDescriptor_GALGAS_repeatInstructionForGeneration.mSlotID,
                                                categoryReader_repeatInstructionForGeneration_compareSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_repeatInstructionForGeneration_compareSyntaxInstruction (defineCategoryReader_repeatInstructionForGeneration_compareSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@selectInstructionForGeneration compareSyntaxInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_selectInstructionForGeneration_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                           const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_selectInstructionForGeneration * object = (const cPtr_selectInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_selectInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_selectInstructionForGeneration cast_12421_si ((cPtr_selectInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (true) ;
      const enumGalgasBool test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 277)).objectCompare (cast_12421_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 277)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 277)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 277)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_12421_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 278)), GALGAS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 280)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 279)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 280)).add_operation (cast_12421_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 282)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 282)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 281))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 278)) ;
        result_outOk = GALGAS_bool (false) ;
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_12989 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_13052 (cast_12421_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 285)), kEnumeration_up) ;
      bool bool_1 = result_outOk.isValidAndTrue () ;
      if (enumerator_12989.hasCurrentObject () && enumerator_13052.hasCurrentObject () && bool_1) {
        while (enumerator_12989.hasCurrentObject () && enumerator_13052.hasCurrentObject () && bool_1) {
          result_outOk = function_compareSyntaxSignature (enumerator_12989.current_mInstructionList (HERE), enumerator_13052.current_mInstructionList (HERE), enumerator_13052.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 286)) ;
          enumerator_12989.gotoNextObject () ;
          enumerator_13052.gotoNextObject () ;
          if (enumerator_12989.hasCurrentObject () && enumerator_13052.hasCurrentObject ()) {
            bool_1 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_13236_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_13236_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 289)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 289)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 293)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_2 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 296)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 297)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_selectInstructionForGeneration_compareSyntaxInstruction (void) {
  enterCategoryReader_compareSyntaxInstruction (kTypeDescriptor_GALGAS_selectInstructionForGeneration.mSlotID,
                                                categoryReader_selectInstructionForGeneration_compareSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_selectInstructionForGeneration_compareSyntaxInstruction (defineCategoryReader_selectInstructionForGeneration_compareSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@semanticInstructionAST transformInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_semanticInstructionAST_transformInstruction (const cPtr_syntaxInstructionAST * /* inObject */,
                                                                        GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                        const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                        GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                        GALGAS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_semanticInstructionAST_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_semanticInstructionAST.mSlotID,
                                            categoryMethod_semanticInstructionAST_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticInstructionAST_transformInstruction (defineCategoryMethod_semanticInstructionAST_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@syntaxSendInstruction transformInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_syntaxSendInstruction_transformInstruction (const cPtr_syntaxInstructionAST * /* inObject */,
                                                                       GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                       const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                       GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                       GALGAS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_syntaxSendInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_syntaxSendInstruction.mSlotID,
                                            categoryMethod_syntaxSendInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxSendInstruction_transformInstruction (defineCategoryMethod_syntaxSendInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@terminalCheckInstruction transformInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_terminalCheckInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                          GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                          const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                          GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                          GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstruction * object = (const cPtr_terminalCheckInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstruction) ;
  GALGAS_uint var_terminalSymbolIndex ;
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * objectArray_9245 = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) ioArgument_ioActuallyUsedTerminalSymbolMap.readAccessForWithInstruction (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("grammarCompilation.galgas", 200))) ;
  if (NULL != objectArray_9245) {
      macroValidSharedObject (objectArray_9245, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    var_terminalSymbolIndex = objectArray_9245->mAttribute_mTerminalIndex ;
  }else{
    var_terminalSymbolIndex = ioArgument_ioActuallyUsedTerminalSymbolMap.reader_count (SOURCE_FILE ("grammarCompilation.galgas", 203)) ;
    {
    ioArgument_ioActuallyUsedTerminalSymbolMap.modifier_insertKey (object->mAttribute_mTerminalName, var_terminalSymbolIndex, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 204)) ;
    }
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_terminalInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, var_terminalSymbolIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 206))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 206)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_terminalCheckInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_terminalCheckInstruction.mSlotID,
                                            categoryMethod_terminalCheckInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalCheckInstruction_transformInstruction (defineCategoryMethod_terminalCheckInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@nonterminalCallInstruction transformInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_nonterminalCallInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                            GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                            const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                            GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                            GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalCallInstruction * object = (const cPtr_nonterminalCallInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalCallInstruction) ;
  GALGAS_uint var_nonTerminalSymbolIndex ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_10238 ; // Joker input parameter
  constinArgument_inNonTerminalSymbolMap.method_searchKey (object->mAttribute_mNonterminalName, var_nonTerminalSymbolIndex, joker_10238, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 220)) ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_nonTerminalInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName, var_nonTerminalSymbolIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 221))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 221)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_nonterminalCallInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_nonterminalCallInstruction.mSlotID,
                                            categoryMethod_nonterminalCallInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nonterminalCallInstruction_transformInstruction (defineCategoryMethod_nonterminalCallInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@repeatInstruction transformInstruction'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_repeatInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                   GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                   const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                   GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                   GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstruction * object = (const cPtr_repeatInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstruction) ;
  GALGAS_uint var_addedNonTerminalIndex = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 235)) ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_repeatedInstructionList = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 237)) ;
  {
  routine_transformInstructionList (object->mAttribute_mRepeatedInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_repeatedInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 238)) ;
  }
  GALGAS_branchListForGrammarAnalysis var_repeatBranchList = GALGAS_branchListForGrammarAnalysis::constructor_listWithValue (var_repeatedInstructionList  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 245)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_11385 (object->mAttribute_mRepeatBranchList, kEnumeration_up) ;
  while (enumerator_11385.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 248)) ;
    {
    routine_transformInstructionList (enumerator_11385.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 249)) ;
    }
    var_repeatBranchList.addAssign_operation (var_syntaxInstructionList  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 256)) ;
    enumerator_11385.gotoNextObject () ;
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_repeatInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, var_repeatBranchList, var_addedNonTerminalIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 259))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 259)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_repeatInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_repeatInstruction.mSlotID,
                                            categoryMethod_repeatInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstruction_transformInstruction (defineCategoryMethod_repeatInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@selectInstruction transformInstruction'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selectInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                   GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                   const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                   GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                   GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstruction * object = (const cPtr_selectInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstruction) ;
  GALGAS_uint var_addedNonTerminalIndex = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 273)) ;
  GALGAS_branchListForGrammarAnalysis var_selectBranchList = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 275)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_12561 (object->mAttribute_mSelectBranchList, kEnumeration_up) ;
  while (enumerator_12561.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 277)) ;
    {
    routine_transformInstructionList (enumerator_12561.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 278)) ;
    }
    var_selectBranchList.addAssign_operation (var_syntaxInstructionList  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 285)) ;
    enumerator_12561.gotoNextObject () ;
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_selectInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, var_selectBranchList, var_addedNonTerminalIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 288))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 288)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selectInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_selectInstruction.mSlotID,
                                            categoryMethod_selectInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstruction_transformInstruction (defineCategoryMethod_selectInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@parseRewindInstruction transformInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseRewindInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                        GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                        const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                        GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                        GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseRewindInstruction * object = (const cPtr_parseRewindInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseRewindInstruction) ;
  GALGAS_syntaxInstructionList var_syntaxInstructionList ;
  GALGAS_location joker_13659 ; // Joker input parameter
  object->mAttribute_mParseRewindBranchList.method_first (var_syntaxInstructionList, joker_13659, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 302)) ;
  {
  routine_transformInstructionList (var_syntaxInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 304)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseRewindInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_parseRewindInstruction.mSlotID,
                                            categoryMethod_parseRewindInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseRewindInstruction_transformInstruction (defineCategoryMethod_parseRewindInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@parseWhenInstruction transformInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseWhenInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                      GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                      const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                      GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                      GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseWhenInstruction * object = (const cPtr_parseWhenInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseWhenInstruction) ;
  {
  routine_transformInstructionList (object->mAttribute_mElseInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 320)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseWhenInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_parseWhenInstruction.mSlotID,
                                            categoryMethod_parseWhenInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseWhenInstruction_transformInstruction (defineCategoryMethod_parseWhenInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@parseLoopInstruction transformInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseLoopInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                      GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                      const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                      GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                      GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseLoopInstruction * object = (const cPtr_parseLoopInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseLoopInstruction) ;
  {
  routine_transformInstructionList (object->mAttribute_mDoInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 336)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseLoopInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_parseLoopInstruction.mSlotID,
                                            categoryMethod_parseLoopInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseLoopInstruction_transformInstruction (defineCategoryMethod_parseLoopInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@Xcode_PBXFileReference_CompiledMachOExecutable productExtension'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_productExtension (const cPtr_Xcode_5F_productFileReference * /* inObject */,
                                                                                                  GALGAS_string & outArgument_outProductExtension,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProductExtension = GALGAS_string ("tool") ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_productExtension (void) {
  enterCategoryMethod_productExtension (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable.mSlotID,
                                        categoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_productExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_productExtension (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_productExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@Xcode_PBXFileReference_CompiledMachOExecutable buildXcodeProject'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                                   GALGAS_string & ioArgument_outString,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable * object = (const cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 62)).add_operation (GALGAS_string (" = {isa = PBXFileReference; explicitFileType = \"compiled.mach-o.executable\"; includeInIndex = 0; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 62)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 63)).add_operation (GALGAS_string ("; sourceTree = BUILT_PRODUCTS_DIR; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 64))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 62)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@Xcode_PBXFileReference_Application productExtension'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_Application_productExtension (const cPtr_Xcode_5F_productFileReference * /* inObject */,
                                                                                      GALGAS_string & outArgument_outProductExtension,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProductExtension = GALGAS_string ("application") ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_Application_productExtension (void) {
  enterCategoryMethod_productExtension (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_Application.mSlotID,
                                        categoryMethod_Xcode_5F_PBXFileReference_5F_Application_productExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_Application_productExtension (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_Application_productExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@Xcode_PBXFileReference_Application buildXcodeProject'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_Application_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                       GALGAS_string & ioArgument_outString,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_Application * object = (const cPtr_Xcode_5F_PBXFileReference_5F_Application *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_Application) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 81)).add_operation (GALGAS_string (" = {isa = PBXFileReference; explicitFileType = \"compiled.wrapper.application\"; includeInIndex = 0; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 81)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 82)).add_operation (GALGAS_string ("; sourceTree = BUILT_PRODUCTS_DIR; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 83))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 81)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_Application_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_Application.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_Application_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_Application_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_Application_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@Xcode_PBXFileReference_cppSourceFile buildXcodeProject'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_cppSourceFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                         GALGAS_string & ioArgument_outString,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 94)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 94)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 95)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.cpp.cpp; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 95)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 96)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 95)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 96)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 96)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 97))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 94)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_cppSourceFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_cppSourceFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_cppSourceFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_cppSourceFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@Xcode_PBXFileReference_hSourceFile buildXcodeProject'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_hSourceFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                       GALGAS_string & ioArgument_outString,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 108)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 108)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 109)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 109)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 110)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 109)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 110)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 110)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 111))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 108)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_hSourceFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_hSourceFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_hSourceFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_hSourceFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@Xcode_PBXFileReference_pchSourceFile buildXcodeProject'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_pchSourceFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                         GALGAS_string & ioArgument_outString,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 122)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 122)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 123)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.pch; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 123)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 124)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 123)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 124)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 124)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 125))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 122)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_pchSourceFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_pchSourceFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_pchSourceFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_pchSourceFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@Xcode_PBXFileReference_mSourceFile buildXcodeProject'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_mSourceFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                       GALGAS_string & ioArgument_outString,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 136)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 136)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 137)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.obj; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 137)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 138)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 137)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 138)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 138)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 139))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 136)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_mSourceFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_mSourceFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_mSourceFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_mSourceFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@Xcode_PBXFileReference_mmSourceFile buildXcodeProject'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_mmSourceFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                        GALGAS_string & ioArgument_outString,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 150)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 150)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 151)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.cpp.objcpp; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 151)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 152)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 151)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 152)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 152)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 153))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 150)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_mmSourceFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_mmSourceFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_mmSourceFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_mmSourceFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@Xcode_PBXFileReference_gifFile buildXcodeProject'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_gifFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                   GALGAS_string & ioArgument_outString,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_gifFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_gifFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_gifFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 164)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 164)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 165)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; lastKnownFileType = image.gif; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 165)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 166)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 165)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 166)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 166)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 167))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 164)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_gifFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_gifFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_gifFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_gifFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_gifFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@Xcode_PBXFileReference_tiffFile buildXcodeProject'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_tiffFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                    GALGAS_string & ioArgument_outString,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_tiffFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_tiffFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_tiffFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 178)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 178)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 179)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 179)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; lastKnownFileType = image.tiff; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 179)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 180)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 179)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 180)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 180)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 181))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 178)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_tiffFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_tiffFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_tiffFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_tiffFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@Xcode_PBXFileReference_pngFile buildXcodeProject'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_pngFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                   GALGAS_string & ioArgument_outString,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_pngFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_pngFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_pngFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 192)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 192)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 193)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; lastKnownFileType = image.png; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 193)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 194)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 193)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 194)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 194)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 195))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 192)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_pngFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_pngFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_pngFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_pngFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_pngFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@Xcode_PBXFileReference_plistFile buildXcodeProject'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_plistFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                     GALGAS_string & ioArgument_outString,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_plistFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_plistFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_plistFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 206)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 206)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 207)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.plist; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 207)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 208)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 207)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 208)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 208)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 209))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 206)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_plistFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_plistFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_plistFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_plistFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_plistFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@Xcode_PBXFileReference_frameworkFile buildXcodeProject'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_frameworkFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                         GALGAS_string & ioArgument_outString,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 220)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 220)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 221)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 221)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 222)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 221)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 222)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 222)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 223))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 220)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_frameworkFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_frameworkFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_frameworkFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_frameworkFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@Xcode_PBXFileReference_icnsFile buildXcodeProject'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_icnsFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                    GALGAS_string & ioArgument_outString,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_icnsFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_icnsFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_icnsFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 234)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 234)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 235)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; lastKnownFileType = image.icns; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 235)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 236)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 235)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 236)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 236)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 237))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 234)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_icnsFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_icnsFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_icnsFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_icnsFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@Xcode_PBXFileReference_xibFile buildXcodeProject'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_xibFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                   GALGAS_string & ioArgument_outString,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_xibFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_xibFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_xibFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 249)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 249)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 250)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; lastKnownFileType = wrapper.xib; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 250)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 251)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 250)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 251)).add_operation (object->mAttribute_mFilePath.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 251)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 252))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 249)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_xibFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_xibFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_xibFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_xibFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_xibFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@Xcode_PBXFileReference_plistStringFile buildXcodeProject'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_plistStringFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                           GALGAS_string & ioArgument_outString,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 264)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 264)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 265)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; lastKnownFileType = text.plist.strings; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 265)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 266)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 265)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 266)).add_operation (object->mAttribute_mFilePath.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 266)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 267))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 264)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_plistStringFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_plistStringFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_plistStringFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_plistStringFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@abstractCategoryModifierAST buildCategoryListMaps'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryModifierAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_genericCategoryMethodListMap & ioArgument_ioAbstractCategoryModifierListMapAST,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryModifierAST * object = (const cPtr_abstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryModifierAST) ;
  ioArgument_ioAbstractCategoryModifierListMapAST.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 67)), object->mAttribute_mAbstractCategoryModifierName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 66)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryModifierAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_abstractCategoryModifierAST.mSlotID,
                                             categoryMethod_abstractCategoryModifierAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryModifierAST_buildCategoryListMaps (defineCategoryMethod_abstractCategoryModifierAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@categoryModifierAST buildCategoryListMaps'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryModifierAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                      GALGAS_genericCategoryMethodListMap & ioArgument_ioCategoryModifierListMap,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryModifierAST * object = (const cPtr_categoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryModifierAST) ;
  ioArgument_ioCategoryModifierListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 87)), object->mAttribute_mCategoryModifierName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 86)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryModifierAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_categoryModifierAST.mSlotID,
                                             categoryMethod_categoryModifierAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryModifierAST_buildCategoryListMaps (defineCategoryMethod_categoryModifierAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@overridingCategoryModifierAST buildCategoryListMaps'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryModifierAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingCategoryModifierListMap,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryModifierAST * object = (const cPtr_overridingCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryModifierAST) ;
  ioArgument_ioOverridingCategoryModifierListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 107)), object->mAttribute_mOverridingCategoryModifierName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 106)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryModifierAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingCategoryModifierAST.mSlotID,
                                             categoryMethod_overridingCategoryModifierAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryModifierAST_buildCategoryListMaps (defineCategoryMethod_overridingCategoryModifierAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@overridingAbstractCategoryModifierAST buildCategoryListMaps'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryModifierAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingAbstractCategoryModifierListMap,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryModifierAST * object = (const cPtr_overridingAbstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryModifierAST) ;
  ioArgument_ioOverridingAbstractCategoryModifierListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 127)), object->mAttribute_mOverridingCategoryModifierName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 126)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryModifierAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingAbstractCategoryModifierAST.mSlotID,
                                             categoryMethod_overridingAbstractCategoryModifierAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryModifierAST_buildCategoryListMaps (defineCategoryMethod_overridingAbstractCategoryModifierAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@abstractCategoryMethodAST buildCategoryListMaps'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryMethodAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & ioArgument_ioAbstractCategoryMethodListMapAST,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryMethodAST * object = (const cPtr_abstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryMethodAST) ;
  ioArgument_ioAbstractCategoryMethodListMapAST.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 147)), object->mAttribute_mAbstractCategoryMethodName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 146)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryMethodAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_abstractCategoryMethodAST.mSlotID,
                                             categoryMethod_abstractCategoryMethodAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryMethodAST_buildCategoryListMaps (defineCategoryMethod_abstractCategoryMethodAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@categoryMethodAST buildCategoryListMaps'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryMethodAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                    GALGAS_genericCategoryMethodListMap & ioArgument_ioCategoryMethodListMap,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryMethodAST * object = (const cPtr_categoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryMethodAST) ;
  ioArgument_ioCategoryMethodListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 167)), object->mAttribute_mCategoryMethodName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 166)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryMethodAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_categoryMethodAST.mSlotID,
                                             categoryMethod_categoryMethodAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryMethodAST_buildCategoryListMaps (defineCategoryMethod_categoryMethodAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@overridingCategoryMethodAST buildCategoryListMaps'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryMethodAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingCategoryMethodListMap,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryMethodAST * object = (const cPtr_overridingCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryMethodAST) ;
  ioArgument_ioOverridingCategoryMethodListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 187)), object->mAttribute_mOverridingCategoryMethodName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 186)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryMethodAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingCategoryMethodAST.mSlotID,
                                             categoryMethod_overridingCategoryMethodAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryMethodAST_buildCategoryListMaps (defineCategoryMethod_overridingCategoryMethodAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@overridingAbstractCategoryMethodAST buildCategoryListMaps'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryMethodAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingAbstractCategoryMethodListMap,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryMethodAST * object = (const cPtr_overridingAbstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryMethodAST) ;
  ioArgument_ioOverridingAbstractCategoryMethodListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 207)), object->mAttribute_mOverridingCategoryMethodName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 206)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryMethodAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingAbstractCategoryMethodAST.mSlotID,
                                             categoryMethod_overridingAbstractCategoryMethodAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryMethodAST_buildCategoryListMaps (defineCategoryMethod_overridingAbstractCategoryMethodAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@abstractCategoryReaderAST buildCategoryListMaps'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryReaderAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & ioArgument_ioAbstractCategoryReaderListMap,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryReaderAST * object = (const cPtr_abstractCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryReaderAST) ;
  ioArgument_ioAbstractCategoryReaderListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 227)), object->mAttribute_mAbstractCategoryReaderName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 226)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryReaderAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_abstractCategoryReaderAST.mSlotID,
                                             categoryMethod_abstractCategoryReaderAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryReaderAST_buildCategoryListMaps (defineCategoryMethod_abstractCategoryReaderAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@categoryReaderAST buildCategoryListMaps'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryReaderAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & ioArgument_ioCategoryReaderListMap,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryReaderAST * object = (const cPtr_categoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryReaderAST) ;
  ioArgument_ioCategoryReaderListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 247)), object->mAttribute_mCategoryReaderName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 246)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryReaderAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_categoryReaderAST.mSlotID,
                                             categoryMethod_categoryReaderAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryReaderAST_buildCategoryListMaps (defineCategoryMethod_categoryReaderAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@overridingCategoryReaderAST buildCategoryListMaps'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryReaderAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingCategoryReaderListMap,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryReaderAST * object = (const cPtr_overridingCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryReaderAST) ;
  ioArgument_ioOverridingCategoryReaderListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 267)), object->mAttribute_mOverridingCategoryReaderName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 266)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryReaderAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingCategoryReaderAST.mSlotID,
                                             categoryMethod_overridingCategoryReaderAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryReaderAST_buildCategoryListMaps (defineCategoryMethod_overridingCategoryReaderAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@overridingAbstractCategoryReaderAST buildCategoryListMaps'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryReaderAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingAbstractCategoryReaderListMap,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryReaderAST * object = (const cPtr_overridingAbstractCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryReaderAST) ;
  ioArgument_ioOverridingAbstractCategoryReaderListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 287)), object->mAttribute_mAbstractCategoryReaderName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 286)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryReaderAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingAbstractCategoryReaderAST.mSlotID,
                                             categoryMethod_overridingAbstractCategoryReaderAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryReaderAST_buildCategoryListMaps (defineCategoryMethod_overridingAbstractCategoryReaderAST_buildCategoryListMaps, NULL) ;

