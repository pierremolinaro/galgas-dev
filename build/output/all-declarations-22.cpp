#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-22.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalAttributeInputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalAttributeInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                              GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                              GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalAttributeInputArgumentAST * object = (const cPtr_lexicalAttributeInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_attributeLexicalType_16528 ;
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = object ;
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalAttributeMap (HERE).method_searchKey (temp_0.getter_mAttributeName (HERE), var_attributeLexicalType_16528, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 356)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_16528.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalAttributeInputArgumentAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mAttributeName (HERE).getter_location (HERE), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_16528, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 362)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 363)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 364)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 365)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 362)) ;
    }
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
//
//Overriding extension method '@lexicalCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalCharacterInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                              GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                              GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCharacterInputArgumentAST * object = (const cPtr_lexicalCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCharacterInputArgumentAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 376)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCharacterInputArgumentAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mCharacter (HERE).getter_location (HERE), GALGAS_string ("type error, a literal character has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 377)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 378)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 379)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 377)) ;
    }
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
//
//Overriding extension method '@lexicalUnsignedInputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalUnsignedInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                             GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                             GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalUnsignedInputArgumentAST * object = (const cPtr_lexicalUnsignedInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalUnsignedInputArgumentAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 390)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalUnsignedInputArgumentAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mUnsigned (HERE).getter_location (HERE), GALGAS_string ("type error, a literal unsigned value has @uint").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 391)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 392)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 393)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 391)) ;
    }
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
//
//Overriding extension method '@lexicalCurrentCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalCurrentCharacterInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                                     GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                                     GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalCurrentCharacterInputArgumentAST * object = (const cPtr_lexicalCurrentCharacterInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 404)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCurrentCharacterInputArgumentAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.getter_mLocation (HERE), GALGAS_string ("type error, current character value has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 405)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 406)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 407)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 405)) ;
    }
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
//
//Overriding extension method '@lexicalFunctionInputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalFunctionInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                                             GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                             GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFunctionInputArgumentAST * object = (const cPtr_lexicalFunctionInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFunctionInputArgumentAST) ;
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_19326 ;
  GALGAS_lexicalTypeEnum var_returnedLexicalFormalType_19375 ;
  GALGAS_string var_replacementFunctionName_19413 ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = object ;
  GALGAS_bool joker_19588 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalFunctionMap (HERE).method_searchKey (temp_0.getter_mFunctionName (HERE), var_lexicalFormalTypeList_19326, var_returnedLexicalFormalType_19375, var_replacementFunctionName_19413, joker_19588, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 421)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_replacementFunctionName_19413.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.getter_mFunctionName (HERE).getter_location (HERE), GALGAS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_19413, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 430)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 430)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 430)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_returnedLexicalFormalType_19375.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.getter_mFunctionName (HERE).getter_location (HERE), GALGAS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_19375, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 434)).add_operation (GALGAS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 435)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 436)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 437)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 434)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_lexicalFunctionInputArgumentAST temp_8 = object ;
    test_7 = GALGAS_bool (kIsNotEqual, var_lexicalFormalTypeList_19326.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 441)).objectCompare (temp_8.getter_mFunctionActualArgumentList (HERE).getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 441)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_9 = object ;
      const GALGAS_lexicalFunctionInputArgumentAST temp_10 = object ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.getter_mFunctionName (HERE).getter_location (HERE), GALGAS_string ("this lexical function names ").add_operation (temp_10.getter_mFunctionActualArgumentList (HERE).getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 443)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 442)).add_operation (GALGAS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 443)).add_operation (var_lexicalFormalTypeList_19326.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 445)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 444)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 445)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 442)) ;
    }
  }
  const GALGAS_lexicalFunctionInputArgumentAST temp_12 = object ;
  cEnumerator_lexicalFunctionFormalArgumentList enumerator_20581 (var_lexicalFormalTypeList_19326, kENUMERATION_UP) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_20637 (temp_12.getter_mFunctionActualArgumentList (HERE), kENUMERATION_UP) ;
  while (enumerator_20581.hasCurrentObject () && enumerator_20637.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_20637.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_20581.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 449)) ;
    enumerator_20581.gotoNextObject () ;
    enumerator_20637.gotoNextObject () ;
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
//
//Overriding extension method '@lexicalAttributeInputOutputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalAttributeInputOutputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                                    GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                                    GALGAS_lexicalArgumentModeAST inArgument_inLexicalRoutineFormalArgumentMode,
                                                                                                    GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalAttributeInputOutputArgumentAST * object = (const cPtr_lexicalAttributeInputOutputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalAttributeInputOutputArgumentAST) ;
  GALGAS_lexicalTypeEnum var_attributeLexicalType_21914 ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_0 = object ;
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalAttributeMap (HERE).method_searchKey (temp_0.getter_mAttributeName (HERE), var_attributeLexicalType_21914, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 473)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_21914.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalAttributeInputOutputArgumentAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mAttributeName (HERE).getter_location (HERE), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_21914, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 480)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 479)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 480)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 481)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 482)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 479)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("lexiqueCompilation.galgas", 486)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_lexicalAttributeInputOutputArgumentAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.getter_mActualPassingModeLocation (HERE), GALGAS_string ("the output mode (!) is required here, not an output/input mode"), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 487)) ;
    }
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
//
//Overriding extension method '@lexicalFormalInputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalFormalInputArgumentAST_checkLexicalRoutineCallArgument (const cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                                                           GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                           GALGAS_lexicalArgumentModeAST inArgument_inLexicalRoutineFormalArgumentMode,
                                                                                           GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalFormalInputArgumentAST * object = (const cPtr_lexicalFormalInputArgumentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalFormalInputArgumentAST) ;
  const GALGAS_lexicalFormalInputArgumentAST temp_0 = object ;
  callExtensionMethod_checkLexicalRoutineCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.getter_mRoutineOrFunctionFormalInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 498)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("lexiqueCompilation.galgas", 503)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalFormalInputArgumentAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mActualPassingModeLocation (HERE), GALGAS_string ("the output/input mode (!\?) is required here, not an input mode"), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 504)) ;
    }
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
//
//Overriding extension method '@lexicalStructuredSendInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                         GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                         GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalStructuredSendInstructionAST * object = (const cPtr_lexicalStructuredSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalStructuredSendInstructionAST) ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_0 = object ;
  cEnumerator_lexicalSendSearchListAST enumerator_24239 (temp_0.getter_mLexicalSendSearchList (HERE), kENUMERATION_UP) ;
  while (enumerator_24239.hasCurrentObject ()) {
    {
    ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalTokenListMap.setter_setMShouldBeGeneratedForKey (GALGAS_bool (true), enumerator_24239.current_mSearchListName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 522)) ;
    }
    GALGAS_lexicalTypeEnum joker_24465 ; // Joker input parameter
    ioArgument_ioLexiqueAnalysisContext.getter_mLexicalAttributeMap (HERE).method_searchKey (enumerator_24239.current_mAttributeName (HERE), joker_24465, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 523)) ;
    enumerator_24239.gotoNextObject () ;
  }
  const GALGAS_lexicalStructuredSendInstructionAST temp_1 = object ;
  callExtensionMethod_checkLexicalDefaultAction ((const cPtr_lexicalSendDefaultActionAST *) temp_1.getter_mLexicalSendDefaultAction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 525)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST.mSlotID,
                                                extensionMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalStructuredSendInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalSimpleSendInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                     GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                     GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalSimpleSendInstructionAST * object = (const cPtr_lexicalSimpleSendInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSimpleSendInstructionAST) ;
  const GALGAS_lexicalSimpleSendInstructionAST temp_0 = object ;
  GALGAS_lexicalSentValueList joker_24922 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mTerminalMap (HERE).method_searchKey (temp_0.getter_mSentTerminal (HERE), joker_24922, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 533)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalSimpleSendInstructionAST.mSlotID,
                                                extensionMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalSimpleSendInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalRepeatInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalRepeatInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                 GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalRepeatInstructionAST * object = (const cPtr_lexicalRepeatInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRepeatInstructionAST) ;
  const GALGAS_lexicalRepeatInstructionAST temp_0 = object ;
  cEnumerator_lexicalWhileBranchListAST enumerator_25247 (temp_0.getter_mLexicalWhileBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_25247.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) enumerator_25247.current_mWhileExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 542)) ;
    GALGAS_lexicalTagMap var_tagMap_25371 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 543)) ;
    cEnumerator_lexicalInstructionListAST enumerator_25441 (enumerator_25247.current_mWhileInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_25441.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_25441.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_25371, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 545)) ;
      enumerator_25441.gotoNextObject () ;
    }
    enumerator_25247.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap_25578 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 548)) ;
  const GALGAS_lexicalRepeatInstructionAST temp_1 = object ;
  cEnumerator_lexicalInstructionListAST enumerator_25646 (temp_1.getter_mRepeatedInstructionList (HERE), kENUMERATION_UP) ;
  while (enumerator_25646.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_25646.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_25578, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 550)) ;
    enumerator_25646.gotoNextObject () ;
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
//
//Overriding extension method '@lexicalSelectInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalSelectInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                 GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalSelectInstructionAST * object = (const cPtr_lexicalSelectInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSelectInstructionAST) ;
  const GALGAS_lexicalSelectInstructionAST temp_0 = object ;
  cEnumerator_lexicalSelectBranchListAST enumerator_26094 (temp_0.getter_mLexicalSelectBranchList (HERE), kENUMERATION_UP) ;
  while (enumerator_26094.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) enumerator_26094.current_mSelectExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 560)) ;
    GALGAS_lexicalTagMap var_tagMap_26220 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 561)) ;
    cEnumerator_lexicalInstructionListAST enumerator_26290 (enumerator_26094.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_26290.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_26290.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_26220, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 563)) ;
      enumerator_26290.gotoNextObject () ;
    }
    enumerator_26094.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap_26428 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 566)) ;
  const GALGAS_lexicalSelectInstructionAST temp_1 = object ;
  cEnumerator_lexicalInstructionListAST enumerator_26496 (temp_1.getter_mDefaultInstructionList (HERE), kENUMERATION_UP) ;
  while (enumerator_26496.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_26496.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_26428, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 568)) ;
    enumerator_26496.gotoNextObject () ;
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
//
//Overriding extension method '@lexicalRoutineInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalRoutineInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                  GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                  GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalRoutineInstructionAST * object = (const cPtr_lexicalRoutineInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRoutineInstructionAST) ;
  GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_26975 ;
  GALGAS_stringlist var_routineErrorMessageList_27017 ;
  const GALGAS_lexicalRoutineInstructionAST temp_0 = object ;
  GALGAS_bool joker_27177 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalRoutineMessageMap (HERE).method_searchKey (temp_0.getter_mRoutineName (HERE), var_lexicalRoutineFormalArgumentList_26975, var_routineErrorMessageList_27017, joker_27177, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 579)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalRoutineInstructionAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, var_lexicalRoutineFormalArgumentList_26975.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 586)).objectCompare (temp_2.getter_mActualArgumentList (HERE).getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 586)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalRoutineInstructionAST temp_3 = object ;
      const GALGAS_lexicalRoutineInstructionAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.getter_mRoutineName (HERE).getter_location (HERE), GALGAS_string ("this lexical routine call names ").add_operation (temp_4.getter_mActualArgumentList (HERE).getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 588)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 587)).add_operation (GALGAS_string (" actual argument(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 588)).add_operation (var_lexicalRoutineFormalArgumentList_26975.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 590)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 589)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 590)), fixItArray5  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 587)) ;
    }
  }
  const GALGAS_lexicalRoutineInstructionAST temp_6 = object ;
  cEnumerator_lexicalRoutineFormalArgumentList enumerator_27685 (var_lexicalRoutineFormalArgumentList_26975, kENUMERATION_UP) ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_27754 (temp_6.getter_mActualArgumentList (HERE), kENUMERATION_UP) ;
  while (enumerator_27685.hasCurrentObject () && enumerator_27754.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRoutineCallArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_27754.current_mLexicalRoutineActualArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_27685.current_mLexicalFormalArgumentMode (HERE), enumerator_27685.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 594)) ;
    enumerator_27685.gotoNextObject () ;
    enumerator_27754.gotoNextObject () ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_lexicalRoutineInstructionAST temp_8 = object ;
    test_7 = GALGAS_bool (kIsNotEqual, var_routineErrorMessageList_27017.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 601)).objectCompare (temp_8.getter_mErrorMessageList (HERE).getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 601)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_lexicalRoutineInstructionAST temp_9 = object ;
      const GALGAS_lexicalRoutineInstructionAST temp_10 = object ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.getter_mRoutineName (HERE).getter_location (HERE), GALGAS_string ("this lexical routine call names ").add_operation (temp_10.getter_mErrorMessageList (HERE).getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 603)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 602)).add_operation (GALGAS_string (" error message(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 603)).add_operation (var_routineErrorMessageList_27017.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 605)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 605)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 604)).add_operation (GALGAS_string (" error message(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 605)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 602)) ;
    }
  }
  const GALGAS_lexicalRoutineInstructionAST temp_12 = object ;
  cEnumerator_lstringlist enumerator_28394 (temp_12.getter_mErrorMessageList (HERE), kENUMERATION_UP) ;
  while (enumerator_28394.hasCurrentObject ()) {
    cMapElement_lexicalMessageMap * objectArray_28433 = (cMapElement_lexicalMessageMap *) ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, enumerator_28394.current_mValue (HERE), kSearchErrorMessage_lexicalMessageMap_searchKey  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 609)) ;
    if (NULL != objectArray_28433) {
      macroValidSharedObject (objectArray_28433, cMapElement_lexicalMessageMap) ;
      objectArray_28433->mProperty_mMessageIsUsed = GALGAS_bool (true) ;
    }
    enumerator_28394.gotoNextObject () ;
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
//
//Overriding extension method '@lexicalLogInstructionAST checkLexicalInstruction'
//
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
//
//Overriding extension method '@lexicalRewindInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                 GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalRewindInstructionAST * object = (const cPtr_lexicalRewindInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRewindInstructionAST) ;
  const GALGAS_lexicalRewindInstructionAST temp_0 = object ;
  ioArgument_ioTagMap.method_searchKey (temp_0.getter_mLexicalTagName (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 627)) ;
  const GALGAS_lexicalRewindInstructionAST temp_1 = object ;
  GALGAS_lexicalSentValueList joker_29242 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mTerminalMap (HERE).method_searchKey (temp_1.getter_mTerminalName (HERE), joker_29242, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 628)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalRewindInstructionAST.mSlotID,
                                                extensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalRewindInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalDropInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalDropInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                               GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                               GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalDropInstructionAST * object = (const cPtr_lexicalDropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalDropInstructionAST) ;
  const GALGAS_lexicalDropInstructionAST temp_0 = object ;
  GALGAS_lexicalSentValueList joker_29600 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mTerminalMap (HERE).method_searchKey (temp_0.getter_mTerminalName (HERE), joker_29600, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 636)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalDropInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalDropInstructionAST.mSlotID,
                                                extensionMethod_lexicalDropInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalDropInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalDropInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalTagInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalTagInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                              GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                              GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalTagInstructionAST * object = (const cPtr_lexicalTagInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalTagInstructionAST) ;
  {
  const GALGAS_lexicalTagInstructionAST temp_0 = object ;
  ioArgument_ioTagMap.setter_insertKey (temp_0.getter_mLexicalTagName (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 644)) ;
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
//
//Overriding extension method '@lexicalErrorInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalErrorInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalErrorInstructionAST * object = (const cPtr_lexicalErrorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorInstructionAST) ;
  {
  const GALGAS_lexicalErrorInstructionAST temp_0 = object ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_0.getter_mErrorMessageName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 653)) ;
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
//
//Overriding extension method '@lexicalWarningInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalWarningInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                  GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                  GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalWarningInstructionAST * object = (const cPtr_lexicalWarningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalWarningInstructionAST) ;
  {
  const GALGAS_lexicalWarningInstructionAST temp_0 = object ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_0.getter_mWarningMessageName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 661)) ;
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
//
//Overriding extension method '@lexicalImplicitRuleAST checkLexicalRule'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalImplicitRuleAST_checkLexicalRule (const cPtr_abstractLexicalRuleAST * inObject,
                                                                     GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalImplicitRuleAST * object = (const cPtr_lexicalImplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalImplicitRuleAST) ;
  const GALGAS_lexicalImplicitRuleAST temp_0 = object ;
  GALGAS_lexicalExplicitTokenListMap joker_31511 ; // Joker input parameter
  GALGAS_tokenSortedlist joker_31514 ; // Joker input parameter
  GALGAS_bool joker_31517 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalTokenListMap (HERE).method_searchKey (temp_0.getter_mListName (HERE), joker_31511, joker_31514, joker_31517, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 675)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalImplicitRuleAST_checkLexicalRule (void) {
  enterExtensionMethod_checkLexicalRule (kTypeDescriptor_GALGAS_lexicalImplicitRuleAST.mSlotID,
                                         extensionMethod_lexicalImplicitRuleAST_checkLexicalRule) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalImplicitRuleAST_checkLexicalRule (defineExtensionMethod_lexicalImplicitRuleAST_checkLexicalRule, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalExplicitRuleAST checkLexicalRule'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalExplicitRuleAST_checkLexicalRule (const cPtr_abstractLexicalRuleAST * inObject,
                                                                     GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalExplicitRuleAST * object = (const cPtr_lexicalExplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalExplicitRuleAST) ;
  const GALGAS_lexicalExplicitRuleAST temp_0 = object ;
  callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) temp_0.getter_mLexicalRuleExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 682)) ;
  GALGAS_lexicalTagMap var_tagMap_31866 = GALGAS_lexicalTagMap::constructor_emptyMap (SOURCE_FILE ("lexiqueCompilation.galgas", 683)) ;
  const GALGAS_lexicalExplicitRuleAST temp_1 = object ;
  cEnumerator_lexicalInstructionListAST enumerator_31891 (temp_1.getter_mInstructionList (HERE), kENUMERATION_UP) ;
  while (enumerator_31891.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_31891.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_31866, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 685)) ;
    enumerator_31891.gotoNextObject () ;
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
//
//Filewrapper 'lexiqueGenerationTemplates'
//
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates newHeaderZone2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_32_ (C_Compiler * inCompiler,
                                                                                const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                const GALGAS_metamodelTemplateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("LEXIQUE ").add_operation (in_LEXIQUE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"galgas2/C_Lexique.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                    E X T E R N    R O U T I N E S                                             \n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_724_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalRoutineMessageMap (HERE).isValid ()) {
    cEnumerator_lexicalRoutineMap enumerator_724 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalRoutineMessageMap (HERE), kENUMERATION_UP) ;
    while (enumerator_724.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_724.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "\n"
          "void scanner_routine_" ;
        result << enumerator_724.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << " (C_Lexique & inLexique" ;
        GALGAS_uint index_868_ (0) ;
        if (enumerator_724.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          cEnumerator_lexicalRoutineFormalArgumentList enumerator_868 (enumerator_724.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
          while (enumerator_868.hasCurrentObject ()) {
            result << ",\n"
              "                " ;
            result << extensionGetter_cppConstInFormalArgument (enumerator_868.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 17)).stringValue () ;
            result << extensionGetter_cppTypeName (enumerator_868.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 18)).stringValue () ;
            result << extensionGetter_cppReferenceInFormalArgument (enumerator_868.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 19)).stringValue () ;
            result << " " ;
            result << enumerator_868.current_mArgumentNameForComment (HERE).stringValue () ;
            index_868_.increment () ;
            enumerator_868.gotoNextObject () ;
          }
        }
        GALGAS_uint index_1215_ (0) ;
        if (enumerator_724.current_mErrorMessageList (HERE).isValid ()) {
          cEnumerator_stringlist enumerator_1215 (enumerator_724.current_mErrorMessageList (HERE), kENUMERATION_UP) ;
          while (enumerator_1215.hasCurrentObject ()) {
            result << ",\n"
              "                const char * " ;
            result << enumerator_1215.current_mValue (HERE).stringValue () ;
            index_1215_.increment () ;
            enumerator_1215.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_724_.increment () ;
      enumerator_724.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                    E X T E R N    F U N C T I O N S                                           \n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_1707_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalFunctionMap (HERE).isValid ()) {
    cEnumerator_lexicalFunctionMap enumerator_1707 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalFunctionMap (HERE), kENUMERATION_UP) ;
    while (enumerator_1707.hasCurrentObject ()) {
      const enumGalgasBool test_1 = enumerator_1707.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "\n" ;
        result << extensionGetter_cppTypeName (enumerator_1707.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 35)).stringValue () ;
        result << " scanner_function_" ;
        result << enumerator_1707.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << " (C_Lexique & inLexique" ;
        GALGAS_uint index_1868_ (0) ;
        if (enumerator_1707.current_mLexicalTypeList (HERE).isValid ()) {
          cEnumerator_lexicalFunctionFormalArgumentList enumerator_1868 (enumerator_1707.current_mLexicalTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1868.hasCurrentObject ()) {
            result << ",\n"
              "                const " ;
            result << extensionGetter_cppTypeName (enumerator_1868.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 37)).stringValue () ;
            result << " " ;
            result << enumerator_1868.current_mArgumentNameForComment (HERE).stringValue () ;
            index_1868_.increment () ;
            enumerator_1868.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_1707_.increment () ;
      enumerator_1707.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                       T O K E N    C L A S S                                                  \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " : public cToken {\n" ;
  GALGAS_uint index_2458_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (HERE).isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_2458 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (HERE), kENUMERATION_UP) ;
    while (enumerator_2458.hasCurrentObject ()) {
      result << "  public: " ;
      result << extensionGetter_cppTypeName (enumerator_2458.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 50)).stringValue () ;
      result << " mLexicalAttribute_" ;
      result << enumerator_2458.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 50)).stringValue () ;
      result << " ;\n" ;
      index_2458_.increment () ;
      enumerator_2458.gotoNextObject () ;
    }
  }
  result << "\n"
    "  public: cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                     S C A N N E R    C L A S S                                                \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " : public C_Lexique {\n"
    "//--- Constructors\n"
    "  public: C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (C_Compiler * inCallerCompiler,\n"
    "                       const C_String & inSourceFileName\n"
    "                       COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "  public: C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (C_Compiler * inCallerCompiler,\n"
    "                       const C_String & inSourceString,\n"
    "                       const C_String & inStringForError\n"
    "                       COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Instrospection\n"
    "  public: static GALGAS_stringlist symbols (LOCATION_ARGS) ;\n"
    "\n"
    "//--- Declaring a protected virtual destructor enables the compiler to raise\n"
    "//    an error if a direct delete is performed; only the static method\n"
    "//    C_SharedObject::detachPointer may invoke delete.\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "    protected: virtual ~ C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {}\n"
    "  #endif\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 80)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "\n"
      "//--- Scanner mode for template scanner\n"
      "  private: int32_t mMatchedTemplateDelimiterIndex ;\n" ;
  }else if (kBoolFalse == test_2) {
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates newHeaderZone3'
//
//----------------------------------------------------------------------------------------------------------------------

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
    "  public: enum {kToken_" ;
  GALGAS_uint index_115_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (HERE).isValid ()) {
    cEnumerator_terminalList enumerator_115 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (HERE), kENUMERATION_UP) ;
    while (enumerator_115.hasCurrentObject ()) {
      result << ",\n"
        "   kToken_" ;
      result << enumerator_115.current_mTerminalName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 5)).stringValue () ;
      index_115_.increment () ;
      enumerator_115.gotoNextObject () ;
    }
  }
  result << "} ;\n" ;
  GALGAS_uint index_238_ (0) ;
  if (in_DELIMITOR_5F_LIST_5F_LIST.isValid ()) {
    cEnumerator_lexicalListDeclarationListAST enumerator_238 (in_DELIMITOR_5F_LIST_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_238.hasCurrentObject ()) {
      result << "\n"
        "//--- Key words table '" ;
      result << enumerator_238.current_mName (HERE).getter_string (HERE).stringValue () ;
      result << "'\n"
        "  public: static int16_t search_into_" ;
      result << enumerator_238.current_mName (HERE).getter_string (HERE).stringValue () ;
      result << " (const C_String & inSearchedString) ;\n" ;
      index_238_.increment () ;
      enumerator_238.gotoNextObject () ;
    }
  }
  result << "  \n"
    "\n"
    "//--- Assign from attribute\n" ;
  GALGAS_uint index_489_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (HERE).isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_489 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (HERE), kENUMERATION_UP) ;
    while (enumerator_489.hasCurrentObject ()) {
      result << "  public: GALGAS_l" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_489.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 18)).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 18)).stringValue () ;
      result << " synthetizedAttribute_" ;
      result << enumerator_489.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 18)).stringValue () ;
      result << " (void) const ;\n" ;
      index_489_.increment () ;
      enumerator_489.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//--- Attribute access\n" ;
  GALGAS_uint index_746_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (HERE).isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_746 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (HERE), kENUMERATION_UP) ;
    while (enumerator_746.hasCurrentObject ()) {
      result << "  public: " ;
      result << extensionGetter_cppTypeName (enumerator_746.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 25)).stringValue () ;
      result << " attributeValue_" ;
      result << enumerator_746.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 25)).stringValue () ;
      result << " (void) const ;\n" ;
      index_746_.increment () ;
      enumerator_746.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//--- Indexing keys\n" ;
  GALGAS_uint index_949_ (0) ;
  if (in_INDEXING_5F_LIST.isValid ()) {
    cEnumerator_indexingListAST enumerator_949 (in_INDEXING_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_949 = enumerator_949.hasCurrentObject () ;
    if (nonEmpty_enumerator_949) {
      result << "  public: enum {" ;
    }
    while (enumerator_949.hasCurrentObject ()) {
      result << "\n"
        "    kIndexing_" ;
      result << enumerator_949.current_mIndexName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 33)).stringValue () ;
      if (enumerator_949.hasNextObject ()) {
        result << "," ;
      }
      index_949_.increment () ;
      enumerator_949.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_949) {
      result << "\n"
        "  } ;\n" ;
    }
  }
  result << "\n"
    "//--- Unicode test functions\n" ;
  GALGAS_uint index_1119_ (0) ;
  if (in_UNICODE_5F_TEST_5F_FUNCTIONS.isValid ()) {
    cEnumerator_lexicalFunctionListAST enumerator_1119 (in_UNICODE_5F_TEST_5F_FUNCTIONS, kENUMERATION_UP) ;
    while (enumerator_1119.hasCurrentObject ()) {
      result << "  public: static bool " ;
      result << enumerator_1119.current_mFunctionName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 41)).stringValue () ;
      result << " (const utf32 inUnicodeCharacter) ;\n" ;
      index_1119_.increment () ;
      enumerator_1119.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Indexing directory\n"
    "  protected: virtual C_String indexingDirectory (void) const ;\n"
    "\n"
    "//--- Parse lexical token\n"
    "  protected: virtual bool parseLexicalToken (void) ;\n"
    "\n"
    "//--- Get terminal message\n"
    "  protected: virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const ;\n"
    "\n"
    "//--- Get terminal count\n"
    "  public: virtual int16_t terminalVocabularyCount (void) const { return " ;
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (HERE).getter_length (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 54)).getter_string (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 54)).stringValue () ;
  result << " ; }\n"
    "\n"
    "//--- Get Token String\n"
    "  public: virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;\n"
    "\n"
    "//--- Enter Token\n"
    "  protected: void enterToken (cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " & ioToken) ;\n"
    "\n"
    "//--- Style name for Latex\n"
    "  protected: virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const ;\n"
    "  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const ;\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates newImplementationZone2Galgas3'
//
//----------------------------------------------------------------------------------------------------------------------

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
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//     L E X I Q U E                                                                             \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"strings/unicode_character_cpp.h\"\n"
    "#include \"galgas2/scanner_actions.h\"\n"
    "#include \"galgas2/cLexiqueIntrospection.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (void)" ;
  GALGAS_uint index_719_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_719 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_719 = enumerator_719.hasCurrentObject () ;
    if (nonEmpty_enumerator_719) {
      result << " :\n" ;
    }
    while (enumerator_719.hasCurrentObject ()) {
      result << "mLexicalAttribute_" ;
      result << enumerator_719.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 16)).stringValue () ;
      result << " ()" ;
      if (enumerator_719.hasNextObject ()) {
        result << ",\n" ;
      }
      index_719_.increment () ;
      enumerator_719.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
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
    "//----------------------------------------------------------------------------------------------------------------------\n"
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
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                 I N D E X I N G    D I R E C T O R Y                                          \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::indexingDirectory (void) const {\n"
    "  return " ;
  result << in_INDEXING_5F_DIRECTORY.getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 52)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                        Lexical error message list                                             \n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_2695_ (0) ;
  if (in_LEXICAL_5F_MESSAGE_5F_MAP.isValid ()) {
    cEnumerator_lexicalMessageMap enumerator_2695 (in_LEXICAL_5F_MESSAGE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2695.hasCurrentObject ()) {
      result << "\n"
        "static const char * gLexicalMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_2695.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << " = " ;
      result << enumerator_2695.current_mLexicalMessage (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 60)).stringValue () ;
      result << " ;\n" ;
      index_2695_.increment () ;
      enumerator_2695.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//          Syntax error messages, for every terminal symbol                                     \n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_3201_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_3201 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3201.hasCurrentObject ()) {
      result << "\n"
        "//--- Syntax error message for terminal '$" ;
      result << enumerator_3201.current_mTerminalName (HERE).getter_string (HERE).stringValue () ;
      result << "$' :\n"
        "static const char * gSyntaxErrorMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_3201.current_mTerminalName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 69)).stringValue () ;
      result << " = " ;
      result << enumerator_3201.current_mSyntaxErrorMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 69)).stringValue () ;
      result << " ;\n" ;
      index_3201_.increment () ;
      enumerator_3201.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                getMessageForTerminal                                                          \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::getMessageForTerminal (const int16_t inTerminalIndex) const {\n"
    "  C_String result = \"<unknown>\" ;\n"
    "  if ((inTerminalIndex >= 0) && (inTerminalIndex < " ;
  result << in_TERMINAL_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).stringValue () ;
  result << ")) {\n"
    "    static const char * syntaxErrorMessageArray [" ;
  result << in_TERMINAL_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).stringValue () ;
  result << "] = {kEndOfSourceLexicalErrorMessage" ;
  GALGAS_uint index_4183_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_4183 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4183.hasCurrentObject ()) {
      result << ",\n"
        "        gSyntaxErrorMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_4183.current_mTerminalName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 81)).stringValue () ;
      index_4183_.increment () ;
      enumerator_4183.gotoNextObject () ;
    }
  }
  result << "\n"
    "    } ;\n"
    "    result = syntaxErrorMessageArray [inTerminalIndex] ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                      U N I C O D E    S T R I N G S                                           \n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_4772_ (0) ;
  if (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES.isValid ()) {
    cEnumerator_stringset enumerator_4772 (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES, kENUMERATION_UP) ;
    while (enumerator_4772.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_4772.current_key (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 94)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "\n"
          "//--- Unicode string for '$" ;
        result << enumerator_4772.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 95)).stringValue () ;
        result << "$'\n"
          "static const utf32 kUnicodeString_" ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_4772.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 96)).stringValue () ;
        result << " [] = " ;
        result << enumerator_4772.current_key (HERE).getter_utf_33__32_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 96)).stringValue () ;
        result << " ;\n" ;
      }else if (kBoolFalse == test_2) {
      }
      index_4772_.increment () ;
      enumerator_4772.gotoNextObject () ;
    }
  }
  result << "\n" ;
  GALGAS_uint index_5074_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_5074 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_5074.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "//             Key words table '" ;
      result << enumerator_5074.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "'      \n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "static const int32_t ktable_size_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5074.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << " = " ;
      result << enumerator_5074.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 105)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 105)).stringValue () ;
      result << " ;\n"
        "\n"
        "static const C_unicode_lexique_table_entry ktable_for_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5074.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << " [ktable_size_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5074.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_5778_ (0) ;
      if (enumerator_5074.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_5778 (enumerator_5074.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
        while (enumerator_5778.hasCurrentObject ()) {
          result << "  C_unicode_lexique_table_entry (kUnicodeString_" ;
          result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_5778.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 108)).stringValue () ;
          result << ", " ;
          result << enumerator_5778.current_mLength (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 108)).stringValue () ;
          result << ", C_Lexique_" ;
          result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
          result << "::kToken_" ;
          result << enumerator_5778.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 108)).stringValue () ;
          result << ")" ;
          if (enumerator_5778.hasNextObject ()) {
            result << ",\n" ;
          }
          index_5778_.increment () ;
          enumerator_5778.gotoNextObject () ;
        }
      }
      result << "\n"
        "} ;\n"
        "\n"
        "int16_t C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::search_into_" ;
      result << enumerator_5074.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << " (const C_String & inSearchedString) {\n"
        "  return searchInList (inSearchedString, ktable_for_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5074.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << ", ktable_size_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5074.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << ") ;\n"
        "}\n"
        "\n" ;
      index_5074_.increment () ;
      enumerator_5074.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                          getCurrentTokenString                                                \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
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
  GALGAS_uint index_7091_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_7091 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7091.hasCurrentObject ()) {
      result << "    case kToken_" ;
      result << enumerator_7091.current_mTerminalName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 132)).stringValue () ;
      result << ":\n"
        "      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;\n"
        "      s.appendCString (" ;
      result << enumerator_7091.current_mTerminalName (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 134)).stringValue () ;
      result << ") ;\n"
        "      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;\n" ;
      GALGAS_uint index_7419_ (0) ;
      if (enumerator_7091.current_mSentAttributeList (HERE).isValid ()) {
        cEnumerator_lexicalSentValueList enumerator_7419 (enumerator_7091.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
        while (enumerator_7419.hasCurrentObject ()) {
          result << "      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;\n"
            "      s." ;
          result << extensionGetter_appendMethodName (enumerator_7419.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue () ;
          result << " (ptr->mLexicalAttribute_" ;
          result << enumerator_7419.current_mLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue () ;
          result << extensionGetter_appendArgumentOfMethod (enumerator_7419.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue () ;
          result << ") ;\n" ;
          index_7419_.increment () ;
          enumerator_7419.gotoNextObject () ;
        }
      }
      result << "      break ;\n" ;
      index_7091_.increment () ;
      enumerator_7091.gotoNextObject () ;
    }
  }
  result << "    default:\n"
    "      break ;\n"
    "    }\n"
    "  }\n"
    "  return s ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                           Template Delimiters                                                 \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_8300_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (HERE).isValid ()) {
    cEnumerator_templateDelimitorList enumerator_8300 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (HERE), kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_8300 = enumerator_8300.hasCurrentObject () ;
    if (nonEmpty_enumerator_8300) {
      result << "static const cTemplateDelimiter " ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_kTemplateDefinitionArray [" ;
      result << in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 154)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 154)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_8300.hasCurrentObject ()) {
      result << "  cTemplateDelimiter (kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_8300.current_mStartString (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 155)).stringValue () ;
      result << ", " ;
      result << enumerator_8300.current_mStartString (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 155)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 155)).stringValue () ;
      result << ", " ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_8300.current_mEndString (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 156)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "NULL, 0," ;
      }else if (kBoolFalse == test_3) {
        result << "kUnicodeString_" ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_8300.current_mEndString (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).stringValue () ;
        result << ", " ;
        result << enumerator_8300.current_mEndString (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).stringValue () ;
        result << "," ;
      }
      result << " NULL, " ;
      result << enumerator_8300.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 162)).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 162)).stringValue () ;
      result << ")" ;
      if (enumerator_8300.hasNextObject ()) {
        result << ",\n" ;
      }
      index_8300_.increment () ;
      enumerator_8300.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8300) {
      result << "\n"
        "} ;\n" ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                           Template Replacements                                               \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_9294_ (0) ;
  if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
    cEnumerator_templateReplacementListAST enumerator_9294 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_9294 = enumerator_9294.hasCurrentObject () ;
    if (nonEmpty_enumerator_9294) {
      result << "static const cTemplateDelimiter " ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_kTemplateReplacementArray [" ;
      result << in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 173)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 173)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_9294.hasCurrentObject ()) {
      result << "  cTemplateDelimiter (kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9294.current_mMatchString (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 175)).stringValue () ;
      result << ", " ;
      result << enumerator_9294.current_mMatchString (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 175)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 175)).stringValue () ;
      result << ", kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9294.current_mReplacementString (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).stringValue () ;
      result << ", " ;
      result << enumerator_9294.current_mReplacementString (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).stringValue () ;
      result << ", " ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_9294.current_mReplacementFunction (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 177)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "NULL" ;
      }else if (kBoolFalse == test_4) {
        result << "scanner_routine_" ;
        result << enumerator_9294.current_mReplacementFunction (HERE).getter_string (HERE).stringValue () ;
      }
      result << ", true)" ;
      if (enumerator_9294.hasNextObject ()) {
        result << ",\n" ;
      }
      index_9294_.increment () ;
      enumerator_9294.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_9294) {
      result << "\n"
        "} ;\n" ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//            Terminal Symbols as end of script in template mark                                 \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 191)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_uint index_10381_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (HERE).isValid ()) {
      cEnumerator_terminalList enumerator_10381 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (HERE), kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_10381 = enumerator_10381.hasCurrentObject () ;
      if (nonEmpty_enumerator_10381) {
        result << "static const bool " ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << "_kEndOfScriptInTemplateArray [" ;
        result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).stringValue () ;
        result << "] = {\n" ;
      }
      while (enumerator_10381.hasCurrentObject ()) {
        result << "  " ;
        result << enumerator_10381.current_mIsEndOfTemplateMark (HERE).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 194)).stringValue () ;
        result << " /* " ;
        result << enumerator_10381.current_mTerminalName (HERE).getter_string (HERE).stringValue () ;
        result << " */" ;
        if (enumerator_10381.hasNextObject ()) {
          result << ",\n" ;
        }
        index_10381_.increment () ;
        enumerator_10381.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_10381) {
        result << "\n"
          "} ;\n" ;
      }
    }
  }else if (kBoolFalse == test_5) {
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//            Unicode test functions                                                             \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    " \n" ;
  GALGAS_uint index_10889_ (0) ;
  if (in_UNICODE_5F_TEST_5F_FUNCTIONS.isValid ()) {
    cEnumerator_lexicalFunctionListAST enumerator_10889 (in_UNICODE_5F_TEST_5F_FUNCTIONS, kENUMERATION_UP) ;
    while (enumerator_10889.hasCurrentObject ()) {
      result << "bool C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::" ;
      result << enumerator_10889.current_mFunctionName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 206)).stringValue () ;
      result << " (const utf32 inUnicodeCharacter) {\n"
        "  return " ;
      result << callExtensionGetter_generateForUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) enumerator_10889.current_mLexicalExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 207)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_10889_.increment () ;
      enumerator_10889.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//               P A R S E    L E X I C A L    T O K E N                                         \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
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
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 220)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
    result << in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 234)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 234)).stringValue () ;
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
    result << in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 250)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 250)).stringValue () ;
    result << ") ;\n"
      "      if (mMatchedTemplateDelimiterIndex < 0) {\n"
      "        token.mTemplateStringBeforeToken.appendUnicodeCharacter (mCurrentChar COMMA_HERE) ;\n"
      "        advance () ;\n"
      "      }\n"
      "    }\n"
      "    if ((mMatchedTemplateDelimiterIndex >= 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n" ;
    GALGAS_uint index_14177_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_14177 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_14177.hasCurrentObject ()) {
        result << "    token.mLexicalAttribute_" ;
        result << enumerator_14177.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 258)).stringValue () ;
        result << extensionGetter_initialization (enumerator_14177.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 258)).stringValue () ;
        result << " ;\n" ;
        index_14177_.increment () ;
        enumerator_14177.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n"
      "    try{\n" ;
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ()) ;
    }
    GALGAS_uint index_14392_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_14392 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_14392.hasCurrentObject ()) {
        result << callExtensionGetter_generateCode ((const cPtr_abstractLexicalRuleAST *) enumerator_14392.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 265)).stringValue () ;
        index_14392_.increment () ;
        enumerator_14392.gotoNextObject () ;
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
    GALGAS_uint index_15182_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_15182 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_15182.hasCurrentObject ()) {
        result << "    token.mLexicalAttribute_" ;
        result << enumerator_15182.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 285)).stringValue () ;
        result << extensionGetter_initialization (enumerator_15182.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 285)).stringValue () ;
        result << " ;\n" ;
        index_15182_.increment () ;
        enumerator_15182.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n"
      "    try{\n" ;
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ()) ;
    }
    GALGAS_uint index_15397_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_15397 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_15397.hasCurrentObject ()) {
        result << callExtensionGetter_generateCode ((const cPtr_abstractLexicalRuleAST *) enumerator_15397.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 292)).stringValue () ;
        index_15397_.increment () ;
        enumerator_15397.gotoNextObject () ;
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
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                         E N T E R    T O K E N                                                \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
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
    "  // ptr->mIsOptional = ioToken.mIsOptional ;\n"
    "  ptr->mStartLocation = mTokenStartLocation ;\n"
    "  ptr->mEndLocation = mTokenEndLocation ;\n"
    "  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;\n"
    "  ioToken.mTemplateStringBeforeToken = \"\" ;\n" ;
  GALGAS_uint index_17007_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_17007 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_17007.hasCurrentObject ()) {
      result << "  ptr->mLexicalAttribute_" ;
      result << enumerator_17007.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 329)).stringValue () ;
      result << " = ioToken.mLexicalAttribute_" ;
      result << enumerator_17007.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 329)).stringValue () ;
      result << " ;\n" ;
      index_17007_.increment () ;
      enumerator_17007.gotoNextObject () ;
    }
  }
  result << "  enterTokenFromPointer (ptr) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//               A T T R I B U T E   A C C E S S                                                 \n" ;
  GALGAS_uint index_17440_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_17440 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_17440.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n" ;
      result << extensionGetter_cppTypeName (enumerator_17440.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 339)).stringValue () ;
      result << " C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::attributeValue_" ;
      result << enumerator_17440.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 339)).stringValue () ;
      result << " (void) const {\n"
        "  cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " * ptr = (cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentTokenPtr (HERE) ;\n"
        "  return ptr->mLexicalAttribute_" ;
      result << enumerator_17440.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 341)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_17440_.increment () ;
      enumerator_17440.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//         A S S I G N    F R O M    A T T R I B U T E                                           \n" ;
  GALGAS_uint index_18170_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_18170 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_18170.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_l" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_18170.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 349)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 349)).stringValue () ;
      result << " C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::synthetizedAttribute_" ;
      result << enumerator_18170.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 349)).stringValue () ;
      result << " (void) const {\n"
        "  cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " * ptr = (cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentTokenPtr (HERE) ;\n"
        "  macroValidSharedObject (ptr, cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;\n"
        "  GALGAS_" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_18170.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 353)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 353)).stringValue () ;
      result << " value (ptr->mLexicalAttribute_" ;
      result << enumerator_18170.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 353)).stringValue () ;
      result << ") ;\n"
        "  GALGAS_l" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_18170.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 354)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 354)).stringValue () ;
      result << " result (value, currentLocation) ;\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_18170_.increment () ;
      enumerator_18170.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                         I N T R O S P E C T I O N                                             \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_stringlist C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::symbols (LOCATION_ARGS) {\n"
    "  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;\n" ;
  GALGAS_uint index_19636_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (HERE).isValid ()) {
    cEnumerator_terminalList enumerator_19636 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (HERE), kENUMERATION_UP) ;
    while (enumerator_19636.hasCurrentObject ()) {
      result << "  result.addAssign_operation (GALGAS_string (" ;
      result << enumerator_19636.current_mTerminalName (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 365)).stringValue () ;
      result << ") COMMA_THERE) ;\n" ;
      index_19636_.increment () ;
      enumerator_19636.gotoNextObject () ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void getKeywordLists_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (TC_UniqueArray <C_String> & " ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 373)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "/* ioList */" ;
  }else if (kBoolFalse == test_7) {
    result << "ioList" ;
  }
  result << ") {\n" ;
  GALGAS_uint index_20090_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_20090 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_20090.hasCurrentObject ()) {
      result << "  ioList.appendObject (" ;
      result << in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 377)).add_operation (enumerator_20090.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 377)).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 377)).stringValue () ;
      result << ") ;\n" ;
      index_20090_.increment () ;
      enumerator_20090.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void getKeywordsForIdentifier_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const C_String & " ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 383)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "/* inIdentifier */" ;
  }else if (kBoolFalse == test_8) {
    result << "inIdentifier" ;
  }
  result << ",\n"
    "     " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "bool & " ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_9) {
    result << "/* ioFound */" ;
  }else if (kBoolFalse == test_9) {
    result << "ioFound" ;
  }
  result << ",\n"
    "     " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "TC_UniqueArray <C_String> & " ;
  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 385)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_10) {
    result << "/* ioList */" ;
  }else if (kBoolFalse == test_10) {
    result << "ioList" ;
  }
  result << ") {\n" ;
  GALGAS_uint index_20741_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_20741 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_20741.hasCurrentObject ()) {
      result << "  if (inIdentifier == " ;
      result << in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 389)).add_operation (enumerator_20741.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 389)).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 389)).stringValue () ;
      result << ") {\n"
        "    ioFound = true ;\n" ;
      GALGAS_uint index_20891_ (0) ;
      if (enumerator_20741.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_20891 (enumerator_20741.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
        while (enumerator_20891.hasCurrentObject ()) {
          result << "    ioList.appendObject (" ;
          result << enumerator_20891.current_mName (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 392)).stringValue () ;
          result << ") ;\n" ;
          index_20891_.increment () ;
          enumerator_20891.gotoNextObject () ;
        }
      }
      result << "    ioList.sortArrayUsingCompareMethod() ;\n"
        "  }\n" ;
      index_20741_.increment () ;
      enumerator_20741.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
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
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "uint32_t C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::styleIndexForTerminal (const int32_t inTerminalIndex) const {\n"
    "  static const uint32_t kTerminalSymbolStyles [" ;
  result << in_TERMINAL_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 410)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 410)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 410)).stringValue () ;
  result << "] = {0" ;
  GALGAS_uint index_21928_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_21928 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_21928.hasCurrentObject ()) {
      result << ",\n"
        "    " ;
      result << enumerator_21928.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 412)).stringValue () ;
      result << " /* " ;
      result << in_LEXIQUE_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_21928.current_mTerminalName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 412)).stringValue () ;
      result << " */" ;
      index_21928_.increment () ;
      enumerator_21928.gotoNextObject () ;
    }
  }
  result << "\n"
    "  } ;\n"
    "  return (inTerminalIndex >= 0) \? kTerminalSymbolStyles [inTerminalIndex] : 0 ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::styleNameForIndex (const uint32_t inStyleIndex) const {\n"
    "  C_String result ;\n"
    "  if (inStyleIndex < " ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 423)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 423)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 423)).stringValue () ;
  result << ") {\n"
    "    static const char * kStyleArray [" ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 424)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 424)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 424)).stringValue () ;
  result << "] = {\n"
    "      \"\"" ;
  GALGAS_uint index_22798_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_22798 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_22798.hasCurrentObject ()) {
      result << ",\n"
        "      " ;
      result << enumerator_22798.current_mName (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 427)).stringValue () ;
      index_22798_.increment () ;
      enumerator_22798.gotoNextObject () ;
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

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone2'
//
//----------------------------------------------------------------------------------------------------------------------

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
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                    E X T E R N    R O U T I N E S                                             \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_437_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalRoutineMessageMap (HERE).isValid ()) {
    cEnumerator_lexicalRoutineMap enumerator_437 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalRoutineMessageMap (HERE), kENUMERATION_UP) ;
    while (enumerator_437.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_437.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "\n"
          "void scanner_cocoa_routine_" ;
        result << enumerator_437.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "BOOL * ioScanningOk" ;
        GALGAS_uint index_589_ (0) ;
        if (enumerator_437.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          cEnumerator_lexicalRoutineFormalArgumentList enumerator_589 (enumerator_437.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
          while (enumerator_589.hasCurrentObject ()) {
            result << ",\n"
              "                " ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << extensionGetter_cppConstInFormalArgument (enumerator_589.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 14)).stringValue () ;
            result << extensionGetter_cocoaTypeName (enumerator_589.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 15)).stringValue () ;
            result << extensionGetter_cocoaPointerInFormalArgument (enumerator_589.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 16)).stringValue () ;
            result << " " ;
            result << enumerator_589.current_mArgumentNameForComment (HERE).stringValue () ;
            index_589_.increment () ;
            enumerator_589.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_437_.increment () ;
      enumerator_437.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                    E X T E R N    F U N C T I O N S                                           \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_1341_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalFunctionMap (HERE).isValid ()) {
    cEnumerator_lexicalFunctionMap enumerator_1341 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalFunctionMap (HERE), kENUMERATION_UP) ;
    while (enumerator_1341.hasCurrentObject ()) {
      const enumGalgasBool test_1 = enumerator_1341.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "\n" ;
        result << extensionGetter_cppTypeName (enumerator_1341.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 31)).stringValue () ;
        result << " scanner_cocoa_function_" ;
        result << enumerator_1341.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "BOOL * ioScanningOk" ;
        GALGAS_uint index_1510_ (0) ;
        if (enumerator_1341.current_mLexicalTypeList (HERE).isValid ()) {
          cEnumerator_lexicalFunctionFormalArgumentList enumerator_1510 (enumerator_1341.current_mLexicalTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1510.hasCurrentObject ()) {
            result << ",\n"
              "                " ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << "const " ;
            result << extensionGetter_cppTypeName (enumerator_1510.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 33)).stringValue () ;
            result << " " ;
            result << enumerator_1510.current_mArgumentNameForComment (HERE).stringValue () ;
            index_1510_.increment () ;
            enumerator_1510.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_1341_.increment () ;
      enumerator_1341.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N                               \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "enum {" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << "_1_" ;
  GALGAS_uint index_2080_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (HERE).isValid ()) {
    cEnumerator_terminalList enumerator_2080 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (HERE), kENUMERATION_UP) ;
    while (enumerator_2080.hasCurrentObject ()) {
      result << ",\n"
        "  " ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_2080.current_mTerminalName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 48)).stringValue () ;
      index_2080_.increment () ;
      enumerator_2080.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//        U N I C O D E    T E S T    F U N C T I O N S                                          \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_2575_ (0) ;
  if (in_UNICODE_5F_TEST_5F_FUNCTIONS.isValid ()) {
    cEnumerator_lexicalFunctionListAST enumerator_2575 (in_UNICODE_5F_TEST_5F_FUNCTIONS, kENUMERATION_UP) ;
    while (enumerator_2575.hasCurrentObject ()) {
      result << "bool " ;
      result << enumerator_2575.current_mFunctionName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 60)).stringValue () ;
      result << " (const utf32 inUnicodeCharacter) ;\n"
        "\n" ;
      index_2575_.increment () ;
      enumerator_2575.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                     S C A N N E R    C L A S S                                                \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "@interface OC_Lexique_" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << " : OC_Lexique {\n"
    "//--- Attributes\n" ;
  GALGAS_uint index_3158_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (HERE).isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_3158 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (HERE), kENUMERATION_UP) ;
    while (enumerator_3158.hasCurrentObject ()) {
      result << "  @private " ;
      result << extensionGetter_cocoaTypeName (enumerator_3158.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 72)).stringValue () ;
      result << " mLexicalAttribute_" ;
      result << enumerator_3158.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << " ;\n" ;
      index_3158_.increment () ;
      enumerator_3158.gotoNextObject () ;
    }
  }
  result << "\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone3'
//
//----------------------------------------------------------------------------------------------------------------------

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
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates cocoaImplementationZone2'
//
//----------------------------------------------------------------------------------------------------------------------

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
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//            Unicode test functions                                                             \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    " \n" ;
  GALGAS_uint index_440_ (0) ;
  if (in_UNICODE_5F_TEST_5F_FUNCTIONS.isValid ()) {
    cEnumerator_lexicalFunctionListAST enumerator_440 (in_UNICODE_5F_TEST_5F_FUNCTIONS, kENUMERATION_UP) ;
    while (enumerator_440.hasCurrentObject ()) {
      result << "bool " ;
      result << enumerator_440.current_mFunctionName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 10)).stringValue () ;
      result << " (const utf32 inUnicodeCharacter) {\n"
        "  return " ;
      result << callExtensionGetter_generateForUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) enumerator_440.current_mLexicalExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 11)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_440_.increment () ;
      enumerator_440.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "@implementation OC_Lexique_" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                           Template Replacements                                               \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
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
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                           Template Delimiters                                                 \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (HERE).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 34)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "static NSArray * kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 35)).stringValue () ;
    result << " ;\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (instancetype) init {\n"
    "  self = [super init] ;\n"
    "  if (self) {\n"
    "    noteObjectAllocation (self) ;\n" ;
  GALGAS_uint index_2089_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_2089 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2089.hasCurrentObject ()) {
      result << "    mLexicalAttribute_" ;
      result << enumerator_2089.current_lkey (HERE).getter_string (HERE).stringValue () ;
      result << " = " ;
      result << extensionGetter_cocoaInitializationCode (enumerator_2089.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 45)).stringValue () ;
      result << " ;\n" ;
      index_2089_.increment () ;
      enumerator_2089.gotoNextObject () ;
    }
  }
  result << "  }\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (HERE).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 48)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "  if (nil == kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 49)).stringValue () ;
    result << ") {\n"
      "    kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 50)).stringValue () ;
    result << " = [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_2532_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (HERE).isValid ()) {
      cEnumerator_templateDelimitorList enumerator_2532 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (HERE), kENUMERATION_UP) ;
      while (enumerator_2532.hasCurrentObject ()) {
        result << "      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@" ;
        result << enumerator_2532.current_mStartString (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 52)).stringValue () ;
        result << " endString:" ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2532.current_mEndString (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 53)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          result << "nil" ;
        }else if (kBoolFalse == test_3) {
          result << "@" ;
          result << enumerator_2532.current_mEndString (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 56)).stringValue () ;
        }
        result << " discardStartString:" ;
        result << enumerator_2532.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 59)).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 59)).stringValue () ;
        result << "],\n" ;
        index_2532_.increment () ;
        enumerator_2532.gotoNextObject () ;
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
    GALGAS_uint index_3207_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_3207 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_3207.hasCurrentObject ()) {
        result << "      @" ;
        result << enumerator_3207.current_mMatchString (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 70)).stringValue () ;
        result << ", " ;
        index_3207_.increment () ;
        enumerator_3207.gotoNextObject () ;
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
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (void) dealloc {\n"
    "  noteObjectDeallocation (self) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                 I N D E X I N G    D I R E C T O R Y                                          \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSString *) indexingDirectory {\n"
    "  return @" ;
  result << in_INDEXING_5F_DIRECTORY.getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 92)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                 I N D E X I N G    T I T L E S                                                \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSArray *) indexingTitles { // Array of NSString\n" ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_INDEXING_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 103)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "  return [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_4453_ (0) ;
    if (in_INDEXING_5F_LIST.isValid ()) {
      cEnumerator_indexingListAST enumerator_4453 (in_INDEXING_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4453.hasCurrentObject ()) {
        result << "    @" ;
        result << enumerator_4453.current_mIndexComment (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 107)).stringValue () ;
        result << ",\n" ;
        index_4453_.increment () ;
        enumerator_4453.gotoNextObject () ;
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
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//            Terminal Symbols as end of script in template mark                                 \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 124)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_uint index_5205_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (HERE).isValid ()) {
      cEnumerator_terminalList enumerator_5205 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (HERE), kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_5205 = enumerator_5205.hasCurrentObject () ;
      if (nonEmpty_enumerator_5205) {
        result << "static const BOOL kEndOfScriptInTemplateArray_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 126)).stringValue () ;
        result << " [" ;
        result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (HERE).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 126)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 126)).stringValue () ;
        result << "] = {\n" ;
      }
      while (enumerator_5205.hasCurrentObject ()) {
        result << "  " ;
        result << enumerator_5205.current_mIsEndOfTemplateMark (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 127)).stringValue () ;
        result << " /* " ;
        result << enumerator_5205.current_mTerminalName (HERE).getter_string (HERE).stringValue () ;
        result << " */" ;
        if (enumerator_5205.hasNextObject ()) {
          result << ",\n" ;
        }
        index_5205_.increment () ;
        enumerator_5205.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_5205) {
        result << "\n"
          "} ;\n" ;
      }
    }
  }else if (kBoolFalse == test_6) {
  }
  result << "\n"
    "\n" ;
  GALGAS_uint index_5409_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalTokenListMap (HERE).isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_5409 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalTokenListMap (HERE), kENUMERATION_UP) ;
    while (enumerator_5409.hasCurrentObject ()) {
      const enumGalgasBool test_7 = enumerator_5409.current_mShouldBeGenerated (HERE).boolEnum () ;
      if (kBoolTrue == test_7) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "//\n"
          "//             Key words table '" ;
        result << enumerator_5409.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << "'      \n"
          "//\n"
          "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "static const C_cocoa_lexique_table_entry ktable_for_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 142)).stringValue () ;
        result << "_" ;
        result << enumerator_5409.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << " [" ;
        result << enumerator_5409.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 142)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 142)).stringValue () ;
        result << "] = {\n" ;
        GALGAS_uint index_6064_ (0) ;
        if (enumerator_5409.current_mTokenSortedList (HERE).isValid ()) {
          cEnumerator_tokenSortedlist enumerator_6064 (enumerator_5409.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
          while (enumerator_6064.hasCurrentObject ()) {
            result << "  {" ;
            result << enumerator_6064.current_mName (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 144)).stringValue () ;
            result << ", " ;
            result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
            result << "_1_" ;
            result << enumerator_6064.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 144)).stringValue () ;
            result << "}" ;
            if (enumerator_6064.hasNextObject ()) {
              result << ",\n" ;
            }
            index_6064_.increment () ;
            enumerator_6064.gotoNextObject () ;
          }
        }
        result << "\n"
          "} ;\n"
          "\n"
          "static NSInteger search_into_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).stringValue () ;
        result << "_" ;
        result << enumerator_5409.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << " (NSString * inSearchedString) {\n"
          "  return searchStringInTable (inSearchedString, ktable_for_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 149)).stringValue () ;
        result << "_" ;
        result << enumerator_5409.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << ", " ;
        result << enumerator_5409.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 149)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 149)).stringValue () ;
        result << ") ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_7) {
      }
      index_5409_.increment () ;
      enumerator_5409.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//               P A R S E    L E X I C A L    T O K E N                                         \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (void) parseLexicalTokenForLexicalColoring {\n"
    "  mLoop = YES ;\n"
    "  BOOL scanningOk = YES ;\n"
    "  mTokenCode = 0 ;\n"
    "  while ((mTokenCode == 0) && (mCurrentChar != '\\0')) {\n"
    "    mTokenStartLocation = mCurrentLocation ;\n" ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 167)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 168)).stringValue () ;
    result << " objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {\n"
      "      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 169)).stringValue () ;
    result << " objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;\n"
      "      if (foundEndDelimitor) {\n"
      "        mMatchedTemplateDelimiterIndex = -1 ;\n"
      "      }\n"
      "    }\n"
      "    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\\0')) {\n"
      "      " ;
    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 175)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      result << "\n"
        "      [self searchForReplacementPattern:kTemplateReplacementArray_" ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 176)).stringValue () ;
      result << "] ;\n"
        "      " ;
    }else if (kBoolFalse == test_9) {
    }
    result << "\n"
      "      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 178)).stringValue () ;
    result << "] ;\n"
      "      if (mMatchedTemplateDelimiterIndex < 0) {\n"
      "        [self advance] ;\n"
      "        mTokenCode = -2 ;\n"
      "      }\n"
      "    }\n"
      "    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\\0') && scanningOk) {\n" ;
    GALGAS_uint index_8400_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_8400 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_8400.hasCurrentObject ()) {
        result << "      " ;
        result << extensionGetter_cocoaResetPrefix (enumerator_8400.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 186)).stringValue () ;
        result << "mLexicalAttribute_" ;
        result << enumerator_8400.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << extensionGetter_cocoaReset (enumerator_8400.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 186)).stringValue () ;
        result << " ;\n" ;
        index_8400_.increment () ;
        enumerator_8400.gotoNextObject () ;
      }
    }
    result << "      mTokenStartLocation = mCurrentLocation ;\n" ;
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ()) ;
    }
    GALGAS_uint index_8614_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_8614 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_8614.hasCurrentObject ()) {
        result << callExtensionGetter_generateCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_8614.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 192)).stringValue () ;
        index_8614_.increment () ;
        enumerator_8614.gotoNextObject () ;
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
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 201)).stringValue () ;
    result << " [mTokenCode - 1]) {\n"
      "      mMatchedTemplateDelimiterIndex = -1 ;\n"
      "    }\n"
      "  //--- Error \?\n"
      "    if (! scanningOk) {\n"
      "      mTokenCode = -1 ;\n"
      "      [self advance] ;\n"
      "    }" ;
  }else if (kBoolFalse == test_8) {
    GALGAS_uint index_9235_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_9235 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_9235.hasCurrentObject ()) {
        result << "    " ;
        result << extensionGetter_cocoaResetPrefix (enumerator_9235.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 210)).stringValue () ;
        result << "mLexicalAttribute_" ;
        result << enumerator_9235.current_lkey (HERE).getter_string (HERE).stringValue () ;
        result << extensionGetter_cocoaReset (enumerator_9235.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 210)).stringValue () ;
        result << " ;\n" ;
        index_9235_.increment () ;
        enumerator_9235.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n" ;
    if (GALGAS_uint ((uint32_t) 4U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 4U).uintValue ()) ;
    }
    GALGAS_uint index_9445_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_9445 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_9445.hasCurrentObject ()) {
        result << callExtensionGetter_generateCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_9445.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 216)).stringValue () ;
        index_9445_.increment () ;
        enumerator_9445.gotoNextObject () ;
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
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                   T E R M I N A L    C O U N T                                                \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSUInteger) terminalVocabularyCount {\n"
    "  return " ;
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (HERE).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 239)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 239)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                     S T Y L E   C O U N T                                                     \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSUInteger) styleCount {\n"
    "  return " ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 249)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 249)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 249)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                I S    T E M P L A T E    L E X I Q U E                                        \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (BOOL) isTemplateLexique {\n"
    "  return " ;
  result << GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 259)).objectCompare (GALGAS_uint ((uint32_t) 0U))).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 259)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {\n"
    "  static const NSUInteger kTerminalSymbolStyles [" ;
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (HERE).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 269)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 269)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 269)).stringValue () ;
  result << "] = {0" ;
  GALGAS_uint index_11765_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (HERE).isValid ()) {
    cEnumerator_terminalList enumerator_11765 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (HERE), kENUMERATION_UP) ;
    while (enumerator_11765.hasCurrentObject ()) {
      result << ",\n"
        "    " ;
      result << enumerator_11765.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).stringValue () ;
      result << " /* " ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_11765.current_mTerminalName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).stringValue () ;
      result << " */" ;
      index_11765_.increment () ;
      enumerator_11765.gotoNextObject () ;
    }
  }
  result << "\n"
    "  } ;\n"
    "  return kTerminalSymbolStyles [inTerminal] ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L                                \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {\n"
    "  static const BOOL kTerminalAtomicSelection [" ;
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (HERE).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 283)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 283)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 283)).stringValue () ;
  result << "] = {NO" ;
  GALGAS_uint index_12521_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (HERE).isValid ()) {
    cEnumerator_terminalList enumerator_12521 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (HERE), kENUMERATION_UP) ;
    while (enumerator_12521.hasCurrentObject ()) {
      result << ",\n"
        "    " ;
      result << enumerator_12521.current_mAtomicSelection (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 285)).stringValue () ;
      result << " /* " ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_12521.current_mTerminalName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 285)).stringValue () ;
      result << " */" ;
      index_12521_.increment () ;
      enumerator_12521.gotoNextObject () ;
    }
  }
  result << "\n"
    "  } ;\n"
    "  return kTerminalAtomicSelection [inTokenIndex] ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//             S T Y L E   N A M E    F O R    I N D E X                                         \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex {\n"
    "  NSString * result = nil ;\n"
    "  if ((inIndex >= 0) && (inIndex < " ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 298)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 298)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 298)).stringValue () ;
  result << ")) {\n"
    "    NSString * kStyleArray [" ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 299)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 299)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 299)).stringValue () ;
  result << "] = {\n"
    "      @\"Default Style\"" ;
  GALGAS_uint index_13362_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_13362 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13362.hasCurrentObject ()) {
      result << ",\n"
        "      @" ;
      result << enumerator_13362.current_mComment (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 302)).stringValue () ;
      index_13362_.increment () ;
      enumerator_13362.gotoNextObject () ;
    }
  }
  result << "\n"
    "    } ;\n"
    "    result = kStyleArray [inIndex] ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//         S T Y L E   I D E N T I F I E R    F O R    I N D E X                                 \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex {\n"
    "  NSString * result = nil ;\n"
    "  if ((inIndex >= 0) && (inIndex < " ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 317)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 317)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 317)).stringValue () ;
  result << ")) {\n"
    "    NSString * kStyleArray [" ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 318)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 318)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 318)).stringValue () ;
  result << "] = {\n"
    "      @\"" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << "\"" ;
  GALGAS_uint index_14156_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_14156 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14156.hasCurrentObject ()) {
      result << ",\n"
        "      @\"" ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "-" ;
      result << enumerator_14156.current_mName (HERE).getter_string (HERE).stringValue () ;
      result << "\"" ;
      index_14156_.increment () ;
      enumerator_14156.gotoNextObject () ;
    }
  }
  result << "\n"
    "    } ;\n"
    "    result = kStyleArray [inIndex] ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//         L E X I Q U E   I D E N T I F I E R                                                   \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSString *) lexiqueIdentifier {\n"
    "  return @\"" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << "\" ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "@end\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_optionComponentDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                   GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                   GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                   GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                   GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                   GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  const GALGAS_optionComponentDeclarationAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("optionCompilation.galgas", 104)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionComponentDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                                extensionMethod_optionComponentDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_optionComponentDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_optionComponentDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                  const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  GALGAS_commandLineOptionMap var_boolOptionMap_4786 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 117)) ;
  GALGAS_commandLineOptionMap var_uintOptionMap_4833 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 118)) ;
  GALGAS_commandLineOptionMap var_stringOptionMap_4882 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 119)) ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_4935 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 120)) ;
  GALGAS_stringset var_optionNameSet_4960 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("optionCompilation.galgas", 121)) ;
  const GALGAS_optionComponentDeclarationAST temp_0 = object ;
  cEnumerator_commandLineOptionListAST enumerator_5132 (temp_0.getter_mOptions (HERE), kENUMERATION_UP) ;
  while (enumerator_5132.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_optionNameSet_4960.getter_hasKey (enumerator_5132.current_mOptionInternalName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("optionCompilation.galgas", 123)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5132.current_mOptionInternalName (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (enumerator_5132.current_mOptionInternalName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 124)).add_operation (GALGAS_string ("' command line option has been already declared"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 124)), fixItArray2  COMMA_SOURCE_FILE ("optionCompilation.galgas", 124)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, enumerator_5132.current_mOptionTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          var_boolOptionMap_4786.setter_insertKey (enumerator_5132.current_mOptionInternalName (HERE), enumerator_5132.current_mOptionInvocationLetter (HERE).getter_char (HERE), enumerator_5132.current_mOptionInvocationString (HERE).getter_string (HERE), enumerator_5132.current_mOptionComment (HERE).getter_string (HERE), GALGAS_string ("false"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 126)) ;
          }
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsNotEqual, enumerator_5132.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 133)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (enumerator_5132.current_mOptionDefaultValue (HERE).getter_location (HERE), GALGAS_string ("an @bool option cannot have a default value (default value is always false)"), fixItArray5  COMMA_SOURCE_FILE ("optionCompilation.galgas", 134)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsEqual, enumerator_5132.current_mOptionTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            {
            GALGAS_string temp_7 ;
            const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_5132.current_mOptionDefaultValue (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_8) {
              temp_7 = GALGAS_string ("0") ;
            }else if (kBoolFalse == test_8) {
              temp_7 = enumerator_5132.current_mOptionDefaultValue (HERE).getter_string (HERE) ;
            }
            var_uintOptionMap_4833.setter_insertKey (enumerator_5132.current_mOptionInternalName (HERE), enumerator_5132.current_mOptionInvocationLetter (HERE).getter_char (HERE), enumerator_5132.current_mOptionInvocationString (HERE).getter_string (HERE), enumerator_5132.current_mOptionComment (HERE).getter_string (HERE), temp_7, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 137)) ;
            }
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsEqual, enumerator_5132.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 144)))).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_5132.current_mOptionDefaultValue (HERE).getter_location (HERE), GALGAS_string ("an @uint option default value cannot be an @string value"), fixItArray10  COMMA_SOURCE_FILE ("optionCompilation.galgas", 145)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = GALGAS_bool (kIsEqual, enumerator_5132.current_mOptionTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("string"))).boolEnum () ;
            if (kBoolTrue == test_11) {
              {
              var_stringOptionMap_4882.setter_insertKey (enumerator_5132.current_mOptionInternalName (HERE), enumerator_5132.current_mOptionInvocationLetter (HERE).getter_char (HERE), enumerator_5132.current_mOptionInvocationString (HERE).getter_string (HERE), enumerator_5132.current_mOptionComment (HERE).getter_string (HERE), enumerator_5132.current_mOptionDefaultValue (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 148)) ;
              }
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (kIsEqual, enumerator_5132.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 155)))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  TC_Array <C_FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (enumerator_5132.current_mOptionDefaultValue (HERE).getter_location (HERE), GALGAS_string ("an @string option default value cannot be an @uint value"), fixItArray13  COMMA_SOURCE_FILE ("optionCompilation.galgas", 156)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_11) {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              test_14 = GALGAS_bool (kIsEqual, enumerator_5132.current_mOptionTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("stringlist"))).boolEnum () ;
              if (kBoolTrue == test_14) {
                {
                var_stringListOptionMap_4935.setter_insertKey (enumerator_5132.current_mOptionInternalName (HERE), enumerator_5132.current_mOptionInvocationLetter (HERE).getter_char (HERE), enumerator_5132.current_mOptionInvocationString (HERE).getter_string (HERE), enumerator_5132.current_mOptionComment (HERE).getter_string (HERE), enumerator_5132.current_mOptionDefaultValue (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 159)) ;
                }
                enumGalgasBool test_15 = kBoolTrue ;
                if (kBoolTrue == test_15) {
                  test_15 = GALGAS_bool (kIsNotEqual, enumerator_5132.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 166)))).boolEnum () ;
                  if (kBoolTrue == test_15) {
                    TC_Array <C_FixItDescription> fixItArray16 ;
                    inCompiler->emitSemanticError (enumerator_5132.current_mOptionDefaultValue (HERE).getter_location (HERE), GALGAS_string ("an @stringlist option cannot accept default value"), fixItArray16  COMMA_SOURCE_FILE ("optionCompilation.galgas", 167)) ;
                  }
                }
              }
            }
            if (kBoolFalse == test_14) {
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (enumerator_5132.current_mOptionTypeName (HERE).getter_location (HERE), GALGAS_string ("only the @bool, @uint or @string types are allowed here"), fixItArray17  COMMA_SOURCE_FILE ("optionCompilation.galgas", 170)) ;
            }
          }
        }
      }
    }
    var_optionNameSet_4960.addAssign_operation (enumerator_5132.current_mOptionInternalName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas", 172)) ;
    enumerator_5132.gotoNextObject () ;
  }
  {
  const GALGAS_optionComponentDeclarationAST temp_18 = object ;
  const GALGAS_optionComponentDeclarationAST temp_19 = object ;
  ioArgument_ioSemanticContext.mProperty_mOptionComponentMapForSemanticAnalysis.setter_insertKey (temp_18.getter_mOptionComponentName (HERE), temp_19.getter_mIsPredefined (HERE), var_boolOptionMap_4786, var_uintOptionMap_4833, var_stringOptionMap_4882, var_stringListOptionMap_4935, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 175)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionComponentDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                               extensionMethod_optionComponentDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_enterInSemanticContext (defineExtensionMethod_optionComponentDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_optionComponentDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                            const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                            const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                            GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  const GALGAS_optionComponentDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_8295 = function_optionNameForUsefulEntitiesGraph (temp_0.getter_mOptionComponentName (HERE), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 198)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8295, var_nameForUsefulness_8295, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 199)) ;
  }
  GALGAS_bool var_isPredefined_8567 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_8612 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_8657 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_8704 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_8755 ;
  const GALGAS_optionComponentDeclarationAST temp_1 = object ;
  constinArgument_inSemanticContext.getter_mOptionComponentMapForSemanticAnalysis (HERE).method_searchKey (temp_1.getter_mOptionComponentName (HERE), var_isPredefined_8567, var_boolOptionMap_8612, var_uintOptionMap_8657, var_stringOptionMap_8704, var_stringListOptionMap_8755, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 201)) ;
  const GALGAS_optionComponentDeclarationAST temp_2 = object ;
  const GALGAS_optionComponentDeclarationAST temp_3 = object ;
  const GALGAS_optionComponentDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("option ").add_operation (temp_2.getter_mOptionComponentName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 211)), GALGAS_optionComponentForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("option-").add_operation (temp_3.getter_mOptionComponentName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 214)), var_isPredefined_8567, temp_4.getter_mOptionComponentName (HERE).getter_string (HERE), var_boolOptionMap_8612, var_uintOptionMap_8657, var_stringOptionMap_8704, var_stringListOptionMap_8755  COMMA_SOURCE_FILE ("optionCompilation.galgas", 212))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 210)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionComponentDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                         extensionMethod_optionComponentDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_semanticAnalysis (defineExtensionMethod_optionComponentDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentForGeneration isPredefined'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_optionComponentForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  const GALGAS_optionComponentForGeneration temp_0 = object ;
  result_result = temp_0.getter_mIsPredefined (HERE) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_optionComponentForGeneration_isPredefined (void) {
  enterExtensionGetter_isPredefined (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                     extensionGetter_optionComponentForGeneration_isPredefined) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_optionComponentForGeneration_isPredefined (defineExtensionGetter_optionComponentForGeneration_isPredefined, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_optionComponentForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  const GALGAS_optionComponentForGeneration temp_0 = object ;
  GALGAS_headerKind temp_1 ;
  const enumGalgasBool test_2 = temp_0.getter_mIsPredefined (HERE).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("optionCompilation.galgas", 246)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("optionCompilation.galgas", 246)) ;
  }
  result_result = temp_1 ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_optionComponentForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                   extensionGetter_optionComponentForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_optionComponentForGeneration_headerKind (defineExtensionGetter_optionComponentForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_optionComponentForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionComponentForGeneration temp_1 = object ;
    test_0 = temp_1.getter_mIsPredefined (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outHeader = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_optionComponentForGeneration temp_2 = object ;
    const GALGAS_optionComponentForGeneration temp_3 = object ;
    const GALGAS_optionComponentForGeneration temp_4 = object ;
    const GALGAS_optionComponentForGeneration temp_5 = object ;
    const GALGAS_optionComponentForGeneration temp_6 = object ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (inCompiler, temp_2.getter_mOptionComponentName (HERE), temp_3.getter_mBoolOptionMap (HERE), temp_4.getter_mUIntOptionMap (HERE), temp_5.getter_mStringOptionMap (HERE), temp_6.getter_mStringListOptionMap (HERE) COMMA_SOURCE_FILE ("optionCompilation.galgas", 258))) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionComponentForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                              extensionMethod_optionComponentForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendDeclaration_31_ (defineExtensionMethod_optionComponentForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_optionComponentForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionComponentForGeneration temp_1 = object ;
    test_0 = temp_1.getter_mIsPredefined (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outImplementation = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_optionComponentForGeneration temp_2 = object ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.getter_mOptionComponentName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 278))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 278)) ;
    const GALGAS_optionComponentForGeneration temp_3 = object ;
    const GALGAS_optionComponentForGeneration temp_4 = object ;
    const GALGAS_optionComponentForGeneration temp_5 = object ;
    const GALGAS_optionComponentForGeneration temp_6 = object ;
    const GALGAS_optionComponentForGeneration temp_7 = object ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (inCompiler, temp_3.getter_mOptionComponentName (HERE), temp_4.getter_mBoolOptionMap (HERE), temp_5.getter_mUIntOptionMap (HERE), temp_6.getter_mStringOptionMap (HERE), temp_7.getter_mStringListOptionMap (HERE) COMMA_SOURCE_FILE ("optionCompilation.galgas", 279))) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionComponentForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                                     extensionMethod_optionComponentForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendSpecificImplementation (defineExtensionMethod_optionComponentForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentForGeneration appendSpecificFiles'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_optionComponentForGeneration_appendSpecificFiles (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              const GALGAS_string constinArgument_inProductDirectory,
                                                                              GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                              GALGAS_stringlist & ioArgument_ioCocoaProductFileList,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("optionCompilation.galgas", 297)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      const GALGAS_optionComponentForGeneration temp_2 = object ;
      test_1 = temp_2.getter_mIsPredefined (HERE).operator_not (SOURCE_FILE ("optionCompilation.galgas", 297)) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionComponentForGeneration temp_3 = object ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_3.getter_mOptionComponentName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 298)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 298))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 298)) ;
      {
      const GALGAS_optionComponentForGeneration temp_4 = object ;
      const GALGAS_optionComponentForGeneration temp_5 = object ;
      const GALGAS_optionComponentForGeneration temp_6 = object ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_4.getter_mOptionComponentName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 301)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 301)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (inCompiler, temp_5.getter_mOptionComponentName (HERE) COMMA_SOURCE_FILE ("optionCompilation.galgas", 305))), GALGAS_string ("\n"
        "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (inCompiler, temp_6.getter_mOptionComponentName (HERE) COMMA_SOURCE_FILE ("optionCompilation.galgas", 309))), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 299)) ;
      }
      const GALGAS_optionComponentForGeneration temp_7 = object ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_7.getter_mOptionComponentName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 315)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 315))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 315)) ;
      const GALGAS_optionComponentForGeneration temp_8 = object ;
      ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("option-").add_operation (temp_8.getter_mOptionComponentName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 316)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 316))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 316)) ;
      {
      const GALGAS_optionComponentForGeneration temp_9 = object ;
      const GALGAS_optionComponentForGeneration temp_10 = object ;
      const GALGAS_optionComponentForGeneration temp_11 = object ;
      const GALGAS_optionComponentForGeneration temp_12 = object ;
      const GALGAS_optionComponentForGeneration temp_13 = object ;
      const GALGAS_optionComponentForGeneration temp_14 = object ;
      const GALGAS_optionComponentForGeneration temp_15 = object ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_9.getter_mOptionComponentName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 319)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 319)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (inCompiler, GALGAS_string ("option-").add_operation (temp_10.getter_mOptionComponentName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 324)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 324)), temp_11.getter_mOptionComponentName (HERE), temp_12.getter_mBoolOptionMap (HERE), temp_13.getter_mUIntOptionMap (HERE), temp_14.getter_mStringOptionMap (HERE), temp_15.getter_mStringListOptionMap (HERE) COMMA_SOURCE_FILE ("optionCompilation.galgas", 323))), GALGAS_string ("\n"
        "\n"), GALGAS_string ("\n"
        "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 317)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionComponentForGeneration_appendSpecificFiles (void) {
  enterExtensionMethod_appendSpecificFiles (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                            extensionMethod_optionComponentForGeneration_appendSpecificFiles) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendSpecificFiles (defineExtensionMethod_optionComponentForGeneration_appendSpecificFiles, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'optionGenerationTemplates'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_optionGenerationTemplates_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_optionGenerationTemplates_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_optionGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_optionGenerationTemplates_0,
  0,
  gWrapperAllDirectories_optionGenerationTemplates_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderZone3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (C_Compiler * /* inCompiler */,
                                                                                  const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                  const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                               Bool options                                                    \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_376_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_376 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_376.hasCurrentObject ()) {
      result << "extern C_BoolCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue () ;
      result << "_" ;
      result << enumerator_376.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_376_.increment () ;
      enumerator_376.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                               UInt options                                                    \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_894_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_894 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_894.hasCurrentObject ()) {
      result << "extern C_UIntCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue () ;
      result << "_" ;
      result << enumerator_894.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_894_.increment () ;
      enumerator_894.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                              String options                                                   \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_1414_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1414 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1414.hasCurrentObject ()) {
      result << "extern C_StringCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue () ;
      result << "_" ;
      result << enumerator_1414.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_1414_.increment () ;
      enumerator_1414.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                              String List options                                              \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_1941_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1941 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1941.hasCurrentObject ()) {
      result << "extern C_StringListCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue () ;
      result << "_" ;
      result << enumerator_1941.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_1941_.increment () ;
      enumerator_1941.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (C_Compiler * /* inCompiler */,
                                                                                            const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                            const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                               Bool options                                                    \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_375_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_375 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_375.hasCurrentObject ()) {
      result << "C_BoolCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue () ;
      result << "_" ;
      result << enumerator_375.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_375.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 9)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_375.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_375.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 11)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_375.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 12)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_375_.increment () ;
      enumerator_375.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                               UInt options                                                    \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_1238_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1238 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1238.hasCurrentObject ()) {
      result << "C_UIntCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue () ;
      result << "_" ;
      result << enumerator_1238.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_1238.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 22)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1238.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1238.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 24)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1238.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 25)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1238.current_mDefaultValue (HERE).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_1238_.increment () ;
      enumerator_1238.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                              String options                                                   \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_2168_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2168 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2168.hasCurrentObject ()) {
      result << "C_StringCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue () ;
      result << "_" ;
      result << enumerator_2168.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_2168.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 36)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2168.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2168.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 38)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2168.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 39)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2168.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 40)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_2168_.increment () ;
      enumerator_2168.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                              String List options                                              \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_3126_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_3126 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_3126.hasCurrentObject ()) {
      result << "C_StringListCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue () ;
      result << "_" ;
      result << enumerator_3126.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_3126.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 50)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_3126.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_3126.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 52)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_3126.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 53)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_3126_.increment () ;
      enumerator_3126.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (C_Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#ifndef " ;
  result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
  result << "_FOR_COCOA_DEFINED\n"
    "#define " ;
  result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
  result << "_FOR_COCOA_DEFINED\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#import <Cocoa/Cocoa.h>\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (C_Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterOptionsFor_" ;
  result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-cocoa-zone3.galgasTemplate", 4)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "NSMutableArray * ioBoolOptionArray,\n"
    "          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "NSMutableArray * ioUIntOptionArray,\n"
    "          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "NSMutableArray * ioStringOptionArray,\n"
    "          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "NSMutableArray * ioStringListOptionArray) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#endif\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationCocoa'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & in_OPTION_5F_HEADER_5F_FILE_5F_NAME,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                       const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                       const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                       const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                       const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#import \"" ;
  result << in_OPTION_5F_HEADER_5F_FILE_5F_NAME.stringValue () ;
  result << ".h\"\n"
    "#import \"OC_GGS_CommandLineOption.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterOptionsFor_" ;
  result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 8)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "NSMutableArray * ioBoolOptionArray,\n"
    "           " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "NSMutableArray * ioUIntOptionArray,\n"
    "           " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "NSMutableArray * ioStringOptionArray,\n"
    "           " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "NSMutableArray * ioStringListOptionArray) {\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_BOOL_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_UINT_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_STRING_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_STRING_5F_LIST_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "  OC_GGS_CommandLineOption * option ;\n" ;
  }else if (kBoolFalse == test_0) {
  }
  GALGAS_uint index_799_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_799 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_799.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 17)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_799.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 18)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_799.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_799.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 20)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_799.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 21)).stringValue () ;
      result << "\n"
        "    defaultValue:@\"\"\n"
        "  ] ;\n"
        "  [ioBoolOptionArray addObject:option] ;\n" ;
      index_799_.increment () ;
      enumerator_799.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1264_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1264 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1264.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 28)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_1264.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 29)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_1264.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_1264.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 31)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_1264.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 32)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_1264.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 33)).stringValue () ;
      result << "\n"
        "  ] ;\n"
        "  [ioUIntOptionArray addObject:option] ;\n" ;
      index_1264_.increment () ;
      enumerator_1264.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1766_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1766 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1766.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 39)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_1766.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 40)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_1766.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_1766.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 42)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_1766.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 43)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_1766.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 44)).stringValue () ;
      result << "\n"
        "  ] ;\n"
        "  [ioStringOptionArray addObject:option] ;\n" ;
      index_1766_.increment () ;
      enumerator_1766.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2275_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2275 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2275.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 50)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_2275.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 51)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_2275.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_2275.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 53)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_2275.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 54)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_2275.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 55)).stringValue () ;
      result << "\n"
        "  ] ;\n"
        "  [ioStringListOptionArray addObject:option] ;\n" ;
      index_2275_.increment () ;
      enumerator_2275.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'compileAllGuiComponentFromASTGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_compileAllGuiComponentFromASTGalgas_33_ (const GALGAS_galgas_33_GUIComponentListAST constinArgument_inGuiComponentListAST,
                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                      GALGAS_optionComponentMapForGeneration & outArgument_outOptionComponentMapForGeneration,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptionComponentMapForGeneration.drop () ; // Release 'out' argument
  outArgument_outOptionComponentMapForGeneration = GALGAS_optionComponentMapForGeneration::constructor_emptyMap (SOURCE_FILE ("guiCompilation.galgas", 243)) ;
  cEnumerator_galgas_33_GUIComponentListAST enumerator_8453 (constinArgument_inGuiComponentListAST, kENUMERATION_UP) ;
  while (enumerator_8453.hasCurrentObject ()) {
    {
    routine_guiComponentSemanticAnalysis (enumerator_8453.current (HERE), constinArgument_inSemanticContext, outArgument_outOptionComponentMapForGeneration, inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 245)) ;
    }
    enumerator_8453.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'guiComponentSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_guiComponentSemanticAnalysis (const GALGAS_galgas_33_GUIComponentListAST_2D_element constinArgument_inGUIComponentAST,
                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                           GALGAS_optionComponentMapForGeneration & ioArgument_ioOptionComponentMapForGeneration,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inGUIComponentAST.getter_mGUIComponentName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("cocoa"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGUIComponentAST.getter_mGUIComponentName (HERE).getter_location (HERE), GALGAS_string ("the gui name should be 'cocoa'"), fixItArray1  COMMA_SOURCE_FILE ("guiCompilation.galgas", 261)) ;
    }
  }
  GALGAS_guiAnalysisContext var_context_9119 = GALGAS_guiAnalysisContext::constructor_default (SOURCE_FILE ("guiCompilation.galgas", 264)) ;
  cEnumerator_lstringlist enumerator_9183 (constinArgument_inGUIComponentAST.getter_mImportedOptionList (HERE), kENUMERATION_UP) ;
  while (enumerator_9183.hasCurrentObject ()) {
    GALGAS_bool joker_9322_5 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_9322_4 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_9322_3 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_9322_2 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_9322_1 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mOptionComponentMapForSemanticAnalysis (HERE).method_searchKey (enumerator_9183.current_mValue (HERE), joker_9322_5, joker_9322_4, joker_9322_3, joker_9322_2, joker_9322_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 267)) ;
    var_context_9119.mProperty_mImportedOptionComponentList.addAssign_operation (enumerator_9183.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 271)) ;
    enumerator_9183.gotoNextObject () ;
  }
  GALGAS_bool var_runOptionDefined_9444 = GALGAS_bool (false) ;
  cEnumerator_guiSimpleAttributeListAST enumerator_9471 (constinArgument_inGUIComponentAST.getter_mGlobalSimpleAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_9471.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_9471.current_mKey (HERE).getter_string (HERE).objectCompare (GALGAS_string ("run"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_runOptionDefined_9444.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_9471.current_mKey (HERE).getter_location (HERE), GALGAS_string ("option already defined"), fixItArray4  COMMA_SOURCE_FILE ("guiCompilation.galgas", 278)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (kIsEqual, enumerator_9471.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_9471.current_mValue (HERE).getter_location (HERE), GALGAS_string ("run option string should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("guiCompilation.galgas", 280)) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_context_9119.setter_setMBuildRunOption (enumerator_9471.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("guiCompilation.galgas", 282)) ;
            var_runOptionDefined_9444 = GALGAS_bool (true) ;
          }
        }
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsEqual, enumerator_9471.current_mKey (HERE).getter_string (HERE).objectCompare (GALGAS_string ("nibAndMainClass"))).boolEnum () ;
        if (kBoolTrue == test_7) {
          cEnumerator_stringlist enumerator_9954 (enumerator_9471.current_mValue (HERE).getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("guiCompilation.galgas", 286)), kENUMERATION_UP) ;
          while (enumerator_9954.hasCurrentObject ()) {
            var_context_9119.mProperty_mNibAndClassList.addAssign_operation (enumerator_9954.current (HERE).getter_mValue (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 287)) ;
            enumerator_9954.gotoNextObject () ;
          }
        }
      }
      if (kBoolFalse == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticWarning (enumerator_9471.current_mKey (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (enumerator_9471.current_mKey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 290)).add_operation (GALGAS_string ("' key is invalid and has no effect"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 290)), fixItArray8  COMMA_SOURCE_FILE ("guiCompilation.galgas", 290)) ;
      }
    }
    enumerator_9471.gotoNextObject () ;
  }
  cEnumerator_withLexiqueListAST enumerator_10226 (constinArgument_inGUIComponentAST.getter_mWithLexiqueList (HERE), kENUMERATION_UP) ;
  GALGAS_uint index_10162 ((uint32_t) 0) ;
  while (enumerator_10226.hasCurrentObject ()) {
    GALGAS_terminalMap var_terminalMap_10428 ;
    GALGAS_indexingListAST joker_10436_2 ; // Joker input parameter
    GALGAS_lstring joker_10436_1 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mLexiqueComponentMapForSemanticAnalysis (HERE).method_searchKey (enumerator_10226.current_mLexiqueFileName (HERE), var_terminalMap_10428, joker_10436_2, joker_10436_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 296)) ;
    GALGAS_stringset var_terminalSymbolSet_10503 = var_terminalMap_10428.getter_keySet (SOURCE_FILE ("guiCompilation.galgas", 302)) ;
    cEnumerator_guiLabelListAST enumerator_10573 (enumerator_10226.current_mLabels (HERE), kENUMERATION_UP) ;
    while (enumerator_10573.hasCurrentObject ()) {
      cEnumerator_terminalLabelListAST enumerator_10611 (enumerator_10573.current_mTerminalList (HERE), kENUMERATION_UP) ;
      while (enumerator_10611.hasCurrentObject ()) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_terminalSymbolSet_10503.getter_hasKey (enumerator_10611.current_mTerminal (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("guiCompilation.galgas", 306)).operator_not (SOURCE_FILE ("guiCompilation.galgas", 306)).boolEnum () ;
          if (kBoolTrue == test_9) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_10611.current_mTerminal (HERE).getter_location (HERE), GALGAS_string ("the '$").add_operation (enumerator_10611.current_mTerminal (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 307)).add_operation (GALGAS_string ("$' terminal symbol is not declared by the '"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 308)).add_operation (enumerator_10226.current_mLexiqueFileName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 309)).add_operation (GALGAS_string ("' lexique"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 310)), fixItArray10  COMMA_SOURCE_FILE ("guiCompilation.galgas", 307)) ;
          }
        }
        enumerator_10611.gotoNextObject () ;
      }
      enumerator_10573.gotoNextObject () ;
    }
    GALGAS_textMacroList var_textMacroList_10968 = GALGAS_textMacroList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 316)) ;
    cEnumerator_guiCompoundAttributeListAST enumerator_11009 (enumerator_10226.current_mCompoundAttributes (HERE), kENUMERATION_UP) ;
    while (enumerator_11009.hasCurrentObject ()) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsNotEqual, enumerator_11009.current_mKey (HERE).getter_string (HERE).objectCompare (GALGAS_string ("textMacro"))).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_11009.current_mKey (HERE).getter_location (HERE), GALGAS_string ("for a compound attribute, only the 'textMacro' key is valid"), fixItArray12  COMMA_SOURCE_FILE ("guiCompilation.galgas", 319)) ;
        }
      }
      if (kBoolFalse == test_11) {
        var_textMacroList_10968.addAssign_operation (enumerator_11009.current_mAttributeName (HERE).getter_string (HERE), enumerator_11009.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 321)) ;
      }
      enumerator_11009.gotoNextObject () ;
    }
    GALGAS_bool var_hasAssociatedExtension_11313 = GALGAS_bool (false) ;
    GALGAS_bool var_hasTabViewTitle_11351 = GALGAS_bool (false) ;
    GALGAS_bool var_hasBlockComment_11389 = GALGAS_bool (false) ;
    GALGAS_string var_tabViewTitle_11426 = GALGAS_string::makeEmptyString () ;
    GALGAS_string var_blockComment_11460 = GALGAS_string::makeEmptyString () ;
    cEnumerator_guiSimpleAttributeListAST enumerator_11486 (enumerator_10226.current_mSimpleAttributes (HERE), kENUMERATION_UP) ;
    while (enumerator_11486.hasCurrentObject ()) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsEqual, enumerator_11486.current_mKey (HERE).getter_string (HERE).objectCompare (GALGAS_string ("fileExtension"))).boolEnum () ;
        if (kBoolTrue == test_13) {
          {
          var_context_9119.mProperty_mExtensionMap.setter_insertKey (enumerator_11486.current_mValue (HERE), enumerator_10226.current_mLexiqueFileName (HERE).getter_string (HERE), index_10162, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 332)) ;
          }
          var_hasAssociatedExtension_11313 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_13) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = GALGAS_bool (kIsEqual, enumerator_11486.current_mKey (HERE).getter_string (HERE).objectCompare (GALGAS_string ("title"))).boolEnum () ;
          if (kBoolTrue == test_14) {
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              test_15 = var_hasTabViewTitle_11351.boolEnum () ;
              if (kBoolTrue == test_15) {
                TC_Array <C_FixItDescription> fixItArray16 ;
                inCompiler->emitSemanticError (enumerator_11486.current_mKey (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (enumerator_11486.current_mKey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 336)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 336)), fixItArray16  COMMA_SOURCE_FILE ("guiCompilation.galgas", 336)) ;
              }
            }
            var_hasTabViewTitle_11351 = GALGAS_bool (true) ;
            var_tabViewTitle_11426 = enumerator_11486.current_mValue (HERE).getter_string (HERE) ;
          }
        }
        if (kBoolFalse == test_14) {
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (kIsEqual, enumerator_11486.current_mKey (HERE).getter_string (HERE).objectCompare (GALGAS_string ("blockComment"))).boolEnum () ;
            if (kBoolTrue == test_17) {
              enumGalgasBool test_18 = kBoolTrue ;
              if (kBoolTrue == test_18) {
                test_18 = var_hasBlockComment_11389.boolEnum () ;
                if (kBoolTrue == test_18) {
                  TC_Array <C_FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (enumerator_11486.current_mKey (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (enumerator_11486.current_mKey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)), fixItArray19  COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)) ;
                }
              }
              var_hasBlockComment_11389 = GALGAS_bool (true) ;
              var_blockComment_11460 = enumerator_11486.current_mValue (HERE).getter_string (HERE) ;
            }
          }
          if (kBoolFalse == test_17) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_11486.current_mKey (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (enumerator_11486.current_mKey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 347)).add_operation (GALGAS_string ("' key is not valid (valid keys: 'blockComment,', 'fileExtension', 'title')"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 347)), fixItArray20  COMMA_SOURCE_FILE ("guiCompilation.galgas", 347)) ;
          }
        }
      }
      enumerator_11486.gotoNextObject () ;
    }
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = var_hasAssociatedExtension_11313.operator_not (SOURCE_FILE ("guiCompilation.galgas", 351)).boolEnum () ;
      if (kBoolTrue == test_21) {
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_10226.current_mLexiqueFileName (HERE).getter_location (HERE), GALGAS_string ("one or more file extensions should be associated with a lexique (fileExtension : \"...\")"), fixItArray22  COMMA_SOURCE_FILE ("guiCompilation.galgas", 352)) ;
      }
    }
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      test_23 = var_hasTabViewTitle_11351.operator_not (SOURCE_FILE ("guiCompilation.galgas", 355)).boolEnum () ;
      if (kBoolTrue == test_23) {
        TC_Array <C_FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_10226.current_mLexiqueFileName (HERE).getter_location (HERE), GALGAS_string ("the 'title' key should be defined once (it is not defined)"), fixItArray24  COMMA_SOURCE_FILE ("guiCompilation.galgas", 356)) ;
      }
    }
    var_context_9119.mProperty_mWithLexiqueList.addAssign_operation (enumerator_10226.current_mLexiqueFileName (HERE).getter_string (HERE), index_10162, var_blockComment_11460, var_tabViewTitle_11426, var_textMacroList_10968, enumerator_10226.current_mLabels (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 359)) ;
    enumerator_10226.gotoNextObject () ;
    index_10162.increment_operation (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 294)) ;
  }
  {
  ioArgument_ioOptionComponentMapForGeneration.setter_insertKey (constinArgument_inGUIComponentAST.getter_mGUIComponentName (HERE), var_context_9119, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 368)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateAllGuiComponentsGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateAllGuiComponentsGalgas_33_ (const GALGAS_optionComponentMapForGeneration constinArgument_inOptionComponentMapForGeneration,
                                                 const GALGAS_string constinArgument_inOutputDirectory,
                                                 const GALGAS_bool constinArgument_inQuietOutputByDefault,
                                                 GALGAS_stringlist & ioArgument_ioApplicationSourceSet,
                                                 GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_optionComponentMapForGeneration enumerator_13453 (constinArgument_inOptionComponentMapForGeneration, kENUMERATION_UP) ;
  while (enumerator_13453.hasCurrentObject ()) {
    GALGAS_string var_fileName_13511 = GALGAS_string ("gui-").add_operation (enumerator_13453.current_lkey (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 386)).add_operation (GALGAS_string (".m"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 386)) ;
    ioArgument_ioApplicationSourceSet.addAssign_operation (var_fileName_13511  COMMA_SOURCE_FILE ("guiCompilation.galgas", 387)) ;
    ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_13511  COMMA_SOURCE_FILE ("guiCompilation.galgas", 388)) ;
    GALGAS_string var_s_13621 = GALGAS_string (filewrapperTemplate_guiGenerationTemplates_gui_5F_implementation (inCompiler, enumerator_13453.current_mGuiComponentContext (HERE), constinArgument_inQuietOutputByDefault, enumerator_13453.current_mGuiComponentContext (HERE).getter_mBuildRunOption (HERE) COMMA_SOURCE_FILE ("guiCompilation.galgas", 389))) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_13511, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), var_s_13621, GALGAS_string ("\n"
      "\n"), GALGAS_string ("\n"
      "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 394)) ;
    }
    enumerator_13453.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'guiGenerationTemplates'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_guiGenerationTemplates_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_guiGenerationTemplates_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_guiGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_guiGenerationTemplates_0,
  0,
  gWrapperAllDirectories_guiGenerationTemplates_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'guiGenerationTemplates gui_implementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_guiGenerationTemplates_gui_5F_implementation (C_Compiler * inCompiler,
                                                                                const GALGAS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                const GALGAS_bool & in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT,
                                                                                const GALGAS_string & in_BUILD_5F_RUN_5F_OPTION
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "#import \"OC_Token.h\"\n"
    "#import \"F_CocoaWrapperForGalgas.h\"\n"
    "#import \"OC_GGS_CommandLineOption.h\"\n" ;
  GALGAS_uint index_136_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (HERE).isValid ()) {
    cEnumerator_importedLexiqueList enumerator_136 (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (HERE), kENUMERATION_UP) ;
    while (enumerator_136.hasCurrentObject ()) {
      result << "#import \"lexique-" ;
      result << enumerator_136.current_mLexiqueClassName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 6)).stringValue () ;
      result << "-cocoa.h\"\n" ;
      index_136_.increment () ;
      enumerator_136.gotoNextObject () ;
    }
  }
  GALGAS_uint index_260_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mNibAndClassList (HERE).isValid ()) {
    cEnumerator_stringlist enumerator_260 (in_GUI_5F_CONTEXT.getter_mNibAndClassList (HERE), kENUMERATION_UP) ;
    while (enumerator_260.hasCurrentObject ()) {
      result << "#import \"" ;
      result << enumerator_260.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_260_.increment () ;
      enumerator_260.gotoNextObject () ;
    }
  }
  result << "\n"
    "#ifdef USER_DEFAULT_COLORS_DEFINED\n"
    "  #import \"user_default_colors.h\"\n"
    "#endif\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#pragma mark Nibs\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_GUI_5F_CONTEXT.getter_mNibAndClassList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 26)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "NSArray * nibsAndClasses (void) {\n"
      "  return [NSArray array] ;\n"
      "}\n" ;
  }else if (kBoolFalse == test_0) {
    result << "NSArray * nibsAndClasses (void) {\n"
      "  return [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_1096_ (0) ;
    if (in_GUI_5F_CONTEXT.getter_mNibAndClassList (HERE).isValid ()) {
      cEnumerator_stringlist enumerator_1096 (in_GUI_5F_CONTEXT.getter_mNibAndClassList (HERE), kENUMERATION_UP) ;
      while (enumerator_1096.hasCurrentObject ()) {
        result << "    [NSArray arrayWithObjects:@\"" ;
        result << enumerator_1096.current_mValue (HERE).stringValue () ;
        result << "\", [" ;
        result << enumerator_1096.current_mValue (HERE).stringValue () ;
        result << " class], nil],\n" ;
        index_1096_.increment () ;
        enumerator_1096.gotoNextObject () ;
      }
    }
    result << "    nil\n"
      "  ] ;\n"
      "}\n" ;
  }
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#pragma mark Command Line Options\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                       Command Line Options                                                    \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_1760_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (HERE).isValid ()) {
    cEnumerator_stringlist enumerator_1760 (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (HERE), kENUMERATION_UP) ;
    while (enumerator_1760.hasCurrentObject ()) {
      result << "#import \"option-" ;
      result << enumerator_1760.current_mValue (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 55)).stringValue () ;
      result << "-cocoa.h\"\n" ;
      index_1760_.increment () ;
      enumerator_1760.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterOptions (NSMutableArray * ioBoolOptionArray,\n"
    "                   NSMutableArray * ioUIntOptionArray,\n"
    "                   NSMutableArray * ioStringOptionArray,\n"
    "                   NSMutableArray * ioStringListOptionArray) {\n" ;
  GALGAS_uint index_2240_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (HERE).isValid ()) {
    cEnumerator_stringlist enumerator_2240 (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (HERE), kENUMERATION_UP) ;
    while (enumerator_2240.hasCurrentObject ()) {
      result << "  enterOptionsFor_" ;
      result << enumerator_2240.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 66)).stringValue () ;
      result << " (ioBoolOptionArray, ioUIntOptionArray, ioStringOptionArray, ioStringListOptionArray) ;\n" ;
      index_2240_.increment () ;
      enumerator_2240.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_1 = in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]\n"
      "    initWithDomainName:@\"galgas_cli_options\"\n"
      "    identifier:@\"verbose_output\"\n"
      "    commandChar:'v'\n"
      "    commandString:@\"verbose\"\n"
      "    comment:@\"Verbose output\"\n"
      "    defaultValue:@\"\"\n"
      "  ] ;\n" ;
  }else if (kBoolFalse == test_1) {
    result << "  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]\n"
      "    initWithDomainName:@\"galgas_cli_options\"\n"
      "    identifier:@\"quiet_output\"\n"
      "    commandChar:'q'\n"
      "    commandString:@\"quiet\"\n"
      "    comment:@\"Quiet output\"\n"
      "    defaultValue:@\"\"\n"
      "  ] ;\n" ;
  }
  result << "  [ioBoolOptionArray addObject:option] ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_3092_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (HERE).isValid ()) {
    cEnumerator_importedLexiqueList enumerator_3092 (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (HERE), kENUMERATION_UP) ;
    while (enumerator_3092.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "#pragma mark Lexique " ;
      result << enumerator_3092.current_mLexiqueClassName (HERE).stringValue () ;
      result << "\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "//\n"
        "//                     P O P    U P    L I S T    D A T A                                        \n"
        "//\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n" ;
      GALGAS_uint index_3672_ (0) ;
      if (enumerator_3092.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_3672 (enumerator_3092.current_mLabels (HERE), kENUMERATION_UP) ;
        while (enumerator_3672.hasCurrentObject ()) {
          result << "static const UInt16 gPopUpData_" ;
          result << enumerator_3092.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << "_" ;
          result << enumerator_3092.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << "_" ;
          result << enumerator_3672.current_mLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << " [" ;
          result << GALGAS_uint ((uint32_t) 2U).multiply_operation (enumerator_3672.current_mTerminalList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << "] = {\n"
            "  " ;
          result << enumerator_3672.current_mLeadingCharacterStrippedCount (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 101)).stringValue () ;
          result << ", // Leading character count to strip\n" ;
          GALGAS_uint index_3989_ (0) ;
          if (enumerator_3672.current_mTerminalList (HERE).isValid ()) {
            cEnumerator_terminalLabelListAST enumerator_3989 (enumerator_3672.current_mTerminalList (HERE), kENUMERATION_UP) ;
            while (enumerator_3989.hasCurrentObject ()) {
              result << "  " ;
              result << enumerator_3092.current_mLexiqueClassName (HERE).stringValue () ;
              result << "_1_" ;
              result << enumerator_3989.current_mTerminal (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 103)).stringValue () ;
              result << ", " ;
              result << enumerator_3989.current_mDisplayFlags (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 103)).stringValue () ;
              result << ",\n" ;
              index_3989_.increment () ;
              enumerator_3989.gotoNextObject () ;
            }
          }
          result << "  0\n"
            "} ;\n"
            "\n" ;
          index_3672_.increment () ;
          enumerator_3672.gotoNextObject () ;
        }
      }
      result << "static const UInt16 * gPopUpData_" ;
      result << enumerator_3092.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).stringValue () ;
      result << "_" ;
      result << enumerator_3092.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).stringValue () ;
      result << " [" ;
      result << enumerator_3092.current_mLabels (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_4308_ (0) ;
      if (enumerator_3092.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_4308 (enumerator_3092.current_mLabels (HERE), kENUMERATION_UP) ;
        while (enumerator_4308.hasCurrentObject ()) {
          result << "  gPopUpData_" ;
          result << enumerator_3092.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).stringValue () ;
          result << "_" ;
          result << enumerator_3092.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).stringValue () ;
          result << "_" ;
          result << enumerator_4308.current_mLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).stringValue () ;
          result << ",\n" ;
          index_4308_.increment () ;
          enumerator_4308.gotoNextObject () ;
        }
      }
      result << "  NULL\n"
        "} ;\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "//\n"
        "//                            Lexique interface                                                  \n"
        "//\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "@interface OC_Tokenizer_" ;
      result << enumerator_3092.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 119)).stringValue () ;
      result << "_" ;
      result << enumerator_3092.current_mLexiqueClassName (HERE).stringValue () ;
      result << " : OC_Lexique_" ;
      result << enumerator_3092.current_mLexiqueClassName (HERE).stringValue () ;
      result << " {\n"
        "\n"
        "}\n"
        "\n"
        "- (NSString *) blockComment ;\n"
        "\n"
        "- (const UInt16 * *) popupListData ;\n"
        "\n"
        "- (NSUInteger) textMacroCount ;\n"
        "\n"
        "- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;\n"
        "\n"
        "- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;\n"
        "\n"
        "- (NSString *) tabItemTitle ;\n"
        "\n"
        "@end\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "@implementation OC_Tokenizer_" ;
      result << enumerator_3092.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 129)).stringValue () ;
      result << "_" ;
      result << enumerator_3092.current_mLexiqueClassName (HERE).stringValue () ;
      result << "\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSString *) blockComment {\n"
        "  return @" ;
      result << enumerator_3092.current_mBlockComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 132)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (const UInt16 * *) popupListData {\n"
        "  return gPopUpData_" ;
      result << enumerator_3092.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 136)).stringValue () ;
      result << "_" ;
      result << enumerator_3092.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 136)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSUInteger) textMacroCount {\n"
        "  return " ;
      result << enumerator_3092.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 140)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 140)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSString *) tabItemTitle {\n"
        "  return @" ;
      result << enumerator_3092.current_mTitle (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 144)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {\n"
        "  static NSString * kTextMacroTitle [" ;
      result << enumerator_3092.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 148)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 148)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 148)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_6768_ (0) ;
      if (enumerator_3092.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_6768 (enumerator_3092.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_6768.hasCurrentObject ()) {
          result << "    @" ;
          result << enumerator_6768.current_mKey (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 150)).stringValue () ;
          result << ",\n" ;
          index_6768_.increment () ;
          enumerator_6768.gotoNextObject () ;
        }
      }
      result << "    NULL\n"
        "  } ;\n"
        "  return kTextMacroTitle [inIndex] ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {\n"
        "  static NSString * kTextMacroContent [" ;
      result << enumerator_3092.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 158)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 158)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 158)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_7217_ (0) ;
      if (enumerator_3092.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_7217 (enumerator_3092.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_7217.hasCurrentObject ()) {
          result << "    @" ;
          result << enumerator_7217.current_mContents (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 160)).stringValue () ;
          result << ",\n" ;
          index_7217_.increment () ;
          enumerator_7217.gotoNextObject () ;
        }
      }
      result << "    NULL\n"
        "  } ;\n"
        "  return kTextMacroContent [inIndex] ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "@end\n"
        "\n" ;
      index_3092_.increment () ;
      enumerator_3092.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "OC_Lexique * tokenizerForExtension (const NSString * inExtension) {\n"
    "  OC_Lexique * result = nil ;\n" ;
  GALGAS_uint index_7782_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mExtensionMap (HERE).isValid ()) {
    cEnumerator_extensionMap enumerator_7782 (in_GUI_5F_CONTEXT.getter_mExtensionMap (HERE), kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_7782 = enumerator_7782.hasCurrentObject () ;
    if (nonEmpty_enumerator_7782) {
      result << "  if" ;
    }
    while (enumerator_7782.hasCurrentObject ()) {
      result << " ([inExtension isEqualToString:@" ;
      result << enumerator_7782.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 177)).stringValue () ;
      result << "]) {\n"
        "    result = [OC_Tokenizer_" ;
      result << enumerator_7782.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 178)).stringValue () ;
      result << "_" ;
      result << enumerator_7782.current_mLexiqueName (HERE).stringValue () ;
      result << " new] ;\n" ;
      if (enumerator_7782.hasNextObject ()) {
        result << "  }else if" ;
      }
      index_7782_.increment () ;
      enumerator_7782.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_7782) {
      result << "  }\n" ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "NSArray * tokenizers (void) {\n"
    "  return [NSArray arrayWithObjects:\n" ;
  GALGAS_uint index_8225_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (HERE).isValid ()) {
    cEnumerator_importedLexiqueList enumerator_8225 (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (HERE), kENUMERATION_UP) ;
    while (enumerator_8225.hasCurrentObject ()) {
      result << "    [OC_Tokenizer_" ;
      result << enumerator_8225.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 190)).stringValue () ;
      result << "_" ;
      result << enumerator_8225.current_mLexiqueClassName (HERE).stringValue () ;
      result << " new],\n" ;
      index_8225_.increment () ;
      enumerator_8225.gotoNextObject () ;
    }
  }
  result << "    nil\n"
    "  ] ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "NSString * buildRunOption (void) {\n"
    "  return @\"" ;
  result << in_BUILD_5F_RUN_5F_OPTION.stringValue () ;
  result << "\" ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  const GALGAS_arrayDeclarationAST temp_0 = object ;
  const GALGAS_arrayDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_2038 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mArrayTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 46)), temp_1.getter_mArrayTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-array.galgas", 46)) ;
  {
  const GALGAS_arrayDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2038, temp_2, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 47)) ;
  }
  {
  const GALGAS_arrayDeclarationAST temp_3 = object ;
  const GALGAS_arrayDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2038, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.getter_mElementTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 48)), temp_4.getter_mElementTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-array.galgas", 48)) COMMA_SOURCE_FILE ("type-array.galgas", 48)) ;
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
//
//Overriding extension method '@arrayDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_arrayDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mDimension (HERE).getter_uint (HERE).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_arrayDeclarationAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.getter_mDimension (HERE).getter_location (HERE), GALGAS_string ("the dimension of an array should be > 0"), fixItArray3  COMMA_SOURCE_FILE ("type-array.galgas", 62)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_arrayTypeIndex_3195 ;
  {
  const GALGAS_arrayDeclarationAST temp_4 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_4.getter_mArrayTypeName (HERE), var_arrayTypeIndex_3195 COMMA_SOURCE_FILE ("type-array.galgas", 65)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_elementTypeIndex_3323 ;
  {
  const GALGAS_arrayDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_5.getter_mElementTypeName (HERE), var_elementTypeIndex_3323 COMMA_SOURCE_FILE ("type-array.galgas", 67)) ;
  }
  GALGAS_constructorMap var_constructorMap_3366 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 69)) ;
  GALGAS_getterMap var_getterMap_3457 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_3457, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 70)) ;
  }
  GALGAS_setterMap var_setterMap_3486 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 71)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_3533 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 72)) ;
  GALGAS_unifiedTypeMap_2D_entry var_boolType_3640 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("bool"), var_boolType_3640 COMMA_SOURCE_FILE ("type-array.galgas", 74)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_uintType_3743 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("uint"), var_uintType_3743 COMMA_SOURCE_FILE ("type-array.galgas", 76)) ;
  }
  GALGAS_functionSignature var_uintArgs_3783 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 78)) ;
  GALGAS_uint var_idx_3804 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_arrayDeclarationAST temp_6 = object ;
  if (temp_6.getter_mDimension (HERE).getter_uint (HERE).isValid ()) {
    uint32_t variant_3815 = temp_6.getter_mDimension (HERE).getter_uint (HERE).uintValue () ;
    bool loop_3815 = true ;
    while (loop_3815) {
      const GALGAS_arrayDeclarationAST temp_7 = object ;
      loop_3815 = GALGAS_bool (kIsStrictInf, var_idx_3804.objectCompare (temp_7.getter_mDimension (HERE).getter_uint (HERE))).isValid () ;
      if (loop_3815) {
        loop_3815 = GALGAS_bool (kIsStrictInf, var_idx_3804.objectCompare (temp_7.getter_mDimension (HERE).getter_uint (HERE))).boolValue () ;
      }
      if (loop_3815 && (0 == variant_3815)) {
        loop_3815 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 80)) ;
      }
      if (loop_3815) {
        variant_3815 -- ;
        var_uintArgs_3783.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 81)), var_uintType_3743, GALGAS_string ("inSize").add_operation (var_idx_3804.getter_string (SOURCE_FILE ("type-array.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 81))  COMMA_SOURCE_FILE ("type-array.galgas", 81)) ;
        var_idx_3804.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 82)) ;
      }
    }
  }
  {
  var_constructorMap_3366.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 86))  COMMA_SOURCE_FILE ("type-array.galgas", 86)), var_uintArgs_3783, GALGAS_bool (false), var_arrayTypeIndex_3195, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 85)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (var_getterMap_3457, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("axisCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 92)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_3457, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("sizeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 99)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_3457, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("rangeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("range"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 106)) ;
  }
  {
  var_getterMap_3457.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("isValueValidAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 116))  COMMA_SOURCE_FILE ("type-array.galgas", 116)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 117)), var_uintArgs_3783, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 119)), GALGAS_bool (true), var_boolType_3640, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 122)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-array.galgas", 115)) ;
  }
  {
  var_getterMap_3457.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("valueAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 126))  COMMA_SOURCE_FILE ("type-array.galgas", 126)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 127)), var_uintArgs_3783, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 129)), GALGAS_bool (true), var_elementTypeIndex_3323, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 132)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-array.galgas", 125)) ;
  }
  GALGAS_formalParameterSignature var_setterFormalArgumentList_5211 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 136)) ;
  var_setterFormalArgumentList_5211.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 137)), var_elementTypeIndex_3323, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 137)), GALGAS_string ("InValue")  COMMA_SOURCE_FILE ("type-array.galgas", 137)) ;
  var_idx_3804 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_arrayDeclarationAST temp_8 = object ;
  if (temp_8.getter_mDimension (HERE).getter_uint (HERE).isValid ()) {
    uint32_t variant_5381 = temp_8.getter_mDimension (HERE).getter_uint (HERE).uintValue () ;
    bool loop_5381 = true ;
    while (loop_5381) {
      const GALGAS_arrayDeclarationAST temp_9 = object ;
      loop_5381 = GALGAS_bool (kIsStrictInf, var_idx_3804.objectCompare (temp_9.getter_mDimension (HERE).getter_uint (HERE))).isValid () ;
      if (loop_5381) {
        loop_5381 = GALGAS_bool (kIsStrictInf, var_idx_3804.objectCompare (temp_9.getter_mDimension (HERE).getter_uint (HERE))).boolValue () ;
      }
      if (loop_5381 && (0 == variant_5381)) {
        loop_5381 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 139)) ;
      }
      if (loop_5381) {
        variant_5381 -- ;
        var_setterFormalArgumentList_5211.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 140)), var_uintType_3743, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 140)), GALGAS_string ("inIndex").add_operation (var_idx_3804.getter_string (SOURCE_FILE ("type-array.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 140))  COMMA_SOURCE_FILE ("type-array.galgas", 140)) ;
        var_idx_3804.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 141)) ;
      }
    }
  }
  {
  var_setterMap_3486.setter_insertKey (GALGAS_string ("setValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 144)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 145)), var_setterFormalArgumentList_5211, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 148)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 143)) ;
  }
  {
  var_setterMap_3486.setter_insertKey (GALGAS_string ("forceValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 152)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 153)), var_setterFormalArgumentList_5211, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 156)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 151)) ;
  }
  {
  GALGAS_lstring joker_5979_4 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_5979_3 ; // Joker input parameter
  GALGAS_formalArgumentPassingModeAST joker_5979_2 ; // Joker input parameter
  GALGAS_string joker_5979_1 ; // Joker input parameter
  var_setterFormalArgumentList_5211.setter_popFirst (joker_5979_4, joker_5979_3, joker_5979_2, joker_5979_1, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 159)) ;
  }
  {
  var_setterMap_3486.setter_insertKey (GALGAS_string ("invalidateValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 161)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 162)), var_setterFormalArgumentList_5211, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 165)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 160)) ;
  }
  {
  var_setterMap_3486.setter_insertKey (GALGAS_string ("setSize").getter_nowhere (SOURCE_FILE ("type-array.galgas", 169)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 170)), var_setterFormalArgumentList_5211, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 173)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 168)) ;
  }
  var_setterFormalArgumentList_5211 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 176)) ;
  var_setterFormalArgumentList_5211.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 177)), var_uintType_3743, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 177)), GALGAS_string ("inSize")  COMMA_SOURCE_FILE ("type-array.galgas", 177)) ;
  var_setterFormalArgumentList_5211.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 178)), var_uintType_3743, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 178)), GALGAS_string ("inAxisIndex")  COMMA_SOURCE_FILE ("type-array.galgas", 178)) ;
  {
  var_setterMap_3486.setter_insertKey (GALGAS_string ("setSizeForAxis").getter_nowhere (SOURCE_FILE ("type-array.galgas", 180)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 181)), var_setterFormalArgumentList_5211, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 184)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 179)) ;
  }
  {
  const GALGAS_arrayDeclarationAST temp_10 = object ;
  const GALGAS_arrayDeclarationAST temp_11 = object ;
  const GALGAS_arrayDeclarationAST temp_12 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_10.getter_mArrayTypeName (HERE), temp_11.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-array.galgas", 192)), GALGAS_typeKindEnum::constructor_listMapType (SOURCE_FILE ("type-array.galgas", 193)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 195)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 196)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 197)), var_constructorMap_3366, var_getterMap_3457, var_setterMap_3486, var_instanceMethodMap_3533, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 202)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 203)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 204)), GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-array.galgas", 205)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 206)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 207)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 208)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 209)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 210)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-array.galgas", 212)), GALGAS_string::makeEmptyString (), GALGAS_string ("array-").add_operation (temp_12.getter_mArrayTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-array.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 214)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-array.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 188)) ;
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
//
//Overriding extension method '@arrayDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  const GALGAS_arrayDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_8396 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mArrayTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 232)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8396, var_nameForUsefulness_8396, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 233)) ;
  }
  const GALGAS_arrayDeclarationAST temp_1 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_8561 = function_typeNameForUsefulEntitiesGraph (temp_1.getter_mElementTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 234)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8396, var_elementTypeNameForUsefulness_8561 COMMA_SOURCE_FILE ("type-array.galgas", 235)) ;
  }
  const GALGAS_arrayDeclarationAST temp_2 = object ;
  const GALGAS_arrayDeclarationAST temp_3 = object ;
  const GALGAS_arrayDeclarationAST temp_4 = object ;
  const GALGAS_arrayDeclarationAST temp_5 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("array ").add_operation (temp_2.getter_mArrayTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 238)), GALGAS_arrayTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_3.getter_mArrayTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 240)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_4.getter_mElementTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 241)), temp_5.getter_mDimension (HERE).getter_uint (HERE)  COMMA_SOURCE_FILE ("type-array.galgas", 239))  COMMA_SOURCE_FILE ("type-array.galgas", 237)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_arrayDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                         extensionMethod_arrayDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_arrayDeclarationAST_semanticAnalysis (defineExtensionMethod_arrayDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayTypeForGeneration * object = (const cPtr_arrayTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayTypeForGeneration) ;
  const GALGAS_arrayTypeForGeneration temp_0 = object ;
  const GALGAS_arrayTypeForGeneration temp_1 = object ;
  const GALGAS_arrayTypeForGeneration temp_2 = object ;
  const GALGAS_arrayTypeForGeneration temp_3 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (inCompiler, temp_0.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 261)), temp_1.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 262)), temp_2.getter_mElementTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 263)), temp_3.getter_mDimension (HERE) COMMA_SOURCE_FILE ("type-array.galgas", 260))) ;
  const GALGAS_arrayTypeForGeneration temp_4 = object ;
  const GALGAS_arrayTypeForGeneration temp_5 = object ;
  const GALGAS_arrayTypeForGeneration temp_6 = object ;
  const GALGAS_arrayTypeForGeneration temp_7 = object ;
  const GALGAS_arrayTypeForGeneration temp_8 = object ;
  const GALGAS_arrayTypeForGeneration temp_9 = object ;
  const GALGAS_arrayTypeForGeneration temp_10 = object ;
  const GALGAS_arrayTypeForGeneration temp_11 = object ;
  const GALGAS_arrayTypeForGeneration temp_12 = object ;
  const GALGAS_arrayTypeForGeneration temp_13 = object ;
  const GALGAS_arrayTypeForGeneration temp_14 = object ;
  const GALGAS_arrayTypeForGeneration temp_15 = object ;
  const GALGAS_arrayTypeForGeneration temp_16 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_4.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 267)), temp_5.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 268)), temp_6.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 269)), temp_7.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 270)), temp_8.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 271)), temp_9.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 272)), temp_10.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 273)), temp_11.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 274)), temp_12.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 275)), temp_13.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 276)), temp_14.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 277)), temp_15.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 278)), temp_16.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 279)) COMMA_SOURCE_FILE ("type-array.galgas", 266))), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 266)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_arrayTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_arrayTypeForGeneration.mSlotID,
                                              extensionMethod_arrayTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_arrayTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_arrayTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayTypeForGeneration * object = (const cPtr_arrayTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayTypeForGeneration) ;
  const GALGAS_arrayTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 289)) ;
  const GALGAS_arrayTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.getter_mElementTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 290)) ;
  GALGAS_stringlist var_suffixList_11067 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 292)) ;
  GALGAS_uint var_idx_11099 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_arrayTypeForGeneration temp_2 = object ;
  if (temp_2.getter_mDimension (HERE).isValid ()) {
    uint32_t variant_11110 = temp_2.getter_mDimension (HERE).uintValue () ;
    bool loop_11110 = true ;
    while (loop_11110) {
      const GALGAS_arrayTypeForGeneration temp_3 = object ;
      loop_11110 = GALGAS_bool (kIsStrictInf, var_idx_11099.objectCompare (temp_3.getter_mDimension (HERE))).isValid () ;
      if (loop_11110) {
        loop_11110 = GALGAS_bool (kIsStrictInf, var_idx_11099.objectCompare (temp_3.getter_mDimension (HERE))).boolValue () ;
      }
      if (loop_11110 && (0 == variant_11110)) {
        loop_11110 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 294)) ;
      }
      if (loop_11110) {
        variant_11110 -- ;
        var_suffixList_11067.addAssign_operation (var_idx_11099.getter_string (SOURCE_FILE ("type-array.galgas", 295))  COMMA_SOURCE_FILE ("type-array.galgas", 295)) ;
        var_idx_11099.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 296)) ;
      }
    }
  }
  const GALGAS_arrayTypeForGeneration temp_4 = object ;
  const GALGAS_arrayTypeForGeneration temp_5 = object ;
  const GALGAS_arrayTypeForGeneration temp_6 = object ;
  const GALGAS_arrayTypeForGeneration temp_7 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (inCompiler, temp_4.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 299)), temp_5.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 300)), temp_6.getter_mElementTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 301)), temp_7.getter_mDimension (HERE), var_suffixList_11067 COMMA_SOURCE_FILE ("type-array.galgas", 298))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_arrayTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_arrayTypeForGeneration.mSlotID,
                                                     extensionMethod_arrayTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_arrayTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_arrayTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolsetDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                           GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                           GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                           GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                           GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolsetDeclarationAST * object = (const cPtr_boolsetDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetDeclarationAST) ;
  const GALGAS_boolsetDeclarationAST temp_0 = object ;
  const GALGAS_boolsetDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_1974 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mBoolsetTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 48)), temp_1.getter_mBoolsetTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-boolset.galgas", 48)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_1974, temp_2, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 49)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolsetDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_boolsetDeclarationAST.mSlotID,
                                                extensionMethod_boolsetDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolsetDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_boolsetDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolsetDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_boolsetDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_boolsetDeclarationAST * object = (const cPtr_boolsetDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetDeclarationAST) ;
  const GALGAS_boolsetDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("boolset @").add_operation (temp_0.getter_mBoolsetTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 57)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_boolsetDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_boolsetDeclarationAST.mSlotID,
                                          extensionGetter_boolsetDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_boolsetDeclarationAST_keyRepresentation (defineExtensionGetter_boolsetDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForBoolset'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForBoolset (C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-boolset.galgas", 65)) ;
  result_result.addAssign_operation (GALGAS_string ("all")  COMMA_SOURCE_FILE ("type-boolset.galgas", 66)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-boolset.galgas", 67)) ;
  result_result.addAssign_operation (GALGAS_string ("dynamicType")  COMMA_SOURCE_FILE ("type-boolset.galgas", 68)) ;
  result_result.addAssign_operation (GALGAS_string ("none")  COMMA_SOURCE_FILE ("type-boolset.galgas", 69)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-boolset.galgas", 70)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_forbiddenKeysForBoolset = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForBoolset ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset function_forbiddenKeysForBoolset (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForBoolset) {
    gOnceFunctionResult_forbiddenKeysForBoolset = onceFunction_forbiddenKeysForBoolset (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForBoolset = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForBoolset ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_forbiddenKeysForBoolset (void) {
  gOnceFunctionResult_forbiddenKeysForBoolset.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForBoolset (NULL,
                                                                     releaseOnceFunctionResult_forbiddenKeysForBoolset) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForBoolset [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_forbiddenKeysForBoolset (C_Compiler * inCompiler,
                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForBoolset (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForBoolset ("forbiddenKeysForBoolset",
                                                                         functionWithGenericHeader_forbiddenKeysForBoolset,
                                                                         & kTypeDescriptor_GALGAS_stringset,
                                                                         0,
                                                                         functionArgs_forbiddenKeysForBoolset) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolsetDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                          const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                          const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                          const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolsetDeclarationAST * object = (const cPtr_boolsetDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetDeclarationAST) ;
  GALGAS_stringset var_slotNameSet_3536 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-boolset.galgas", 82)) ;
  const GALGAS_boolsetDeclarationAST temp_0 = object ;
  cEnumerator_lstringlist enumerator_3557 (temp_0.getter_mFlagList (HERE), kENUMERATION_UP) ;
  while (enumerator_3557.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 84)).getter_hasKey (enumerator_3557.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-boolset.galgas", 84)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_m_3664 = GALGAS_string ("a slot cannot be named:") ;
        cEnumerator_stringset enumerator_3734 (function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 86)), kENUMERATION_UP) ;
        while (enumerator_3734.hasCurrentObject ()) {
          var_m_3664.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_3734.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 87)) ;
          enumerator_3734.gotoNextObject () ;
        }
        var_m_3664.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 89)) ;
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_3557.current_mValue (HERE).getter_location (HERE), var_m_3664, fixItArray2  COMMA_SOURCE_FILE ("type-boolset.galgas", 90)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_slotNameSet_3536.getter_hasKey (enumerator_3557.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-boolset.galgas", 91)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_3557.current_mValue (HERE).getter_location (HERE), GALGAS_string ("duplicated slot name"), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 92)) ;
        }
      }
    }
    var_slotNameSet_3536.addAssign_operation (enumerator_3557.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-boolset.galgas", 94)) ;
    enumerator_3557.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_boolsetTypeIndex_4103 ;
  {
  const GALGAS_boolsetDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_5.getter_mBoolsetTypeName (HERE), var_boolsetTypeIndex_4103 COMMA_SOURCE_FILE ("type-boolset.galgas", 97)) ;
  }
  GALGAS_getterMap var_getterMap_4221 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4221, inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 99)) ;
  }
  GALGAS_constructorMap var_constructorMap_4259 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 100)) ;
  {
  var_constructorMap_4259.setter_insertKey (GALGAS_string ("none").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 101)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 101)), GALGAS_bool (false), var_boolsetTypeIndex_4103, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 101)) ;
  }
  {
  var_constructorMap_4259.setter_insertKey (GALGAS_string ("all").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 102)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 102)), GALGAS_bool (false), var_boolsetTypeIndex_4103, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 102)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4221, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("none"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 103)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4221, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("all"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 110)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = object ;
  cEnumerator_lstringlist enumerator_4790 (temp_6.getter_mFlagList (HERE), kENUMERATION_UP) ;
  while (enumerator_4790.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_constructorMap_4259.getter_hasKey (enumerator_4790.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-boolset.galgas", 118)).operator_not (SOURCE_FILE ("type-boolset.galgas", 118)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        var_constructorMap_4259.setter_insertKey (enumerator_4790.current_mValue (HERE), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 119)), GALGAS_bool (false), var_boolsetTypeIndex_4103, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 119)) ;
        }
        {
        routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4221, ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_4790.current_mValue (HERE).getter_string (HERE), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 120)) ;
        }
      }
    }
    enumerator_4790.gotoNextObject () ;
  }
  GALGAS_setterMap var_setterMap_5205 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 130)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5275 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 132)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_8 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_8.getter_mBoolsetTypeName (HERE), var_getterMap_4221, var_setterMap_5205, var_instanceMethodMap_5275, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 134)) ;
  }
  GALGAS_operators var_operators_5617 = GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("type-boolset.galgas", 146)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("type-boolset.galgas", 146)) COMMA_SOURCE_FILE ("type-boolset.galgas", 146)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("type-boolset.galgas", 146)) COMMA_SOURCE_FILE ("type-boolset.galgas", 146)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("type-boolset.galgas", 146)) COMMA_SOURCE_FILE ("type-boolset.galgas", 146)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-boolset.galgas", 147)) COMMA_SOURCE_FILE ("type-boolset.galgas", 146)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("type-boolset.galgas", 147)) COMMA_SOURCE_FILE ("type-boolset.galgas", 147)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-boolset.galgas", 147)) COMMA_SOURCE_FILE ("type-boolset.galgas", 147)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_9 = object ;
  const GALGAS_boolsetDeclarationAST temp_10 = object ;
  const GALGAS_boolsetDeclarationAST temp_11 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_9.getter_mBoolsetTypeName (HERE), temp_10.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-boolset.galgas", 153)), GALGAS_typeKindEnum::constructor_boolsetType (SOURCE_FILE ("type-boolset.galgas", 154)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 156)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 157)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 158)), var_constructorMap_4259, var_getterMap_4221, var_setterMap_5205, var_instanceMethodMap_5275, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 163)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 164)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 165)), var_operators_5617, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 167)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 168)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 169)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 170)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 171)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-boolset.galgas", 173)), GALGAS_string ("none"), GALGAS_string ("boolset-").add_operation (temp_11.getter_mBoolsetTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-boolset.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 175)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-boolset.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 149)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolsetDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_boolsetDeclarationAST.mSlotID,
                                               extensionMethod_boolsetDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolsetDeclarationAST_enterInSemanticContext (defineExtensionMethod_boolsetDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolsetDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                    const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                    const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                    GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolsetDeclarationAST * object = (const cPtr_boolsetDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetDeclarationAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_boolsetDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.getter_mFlagList (HERE).getter_length (SOURCE_FILE ("type-boolset.galgas", 194)).objectCompare (GALGAS_uint ((uint32_t) 64U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_boolsetDeclarationAST temp_2 = object ;
      GALGAS_lstring var_s_7179 = temp_2.getter_mFlagList (HERE).getter_mValueAtIndex (GALGAS_uint ((uint32_t) 64U), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 195)) ;
      const GALGAS_boolsetDeclarationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_s_7179.getter_location (HERE), GALGAS_string ("max flags count is 64 (here: ").add_operation (temp_3.getter_mFlagList (HERE).getter_length (SOURCE_FILE ("type-boolset.galgas", 196)).getter_string (SOURCE_FILE ("type-boolset.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 196)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 196)), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 196)) ;
    }
  }
  const GALGAS_boolsetDeclarationAST temp_5 = object ;
  GALGAS_lstring var_boolsetNameForUsefulness_7358 = function_typeNameForUsefulEntitiesGraph (temp_5.getter_mBoolsetTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 199)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_boolsetNameForUsefulness_7358, var_boolsetNameForUsefulness_7358, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 200)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = object ;
  const GALGAS_boolsetDeclarationAST temp_7 = object ;
  const GALGAS_boolsetDeclarationAST temp_8 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("boolset ").add_operation (temp_6.getter_mBoolsetTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 202)), GALGAS_boolsetTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_7.getter_mBoolsetTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 204)), temp_8.getter_mFlagList (HERE)  COMMA_SOURCE_FILE ("type-boolset.galgas", 203))  COMMA_SOURCE_FILE ("type-boolset.galgas", 201)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolsetDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_boolsetDeclarationAST.mSlotID,
                                         extensionMethod_boolsetDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolsetDeclarationAST_semanticAnalysis (defineExtensionMethod_boolsetDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'structGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_structGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_structGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_structGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_structGenerationTemplate_0,
  0,
  gWrapperAllDirectories_structGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate boolsetTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                  const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                  const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const GALGAS_lstringlist & /* in_SLOT_5F_LIST */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" struct"), inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n"
    "//--------------------------------- Properties\n"
    "  private: uint64_t mFlags ;\n"
    "  private: bool mIsValid ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Private constructor\n"
    "  private: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const uint64_t inFlags) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate boolsetTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (C_Compiler * /* inCompiler */,
                                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                              const GALGAS_lstringlist & in_SLOT_5F_LIST,
                                                                                              const GALGAS_bigint & in_FULL_5F_SET
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_root (),\n"
    "mFlags (0),\n"
    "mIsValid (false) {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const uint64_t inFlags) :\n"
    "AC_GALGAS_root (),\n"
    "mFlags (inFlags),\n"
    "mIsValid (true) {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_none (UNUSED_LOCATION_ARGS) {\n"
    "  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (0) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_all (UNUSED_LOCATION_ARGS) {\n"
    "  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ((uint64_t) " ;
  result << in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 26)).stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_1083_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_1083 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1083.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_1083.current_mValue (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 32)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) {\n"
        "  return GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " (((uint64_t) 1) << " ;
      result << index_1083_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 33)).stringValue () ;
      result << ") ;\n"
        "}\n"
        "\n" ;
      index_1083_idx.increment () ;
      enumerator_1083.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n"
    "   typeComparisonResult result = kOperandNotValid ;\n"
    "   if (mIsValid && inOperand.mIsValid) {\n"
    "     result = kOperandEqual ;\n"
    "     if (mFlags < inOperand.mFlags) {\n"
    "       result = kFirstOperandLowerThanSecond ;\n"
    "     }else if (mFlags > inOperand.mFlags) {\n"
    "       result = kFirstOperandGreaterThanSecond ;\n"
    "     }\n"
    "   }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n"
    "  return mIsValid ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::drop (void) {\n"
    "  mIsValid = false ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator_or (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand\n"
    "                                      " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (mIsValid && inOperand.mIsValid) {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mFlags | inOperand.mFlags) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator_and (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand\n"
    "                                      " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (mIsValid && inOperand.mIsValid) {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mFlags & inOperand.mFlags) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator_xor (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand\n"
    "                                      " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (mIsValid && inOperand.mIsValid) {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mFlags ^ inOperand.mFlags) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::substract_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand,\n"
    "                 " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    "                 " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (mIsValid && inOperand.mIsValid) {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mFlags & ~ inOperand.mFlags) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator_tilde (UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (mIsValid) {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (((uint64_t) " ;
  result << in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 114)).stringValue () ;
  result << ") ^ mFlags) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (" ;
  columnMarker = result.currentColumn () ;
  result << "C_String & ioString,\n"
    "                              " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t /* inIndentation */) const {\n"
    "  ioString << \"<boolset @" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << ":\" ;\n"
    "  if (! isValid ()) {\n"
    "    ioString << \" not built\" ;\n"
    "  }else{\n" ;
  GALGAS_uint index_5160_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_5160 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5160.hasCurrentObject ()) {
      result << "    if ((mFlags & ((uint64_t) 1) << " ;
      result << index_5160_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 129)).stringValue () ;
      result << ") != 0) {\n"
        "      ioString << \" " ;
      result << enumerator_5160.current_mValue (HERE).getter_string (HERE).stringValue () ;
      result << "\" ;\n"
        "    }\n" ;
      index_5160_idx.increment () ;
      enumerator_5160.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "  ioString << \">\" ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_none (UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_bool result ;\n"
    "  if (mIsValid) {\n"
    "    result = GALGAS_bool (mFlags == 0) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_all (UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_bool result ;\n"
    "  if (mIsValid) {\n"
    "    result = GALGAS_bool (mFlags == (uint64_t) " ;
  result << in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 152)).stringValue () ;
  result << ") ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_6008_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_6008 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6008.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_6008.current_mValue (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 159)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n"
        "  GALGAS_bool result ;\n"
        "  if (mIsValid) {\n"
        "    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << " ;
      result << index_6008_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 162)).stringValue () ;
      result << ") != 0) ;\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_6008_idx.increment () ;
      enumerator_6008.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolsetTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolsetTypeForGeneration * object = (const cPtr_boolsetTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetTypeForGeneration) ;
  const GALGAS_boolsetTypeForGeneration temp_0 = object ;
  const GALGAS_boolsetTypeForGeneration temp_1 = object ;
  const GALGAS_boolsetTypeForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (inCompiler, temp_0.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 241)), temp_1.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 242)), temp_2.getter_mFlagList (HERE) COMMA_SOURCE_FILE ("type-boolset.galgas", 240))) ;
  const GALGAS_boolsetTypeForGeneration temp_3 = object ;
  const GALGAS_boolsetTypeForGeneration temp_4 = object ;
  const GALGAS_boolsetTypeForGeneration temp_5 = object ;
  const GALGAS_boolsetTypeForGeneration temp_6 = object ;
  const GALGAS_boolsetTypeForGeneration temp_7 = object ;
  const GALGAS_boolsetTypeForGeneration temp_8 = object ;
  const GALGAS_boolsetTypeForGeneration temp_9 = object ;
  const GALGAS_boolsetTypeForGeneration temp_10 = object ;
  const GALGAS_boolsetTypeForGeneration temp_11 = object ;
  const GALGAS_boolsetTypeForGeneration temp_12 = object ;
  const GALGAS_boolsetTypeForGeneration temp_13 = object ;
  const GALGAS_boolsetTypeForGeneration temp_14 = object ;
  const GALGAS_boolsetTypeForGeneration temp_15 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 246)), temp_4.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 247)), temp_5.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 248)), temp_6.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 249)), temp_7.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 250)), temp_8.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 251)), temp_9.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 252)), temp_10.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 253)), temp_11.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 254)), temp_12.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 255)), temp_13.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 256)), temp_14.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 257)), temp_15.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 258)) COMMA_SOURCE_FILE ("type-boolset.galgas", 245))), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 245)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolsetTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_boolsetTypeForGeneration.mSlotID,
                                              extensionMethod_boolsetTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolsetTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_boolsetTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolsetTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                   const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolsetTypeForGeneration * object = (const cPtr_boolsetTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetTypeForGeneration) ;
  const GALGAS_boolsetTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 269)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = object ;
  const GALGAS_boolsetTypeForGeneration temp_2 = object ;
  const GALGAS_boolsetTypeForGeneration temp_3 = object ;
  const GALGAS_boolsetTypeForGeneration temp_4 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (inCompiler, temp_1.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 271)), temp_2.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 272)), temp_3.getter_mFlagList (HERE), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 274)).left_shift_operation (temp_4.getter_mFlagList (HERE).getter_length (SOURCE_FILE ("type-boolset.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 274)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 274)) COMMA_SOURCE_FILE ("type-boolset.galgas", 270))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolsetTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_boolsetTypeForGeneration.mSlotID,
                                                     extensionMethod_boolsetTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolsetTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_boolsetTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'weakSuffix'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_weakSuffix (C_Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("-weak") ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_weakSuffix [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_weakSuffix (C_Compiler * inCompiler,
                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                           const GALGAS_location & /* inErrorLocation */
                                                           COMMA_LOCATION_ARGS) {
  return function_weakSuffix (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_weakSuffix ("weakSuffix",
                                                            functionWithGenericHeader_weakSuffix,
                                                            & kTypeDescriptor_GALGAS_string,
                                                            0,
                                                            functionArgs_weakSuffix) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@classDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_classDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  const GALGAS_classDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("valueclass @").add_operation (temp_0.getter_mClassTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 104)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_classDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                          extensionGetter_classDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_classDeclarationAST_keyRepresentation (defineExtensionGetter_classDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  const GALGAS_classDeclarationAST temp_0 = object ;
  const GALGAS_classDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_4227 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mClassTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 116)), temp_1.getter_mClassTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 116)) ;
  {
  const GALGAS_classDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4227, temp_2, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 117)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_classDeclarationAST temp_4 = object ;
    test_3 = GALGAS_bool (kIsNotEqual, temp_4.getter_mSuperClassName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_classDeclarationAST temp_5 = object ;
      const GALGAS_classDeclarationAST temp_6 = object ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4227, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_5.getter_mSuperClassName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 121)), temp_6.getter_mSuperClassName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 121)) COMMA_SOURCE_FILE ("type-class.galgas", 119)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_7 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_4574 (temp_7.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_4574.hasCurrentObject ()) {
    {
    const GALGAS_classDeclarationAST temp_8 = object ;
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4227, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_4574.current_mPropertyTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 125)), temp_8.getter_mSuperClassName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 125)) COMMA_SOURCE_FILE ("type-class.galgas", 125)) ;
    }
    enumerator_4574.gotoNextObject () ;
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
//
//Overriding extension method '@classDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_getterMap var_getterMap_5400 ;
  GALGAS_setterMap var_setterMap_5427 ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5470 ;
  GALGAS_typedPropertyList var_inheritedTypedPropertyList_5522 ;
  GALGAS_propertyMap var_attributeMap_5554 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 143)) ;
  GALGAS_unifiedTypeMap_2D_entry var_superClassIndex_5627 ;
  GALGAS_bool var_generateHeaderInSeparateFile_5668 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mSuperClassName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_5627 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-class.galgas", 148)) ;
      {
      routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5400, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 149)) ;
      }
      var_setterMap_5427 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 150)) ;
      var_instanceMethodMap_5470 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 151)) ;
      var_inheritedTypedPropertyList_5522 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 152)) ;
      var_attributeMap_5554 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 153)) ;
      var_generateHeaderInSeparateFile_5668 = GALGAS_bool (false) ;
      const GALGAS_classDeclarationAST temp_2 = object ;
      cEnumerator_lstringlist enumerator_5996 (temp_2.getter_mClassFeatureList (HERE), kENUMERATION_UP) ;
      while (enumerator_5996.hasCurrentObject ()) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, enumerator_5996.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_generateHeaderInSeparateFile_5668 = GALGAS_bool (true) ;
          }
        }
        enumerator_5996.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_classDeclarationAST temp_4 = object ;
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_4.getter_mSuperClassName (HERE), var_superClassIndex_5627 COMMA_SOURCE_FILE ("type-class.galgas", 161)) ;
    }
    GALGAS_typeKindEnum var_typeKindEnum_6293 ;
    GALGAS_getterMap var_inheritedGetterMap_6331 ;
    GALGAS_setterMap var_inheritedSetterMap_6369 ;
    GALGAS_instanceMethodMap var_inheritedMethodMap_6415 ;
    const GALGAS_classDeclarationAST temp_5 = object ;
    GALGAS_bool joker_6493_3 ; // Joker input parameter
    GALGAS_bool joker_6493_2 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_entry joker_6493_1 ; // Joker input parameter
    GALGAS_bool joker_6523 ; // Joker input parameter
    GALGAS_typedPropertyList joker_6586_2 ; // Joker input parameter
    GALGAS_constructorMap joker_6586_1 ; // Joker input parameter
    GALGAS_classMethodMap joker_6674_9 ; // Joker input parameter
    GALGAS_optionalMethodMap joker_6674_8 ; // Joker input parameter
    GALGAS_enumerationDescriptorList joker_6674_7 ; // Joker input parameter
    GALGAS_operators joker_6674_6 ; // Joker input parameter
    GALGAS_functionSignature joker_6674_5 ; // Joker input parameter
    GALGAS_constantIndexMap joker_6674_4 ; // Joker input parameter
    GALGAS_enumConstantList joker_6674_3 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_6674_2 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_6674_1 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_entry joker_6720_4 ; // Joker input parameter
    GALGAS_string joker_6720_3 ; // Joker input parameter
    GALGAS_string joker_6720_2 ; // Joker input parameter
    GALGAS_headerKind joker_6720_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mTypeMap (HERE).method_searchKey (temp_5.getter_mSuperClassName (HERE), joker_6493_3, joker_6493_2, joker_6493_1, var_typeKindEnum_6293, joker_6523, var_inheritedTypedPropertyList_5522, var_attributeMap_5554, joker_6586_2, joker_6586_1, var_inheritedGetterMap_6331, var_inheritedSetterMap_6369, var_inheritedMethodMap_6415, joker_6674_9, joker_6674_8, joker_6674_7, joker_6674_6, joker_6674_5, joker_6674_4, joker_6674_3, joker_6674_2, joker_6674_1, var_generateHeaderInSeparateFile_5668, joker_6720_4, joker_6720_3, joker_6720_2, joker_6720_1, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 166)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_typeKindEnum_6293.getter_isClassType (SOURCE_FILE ("type-class.galgas", 182)).operator_not (SOURCE_FILE ("type-class.galgas", 182)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_classDeclarationAST temp_7 = object ;
        const GALGAS_classDeclarationAST temp_8 = object ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_7.getter_mSuperClassName (HERE).getter_location (HERE), GALGAS_string ("the @").add_operation (temp_8.getter_mSuperClassName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 183)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 183)), fixItArray9  COMMA_SOURCE_FILE ("type-class.galgas", 183)) ;
      }
    }
    var_setterMap_5427 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 186)) ;
    cEnumerator_setterMap enumerator_6996 (var_inheritedSetterMap_6369, kENUMERATION_UP) ;
    while (enumerator_6996.hasCurrentObject ()) {
      {
      var_setterMap_5427.setter_insertKey (enumerator_6996.current_lkey (HERE), enumerator_6996.current_mKind (HERE), enumerator_6996.current_mParameterList (HERE), enumerator_6996.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 193)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 188)) ;
      }
      enumerator_6996.gotoNextObject () ;
    }
    var_getterMap_5400 = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 198)) ;
    cEnumerator_getterMap enumerator_7370 (var_inheritedGetterMap_6331, kENUMERATION_UP) ;
    while (enumerator_7370.hasCurrentObject ()) {
      {
      var_getterMap_5400.setter_insertKey (enumerator_7370.current_lkey (HERE), enumerator_7370.current_mKind (HERE), enumerator_7370.current_mArgumentTypeList (HERE), enumerator_7370.current_mDeclarationLocation (HERE), enumerator_7370.current_mHasCompilerArgument (HERE), enumerator_7370.current_mReturnedType (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 207)), enumerator_7370.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 200)) ;
      }
      enumerator_7370.gotoNextObject () ;
    }
    var_instanceMethodMap_5470 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 212)) ;
    cEnumerator_instanceMethodMap enumerator_7783 (var_inheritedMethodMap_6415, kENUMERATION_UP) ;
    while (enumerator_7783.hasCurrentObject ()) {
      {
      var_instanceMethodMap_5470.setter_insertKey (enumerator_7783.current_lkey (HERE), enumerator_7783.current_mKind (HERE), enumerator_7783.current_mParameterList (HERE), enumerator_7783.current_mDeclarationLocation (HERE), enumerator_7783.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 220)), enumerator_7783.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 214)) ;
      }
      enumerator_7783.gotoNextObject () ;
    }
  }
  GALGAS_functionSignature var_constructorPropertyTypeList_8160 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 227)) ;
  cEnumerator_typedPropertyList enumerator_8220 (var_inheritedTypedPropertyList_5522, kENUMERATION_UP) ;
  while (enumerator_8220.hasCurrentObject ()) {
    GALGAS_lstring temp_10 ;
    const enumGalgasBool test_11 = enumerator_8220.current_mHasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = enumerator_8220.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 230)) ;
    }
    var_constructorPropertyTypeList_8160.addAssign_operation (temp_10, enumerator_8220.current_mPropertyTypeEntry (HERE), enumerator_8220.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 229)) ;
    enumerator_8220.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_12 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_8488 (temp_12.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_8488.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_8623 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8488.current_mPropertyTypeName (HERE), var_attributeTypeIndex_8623 COMMA_SOURCE_FILE ("type-class.galgas", 235)) ;
    }
    GALGAS_bool var_hasSelector_8644 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_8671 (enumerator_8488.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_8671.hasCurrentObject ()) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsEqual, enumerator_8671.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
        if (kBoolTrue == test_13) {
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = var_hasSelector_8644.boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray15 ;
              fixItArray15.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (enumerator_8671.current_mValue (HERE).getter_location (HERE), GALGAS_string ("duplicated attribute"), fixItArray15  COMMA_SOURCE_FILE ("type-class.galgas", 240)) ;
            }
          }
          var_hasSelector_8644 = GALGAS_bool (true) ;
        }
      }
      enumerator_8671.gotoNextObject () ;
    }
    GALGAS_lstring temp_16 ;
    const enumGalgasBool test_17 = var_hasSelector_8644.boolEnum () ;
    if (kBoolTrue == test_17) {
      temp_16 = enumerator_8488.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_17) {
      temp_16 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 246)) ;
    }
    var_constructorPropertyTypeList_8160.addAssign_operation (temp_16, var_attributeTypeIndex_8623, enumerator_8488.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 245)) ;
    {
    var_attributeMap_5554.setter_insertKey (enumerator_8488.current_mPropertyName (HERE), enumerator_8488.current_mIsPublic (HERE), enumerator_8488.current_isConstant (HERE), var_attributeTypeIndex_8623, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 249)) ;
    }
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_getterMap_5400.getter_hasKey (enumerator_8488.current_mPropertyName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-class.galgas", 255)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_8488.current_mPropertyName (HERE).getter_location (HERE), GALGAS_string ("'").add_operation (enumerator_8488.current_mPropertyName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 256)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined getter"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 256)), fixItArray19  COMMA_SOURCE_FILE ("type-class.galgas", 256)) ;
      }
    }
    enumerator_8488.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_classIndex_9498 ;
  {
  const GALGAS_classDeclarationAST temp_20 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_20.getter_mClassTypeName (HERE), var_classIndex_9498 COMMA_SOURCE_FILE ("type-class.galgas", 260)) ;
  }
  GALGAS_constructorMap var_constructorMap_9557 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 266)) ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    const GALGAS_classDeclarationAST temp_22 = object ;
    test_21 = temp_22.getter_mIsAbstract (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 267)).boolEnum () ;
    if (kBoolTrue == test_21) {
      {
      var_constructorMap_9557.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 269))  COMMA_SOURCE_FILE ("type-class.galgas", 269)), var_constructorPropertyTypeList_8160, GALGAS_bool (false), var_classIndex_9498, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 268)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_currentClassTypedPropertyList_9829 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 276)) ;
  GALGAS_typedPropertyList var_allTypedAttributeList_9881 = var_inheritedTypedPropertyList_5522 ;
  const GALGAS_classDeclarationAST temp_23 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_9975 (temp_23.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_9975.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_10110 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9975.current_mPropertyTypeName (HERE), var_attributeTypeIndex_10110 COMMA_SOURCE_FILE ("type-class.galgas", 279)) ;
    }
    GALGAS_bool var_hasSelector_10131 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_10155 (enumerator_9975.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_10155.hasCurrentObject ()) {
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = GALGAS_bool (kIsEqual, enumerator_10155.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_24) {
          TC_Array <C_FixItDescription> fixItArray25 ;
          inCompiler->emitSemanticWarning (enumerator_10155.current_mValue (HERE).getter_location (HERE), GALGAS_string ("'%nogetter' is obsolete and has no effect"), fixItArray25  COMMA_SOURCE_FILE ("type-class.galgas", 283)) ;
        }
      }
      if (kBoolFalse == test_24) {
        enumGalgasBool test_26 = kBoolTrue ;
        if (kBoolTrue == test_26) {
          test_26 = GALGAS_bool (kIsEqual, enumerator_10155.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_26) {
            TC_Array <C_FixItDescription> fixItArray27 ;
            inCompiler->emitSemanticWarning (enumerator_10155.current_mValue (HERE).getter_location (HERE), GALGAS_string ("'%setter' is obsolete and has no effect"), fixItArray27  COMMA_SOURCE_FILE ("type-class.galgas", 285)) ;
          }
        }
        if (kBoolFalse == test_26) {
          enumGalgasBool test_28 = kBoolTrue ;
          if (kBoolTrue == test_28) {
            test_28 = GALGAS_bool (kIsEqual, enumerator_10155.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_28) {
              var_hasSelector_10131 = GALGAS_bool (true) ;
            }
          }
        }
      }
      enumerator_10155.gotoNextObject () ;
    }
    var_currentClassTypedPropertyList_9829.addAssign_operation (var_attributeTypeIndex_10110, enumerator_9975.current_mPropertyName (HERE), enumerator_9975.current_mIsPublic (HERE), var_hasSelector_10131  COMMA_SOURCE_FILE ("type-class.galgas", 290)) ;
    var_allTypedAttributeList_9881.addAssign_operation (var_attributeTypeIndex_10110, enumerator_9975.current_mPropertyName (HERE), enumerator_9975.current_mIsPublic (HERE), var_hasSelector_10131  COMMA_SOURCE_FILE ("type-class.galgas", 291)) ;
    {
    var_getterMap_5400.setter_insertKey (enumerator_9975.current_mPropertyName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 294)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 295)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 296)), GALGAS_bool (false), var_attributeTypeIndex_10110, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-class.galgas", 299)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 292)) ;
    }
    enumerator_9975.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_11050 (var_currentClassTypedPropertyList_9829, kENUMERATION_UP) ;
  while (enumerator_11050.hasCurrentObject ()) {
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = enumerator_11050.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_29) {
        {
        GALGAS_formalParameterSignature temp_30 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 309)) ;
        temp_30.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 309)), enumerator_11050.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-class.galgas", 309)), enumerator_11050.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 309)) ;
        var_setterMap_5427.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_11050.current_mPropertyName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-class.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 307)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 307))  COMMA_SOURCE_FILE ("type-class.galgas", 307)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 308)), temp_30, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-class.galgas", 311)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 306)) ;
        }
      }
    }
    enumerator_11050.gotoNextObject () ;
  }
  {
  const GALGAS_classDeclarationAST temp_31 = object ;
  const GALGAS_classDeclarationAST temp_32 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_31.getter_mClassTypeName (HERE), var_getterMap_5400, var_setterMap_5427, var_instanceMethodMap_5470, temp_32.getter_mIsReference (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 326)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 317)) ;
  }
  GALGAS_string var_defaultConstructorName_11916 ;
  enumGalgasBool test_33 = kBoolTrue ;
  if (kBoolTrue == test_33) {
    test_33 = var_superClassIndex_5627.getter_isNull (SOURCE_FILE ("type-class.galgas", 330)).boolEnum () ;
    if (kBoolTrue == test_33) {
      var_defaultConstructorName_11916 = GALGAS_string ("default") ;
    }
  }
  if (kBoolFalse == test_33) {
    var_defaultConstructorName_11916 = var_superClassIndex_5627.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 333)) ;
  }
  cEnumerator_typedPropertyList enumerator_12106 (var_currentClassTypedPropertyList_9829, kENUMERATION_UP) ;
  bool bool_34 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_11916.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_12106.hasCurrentObject () && bool_34) {
    while (enumerator_12106.hasCurrentObject () && bool_34) {
      enumGalgasBool test_35 = kBoolTrue ;
      if (kBoolTrue == test_35) {
        test_35 = GALGAS_bool (kIsEqual, enumerator_12106.current_mPropertyTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 336)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_12106.current_mPropertyTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 336)).operator_not (SOURCE_FILE ("type-class.galgas", 336)) COMMA_SOURCE_FILE ("type-class.galgas", 336)).boolEnum () ;
        if (kBoolTrue == test_35) {
          var_defaultConstructorName_11916 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_12106.gotoNextObject () ;
      if (enumerator_12106.hasCurrentObject ()) {
        bool_34 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_11916.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  const GALGAS_classDeclarationAST temp_36 = object ;
  const GALGAS_classDeclarationAST temp_37 = object ;
  const GALGAS_classDeclarationAST temp_38 = object ;
  const GALGAS_classDeclarationAST temp_39 = object ;
  const GALGAS_classDeclarationAST temp_40 = object ;
  GALGAS_operators temp_41 ;
  const enumGalgasBool test_42 = temp_40.getter_mIsReference (HERE).boolEnum () ;
  if (kBoolTrue == test_42) {
    temp_41 = GALGAS_operators::constructor_isReferenceEquatable (SOURCE_FILE ("type-class.galgas", 358)) ;
  }else if (kBoolFalse == test_42) {
    temp_41 = GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-class.galgas", 358)) ;
  }
  const GALGAS_classDeclarationAST temp_43 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_36.getter_mClassTypeName (HERE), temp_37.getter_mIsPredefined (HERE), temp_38.getter_mIsAbstract (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 344)), var_superClassIndex_5627, GALGAS_typeKindEnum::constructor_classType (temp_39.getter_mIsReference (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 346)), GALGAS_bool (false), var_allTypedAttributeList_9881, var_attributeMap_5554, var_currentClassTypedPropertyList_9829, var_constructorMap_9557, var_getterMap_5400, var_setterMap_5427, var_instanceMethodMap_5470, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 355)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 356)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 357)), temp_41, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 359)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 360)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 361)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 362)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 363)), var_generateHeaderInSeparateFile_5668, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-class.galgas", 365)), var_defaultConstructorName_11916, GALGAS_string ("class-").add_operation (temp_43.getter_mClassTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-class.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 367)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-class.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 341)) ;
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
//
//Overriding extension method '@classDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  const GALGAS_classDeclarationAST temp_0 = object ;
  GALGAS_lstring var_classTypeNameForUsefulness_13907 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mClassTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 385)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_classTypeNameForUsefulness_13907, var_classTypeNameForUsefulness_13907, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 386)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_classDeclarationAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.getter_mSuperClassName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_classDeclarationAST temp_3 = object ;
      GALGAS_lstring var_superClassNameForUsefulness_14135 = function_typeNameForUsefulEntitiesGraph (temp_3.getter_mSuperClassName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 388)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_13907, var_superClassNameForUsefulness_14135 COMMA_SOURCE_FILE ("type-class.galgas", 389)) ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_classDeclarationAST temp_5 = object ;
    test_4 = temp_5.getter_mIsReference (HERE).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_classDeclarationAST temp_6 = object ;
      const GALGAS_classDeclarationAST temp_7 = object ;
      GALGAS_lstring var_weakRefTypeNameForUsefulness_14358 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_6.getter_mClassTypeName (HERE).getter_string (HERE).add_operation (function_weakSuffix (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 392)), temp_7.getter_mClassTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 392)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_13907, var_weakRefTypeNameForUsefulness_14358 COMMA_SOURCE_FILE ("type-class.galgas", 393)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_8 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_14623 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_8.getter_mClassTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 396)) ;
  const GALGAS_classDeclarationAST temp_9 = object ;
  GALGAS_unifiedTypeMap_2D_entry temp_10 ;
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, temp_9.getter_mSuperClassName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-class.galgas", 399)) ;
  }else if (kBoolFalse == test_11) {
    const GALGAS_classDeclarationAST temp_12 = object ;
    temp_10 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_12.getter_mSuperClassName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 400)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_superClassEntry_14752 = temp_10 ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (kIsNotEqual, var_superClassEntry_14752.objectCompare (GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-class.galgas", 405)))).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_bool var_superClassIsReference_15201 ;
      var_superClassEntry_14752.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 406)).method_classType (var_superClassIsReference_15201, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 406)) ;
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        const GALGAS_classDeclarationAST temp_15 = object ;
        test_14 = var_superClassIsReference_15201.operator_and (temp_15.getter_mIsReference (HERE).operator_not (SOURCE_FILE ("type-class.galgas", 407)) COMMA_SOURCE_FILE ("type-class.galgas", 407)).boolEnum () ;
        if (kBoolTrue == test_14) {
          const GALGAS_classDeclarationAST temp_16 = object ;
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.getter_mClassTypeName (HERE).getter_location (HERE), GALGAS_string ("this class should be declared by 'refClass', as its super class"), fixItArray17  COMMA_SOURCE_FILE ("type-class.galgas", 408)) ;
        }
      }
      if (kBoolFalse == test_14) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          const GALGAS_classDeclarationAST temp_19 = object ;
          test_18 = var_superClassIsReference_15201.operator_not (SOURCE_FILE ("type-class.galgas", 409)).operator_and (temp_19.getter_mIsReference (HERE) COMMA_SOURCE_FILE ("type-class.galgas", 409)).boolEnum () ;
          if (kBoolTrue == test_18) {
            const GALGAS_classDeclarationAST temp_20 = object ;
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (temp_20.getter_mClassTypeName (HERE).getter_location (HERE), GALGAS_string ("this class should be declared by 'valueclass', as its super class"), fixItArray21  COMMA_SOURCE_FILE ("type-class.galgas", 410)) ;
          }
        }
      }
    }
  }
  GALGAS_typedPropertyList var_allAttributeList_15747 ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (kIsEqual, var_superClassEntry_14752.objectCompare (GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-class.galgas", 417)))).boolEnum () ;
    if (kBoolTrue == test_22) {
      var_allAttributeList_15747 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 418)) ;
      GALGAS_bool var_generatedInSeparateFileFeature_15853 = GALGAS_bool (false) ;
      enumGalgasBool test_23 = kBoolTrue ;
      if (kBoolTrue == test_23) {
        const GALGAS_classDeclarationAST temp_24 = object ;
        test_23 = GALGAS_bool (kIsStrictSup, temp_24.getter_mClassFeatureList (HERE).getter_length (SOURCE_FILE ("type-class.galgas", 420)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_23) {
          const GALGAS_classDeclarationAST temp_25 = object ;
          cEnumerator_lstringlist enumerator_15927 (temp_25.getter_mClassFeatureList (HERE), kENUMERATION_UP) ;
          while (enumerator_15927.hasCurrentObject ()) {
            enumGalgasBool test_26 = kBoolTrue ;
            if (kBoolTrue == test_26) {
              test_26 = GALGAS_bool (kIsEqual, enumerator_15927.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
              if (kBoolTrue == test_26) {
                enumGalgasBool test_27 = kBoolTrue ;
                if (kBoolTrue == test_27) {
                  test_27 = var_generatedInSeparateFileFeature_15853.boolEnum () ;
                  if (kBoolTrue == test_27) {
                    TC_Array <C_FixItDescription> fixItArray28 ;
                    inCompiler->emitSemanticError (enumerator_15927.current_mValue (HERE).getter_location (HERE), GALGAS_string ("the 'generatedInSeparateFile' is already named"), fixItArray28  COMMA_SOURCE_FILE ("type-class.galgas", 424)) ;
                  }
                }
                var_generatedInSeparateFileFeature_15853 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_26) {
              TC_Array <C_FixItDescription> fixItArray29 ;
              inCompiler->emitSemanticError (enumerator_15927.current_mValue (HERE).getter_location (HERE), GALGAS_string ("only the 'generatedInSeparateFile' attribute is allowed here"), fixItArray29  COMMA_SOURCE_FILE ("type-class.galgas", 428)) ;
            }
            enumerator_15927.gotoNextObject () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_22) {
    var_allAttributeList_15747 = var_superClassEntry_14752.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 433)) ;
    enumGalgasBool test_30 = kBoolTrue ;
    if (kBoolTrue == test_30) {
      const GALGAS_classDeclarationAST temp_31 = object ;
      test_30 = GALGAS_bool (kIsStrictSup, temp_31.getter_mClassFeatureList (HERE).getter_length (SOURCE_FILE ("type-class.galgas", 434)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_30) {
        const GALGAS_classDeclarationAST temp_32 = object ;
        cEnumerator_lstringlist enumerator_16466 (temp_32.getter_mClassFeatureList (HERE), kENUMERATION_UP) ;
        while (enumerator_16466.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray33 ;
          inCompiler->emitSemanticError (enumerator_16466.current_mValue (HERE).getter_location (HERE), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray33  COMMA_SOURCE_FILE ("type-class.galgas", 436)) ;
          enumerator_16466.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_16671 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 441)) ;
  GALGAS_propertyIndexMap var_attributeMap_16713 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 442)) ;
  const GALGAS_classDeclarationAST temp_34 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_16783 (temp_34.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_16783.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_16847 = function_typeNameForUsefulEntitiesGraph (enumerator_16783.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 444)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_13907, var_propertyTypeNameForUsefulness_16847 COMMA_SOURCE_FILE ("type-class.galgas", 445)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_17008 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_16783.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 446)) ;
    GALGAS_bool var_hasSelector_17111 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_17135 (enumerator_16783.current_mAttributeList (HERE), kENUMERATION_UP) ;
    bool bool_35 = var_hasSelector_17111.operator_not (SOURCE_FILE ("type-class.galgas", 448)).isValidAndTrue () ;
    if (enumerator_17135.hasCurrentObject () && bool_35) {
      while (enumerator_17135.hasCurrentObject () && bool_35) {
        var_hasSelector_17111 = GALGAS_bool (kIsEqual, enumerator_17135.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selector"))) ;
        enumerator_17135.gotoNextObject () ;
        if (enumerator_17135.hasCurrentObject ()) {
          bool_35 = var_hasSelector_17111.operator_not (SOURCE_FILE ("type-class.galgas", 448)).isValidAndTrue () ;
        }
      }
    }
    var_typedAttributeList_16671.addAssign_operation (var_t_17008, enumerator_16783.current_mPropertyName (HERE), enumerator_16783.current_mIsPublic (HERE), var_hasSelector_17111  COMMA_SOURCE_FILE ("type-class.galgas", 451)) ;
    var_allAttributeList_15747.addAssign_operation (var_t_17008, enumerator_16783.current_mPropertyName (HERE), enumerator_16783.current_mIsPublic (HERE), var_hasSelector_17111  COMMA_SOURCE_FILE ("type-class.galgas", 456)) ;
    {
    var_attributeMap_16713.setter_insertKey (enumerator_16783.current_mPropertyName (HERE), var_t_17008, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 461)) ;
    }
    enumerator_16783.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_36 = object ;
  const GALGAS_classDeclarationAST temp_37 = object ;
  const GALGAS_classDeclarationAST temp_38 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (temp_36.getter_mClassTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 465)), GALGAS_classTypeForGeneration::constructor_new (var_selfType_14623, temp_37.getter_mIsAbstract (HERE), temp_38.getter_mIsReference (HERE), var_superClassEntry_14752, var_allAttributeList_15747, var_typedAttributeList_16671, var_selfType_14623.getter_mGenerateHeaderInSeparateFile (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 473))  COMMA_SOURCE_FILE ("type-class.galgas", 466))  COMMA_SOURCE_FILE ("type-class.galgas", 464)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_classDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                         extensionMethod_classDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_classDeclarationAST_semanticAnalysis (defineExtensionMethod_classDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classTypeForGeneration temp_1 = object ;
    test_0 = temp_1.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-class.galgas", 496)).operator_not (SOURCE_FILE ("type-class.galgas", 496)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_classTypeForGeneration temp_2 = object ;
      extensionMethod_addHeaderFileName (temp_2.getter_mSuperClass (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 497)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_classTypeForGeneration temp_4 = object ;
    test_3 = temp_4.getter_mIsReference (HERE).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_classTypeForGeneration temp_5 = object ;
      const GALGAS_classTypeForGeneration temp_6 = object ;
      const GALGAS_classTypeForGeneration temp_7 = object ;
      GALGAS_string temp_8 ;
      const enumGalgasBool test_9 = temp_7.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-class.galgas", 504)).boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_9) {
        const GALGAS_classTypeForGeneration temp_10 = object ;
        temp_8 = temp_10.getter_mSuperClass (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 504)) ;
      }
      const GALGAS_classTypeForGeneration temp_11 = object ;
      const GALGAS_classTypeForGeneration temp_12 = object ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_31_ (inCompiler, temp_5.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 502)), temp_6.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 503)), temp_8, temp_11.getter_mIsAbstract (HERE), GALGAS_bool (kIsNotEqual, temp_12.getter_mSelfTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 506)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 501))) ;
      const GALGAS_classTypeForGeneration temp_13 = object ;
      const GALGAS_classTypeForGeneration temp_14 = object ;
      const GALGAS_classTypeForGeneration temp_15 = object ;
      const GALGAS_classTypeForGeneration temp_16 = object ;
      const GALGAS_classTypeForGeneration temp_17 = object ;
      const GALGAS_classTypeForGeneration temp_18 = object ;
      const GALGAS_classTypeForGeneration temp_19 = object ;
      const GALGAS_classTypeForGeneration temp_20 = object ;
      const GALGAS_classTypeForGeneration temp_21 = object ;
      const GALGAS_classTypeForGeneration temp_22 = object ;
      const GALGAS_classTypeForGeneration temp_23 = object ;
      const GALGAS_classTypeForGeneration temp_24 = object ;
      const GALGAS_classTypeForGeneration temp_25 = object ;
      outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_13.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 509)), temp_14.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 510)), temp_15.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 511)), temp_16.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 512)), temp_17.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 513)), temp_18.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 514)), temp_19.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 515)), temp_20.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 516)), temp_21.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 517)), temp_22.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 518)), temp_23.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 519)), temp_24.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 520)), temp_25.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 521)) COMMA_SOURCE_FILE ("type-class.galgas", 508))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 508)) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_classTypeForGeneration temp_26 = object ;
    const GALGAS_classTypeForGeneration temp_27 = object ;
    const GALGAS_classTypeForGeneration temp_28 = object ;
    GALGAS_string temp_29 ;
    const enumGalgasBool test_30 = temp_28.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-class.galgas", 527)).boolEnum () ;
    if (kBoolTrue == test_30) {
      temp_29 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_30) {
      const GALGAS_classTypeForGeneration temp_31 = object ;
      temp_29 = temp_31.getter_mSuperClass (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 527)) ;
    }
    const GALGAS_classTypeForGeneration temp_32 = object ;
    const GALGAS_classTypeForGeneration temp_33 = object ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_31_ (inCompiler, temp_26.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 525)), temp_27.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 526)), temp_29, temp_32.getter_mIsAbstract (HERE), GALGAS_bool (kIsNotEqual, temp_33.getter_mSelfTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 529)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 524))) ;
    const GALGAS_classTypeForGeneration temp_34 = object ;
    const GALGAS_classTypeForGeneration temp_35 = object ;
    const GALGAS_classTypeForGeneration temp_36 = object ;
    const GALGAS_classTypeForGeneration temp_37 = object ;
    const GALGAS_classTypeForGeneration temp_38 = object ;
    const GALGAS_classTypeForGeneration temp_39 = object ;
    const GALGAS_classTypeForGeneration temp_40 = object ;
    const GALGAS_classTypeForGeneration temp_41 = object ;
    const GALGAS_classTypeForGeneration temp_42 = object ;
    const GALGAS_classTypeForGeneration temp_43 = object ;
    const GALGAS_classTypeForGeneration temp_44 = object ;
    const GALGAS_classTypeForGeneration temp_45 = object ;
    const GALGAS_classTypeForGeneration temp_46 = object ;
    outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_34.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 532)), temp_35.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 533)), temp_36.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 534)), temp_37.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 535)), temp_38.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 536)), temp_39.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 537)), temp_40.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 538)), temp_41.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 539)), temp_42.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 540)), temp_43.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 541)), temp_44.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 542)), temp_45.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 543)), temp_46.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 544)) COMMA_SOURCE_FILE ("type-class.galgas", 531))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 531)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_classTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                              extensionMethod_classTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_classTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_classTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendDeclaration2'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          const GALGAS_string constinArgument_inOutputDirectory,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  const GALGAS_classTypeForGeneration temp_0 = object ;
  cEnumerator_typedPropertyList enumerator_21289 (temp_0.getter_mTypedAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_21289.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_21289.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 557)) ;
    enumerator_21289.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_classTypeForGeneration temp_2 = object ;
    test_1 = temp_2.getter_mIsReference (HERE).boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        const GALGAS_classTypeForGeneration temp_4 = object ;
        test_3 = temp_4.getter_mGenerateHeaderInSeparateFile (HERE).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_classTypeForGeneration temp_5 = object ;
          const GALGAS_classTypeForGeneration temp_6 = object ;
          const GALGAS_classTypeForGeneration temp_7 = object ;
          GALGAS_string temp_8 ;
          const enumGalgasBool test_9 = temp_7.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-class.galgas", 565)).boolEnum () ;
          if (kBoolTrue == test_9) {
            temp_8 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_9) {
            const GALGAS_classTypeForGeneration temp_10 = object ;
            temp_8 = temp_10.getter_mSuperClass (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 565)) ;
          }
          const GALGAS_classTypeForGeneration temp_11 = object ;
          const GALGAS_classTypeForGeneration temp_12 = object ;
          const GALGAS_classTypeForGeneration temp_13 = object ;
          GALGAS_string var_part_31__21462 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, temp_5.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 563)), temp_6.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 564)), temp_8, temp_11.getter_mTypedAttributeList (HERE), temp_12.getter_mAllTypedAttributeList (HERE), temp_13.getter_mIsAbstract (HERE) COMMA_SOURCE_FILE ("type-class.galgas", 562))) ;
          const GALGAS_classTypeForGeneration temp_14 = object ;
          const GALGAS_classTypeForGeneration temp_15 = object ;
          const GALGAS_classTypeForGeneration temp_16 = object ;
          GALGAS_string temp_17 ;
          const enumGalgasBool test_18 = temp_16.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-class.galgas", 573)).boolEnum () ;
          if (kBoolTrue == test_18) {
            temp_17 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_18) {
            const GALGAS_classTypeForGeneration temp_19 = object ;
            temp_17 = temp_19.getter_mSuperClass (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 573)) ;
          }
          const GALGAS_classTypeForGeneration temp_20 = object ;
          const GALGAS_classTypeForGeneration temp_21 = object ;
          const GALGAS_classTypeForGeneration temp_22 = object ;
          GALGAS_string var_part_32__21844 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, temp_14.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 571)), temp_15.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 572)), temp_17, temp_20.getter_mTypedAttributeList (HERE), temp_21.getter_mAllTypedAttributeList (HERE), temp_22.getter_mIsAbstract (HERE) COMMA_SOURCE_FILE ("type-class.galgas", 570))) ;
          const GALGAS_classTypeForGeneration temp_23 = object ;
          GALGAS_string var_headerFileName_22235 = GALGAS_string ("separateHeaderFor_").add_operation (temp_23.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 578)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 578)) ;
          {
          GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 580)), var_headerFileName_22235, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
            "\n"), var_part_31__21462, GALGAS_string ("\n"
            "\n"), var_part_32__21844, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 579)) ;
          }
          outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_22235, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 590)).add_operation (GALGAS_string ("\"\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 590)) ;
        }
      }
      if (kBoolFalse == test_3) {
        const GALGAS_classTypeForGeneration temp_24 = object ;
        const GALGAS_classTypeForGeneration temp_25 = object ;
        const GALGAS_classTypeForGeneration temp_26 = object ;
        GALGAS_string temp_27 ;
        const enumGalgasBool test_28 = temp_26.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-class.galgas", 595)).boolEnum () ;
        if (kBoolTrue == test_28) {
          temp_27 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_28) {
          const GALGAS_classTypeForGeneration temp_29 = object ;
          temp_27 = temp_29.getter_mSuperClass (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 595)) ;
        }
        const GALGAS_classTypeForGeneration temp_30 = object ;
        const GALGAS_classTypeForGeneration temp_31 = object ;
        const GALGAS_classTypeForGeneration temp_32 = object ;
        outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, temp_24.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 593)), temp_25.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 594)), temp_27, temp_30.getter_mTypedAttributeList (HERE), temp_31.getter_mAllTypedAttributeList (HERE), temp_32.getter_mIsAbstract (HERE) COMMA_SOURCE_FILE ("type-class.galgas", 592))) ;
        const GALGAS_classTypeForGeneration temp_33 = object ;
        const GALGAS_classTypeForGeneration temp_34 = object ;
        const GALGAS_classTypeForGeneration temp_35 = object ;
        GALGAS_string temp_36 ;
        const enumGalgasBool test_37 = temp_35.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-class.galgas", 603)).boolEnum () ;
        if (kBoolTrue == test_37) {
          temp_36 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_37) {
          const GALGAS_classTypeForGeneration temp_38 = object ;
          temp_36 = temp_38.getter_mSuperClass (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 603)) ;
        }
        const GALGAS_classTypeForGeneration temp_39 = object ;
        const GALGAS_classTypeForGeneration temp_40 = object ;
        const GALGAS_classTypeForGeneration temp_41 = object ;
        outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, temp_33.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 601)), temp_34.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 602)), temp_36, temp_39.getter_mTypedAttributeList (HERE), temp_40.getter_mAllTypedAttributeList (HERE), temp_41.getter_mIsAbstract (HERE) COMMA_SOURCE_FILE ("type-class.galgas", 600))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 600)) ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_42 = kBoolTrue ;
    if (kBoolTrue == test_42) {
      const GALGAS_classTypeForGeneration temp_43 = object ;
      test_42 = temp_43.getter_mGenerateHeaderInSeparateFile (HERE).boolEnum () ;
      if (kBoolTrue == test_42) {
        const GALGAS_classTypeForGeneration temp_44 = object ;
        const GALGAS_classTypeForGeneration temp_45 = object ;
        const GALGAS_classTypeForGeneration temp_46 = object ;
        GALGAS_string temp_47 ;
        const enumGalgasBool test_48 = temp_46.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-class.galgas", 614)).boolEnum () ;
        if (kBoolTrue == test_48) {
          temp_47 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_48) {
          const GALGAS_classTypeForGeneration temp_49 = object ;
          temp_47 = temp_49.getter_mSuperClass (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 614)) ;
        }
        const GALGAS_classTypeForGeneration temp_50 = object ;
        const GALGAS_classTypeForGeneration temp_51 = object ;
        const GALGAS_classTypeForGeneration temp_52 = object ;
        GALGAS_string var_part_31__23615 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, temp_44.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 612)), temp_45.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 613)), temp_47, temp_50.getter_mTypedAttributeList (HERE), temp_51.getter_mAllTypedAttributeList (HERE), temp_52.getter_mIsAbstract (HERE) COMMA_SOURCE_FILE ("type-class.galgas", 611))) ;
        const GALGAS_classTypeForGeneration temp_53 = object ;
        const GALGAS_classTypeForGeneration temp_54 = object ;
        const GALGAS_classTypeForGeneration temp_55 = object ;
        GALGAS_string temp_56 ;
        const enumGalgasBool test_57 = temp_55.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-class.galgas", 622)).boolEnum () ;
        if (kBoolTrue == test_57) {
          temp_56 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_57) {
          const GALGAS_classTypeForGeneration temp_58 = object ;
          temp_56 = temp_58.getter_mSuperClass (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 622)) ;
        }
        const GALGAS_classTypeForGeneration temp_59 = object ;
        const GALGAS_classTypeForGeneration temp_60 = object ;
        const GALGAS_classTypeForGeneration temp_61 = object ;
        GALGAS_string var_part_32__23993 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, temp_53.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 620)), temp_54.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 621)), temp_56, temp_59.getter_mTypedAttributeList (HERE), temp_60.getter_mAllTypedAttributeList (HERE), temp_61.getter_mIsAbstract (HERE) COMMA_SOURCE_FILE ("type-class.galgas", 619))) ;
        const GALGAS_classTypeForGeneration temp_62 = object ;
        GALGAS_string var_headerFileName_24380 = GALGAS_string ("separateHeaderFor_").add_operation (temp_62.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 627)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 627)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 627)) ;
        {
        GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 629)), var_headerFileName_24380, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
          "\n"), var_part_31__23615, GALGAS_string ("\n"
          "\n"), var_part_32__23993, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 628)) ;
        }
        outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_24380, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 639)).add_operation (GALGAS_string ("\"\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 639)) ;
      }
    }
    if (kBoolFalse == test_42) {
      const GALGAS_classTypeForGeneration temp_63 = object ;
      const GALGAS_classTypeForGeneration temp_64 = object ;
      const GALGAS_classTypeForGeneration temp_65 = object ;
      GALGAS_string temp_66 ;
      const enumGalgasBool test_67 = temp_65.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-class.galgas", 644)).boolEnum () ;
      if (kBoolTrue == test_67) {
        temp_66 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_67) {
        const GALGAS_classTypeForGeneration temp_68 = object ;
        temp_66 = temp_68.getter_mSuperClass (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 644)) ;
      }
      const GALGAS_classTypeForGeneration temp_69 = object ;
      const GALGAS_classTypeForGeneration temp_70 = object ;
      const GALGAS_classTypeForGeneration temp_71 = object ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, temp_63.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 642)), temp_64.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 643)), temp_66, temp_69.getter_mTypedAttributeList (HERE), temp_70.getter_mAllTypedAttributeList (HERE), temp_71.getter_mIsAbstract (HERE) COMMA_SOURCE_FILE ("type-class.galgas", 641))) ;
      const GALGAS_classTypeForGeneration temp_72 = object ;
      const GALGAS_classTypeForGeneration temp_73 = object ;
      const GALGAS_classTypeForGeneration temp_74 = object ;
      GALGAS_string temp_75 ;
      const enumGalgasBool test_76 = temp_74.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-class.galgas", 652)).boolEnum () ;
      if (kBoolTrue == test_76) {
        temp_75 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_76) {
        const GALGAS_classTypeForGeneration temp_77 = object ;
        temp_75 = temp_77.getter_mSuperClass (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 652)) ;
      }
      const GALGAS_classTypeForGeneration temp_78 = object ;
      const GALGAS_classTypeForGeneration temp_79 = object ;
      const GALGAS_classTypeForGeneration temp_80 = object ;
      outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, temp_72.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 650)), temp_73.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 651)), temp_75, temp_78.getter_mTypedAttributeList (HERE), temp_79.getter_mAllTypedAttributeList (HERE), temp_80.getter_mIsAbstract (HERE) COMMA_SOURCE_FILE ("type-class.galgas", 649))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 649)) ;
    }
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
//
//Overriding extension method '@classTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  const GALGAS_classTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 668)) ;
  const GALGAS_classTypeForGeneration temp_1 = object ;
  const GALGAS_classTypeForGeneration temp_2 = object ;
  const GALGAS_classTypeForGeneration temp_3 = object ;
  GALGAS_typedPropertyList var_at_26053 = temp_1.getter_mAllTypedAttributeList (HERE).getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint ((uint32_t) 0U), temp_2.getter_mAllTypedAttributeList (HERE).getter_length (SOURCE_FILE ("type-class.galgas", 670)).substract_operation (temp_3.getter_mTypedAttributeList (HERE).getter_length (SOURCE_FILE ("type-class.galgas", 670)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 670))  COMMA_SOURCE_FILE ("type-class.galgas", 670)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 669)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_classTypeForGeneration temp_5 = object ;
    test_4 = temp_5.getter_mIsReference (HERE).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_classTypeForGeneration temp_6 = object ;
      const GALGAS_classTypeForGeneration temp_7 = object ;
      const GALGAS_classTypeForGeneration temp_8 = object ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = temp_8.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-class.galgas", 676)).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_10) {
        const GALGAS_classTypeForGeneration temp_11 = object ;
        temp_9 = temp_11.getter_mSuperClass (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 676)) ;
      }
      const GALGAS_classTypeForGeneration temp_12 = object ;
      const GALGAS_classTypeForGeneration temp_13 = object ;
      const GALGAS_classTypeForGeneration temp_14 = object ;
      const GALGAS_classTypeForGeneration temp_15 = object ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeSpecificImplementation (inCompiler, temp_6.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 674)), temp_7.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 675)), temp_9, temp_12.getter_mTypedAttributeList (HERE), temp_13.getter_mAllTypedAttributeList (HERE), var_at_26053, temp_14.getter_mIsAbstract (HERE), GALGAS_bool (kIsNotEqual, temp_15.getter_mSelfTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 681)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 673))) ;
    }
  }
  if (kBoolFalse == test_4) {
    const GALGAS_classTypeForGeneration temp_16 = object ;
    const GALGAS_classTypeForGeneration temp_17 = object ;
    const GALGAS_classTypeForGeneration temp_18 = object ;
    GALGAS_string temp_19 ;
    const enumGalgasBool test_20 = temp_18.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-class.galgas", 687)).boolEnum () ;
    if (kBoolTrue == test_20) {
      temp_19 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_20) {
      const GALGAS_classTypeForGeneration temp_21 = object ;
      temp_19 = temp_21.getter_mSuperClass (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 687)) ;
    }
    const GALGAS_classTypeForGeneration temp_22 = object ;
    const GALGAS_classTypeForGeneration temp_23 = object ;
    const GALGAS_classTypeForGeneration temp_24 = object ;
    const GALGAS_classTypeForGeneration temp_25 = object ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeSpecificImplementation (inCompiler, temp_16.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 685)), temp_17.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 686)), temp_19, temp_22.getter_mTypedAttributeList (HERE), temp_23.getter_mAllTypedAttributeList (HERE), var_at_26053, temp_24.getter_mIsAbstract (HERE), GALGAS_bool (kIsNotEqual, temp_25.getter_mSelfTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 692)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 684))) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_classTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                                     extensionMethod_classTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_classTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_classTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@weakReferenceDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_weakReferenceDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_weakReferenceDeclarationAST * object = (const cPtr_weakReferenceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_weakReferenceDeclarationAST) ;
  const GALGAS_weakReferenceDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("weak reference @").add_operation (temp_0.getter_mWeakReferenceTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 18)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_weakReferenceDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_weakReferenceDeclarationAST.mSlotID,
                                          extensionGetter_weakReferenceDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_weakReferenceDeclarationAST_keyRepresentation (defineExtensionGetter_weakReferenceDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_weakReferenceDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                 GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                 GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                 GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_weakReferenceDeclarationAST * object = (const cPtr_weakReferenceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_weakReferenceDeclarationAST) ;
  const GALGAS_weakReferenceDeclarationAST temp_0 = object ;
  const GALGAS_weakReferenceDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_1648 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mWeakReferenceTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 30)), temp_1.getter_mWeakReferenceTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 30)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_1648, temp_2, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 31)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_weakReferenceDeclarationAST temp_4 = object ;
    test_3 = GALGAS_bool (kIsNotEqual, temp_4.getter_mSuperWeakReferenceTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_weakReferenceDeclarationAST temp_5 = object ;
      const GALGAS_weakReferenceDeclarationAST temp_6 = object ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_1648, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_5.getter_mSuperWeakReferenceTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 35)), temp_6.getter_mSuperWeakReferenceTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 35)) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 33)) ;
      }
    }
  }
  {
  const GALGAS_weakReferenceDeclarationAST temp_7 = object ;
  const GALGAS_weakReferenceDeclarationAST temp_8 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_1648, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_7.getter_mClassTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 40)), temp_8.getter_mClassTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 40)) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 38)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_weakReferenceDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_weakReferenceDeclarationAST.mSlotID,
                                                extensionMethod_weakReferenceDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_weakReferenceDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_weakReferenceDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_weakReferenceDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_weakReferenceDeclarationAST * object = (const cPtr_weakReferenceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_weakReferenceDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_superClassIndex_2875 ;
  GALGAS_bool var_generateHeaderInSeparateFile_2916 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_weakReferenceDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_mSuperWeakReferenceTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_2875 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 58)) ;
      var_generateHeaderInSeparateFile_2916 = GALGAS_bool (false) ;
      const GALGAS_weakReferenceDeclarationAST temp_2 = object ;
      cEnumerator_lstringlist enumerator_3078 (temp_2.getter_mClassFeatureList (HERE), kENUMERATION_UP) ;
      while (enumerator_3078.hasCurrentObject ()) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, enumerator_3078.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_generateHeaderInSeparateFile_2916 = GALGAS_bool (true) ;
          }
        }
        enumerator_3078.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_weakReferenceDeclarationAST temp_4 = object ;
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_4.getter_mSuperWeakReferenceTypeName (HERE), var_superClassIndex_2875 COMMA_SOURCE_FILE ("type-weak-reference.galgas", 66)) ;
    }
    GALGAS_typeKindEnum var_typeKindEnum_3387 ;
    GALGAS_getterMap var_inheritedGetterMap_3425 ;
    GALGAS_setterMap var_inheritedSetterMap_3463 ;
    GALGAS_instanceMethodMap var_inheritedMethodMap_3509 ;
    const GALGAS_weakReferenceDeclarationAST temp_5 = object ;
    GALGAS_bool joker_3599_3 ; // Joker input parameter
    GALGAS_bool joker_3599_2 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_entry joker_3599_1 ; // Joker input parameter
    GALGAS_bool joker_3629_5 ; // Joker input parameter
    GALGAS_typedPropertyList joker_3629_4 ; // Joker input parameter
    GALGAS_propertyMap joker_3629_3 ; // Joker input parameter
    GALGAS_typedPropertyList joker_3629_2 ; // Joker input parameter
    GALGAS_constructorMap joker_3629_1 ; // Joker input parameter
    GALGAS_classMethodMap joker_3717_9 ; // Joker input parameter
    GALGAS_optionalMethodMap joker_3717_8 ; // Joker input parameter
    GALGAS_enumerationDescriptorList joker_3717_7 ; // Joker input parameter
    GALGAS_operators joker_3717_6 ; // Joker input parameter
    GALGAS_functionSignature joker_3717_5 ; // Joker input parameter
    GALGAS_constantIndexMap joker_3717_4 ; // Joker input parameter
    GALGAS_enumConstantList joker_3717_3 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_3717_2 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_3717_1 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_entry joker_3763_4 ; // Joker input parameter
    GALGAS_string joker_3763_3 ; // Joker input parameter
    GALGAS_string joker_3763_2 ; // Joker input parameter
    GALGAS_headerKind joker_3763_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mTypeMap (HERE).method_searchKey (temp_5.getter_mSuperWeakReferenceTypeName (HERE), joker_3599_3, joker_3599_2, joker_3599_1, var_typeKindEnum_3387, joker_3629_5, joker_3629_4, joker_3629_3, joker_3629_2, joker_3629_1, var_inheritedGetterMap_3425, var_inheritedSetterMap_3463, var_inheritedMethodMap_3509, joker_3717_9, joker_3717_8, joker_3717_7, joker_3717_6, joker_3717_5, joker_3717_4, joker_3717_3, joker_3717_2, joker_3717_1, var_generateHeaderInSeparateFile_2916, joker_3763_4, joker_3763_3, joker_3763_2, joker_3763_1, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 71)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_typeKindEnum_3387.getter_isWeakReferenceType (SOURCE_FILE ("type-weak-reference.galgas", 84)).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 84)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_weakReferenceDeclarationAST temp_7 = object ;
        const GALGAS_weakReferenceDeclarationAST temp_8 = object ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_7.getter_mSuperWeakReferenceTypeName (HERE).getter_location (HERE), GALGAS_string ("the @").add_operation (temp_8.getter_mSuperWeakReferenceTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 85)).add_operation (GALGAS_string (" should be a weak reference type"), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 85)), fixItArray9  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 85)) ;
      }
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_weakReferenceIndex_4149 ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_10 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_10.getter_mWeakReferenceTypeName (HERE), var_weakReferenceIndex_4149 COMMA_SOURCE_FILE ("type-weak-reference.galgas", 89)) ;
  }
  GALGAS_constructorMap var_constructorMap_4208 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 95)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_11 = object ;
  var_constructorMap_4208.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nil"), temp_11.getter_mWeakReferenceTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 97)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 98)), GALGAS_bool (false), var_weakReferenceIndex_4149, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 96)) ;
  }
  GALGAS_getterMap var_getterMap_4402 = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 103)) ;
  GALGAS_setterMap var_setterMap_4434 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 104)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4482 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 105)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_12 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_12.getter_mWeakReferenceTypeName (HERE), var_getterMap_4402, var_setterMap_4434, var_instanceMethodMap_4482, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 106)) ;
  }
  cEnumerator_getterMap enumerator_4794 (var_getterMap_4402, kENUMERATION_UP) ;
  while (enumerator_4794.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray13 ;
    inCompiler->emitSemanticError (enumerator_4794.current_lkey (HERE).getter_location (HERE), GALGAS_string ("a weak referencev does not support extension"), fixItArray13  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 118)) ;
    enumerator_4794.gotoNextObject () ;
  }
  cEnumerator_setterMap enumerator_4896 (var_setterMap_4434, kENUMERATION_UP) ;
  while (enumerator_4896.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticError (enumerator_4896.current_lkey (HERE).getter_location (HERE), GALGAS_string ("a weak referencev does not support extension"), fixItArray14  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 121)) ;
    enumerator_4896.gotoNextObject () ;
  }
  cEnumerator_instanceMethodMap enumerator_4998 (var_instanceMethodMap_4482, kENUMERATION_UP) ;
  while (enumerator_4998.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray15 ;
    inCompiler->emitSemanticError (enumerator_4998.current_lkey (HERE).getter_location (HERE), GALGAS_string ("a weak reference does not support extension"), fixItArray15  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 124)) ;
    enumerator_4998.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_classIndex_5216 ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_16 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_16.getter_mClassTypeName (HERE), var_classIndex_5216 COMMA_SOURCE_FILE ("type-weak-reference.galgas", 127)) ;
  }
  {
  const GALGAS_weakReferenceDeclarationAST temp_17 = object ;
  const GALGAS_weakReferenceDeclarationAST temp_18 = object ;
  const GALGAS_weakReferenceDeclarationAST temp_19 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_17.getter_mWeakReferenceTypeName (HERE), temp_18.getter_mIsPredefined (HERE), GALGAS_bool (true), var_superClassIndex_2875, GALGAS_typeKindEnum::constructor_weakReferenceType (var_classIndex_5216  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 133)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 135)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 136)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 137)), var_constructorMap_4208, GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 139)), GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 140)), GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 141)), GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 142)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 143)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 144)), GALGAS_operators::constructor_isReferenceEquatable (SOURCE_FILE ("type-weak-reference.galgas", 145)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 146)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 147)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 148)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 149)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 150)), var_generateHeaderInSeparateFile_2916, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 152)), GALGAS_string ("nil"), GALGAS_string ("weak-reference-").add_operation (temp_19.getter_mWeakReferenceTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 154)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-weak-reference.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 128)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_weakReferenceDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_weakReferenceDeclarationAST.mSlotID,
                                               extensionMethod_weakReferenceDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_weakReferenceDeclarationAST_enterInSemanticContext (defineExtensionMethod_weakReferenceDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_weakReferenceDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                          GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                          const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                          GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_weakReferenceDeclarationAST * object = (const cPtr_weakReferenceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_weakReferenceDeclarationAST) ;
  const GALGAS_weakReferenceDeclarationAST temp_0 = object ;
  GALGAS_lstring var_weakRefTypeNameForUsefulness_6755 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mWeakReferenceTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 172)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_weakRefTypeNameForUsefulness_6755, var_weakRefTypeNameForUsefulness_6755, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 173)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_weakReferenceDeclarationAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.getter_mSuperWeakReferenceTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_weakReferenceDeclarationAST temp_3 = object ;
      GALGAS_lstring var_superWeakRefNameForUsefulness_7009 = function_typeNameForUsefulEntitiesGraph (temp_3.getter_mSuperWeakReferenceTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 175)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_weakRefTypeNameForUsefulness_6755, var_superWeakRefNameForUsefulness_7009 COMMA_SOURCE_FILE ("type-weak-reference.galgas", 176)) ;
      }
    }
  }
  const GALGAS_weakReferenceDeclarationAST temp_4 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_7238 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_4.getter_mWeakReferenceTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 179)) ;
  const GALGAS_weakReferenceDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, temp_5.getter_mSuperWeakReferenceTypeName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 182)) ;
  }else if (kBoolFalse == test_7) {
    const GALGAS_weakReferenceDeclarationAST temp_8 = object ;
    temp_6 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_8.getter_mSuperWeakReferenceTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 183)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_superClassEntry_7375 = temp_6 ;
  GALGAS_typedPropertyList var_allAttributeList_7783 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, var_superClassEntry_7375.objectCompare (GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 189)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      var_allAttributeList_7783 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 190)) ;
      GALGAS_bool var_generatedInSeparateFileFeature_7889 = GALGAS_bool (false) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_weakReferenceDeclarationAST temp_11 = object ;
        test_10 = GALGAS_bool (kIsStrictSup, temp_11.getter_mClassFeatureList (HERE).getter_length (SOURCE_FILE ("type-weak-reference.galgas", 192)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_weakReferenceDeclarationAST temp_12 = object ;
          cEnumerator_lstringlist enumerator_7963 (temp_12.getter_mClassFeatureList (HERE), kENUMERATION_UP) ;
          while (enumerator_7963.hasCurrentObject ()) {
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (kIsEqual, enumerator_7963.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
              if (kBoolTrue == test_13) {
                enumGalgasBool test_14 = kBoolTrue ;
                if (kBoolTrue == test_14) {
                  test_14 = var_generatedInSeparateFileFeature_7889.boolEnum () ;
                  if (kBoolTrue == test_14) {
                    TC_Array <C_FixItDescription> fixItArray15 ;
                    inCompiler->emitSemanticError (enumerator_7963.current_mValue (HERE).getter_location (HERE), GALGAS_string ("the 'generatedInSeparateFile' is already named"), fixItArray15  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 196)) ;
                  }
                }
                var_generatedInSeparateFileFeature_7889 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_13) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (enumerator_7963.current_mValue (HERE).getter_location (HERE), GALGAS_string ("only the 'generatedInSeparateFile' attribute is allowed here"), fixItArray16  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 200)) ;
            }
            enumerator_7963.gotoNextObject () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    var_allAttributeList_7783 = var_superClassEntry_7375.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 205)) ;
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      const GALGAS_weakReferenceDeclarationAST temp_18 = object ;
      test_17 = GALGAS_bool (kIsStrictSup, temp_18.getter_mClassFeatureList (HERE).getter_length (SOURCE_FILE ("type-weak-reference.galgas", 206)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_17) {
        const GALGAS_weakReferenceDeclarationAST temp_19 = object ;
        cEnumerator_lstringlist enumerator_8502 (temp_19.getter_mClassFeatureList (HERE), kENUMERATION_UP) ;
        while (enumerator_8502.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (enumerator_8502.current_mValue (HERE).getter_location (HERE), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray20  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 208)) ;
          enumerator_8502.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_8707 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 213)) ;
  GALGAS_propertyIndexMap var_attributeMap_8749 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 214)) ;
  const GALGAS_weakReferenceDeclarationAST temp_21 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_8818 (temp_21.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_8818.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_t_8854 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_8818.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 216)) ;
    GALGAS_bool var_hasSelector_8957 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_8981 (enumerator_8818.current_mAttributeList (HERE), kENUMERATION_UP) ;
    bool bool_22 = var_hasSelector_8957.operator_not (SOURCE_FILE ("type-weak-reference.galgas", 218)).isValidAndTrue () ;
    if (enumerator_8981.hasCurrentObject () && bool_22) {
      while (enumerator_8981.hasCurrentObject () && bool_22) {
        var_hasSelector_8957 = GALGAS_bool (kIsEqual, enumerator_8981.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selector"))) ;
        enumerator_8981.gotoNextObject () ;
        if (enumerator_8981.hasCurrentObject ()) {
          bool_22 = var_hasSelector_8957.operator_not (SOURCE_FILE ("type-weak-reference.galgas", 218)).isValidAndTrue () ;
        }
      }
    }
    var_typedAttributeList_8707.addAssign_operation (var_t_8854, enumerator_8818.current_mPropertyName (HERE), enumerator_8818.current_mIsPublic (HERE), var_hasSelector_8957  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 221)) ;
    var_allAttributeList_7783.addAssign_operation (var_t_8854, enumerator_8818.current_mPropertyName (HERE), enumerator_8818.current_mIsPublic (HERE), var_hasSelector_8957  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 226)) ;
    {
    var_attributeMap_8749.setter_insertKey (enumerator_8818.current_mPropertyName (HERE), var_t_8854, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 231)) ;
    }
    enumerator_8818.gotoNextObject () ;
  }
  const GALGAS_weakReferenceDeclarationAST temp_23 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_referenceClassType_9370 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_23.getter_mClassTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 234)) ;
  const GALGAS_weakReferenceDeclarationAST temp_24 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("weak reference ").add_operation (temp_24.getter_mWeakReferenceTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 239)), GALGAS_weakReferenceTypeForGeneration::constructor_new (var_selfType_7238, var_referenceClassType_9370, var_superClassEntry_7375, var_allAttributeList_7783, var_typedAttributeList_8707, var_selfType_7238.getter_mGenerateHeaderInSeparateFile (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 246))  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 240))  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 238)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_weakReferenceDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_weakReferenceDeclarationAST.mSlotID,
                                         extensionMethod_weakReferenceDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_weakReferenceDeclarationAST_semanticAnalysis (defineExtensionMethod_weakReferenceDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_weakReferenceTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_string & outArgument_outHeader,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_weakReferenceTypeForGeneration * object = (const cPtr_weakReferenceTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_weakReferenceTypeForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_weakReferenceTypeForGeneration temp_1 = object ;
    test_0 = temp_1.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 268)).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 268)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_weakReferenceTypeForGeneration temp_2 = object ;
      extensionMethod_addHeaderFileName (temp_2.getter_mSuperClass (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 269)) ;
    }
  }
  const GALGAS_weakReferenceTypeForGeneration temp_3 = object ;
  extensionMethod_addHeaderFileName (temp_3.getter_mReferenceClassType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 271)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_4 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_5 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_6 = object ;
  GALGAS_string temp_7 ;
  const enumGalgasBool test_8 = temp_6.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 276)).boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_8) {
    const GALGAS_weakReferenceTypeForGeneration temp_9 = object ;
    temp_7 = temp_9.getter_mSuperClass (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 276)) ;
  }
  const GALGAS_weakReferenceTypeForGeneration temp_10 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeHeader_31_ (inCompiler, temp_4.getter_mReferenceClassType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 274)), temp_5.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 275)), temp_7, GALGAS_bool (kIsNotEqual, temp_10.getter_mSelfTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 277)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 273))) ;
  const GALGAS_weakReferenceTypeForGeneration temp_11 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_12 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_13 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_14 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_15 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_16 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_17 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_18 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_19 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_20 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_21 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_22 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_23 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_11.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 280)), temp_12.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 281)), temp_13.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 282)), temp_14.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 283)), temp_15.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 284)), temp_16.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 285)), temp_17.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 286)), temp_18.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 287)), temp_19.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 288)), temp_20.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 289)), temp_21.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 290)), temp_22.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 291)), temp_23.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 292)) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 279))), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 279)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_weakReferenceTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration.mSlotID,
                                              extensionMethod_weakReferenceTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_weakReferenceTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_weakReferenceTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_weakReferenceTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                         const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_string & outArgument_outImplementation,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_weakReferenceTypeForGeneration * object = (const cPtr_weakReferenceTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_weakReferenceTypeForGeneration) ;
  const GALGAS_weakReferenceTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 303)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_1 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_2 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_3 = object ;
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = temp_3.getter_mSuperClass (HERE).getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 307)).boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_5) {
    const GALGAS_weakReferenceTypeForGeneration temp_6 = object ;
    temp_4 = temp_6.getter_mSuperClass (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 307)) ;
  }
  const GALGAS_weakReferenceTypeForGeneration temp_7 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_8 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_9 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_10 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_11 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_12 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeSpecificImplementation (inCompiler, temp_1.getter_mReferenceClassType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 305)), temp_2.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 306)), temp_4, temp_7.getter_mTypedAttributeList (HERE), temp_8.getter_mAllTypedPropertyList (HERE), temp_9.getter_mAllTypedPropertyList (HERE).getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint ((uint32_t) 0U), temp_10.getter_mAllTypedPropertyList (HERE).getter_length (SOURCE_FILE ("type-weak-reference.galgas", 310)).substract_operation (temp_11.getter_mTypedAttributeList (HERE).getter_length (SOURCE_FILE ("type-weak-reference.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 310))  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 310)), GALGAS_bool (kIsNotEqual, temp_12.getter_mSelfTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 311)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 304))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_weakReferenceTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration.mSlotID,
                                                     extensionMethod_weakReferenceTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_weakReferenceTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_weakReferenceTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  const GALGAS_enumDeclarationAST temp_0 = object ;
  const GALGAS_enumDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_2803 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mEnumTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 74)), temp_1.getter_mEnumTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 74)) ;
  {
  const GALGAS_enumDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2803, temp_2, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 75)) ;
  }
  GALGAS_bool var_circularReference_3045 = GALGAS_bool (true) ;
  const GALGAS_enumDeclarationAST temp_3 = object ;
  cEnumerator_enumConstantList enumerator_3092 (temp_3.getter_mConstantList (HERE), kENUMERATION_UP) ;
  bool bool_4 = var_circularReference_3045.isValidAndTrue () ;
  if (enumerator_3092.hasCurrentObject () && bool_4) {
    while (enumerator_3092.hasCurrentObject () && bool_4) {
      GALGAS_bool var_namesCurrentType_3167 = GALGAS_bool (false) ;
      cEnumerator__32_lstringlist enumerator_3194 (enumerator_3092.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
      bool bool_5 = var_namesCurrentType_3167.operator_not (SOURCE_FILE ("type-enum.galgas", 80)).isValidAndTrue () ;
      if (enumerator_3194.hasCurrentObject () && bool_5) {
        while (enumerator_3194.hasCurrentObject () && bool_5) {
          GALGAS_lstring var_propertyKey_3281 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3194.current_mValue_30_ (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 81)), enumerator_3194.current_mValue_30_ (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 81)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, var_propertyKey_3281.getter_string (HERE).objectCompare (var_key_2803.getter_string (HERE))).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_namesCurrentType_3167 = GALGAS_bool (true) ;
            }
          }
          enumerator_3194.gotoNextObject () ;
          if (enumerator_3194.hasCurrentObject ()) {
            bool_5 = var_namesCurrentType_3167.operator_not (SOURCE_FILE ("type-enum.galgas", 80)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_namesCurrentType_3167.operator_not (SOURCE_FILE ("type-enum.galgas", 86)).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_circularReference_3045 = GALGAS_bool (false) ;
        }
      }
      enumerator_3092.gotoNextObject () ;
      if (enumerator_3092.hasCurrentObject ()) {
        bool_4 = var_circularReference_3045.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_circularReference_3045.boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumDeclarationAST temp_9 = object ;
      cEnumerator_enumConstantList enumerator_3643 (temp_9.getter_mConstantList (HERE), kENUMERATION_UP) ;
      while (enumerator_3643.hasCurrentObject ()) {
        cEnumerator__32_lstringlist enumerator_3690 (enumerator_3643.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_3690.hasCurrentObject ()) {
          GALGAS_lstring var_propertyKey_3752 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3690.current_mValue_30_ (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 94)), enumerator_3690.current_mValue_30_ (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 94)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsNotEqual, var_propertyKey_3752.getter_string (HERE).objectCompare (var_key_2803.getter_string (HERE))).boolEnum () ;
            if (kBoolTrue == test_10) {
              {
              ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2803, var_propertyKey_3752 COMMA_SOURCE_FILE ("type-enum.galgas", 96)) ;
              }
            }
          }
          enumerator_3690.gotoNextObject () ;
        }
        enumerator_3643.gotoNextObject () ;
      }
    }
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
//
//Overriding extension method '@enumDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_constructorMap var_constructorMap_4672 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 113)) ;
  GALGAS_setterMap var_setterMap_4704 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 114)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4752 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 115)) ;
  GALGAS_classMethodMap var_classMethodMap_4794 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 116)) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_4842 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 117)) ;
  GALGAS_unifiedTypeMap_2D_entry var_enumTypeEntry_4978 ;
  {
  const GALGAS_enumDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.getter_mEnumTypeName (HERE), var_enumTypeEntry_4978 COMMA_SOURCE_FILE ("type-enum.galgas", 119)) ;
  }
  GALGAS_constantIndexMap var_constantMap_5033 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 121)) ;
  GALGAS_bool var_hasAssociatedValues_5070 = GALGAS_bool (false) ;
  const GALGAS_enumDeclarationAST temp_1 = object ;
  cEnumerator_enumConstantList enumerator_5130 (temp_1.getter_mConstantList (HERE), kENUMERATION_UP) ;
  while (enumerator_5130.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_5208 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 124)) ;
    GALGAS_functionSignature var_argumentTypeList_5257 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 125)) ;
    cEnumerator__32_lstringlist enumerator_5293 (enumerator_5130.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5293.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_associatedTypeEntry_5434 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_5293.current_mValue_30_ (HERE), var_associatedTypeEntry_5434 COMMA_SOURCE_FILE ("type-enum.galgas", 127)) ;
      }
      var_argumentTypeList_5257.addAssign_operation (enumerator_5293.current_mValue_31_ (HERE), var_associatedTypeEntry_5434, enumerator_5293.current_mValue_30_ (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 128)) ;
      var_associatedTypeList_5208.addAssign_operation (var_associatedTypeEntry_5434  COMMA_SOURCE_FILE ("type-enum.galgas", 129)) ;
      var_hasAssociatedValues_5070 = GALGAS_bool (true) ;
      enumerator_5293.gotoNextObject () ;
    }
    {
    var_constantMap_5033.setter_insertKey (enumerator_5130.current_mConstantName (HERE), var_constantMap_5033.getter_count (SOURCE_FILE ("type-enum.galgas", 132)), var_associatedTypeList_5208, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 132)) ;
    }
    {
    var_constructorMap_4672.setter_insertOrReplace (enumerator_5130.current_mConstantName (HERE), var_argumentTypeList_5257, GALGAS_bool (false), var_enumTypeEntry_4978 COMMA_SOURCE_FILE ("type-enum.galgas", 133)) ;
    }
    enumerator_5130.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_2 = object ;
  cEnumerator_enumConstantList enumerator_5883 (temp_2.getter_mConstantList (HERE), kENUMERATION_UP) ;
  while (enumerator_5883.hasCurrentObject ()) {
    GALGAS_optionalMethodSignature var_argumentTypeList_5959 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 142)) ;
    cEnumerator__32_lstringlist enumerator_5995 (enumerator_5883.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5995.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_associatedTypeEntry_6136 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_5995.current_mValue_30_ (HERE), var_associatedTypeEntry_6136 COMMA_SOURCE_FILE ("type-enum.galgas", 144)) ;
      }
      var_argumentTypeList_5959.addAssign_operation (GALGAS_bool (false), enumerator_5995.current_mValue_31_ (HERE), var_associatedTypeEntry_6136, enumerator_5995.current_mValue_30_ (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 145)) ;
      enumerator_5995.gotoNextObject () ;
    }
    {
    var_optionalMethodMap_4842.setter_insertKey (enumerator_5883.current_mConstantName (HERE), var_argumentTypeList_5959, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 147)) ;
    }
    enumerator_5883.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_3 = object ;
  cEnumerator_enumConstantList enumerator_6396 (temp_3.getter_mConstantList (HERE), kENUMERATION_UP) ;
  while (enumerator_6396.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_6396.current_mAssociatedValueDefinitionList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 154)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_unifiedTypeMapEntryList var_associatedTypeList_6532 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 155)) ;
        GALGAS_formalParameterSignature var_argumentTypeList_6590 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 156)) ;
        cEnumerator__32_lstringlist enumerator_6628 (enumerator_6396.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_6628.hasCurrentObject ()) {
          GALGAS_unifiedTypeMap_2D_entry var_associatedTypeEntry_6771 ;
          {
          GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_6628.current_mValue_30_ (HERE), var_associatedTypeEntry_6771 COMMA_SOURCE_FILE ("type-enum.galgas", 158)) ;
          }
          var_argumentTypeList_6590.addAssign_operation (enumerator_6628.current_mValue_31_ (HERE), var_associatedTypeEntry_6771, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-enum.galgas", 159)), enumerator_6628.current_mValue_30_ (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 159)) ;
          var_associatedTypeList_6532.addAssign_operation (var_associatedTypeEntry_6771  COMMA_SOURCE_FILE ("type-enum.galgas", 160)) ;
          var_hasAssociatedValues_5070 = GALGAS_bool (true) ;
          enumerator_6628.gotoNextObject () ;
        }
        {
        var_instanceMethodMap_4752.setter_insertKey (enumerator_6396.current_mConstantName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-enum.galgas", 165)), var_argumentTypeList_6590, enumerator_6396.current_mConstantName (HERE).getter_location (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-enum.galgas", 169)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 163)) ;
        }
      }
    }
    enumerator_6396.gotoNextObject () ;
  }
  GALGAS_getterMap var_getterMap_7301 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_7301, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 176)) ;
  }
  const GALGAS_enumDeclarationAST temp_5 = object ;
  cEnumerator_enumConstantList enumerator_7325 (temp_5.getter_mConstantList (HERE), kENUMERATION_UP) ;
  while (enumerator_7325.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument (var_getterMap_7301, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("is").add_operation (enumerator_7325.current_mConstantName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-enum.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 181)), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 178)) ;
    }
    enumerator_7325.gotoNextObject () ;
  }
  {
  const GALGAS_enumDeclarationAST temp_6 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_6.getter_mEnumTypeName (HERE), var_getterMap_7301, var_setterMap_4704, var_instanceMethodMap_4752, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 187)) ;
  }
  GALGAS_string var_defaultConstructorName_7935 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_enumDeclarationAST temp_8 = object ;
    test_7 = GALGAS_bool (kIsNotEqual, temp_8.getter_mDefaultConstantName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_unifiedTypeMapEntryList var_associatedTypeList_8094 ;
      const GALGAS_enumDeclarationAST temp_9 = object ;
      GALGAS_uint joker_8069 ; // Joker input parameter
      var_constantMap_5033.method_searchKey (temp_9.getter_mDefaultConstantName (HERE), joker_8069, var_associatedTypeList_8094, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 201)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (kIsEqual, var_associatedTypeList_8094.getter_length (SOURCE_FILE ("type-enum.galgas", 202)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_enumDeclarationAST temp_11 = object ;
          var_defaultConstructorName_7935 = temp_11.getter_mDefaultConstantName (HERE).getter_string (HERE) ;
        }
      }
      if (kBoolFalse == test_10) {
        const GALGAS_enumDeclarationAST temp_12 = object ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.getter_mDefaultConstantName (HERE).getter_location (HERE), GALGAS_string ("the default constant should have no associated values"), fixItArray13  COMMA_SOURCE_FILE ("type-enum.galgas", 205)) ;
      }
    }
  }
  {
  const GALGAS_enumDeclarationAST temp_14 = object ;
  const GALGAS_enumDeclarationAST temp_15 = object ;
  const GALGAS_enumDeclarationAST temp_16 = object ;
  const GALGAS_enumDeclarationAST temp_17 = object ;
  GALGAS_headerKind temp_18 ;
  const enumGalgasBool test_19 = var_hasAssociatedValues_5070.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-enum.galgas", 236)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-enum.galgas", 236)) ;
  }
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_14.getter_mEnumTypeName (HERE), temp_15.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-enum.galgas", 213)), GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("type-enum.galgas", 214)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 216)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 217)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 218)), var_constructorMap_4672, var_getterMap_7301, var_setterMap_4704, var_instanceMethodMap_4752, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 223)), var_optionalMethodMap_4842, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 225)), GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-enum.galgas", 226)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-enum.galgas", 226)) COMMA_SOURCE_FILE ("type-enum.galgas", 226)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 227)), var_constantMap_5033, temp_16.getter_mConstantList (HERE), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 230)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 231)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-enum.galgas", 233)), var_defaultConstructorName_7935, GALGAS_string ("enum-").add_operation (temp_17.getter_mEnumTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-enum.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 235)), temp_18, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 209)) ;
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
//
//Overriding extension method '@enumDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  const GALGAS_enumDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_9858 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mEnumTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 253)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9858, var_nameForUsefulness_9858, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 254)) ;
  }
  GALGAS_stringlist var_constantList_10025 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 256)) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration_10108 = GALGAS_enumConstantListForGeneration::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 257)) ;
  GALGAS_constantIndexMap var_constantMap_10131 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 258)) ;
  const GALGAS_enumDeclarationAST temp_1 = object ;
  cEnumerator_enumConstantList enumerator_10205 (temp_1.getter_mConstantList (HERE), kENUMERATION_UP) ;
  while (enumerator_10205.hasCurrentObject ()) {
    var_constantList_10025.addAssign_operation (enumerator_10205.current_mConstantName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 260)) ;
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_10325 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 261)) ;
    GALGAS_stringset var_associatedValueNameSet_10372 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-enum.galgas", 262)) ;
    cEnumerator__32_lstringlist enumerator_10402 (enumerator_10205.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_10402.hasCurrentObject ()) {
      GALGAS_lstring var_propertyTypeNameForUsefulness_10480 = function_typeNameForUsefulEntitiesGraph (enumerator_10402.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 264)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_9858, var_propertyTypeNameForUsefulness_10480 COMMA_SOURCE_FILE ("type-enum.galgas", 265)) ;
      }
      GALGAS_unifiedTypeMap_2D_entry var_associatedTypeEntry_10644 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_10402.current_mValue_30_ (HERE), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 266)) ;
      var_associatedTypeList_10325.addAssign_operation (var_associatedTypeEntry_10644  COMMA_SOURCE_FILE ("type-enum.galgas", 267)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_associatedValueNameSet_10372.getter_hasKey (enumerator_10402.current_mValue_31_ (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-enum.galgas", 268)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_10402.current_mValue_31_ (HERE).getter_location (HERE), GALGAS_string ("duplicated name"), fixItArray3  COMMA_SOURCE_FILE ("type-enum.galgas", 269)) ;
        }
      }
      var_associatedValueNameSet_10372.addAssign_operation (enumerator_10402.current_mValue_31_ (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 271)) ;
      enumerator_10402.gotoNextObject () ;
    }
    {
    var_constantMap_10131.setter_insertKey (enumerator_10205.current_mConstantName (HERE), var_constantMap_10131.getter_count (SOURCE_FILE ("type-enum.galgas", 273)), var_associatedTypeList_10325, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 273)) ;
    }
    var_enumConstantListForGeneration_10108.addAssign_operation (enumerator_10205.current_mConstantName (HERE).getter_string (HERE), var_associatedTypeList_10325  COMMA_SOURCE_FILE ("type-enum.galgas", 274)) ;
    enumerator_10205.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_4 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_11127 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_4.getter_mEnumTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 277)) ;
  const GALGAS_enumDeclarationAST temp_5 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (temp_5.getter_mEnumTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 279)), GALGAS_enumTypeForGeneration::constructor_new (var_selfType_11127, var_enumConstantListForGeneration_10108  COMMA_SOURCE_FILE ("type-enum.galgas", 280))  COMMA_SOURCE_FILE ("type-enum.galgas", 278)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                         extensionMethod_enumDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumDeclarationAST_semanticAnalysis (defineExtensionMethod_enumDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'enumGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_enumGenerationTemplate_0,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (C_Compiler * inCompiler,
                                                                             const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" enum"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Enumeration\n"
    "  public: typedef enum {\n"
    "    kNotBuilt" ;
  GALGAS_uint index_614_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_614 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_614.hasCurrentObject ()) {
      result << ",\n"
        "    kEnum_" ;
      result << enumerator_614.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 15)).stringValue () ;
      index_614_.increment () ;
      enumerator_614.gotoNextObject () ;
    }
  }
  result << "\n"
    "  } enumeration ;\n"
    "  \n"
    "//--------------------------------- Private data member\n" ;
  const enumGalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;\n"
      "  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {\n"
      "    return mAssociatedValues.unsafePointer () ;\n"
      "  }\n"
      "\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "  private: enumeration mEnum ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }\n"
    "  public: inline enumeration enumValue (void) const { return mEnum ; }\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeHeader2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (C_Compiler * inCompiler,
                                                                             const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  const enumGalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "//\n"
      "//" ;
    result << GALGAS_string (" Phase 2: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).add_operation (GALGAS_string (" enum, associated values"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).stringValue () ;
    result << "\n"
      "//\n" ;
    GALGAS_uint index_252_ (0) ;
    if (in_CONSTANT_5F_LIST.isValid ()) {
      cEnumerator_enumConstantListForGeneration enumerator_252 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_252.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_252.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 8)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "//----------------------------------------------------------------------------------------------------------------------\n"
            "\n"
            "class cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_252.current_mConstantName (HERE).stringValue () ;
          result << " : public cEnumAssociatedValues {\n" ;
          GALGAS_uint index_588_idx (0) ;
          if (enumerator_252.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapEntryList enumerator_588 (enumerator_252.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_588.hasCurrentObject ()) {
              result << "  public: const GALGAS_" ;
              result << enumerator_588.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " mAssociatedValue" ;
              result << index_588_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " ;\n" ;
              index_588_idx.increment () ;
              enumerator_588.gotoNextObject () ;
            }
          }
          result << "\n"
            "//--- Constructor\n"
            "  public: cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_252.current_mConstantName (HERE).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_868_idx (0) ;
          if (enumerator_252.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapEntryList enumerator_868 (enumerator_252.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_868.hasCurrentObject ()) {
              result << "const GALGAS_" ;
              result << enumerator_868.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              result << " & inAssociatedValue" ;
              result << index_868_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              if (enumerator_868.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_868_idx.increment () ;
              enumerator_868.gotoNextObject () ;
            }
          }
          result << "\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS) ;\n"
            "\n"
            "  public: virtual void description (" ;
          columnMarker = result.currentColumn () ;
          result << "C_String & ioString,\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "const int32_t inIndentation) const ;\n"
            "  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;\n"
            "\n"
            "  public: virtual ~ cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_252.current_mConstantName (HERE).stringValue () ;
          result << " (void) {}\n"
            "} ;\n"
            "\n" ;
        }else if (kBoolFalse == test_1) {
        }
        index_252_.increment () ;
        enumerator_252.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
  }
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & in_TYPE_5F_NAME,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                                         const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  GALGAS_uint index_27_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_27 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_27.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_27.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 3)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << "::cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_389_idx (0) ;
        if (enumerator_27.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_389 (enumerator_27.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_389.hasCurrentObject ()) {
            result << "const GALGAS_" ;
            result << enumerator_389.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue () ;
            result << " & inAssociatedValue" ;
            result << index_389_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue () ;
            if (enumerator_389.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_389_idx.increment () ;
            enumerator_389.gotoNextObject () ;
          }
        }
        result << "\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) :\n"
          "cEnumAssociatedValues (THERE)" ;
        GALGAS_uint index_626_idx (0) ;
        if (enumerator_27.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_626 (enumerator_27.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_626.hasCurrentObject ()) {
            result << ",\n"
              "mAssociatedValue" ;
            result << index_626_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue () ;
            result << " (inAssociatedValue" ;
            result << index_626_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue () ;
            result << ")" ;
            index_626_idx.increment () ;
            enumerator_626.gotoNextObject () ;
          }
        }
        result << " {\n"
          "} ;\n"
          "\n"
          "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << "::description (" ;
        columnMarker = result.currentColumn () ;
        result << "C_String & ioString,\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "const int32_t inIndentation) const {\n"
          "  ioString << \"(\\n\" ;\n" ;
        GALGAS_uint index_1128_idx (0) ;
        if (enumerator_27.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_1128 (enumerator_27.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1128.hasCurrentObject ()) {
            result << "  mAssociatedValue" ;
            result << index_1128_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 22)).stringValue () ;
            result << ".description (ioString, inIndentation) ;\n" ;
            index_1128_idx.increment () ;
            enumerator_1128.gotoNextObject () ;
          }
        }
        result << "  ioString << \")\" ;\n"
          "}\n"
          "\n"
          "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "typeComparisonResult cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << "::compare (const cEnumAssociatedValues * inOperand) const {\n"
          "  const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = dynamic_cast<const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << " *> (inOperand) ;\n"
          "  macroValidPointer (ptr) ;\n"
          "  typeComparisonResult result = kOperandEqual ;\n" ;
        GALGAS_uint index_1857_idx (0) ;
        if (enumerator_27.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_1857 (enumerator_27.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1857.hasCurrentObject ()) {
            result << "  if (result == kOperandEqual) {\n"
              "    result = mAssociatedValue" ;
            result << index_1857_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue () ;
            result << ".objectCompare (ptr->mAssociatedValue" ;
            result << index_1857_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue () ;
            result << ") ;\n"
              "  }\n" ;
            index_1857_idx.increment () ;
            enumerator_1857.gotoNextObject () ;
          }
        }
        result << "  return result ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_27_.increment () ;
      enumerator_27.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n" ;
  const enumGalgasBool test_1 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "mAssociatedValues (),\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "mEnum (kNotBuilt) {\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_2383_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_2383 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2383.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_2383.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 54)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_2383.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 55)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "UNUSED_LOCATION_ARGS" ;
      }else if (kBoolFalse == test_2) {
        GALGAS_uint index_2768_idx (0) ;
        if (enumerator_2383.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_2768 (enumerator_2383.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_2768.hasCurrentObject ()) {
            result << "const GALGAS_" ;
            result << enumerator_2768.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue () ;
            result << " & inAssociatedValue" ;
            result << index_2768_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue () ;
            if (enumerator_2768.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_2768_idx.increment () ;
            enumerator_2768.gotoNextObject () ;
          }
        }
        result << "\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS" ;
      }
      result << ") {\n"
        "  GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " result ;\n" ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2383.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 66)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  result.mEnum = kEnum_" ;
        result << enumerator_2383.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 67)).stringValue () ;
        result << " ;\n" ;
      }else if (kBoolFalse == test_3) {
        result << "  if (" ;
        GALGAS_uint index_3173_idx (0) ;
        if (enumerator_2383.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_3173 (enumerator_2383.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_3173.hasCurrentObject ()) {
            result << "inAssociatedValue" ;
            result << index_3173_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 71)).stringValue () ;
            result << ".isValid ()" ;
            if (enumerator_3173.hasNextObject ()) {
              result << " && " ;
            }
            index_3173_idx.increment () ;
            enumerator_3173.gotoNextObject () ;
          }
        }
        result << ") {\n"
          "    result.mEnum = kEnum_" ;
        result << enumerator_2383.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 75)).stringValue () ;
        result << " ;\n"
          "    cEnumAssociatedValues * ptr = NULL ;\n"
          "    macroMyNew (ptr, cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_2383.current_mConstantName (HERE).stringValue () ;
        result << " (" ;
        GALGAS_uint index_3529_idx (0) ;
        if (enumerator_2383.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_3529 (enumerator_2383.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_3529.hasCurrentObject ()) {
            result << "inAssociatedValue" ;
            result << index_3529_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).stringValue () ;
            if (enumerator_3529.hasNextObject ()) {
              result << ", " ;
            }
            index_3529_idx.increment () ;
            enumerator_3529.gotoNextObject () ;
          }
        }
        result << " COMMA_THERE)) ;\n"
          "    result.mAssociatedValues.setPointer (ptr) ;\n"
          "    macroDetachSharedObject (ptr) ;\n"
          "  }\n" ;
      }
      result << "  return result ;\n"
        "}\n"
        "\n" ;
      index_2383_.increment () ;
      enumerator_2383.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3796_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_3796 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3796.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, enumerator_3796.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 92)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::method_" ;
        result << enumerator_3796.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 94)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_4120_idx (0) ;
        if (enumerator_3796.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4120 (enumerator_3796.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4120.hasCurrentObject ()) {
            result << "GALGAS_" ;
            result << enumerator_4120.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue () ;
            result << " & outAssociatedValue" ;
            result << index_4120_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue () ;
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            index_4120_idx.increment () ;
            enumerator_4120.gotoNextObject () ;
          }
        }
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "C_Compiler * inCompiler\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) const {\n"
          "  if (mEnum != kEnum_" ;
        result << enumerator_3796.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 100)).stringValue () ;
        result << ") {\n" ;
        GALGAS_uint index_4421_idx (0) ;
        if (enumerator_3796.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4421 (enumerator_3796.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4421.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_4421_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 102)).stringValue () ;
            result << ".drop () ;\n" ;
            index_4421_idx.increment () ;
            enumerator_4421.gotoNextObject () ;
          }
        }
        result << "    C_String s ;\n"
          "    s << \"method @" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " " ;
        result << enumerator_3796.current_mConstantName (HERE).stringValue () ;
        result << " invoked with an invalid enum value\" ;\n"
          "    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n"
          "  }else{\n"
          "    const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_3796.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_3796.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n" ;
        GALGAS_uint index_4919_idx (0) ;
        if (enumerator_3796.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4919 (enumerator_3796.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4919.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_4919_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue () ;
            result << " = ptr->mAssociatedValue" ;
            result << index_4919_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue () ;
            result << " ;\n" ;
            index_4919_idx.increment () ;
            enumerator_4919.gotoNextObject () ;
          }
        }
        result << "  }\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_4) {
      }
      index_3796_.increment () ;
      enumerator_3796.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5079_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_5079 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5079.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::optional_" ;
      result << enumerator_5079.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 120)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_5361_idx (0) ;
      if (enumerator_5079.current_mAssociatedValueTypeList (HERE).isValid ()) {
        cEnumerator_unifiedTypeMapEntryList enumerator_5361 (enumerator_5079.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
        while (enumerator_5361.hasCurrentObject ()) {
          result << "GALGAS_" ;
          result << enumerator_5361.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue () ;
          result << " & outAssociatedValue" ;
          result << index_5361_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue () ;
          if (enumerator_5361.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_5361_idx.increment () ;
          enumerator_5361.gotoNextObject () ;
        }
      }
      result << ") const {\n"
        "  const bool ok = mEnum == kEnum_" ;
      result << enumerator_5079.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 128)).stringValue () ;
      result << " ;\n" ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, enumerator_5079.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 129)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        result << "  if (ok) {\n"
          "    const auto * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5079.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n"
          "    // const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5079.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5079.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n" ;
        GALGAS_uint index_6015_idx (0) ;
        if (enumerator_5079.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_6015 (enumerator_5079.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_6015.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_6015_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 134)).stringValue () ;
            result << " = ptr->mAssociatedValue" ;
            result << index_6015_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 134)).stringValue () ;
            result << " ;\n" ;
            index_6015_idx.increment () ;
            enumerator_6015.gotoNextObject () ;
          }
        }
        result << "  }\n" ;
      }else if (kBoolFalse == test_5) {
      }
      result << "  return ok ;\n"
        "}\n"
        "\n" ;
      index_5079_.increment () ;
      enumerator_5079.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static const char * gEnumNameArrayFor_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " [" ;
  result << in_CONSTANT_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 144)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 144)).getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 144)).stringValue () ;
  result << "] = {\n"
    "  \"(not built)\"" ;
  GALGAS_uint index_6455_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6455 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6455.hasCurrentObject ()) {
      result << ",\n"
        "  " ;
      result << enumerator_6455.current_mConstantName (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 147)).stringValue () ;
      index_6455_.increment () ;
      enumerator_6455.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n" ;
  GALGAS_uint index_6537_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6537 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6537.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_is" ;
      result << enumerator_6537.current_mConstantName (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n"
        "  return GALGAS_bool (kNotBuilt != mEnum, kEnum_" ;
      result << enumerator_6537.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 156)).stringValue () ;
      result << " == mEnum) ;\n"
        "}\n"
        "\n" ;
      index_6537_.increment () ;
      enumerator_6537.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (" ;
  columnMarker = result.currentColumn () ;
  result << "C_String & ioString,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t " ;
  const enumGalgasBool test_6 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "inIndentation" ;
  }else if (kBoolFalse == test_6) {
    result << "/* inIndentation */" ;
  }
  result << ") const {\n"
    "  ioString << \"<enum @" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << ": \" << gEnumNameArrayFor_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " [mEnum] ;\n" ;
  const enumGalgasBool test_7 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "  mAssociatedValues.description (ioString, inIndentation) ;\n" ;
  }else if (kBoolFalse == test_7) {
  }
  result << "  ioString << \">\" ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n"
    "  typeComparisonResult result = kOperandNotValid ;\n"
    "  if (isValid () && inOperand.isValid ()) {\n"
    "    if (mEnum < inOperand.mEnum) {\n"
    "      result = kFirstOperandLowerThanSecond ;\n"
    "    }else if (mEnum > inOperand.mEnum) {\n"
    "      result = kFirstOperandGreaterThanSecond ;\n"
    "    }else{\n" ;
  const enumGalgasBool test_8 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;\n" ;
  }else if (kBoolFalse == test_8) {
    result << "      result = kOperandEqual ;\n" ;
  }
  result << "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues_13143 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = object ;
  cEnumerator_enumConstantListForGeneration enumerator_13185 (temp_0.getter_mConstantList (HERE), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_13143.operator_not (SOURCE_FILE ("type-enum.galgas", 333)).isValidAndTrue () ;
  if (enumerator_13185.hasCurrentObject () && bool_1) {
    while (enumerator_13185.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_13143 = GALGAS_bool (kIsStrictSup, enumerator_13185.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 334)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_13185.gotoNextObject () ;
      if (enumerator_13185.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_13143.operator_not (SOURCE_FILE ("type-enum.galgas", 333)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = object ;
  const GALGAS_enumTypeForGeneration temp_3 = object ;
  const GALGAS_enumTypeForGeneration temp_4 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, temp_2.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 337)), temp_3.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 338)), temp_4.getter_mConstantList (HERE), var_hasAssociatedValues_13143 COMMA_SOURCE_FILE ("type-enum.galgas", 336))) ;
  const GALGAS_enumTypeForGeneration temp_5 = object ;
  const GALGAS_enumTypeForGeneration temp_6 = object ;
  const GALGAS_enumTypeForGeneration temp_7 = object ;
  const GALGAS_enumTypeForGeneration temp_8 = object ;
  const GALGAS_enumTypeForGeneration temp_9 = object ;
  const GALGAS_enumTypeForGeneration temp_10 = object ;
  const GALGAS_enumTypeForGeneration temp_11 = object ;
  const GALGAS_enumTypeForGeneration temp_12 = object ;
  const GALGAS_enumTypeForGeneration temp_13 = object ;
  const GALGAS_enumTypeForGeneration temp_14 = object ;
  const GALGAS_enumTypeForGeneration temp_15 = object ;
  const GALGAS_enumTypeForGeneration temp_16 = object ;
  const GALGAS_enumTypeForGeneration temp_17 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_5.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 343)), temp_6.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 344)), temp_7.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 345)), temp_8.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 346)), temp_9.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 347)), temp_10.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 348)), temp_11.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 349)), temp_12.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 350)), temp_13.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 351)), temp_14.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 352)), temp_15.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 353)), temp_16.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 354)), temp_17.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 355)) COMMA_SOURCE_FILE ("type-enum.galgas", 342))), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 342)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                              extensionMethod_enumTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_enumTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendDeclaration2'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues_14499 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = object ;
  cEnumerator_enumConstantListForGeneration enumerator_14541 (temp_0.getter_mConstantList (HERE), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_14499.operator_not (SOURCE_FILE ("type-enum.galgas", 367)).isValidAndTrue () ;
  if (enumerator_14541.hasCurrentObject () && bool_1) {
    while (enumerator_14541.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_14499 = GALGAS_bool (kIsStrictSup, enumerator_14541.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 368)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_14541.gotoNextObject () ;
      if (enumerator_14541.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_14499.operator_not (SOURCE_FILE ("type-enum.galgas", 367)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = object ;
  cEnumerator_enumConstantListForGeneration enumerator_14701 (temp_2.getter_mConstantList (HERE), kENUMERATION_UP) ;
  while (enumerator_14701.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapEntryList enumerator_14742 (enumerator_14701.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
    while (enumerator_14742.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName_31_ (enumerator_14742.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 372)) ;
      enumerator_14742.gotoNextObject () ;
    }
    enumerator_14701.gotoNextObject () ;
  }
  const GALGAS_enumTypeForGeneration temp_3 = object ;
  const GALGAS_enumTypeForGeneration temp_4 = object ;
  const GALGAS_enumTypeForGeneration temp_5 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (inCompiler, temp_3.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 376)), temp_4.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 377)), temp_5.getter_mConstantList (HERE), var_hasAssociatedValues_14499 COMMA_SOURCE_FILE ("type-enum.galgas", 375))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                              extensionMethod_enumTypeForGeneration_appendDeclaration_32_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_enumTypeForGeneration_appendDeclaration_32_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues_15369 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = object ;
  cEnumerator_enumConstantListForGeneration enumerator_15411 (temp_0.getter_mConstantList (HERE), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_15369.operator_not (SOURCE_FILE ("type-enum.galgas", 391)).isValidAndTrue () ;
  if (enumerator_15411.hasCurrentObject () && bool_1) {
    while (enumerator_15411.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_15369 = GALGAS_bool (kIsStrictSup, enumerator_15411.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 392)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_15411.gotoNextObject () ;
      if (enumerator_15411.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_15369.operator_not (SOURCE_FILE ("type-enum.galgas", 391)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 394)) ;
  const GALGAS_enumTypeForGeneration temp_3 = object ;
  const GALGAS_enumTypeForGeneration temp_4 = object ;
  const GALGAS_enumTypeForGeneration temp_5 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, temp_3.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 396)), temp_4.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 397)), temp_5.getter_mConstantList (HERE), var_hasAssociatedValues_15369 COMMA_SOURCE_FILE ("type-enum.galgas", 395))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                                     extensionMethod_enumTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_enumTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externTypeDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  const GALGAS_externTypeDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_7520 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mExternTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 190)), temp_1.getter_mExternTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 190)) ;
  {
  const GALGAS_externTypeDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7520, temp_2, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 191)) ;
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
//
//Overriding extension method '@externTypeDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externTypeDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                             const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                             const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                             const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                             GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_getterMap var_getterMap_8412 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_8412, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 204)) ;
  }
  GALGAS_constructorMap var_constructorMap_8451 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 205)) ;
  GALGAS_setterMap var_setterMap_8483 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 206)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_8531 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 207)) ;
  GALGAS_classMethodMap var_classMethodMap_8573 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 208)) ;
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  cEnumerator_externTypeConstructorList enumerator_8651 (temp_0.getter_mExternTypeConstructorList (HERE), kENUMERATION_UP) ;
  while (enumerator_8651.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_returnedTypeEntry_8796 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8651.current_mResultTypeName (HERE), var_returnedTypeEntry_8796 COMMA_SOURCE_FILE ("type-extern.galgas", 211)) ;
    }
    GALGAS_functionSignature var_arguments_8841 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 213)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_8917 (enumerator_8651.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_8917.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_argumentTypeEntry_9056 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8917.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_9056 COMMA_SOURCE_FILE ("type-extern.galgas", 215)) ;
      }
      var_arguments_8841.addAssign_operation (enumerator_8917.current_mFormalSelector (HERE), var_argumentTypeEntry_9056, enumerator_8917.current_mFormalParameterName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 216)) ;
      enumerator_8917.gotoNextObject () ;
    }
    {
    var_constructorMap_8451.setter_insertKey (enumerator_8651.current_mConstructorName (HERE), var_arguments_8841, GALGAS_bool (true), var_returnedTypeEntry_8796, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 219)) ;
    }
    enumerator_8651.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = object ;
  cEnumerator_externTypeGetterList enumerator_9375 (temp_1.getter_mExternTypeGetterList (HERE), kENUMERATION_UP) ;
  while (enumerator_9375.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_returnedTypeEntry_9515 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9375.current_mResultTypeName (HERE), var_returnedTypeEntry_9515 COMMA_SOURCE_FILE ("type-extern.galgas", 228)) ;
    }
    GALGAS_functionSignature var_arguments_9560 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 230)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_9636 (enumerator_9375.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_9636.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_argumentTypeEntry_9775 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9636.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_9775 COMMA_SOURCE_FILE ("type-extern.galgas", 232)) ;
      }
      var_arguments_9560.addAssign_operation (enumerator_9636.current_mFormalSelector (HERE), var_argumentTypeEntry_9775, enumerator_9636.current_mFormalParameterName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 233)) ;
      enumerator_9636.gotoNextObject () ;
    }
    {
    var_getterMap_8412.setter_insertKey (enumerator_9375.current_mGetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 238)), var_arguments_9560, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 240)), GALGAS_bool (true), var_returnedTypeEntry_9515, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 243)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 236)) ;
    }
    enumerator_9375.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_2 = object ;
  cEnumerator_externTypeSetterList enumerator_10199 (temp_2.getter_mExternTypeSetterList (HERE), kENUMERATION_UP) ;
  while (enumerator_10199.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_10284 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 249)) ;
    cEnumerator_formalParameterListAST enumerator_10387 (enumerator_10199.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_10387.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_parameterTypeIndex_10578 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_10387.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_10578 COMMA_SOURCE_FILE ("type-extern.galgas", 251)) ;
      }
      var_routineSignature_10284.addAssign_operation (enumerator_10387.current_mFormalSelector (HERE), var_parameterTypeIndex_10578, enumerator_10387.current_mFormalArgumentPassingMode (HERE), enumerator_10387.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 256)) ;
      enumerator_10387.gotoNextObject () ;
    }
    {
    var_setterMap_8483.setter_insertKey (enumerator_10199.current_mSetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 261)), var_routineSignature_10284, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 264)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 259)) ;
    }
    enumerator_10199.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_3 = object ;
  cEnumerator_externTypeMethodList enumerator_11023 (temp_3.getter_mExternTypeMethodList (HERE), kENUMERATION_UP) ;
  while (enumerator_11023.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_11082 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 270)) ;
    cEnumerator_formalParameterListAST enumerator_11210 (enumerator_11023.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_11210.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_parameterTypeIndex_11289 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_11210.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_11289 COMMA_SOURCE_FILE ("type-extern.galgas", 273)) ;
      }
      var_routineSignature_11082.addAssign_operation (enumerator_11210.current_mFormalSelector (HERE), var_parameterTypeIndex_11289, enumerator_11210.current_mFormalArgumentPassingMode (HERE), enumerator_11210.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 278)) ;
      enumerator_11210.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_8531.setter_insertKey (enumerator_11023.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 283)), var_routineSignature_11082, enumerator_11023.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 287)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 281)) ;
    }
    enumerator_11023.gotoNextObject () ;
  }
  {
  const GALGAS_externTypeDeclarationAST temp_4 = object ;
  const GALGAS_externTypeDeclarationAST temp_5 = object ;
  const GALGAS_externTypeDeclarationAST temp_6 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_4.getter_mExternTypeName (HERE), temp_5.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-extern.galgas", 297)), GALGAS_typeKindEnum::constructor_externType (SOURCE_FILE ("type-extern.galgas", 298)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 300)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 301)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 302)), var_constructorMap_8451, var_getterMap_8412, var_setterMap_8483, var_instanceMethodMap_8531, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 307)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 308)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 309)), GALGAS_operators::constructor_none (SOURCE_FILE ("type-extern.galgas", 310)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 311)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 312)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 313)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 314)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 315)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-extern.galgas", 317)), GALGAS_string ("default"), GALGAS_string ("externtype-").add_operation (temp_6.getter_mExternTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-extern.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 319)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-extern.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 293)) ;
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
//
//Overriding extension method '@externTypeDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externTypeDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_13305 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mExternTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 337)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_13305, var_nameForUsefulness_13305, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 338)) ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = object ;
  const GALGAS_externTypeDeclarationAST temp_2 = object ;
  const GALGAS_externTypeDeclarationAST temp_3 = object ;
  const GALGAS_externTypeDeclarationAST temp_4 = object ;
  const GALGAS_externTypeDeclarationAST temp_5 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (temp_1.getter_mExternTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 341)), GALGAS_externTypeDeclarationForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_2.getter_mExternTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 343)), temp_3.getter_mExternTypeName (HERE).getter_string (HERE), temp_4.getter_mCppPreDeclarationCode (HERE), temp_5.getter_mCppClassCode (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 342))  COMMA_SOURCE_FILE ("type-extern.galgas", 340)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externTypeDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                         extensionMethod_externTypeDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externTypeDeclarationAST_semanticAnalysis (defineExtensionMethod_externTypeDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_string & outArgument_outHeader,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationForGeneration * object = (const cPtr_externTypeDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationForGeneration) ;
  const GALGAS_externTypeDeclarationForGeneration temp_0 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_1 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_2 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_3 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, temp_0.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 366)), temp_1.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 367)), temp_2.getter_mCppPreDeclarationCode (HERE), temp_3.getter_mCppClassCode (HERE) COMMA_SOURCE_FILE ("type-extern.galgas", 365))) ;
  const GALGAS_externTypeDeclarationForGeneration temp_4 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_5 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_6 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_7 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_8 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_9 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_10 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_11 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_12 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_13 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_14 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_15 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_16 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_4.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 372)), temp_5.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 373)), temp_6.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 374)), temp_7.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 375)), temp_8.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 376)), temp_9.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 377)), temp_10.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 378)), temp_11.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 379)), temp_12.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 380)), temp_13.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 381)), temp_14.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 382)), temp_15.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 383)), temp_16.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 384)) COMMA_SOURCE_FILE ("type-extern.galgas", 371))), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 371)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration.mSlotID,
                                              extensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  const GALGAS_graphDeclarationAST temp_0 = object ;
  const GALGAS_graphDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_2530 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mGraphTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 64)), temp_1.getter_mGraphTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 64)) ;
  {
  const GALGAS_graphDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2530, temp_2, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 65)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = object ;
  const GALGAS_graphDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2530, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.getter_mAssociatedListTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 66)), temp_4.getter_mAssociatedListTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 66)) COMMA_SOURCE_FILE ("type-graph.galgas", 66)) ;
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
//
//Overriding extension method '@graphDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeEntry_3597 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeEntry_3597 COMMA_SOURCE_FILE ("type-graph.galgas", 79)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringTypeEntry_3766 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeEntry_3766 COMMA_SOURCE_FILE ("type-graph.galgas", 85)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_graphTypeEntry_3931 ;
  {
  const GALGAS_graphDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.getter_mGraphTypeName (HERE), var_graphTypeEntry_3931 COMMA_SOURCE_FILE ("type-graph.galgas", 91)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_associatedListTypeEntry_4124 ;
  {
  const GALGAS_graphDeclarationAST temp_1 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_1.getter_mAssociatedListTypeName (HERE), var_associatedListTypeEntry_4124 COMMA_SOURCE_FILE ("type-graph.galgas", 97)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringListTypeEntry_4306 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeEntry_4306 COMMA_SOURCE_FILE ("type-graph.galgas", 103)) ;
  }
  GALGAS_getterMap var_getterMap_4400 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4400, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 109)) ;
  }
  GALGAS_constructorMap var_constructorMap_4439 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 110)) ;
  GALGAS_setterMap var_setterMap_4471 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 111)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4519 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 112)) ;
  GALGAS_classMethodMap var_classMethodMap_4561 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 113)) ;
  GALGAS_formalParameterSignature var_formalParameterList_4652 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 115)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 117)), var_associatedListTypeEntry_4124, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 119)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 116)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 122)), var_lstringListTypeEntry_4306, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 124)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 121)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 127)), var_associatedListTypeEntry_4124, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 129)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 126)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 132)), var_lstringListTypeEntry_4306, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 134)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 131)) ;
  {
  var_instanceMethodMap_4519.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("topologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 137))  COMMA_SOURCE_FILE ("type-graph.galgas", 137)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 138)), var_formalParameterList_4652, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 140)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 142)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 136)) ;
  }
  {
  var_instanceMethodMap_4519.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 147))  COMMA_SOURCE_FILE ("type-graph.galgas", 147)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 148)), var_formalParameterList_4652, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 150)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 152)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 146)) ;
  }
  var_formalParameterList_4652 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 158)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 160)), var_associatedListTypeEntry_4124, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 162)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 159)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 165)), var_lstringListTypeEntry_4306, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 167)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 164)) ;
  {
  var_instanceMethodMap_4519.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("circularities"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 170))  COMMA_SOURCE_FILE ("type-graph.galgas", 170)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 171)), var_formalParameterList_4652, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 173)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 175)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 169)) ;
  }
  {
  var_instanceMethodMap_4519.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 180))  COMMA_SOURCE_FILE ("type-graph.galgas", 180)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 181)), var_formalParameterList_4652, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 183)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 185)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 179)) ;
  }
  {
  var_instanceMethodMap_4519.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 190))  COMMA_SOURCE_FILE ("type-graph.galgas", 190)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 191)), var_formalParameterList_4652, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 193)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 195)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 189)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_2 = object ;
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("reversedGraph"), temp_2.getter_mGraphTypeName (HERE).getter_string (HERE), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 201)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 209)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 217)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 225)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 233)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isNodeDefined"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 241)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 251)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 261)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lkeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 269)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("edges"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 277)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = object ;
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), temp_3.getter_mGraphTypeName (HERE).getter_string (HERE), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 285)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("accessibleNodesFrom"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), GALGAS_string ("lstringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 297)) ;
  }
  {
  var_constructorMap_4439.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("emptyGraph"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 308))  COMMA_SOURCE_FILE ("type-graph.galgas", 308)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 309)), GALGAS_bool (false), var_graphTypeEntry_3931, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 307)) ;
  }
  var_formalParameterList_4652 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 314)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 316)), var_lstringTypeEntry_3766, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 318)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 315)) ;
  cEnumerator_functionSignature enumerator_10717 (var_associatedListTypeEntry_4124.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 320)), kENUMERATION_UP) ;
  while (enumerator_10717.hasCurrentObject ()) {
    var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 322)), enumerator_10717.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 324)), enumerator_10717.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 321)) ;
    enumerator_10717.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_4 = object ;
  cEnumerator_graphInsertModifierList enumerator_10962 (temp_4.getter_mInsertModifierList (HERE), kENUMERATION_UP) ;
  while (enumerator_10962.hasCurrentObject ()) {
    {
    var_setterMap_4471.setter_insertOrReplace (enumerator_10962.current_mInsertModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 330)), var_formalParameterList_4652, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 333)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-graph.galgas", 328)) ;
    }
    enumerator_10962.gotoNextObject () ;
  }
  {
  var_setterMap_4471.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 340))  COMMA_SOURCE_FILE ("type-graph.galgas", 340)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 341)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 342)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 344)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 339)) ;
  }
  var_formalParameterList_4652 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 348)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 349)), var_stringTypeEntry_3597, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 349)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("type-graph.galgas", 349)) ;
  {
  var_setterMap_4471.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 351))  COMMA_SOURCE_FILE ("type-graph.galgas", 351)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 352)), var_formalParameterList_4652, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 355)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 350)) ;
  }
  var_formalParameterList_4652 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 360)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 361)), var_lstringTypeEntry_3766, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 361)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 361)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 362)), var_lstringTypeEntry_3766, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 362)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 362)) ;
  {
  var_setterMap_4471.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("addEdge"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 364))  COMMA_SOURCE_FILE ("type-graph.galgas", 364)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 365)), var_formalParameterList_4652, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 368)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 363)) ;
  }
  var_formalParameterList_4652 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 373)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 374)), var_lstringTypeEntry_3766, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 374)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 374)) ;
  {
  var_setterMap_4471.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("noteNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 376))  COMMA_SOURCE_FILE ("type-graph.galgas", 376)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 377)), var_formalParameterList_4652, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 380)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 375)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_5 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_5.getter_mGraphTypeName (HERE), var_getterMap_4400, var_setterMap_4471, var_instanceMethodMap_4519, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 385)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_6 = object ;
  const GALGAS_graphDeclarationAST temp_7 = object ;
  const GALGAS_graphDeclarationAST temp_8 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_6.getter_mGraphTypeName (HERE), temp_7.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-graph.galgas", 401)), GALGAS_typeKindEnum::constructor_graphType (SOURCE_FILE ("type-graph.galgas", 402)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 404)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 405)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 406)), var_constructorMap_4439, var_getterMap_4400, var_setterMap_4471, var_instanceMethodMap_4519, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 411)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 412)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 413)), GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-graph.galgas", 414)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 415)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 416)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 417)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 418)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 419)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-graph.galgas", 421)), GALGAS_string ("emptyGraph"), GALGAS_string ("graph-").add_operation (temp_8.getter_mGraphTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-graph.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 423)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-graph.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 397)) ;
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
//
//Overriding extension method '@graphDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  const GALGAS_graphDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_14893 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mGraphTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 441)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14893, var_nameForUsefulness_14893, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 442)) ;
  }
  const GALGAS_graphDeclarationAST temp_1 = object ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_15061 = function_typeNameForUsefulEntitiesGraph (temp_1.getter_mAssociatedListTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 443)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14893, var_associatedTypeNameForUsefulness_15061 COMMA_SOURCE_FILE ("type-graph.galgas", 444)) ;
  }
  const GALGAS_graphDeclarationAST temp_2 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_graphTypeEntry_15240 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_2.getter_mGraphTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 446)) ;
  const GALGAS_graphDeclarationAST temp_3 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_associatedListTypeEntry_15355 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_3.getter_mAssociatedListTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 447)) ;
  const GALGAS_graphDeclarationAST temp_4 = object ;
  const GALGAS_graphDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_associatedListElementTypeEntry_15486 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (temp_4.getter_mAssociatedListTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 450)), temp_5.getter_mAssociatedListTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 448)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsNotEqual, var_associatedListTypeEntry_15355.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 451)).objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-graph.galgas", 451)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_graphDeclarationAST temp_7 = object ;
      const GALGAS_graphDeclarationAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_7.getter_mAssociatedListTypeName (HERE).getter_location (HERE), GALGAS_string ("the '@").add_operation (temp_8.getter_mAssociatedListTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 452)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 452)), fixItArray9  COMMA_SOURCE_FILE ("type-graph.galgas", 452)) ;
    }
  }
  GALGAS_stringset temp_10 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-graph.galgas", 455)) ;
  temp_10.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("type-graph.galgas", 455)) ;
  temp_10.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("type-graph.galgas", 455)) ;
  GALGAS_stringset var_reservedModifierNames_15936 = temp_10 ;
  const GALGAS_graphDeclarationAST temp_11 = object ;
  cEnumerator_graphInsertModifierList enumerator_16010 (temp_11.getter_mInsertModifierList (HERE), kENUMERATION_UP) ;
  while (enumerator_16010.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_reservedModifierNames_15936.getter_hasKey (enumerator_16010.current_mInsertModifierName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-graph.galgas", 457)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_16010.current_mInsertModifierName (HERE).getter_location (HERE), GALGAS_string ("the '").add_operation (enumerator_16010.current_mInsertModifierName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 458)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 458)), fixItArray13  COMMA_SOURCE_FILE ("type-graph.galgas", 458)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_16010.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 460)) ;
    }
    enumerator_16010.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_14 = object ;
  const GALGAS_graphDeclarationAST temp_15 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (temp_14.getter_mGraphTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 464)), GALGAS_graphDeclarationForGeneration::constructor_new (var_graphTypeEntry_15240, var_associatedListTypeEntry_15355, var_associatedListElementTypeEntry_15486, temp_15.getter_mInsertModifierList (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 465))  COMMA_SOURCE_FILE ("type-graph.galgas", 463)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                         extensionMethod_graphDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationAST_semanticAnalysis (defineExtensionMethod_graphDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_string & outArgument_outHeader,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  const GALGAS_graphDeclarationForGeneration temp_0 = object ;
  const GALGAS_graphDeclarationForGeneration temp_1 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, temp_0.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 489)), temp_1.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 490)) COMMA_SOURCE_FILE ("type-graph.galgas", 488))) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = object ;
  const GALGAS_graphDeclarationForGeneration temp_3 = object ;
  const GALGAS_graphDeclarationForGeneration temp_4 = object ;
  const GALGAS_graphDeclarationForGeneration temp_5 = object ;
  const GALGAS_graphDeclarationForGeneration temp_6 = object ;
  const GALGAS_graphDeclarationForGeneration temp_7 = object ;
  const GALGAS_graphDeclarationForGeneration temp_8 = object ;
  const GALGAS_graphDeclarationForGeneration temp_9 = object ;
  const GALGAS_graphDeclarationForGeneration temp_10 = object ;
  const GALGAS_graphDeclarationForGeneration temp_11 = object ;
  const GALGAS_graphDeclarationForGeneration temp_12 = object ;
  const GALGAS_graphDeclarationForGeneration temp_13 = object ;
  const GALGAS_graphDeclarationForGeneration temp_14 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_2.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 493)), temp_3.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 494)), temp_4.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 495)), temp_5.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 496)), temp_6.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 497)), temp_7.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 498)), temp_8.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 499)), temp_9.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 500)), temp_10.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 501)), temp_11.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 502)), temp_12.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 503)), temp_13.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 504)), temp_14.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 505)) COMMA_SOURCE_FILE ("type-graph.galgas", 492))), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 492)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                              extensionMethod_graphDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_graphDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_string & outArgument_outImplementation,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  const GALGAS_graphDeclarationForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 515)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.getter_mAssociatedListTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 516)) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.getter_mAssociatedListElementTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 517)) ;
  const GALGAS_graphDeclarationForGeneration temp_3 = object ;
  const GALGAS_graphDeclarationForGeneration temp_4 = object ;
  const GALGAS_graphDeclarationForGeneration temp_5 = object ;
  const GALGAS_graphDeclarationForGeneration temp_6 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, temp_3.getter_mSelfTypeEntry (HERE), temp_4.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 520)), temp_5.getter_mAssociatedListTypeEntry (HERE), temp_6.getter_mInsertModifierList (HERE) COMMA_SOURCE_FILE ("type-graph.galgas", 518))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                                     extensionMethod_graphDeclarationForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_graphDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  const GALGAS_listDeclarationAST temp_0 = object ;
  const GALGAS_listDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_2041 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mListTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 49)), temp_1.getter_mListTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 49)) ;
  {
  const GALGAS_listDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2041, temp_2, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 50)) ;
  }
  const GALGAS_listDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_2201 (temp_3.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_2201.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2201.current_mPropertyTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 52)), enumerator_2201.current_mPropertyTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 52)) COMMA_SOURCE_FILE ("type-list.galgas", 52)) ;
    }
    enumerator_2201.gotoNextObject () ;
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
//
//Overriding extension method '@listDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_typedPropertyList var_typedAttributeList_3059 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 67)) ;
  const GALGAS_listDeclarationAST temp_0 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_3129 (temp_0.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_3129.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_3264 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_3129.current_mPropertyTypeName (HERE), var_attributeTypeIndex_3264 COMMA_SOURCE_FILE ("type-list.galgas", 69)) ;
    }
    GALGAS_bool var_hasSelector_3285 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_3309 (enumerator_3129.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_3309.hasCurrentObject ()) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, enumerator_3309.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticWarning (enumerator_3309.current_mValue (HERE).getter_location (HERE), GALGAS_string ("'%setter' is obsolete and has no effect"), fixItArray2  COMMA_SOURCE_FILE ("type-list.galgas", 73)) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, enumerator_3309.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticWarning (enumerator_3309.current_mValue (HERE).getter_location (HERE), GALGAS_string ("'%nogetter' is obsolete and has no effect"), fixItArray4  COMMA_SOURCE_FILE ("type-list.galgas", 75)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (kIsEqual, enumerator_3309.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_5) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = var_hasSelector_3285.boolEnum () ;
                if (kBoolTrue == test_6) {
                  TC_Array <C_FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_3309.current_mValue (HERE).getter_location (HERE), GALGAS_string ("the '%selector' attribute is already named"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 78)) ;
                }
              }
              var_hasSelector_3285 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_5) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            GALGAS_stringlist temp_9 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 84)) ;
            temp_9.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 84)) ;
            appendFixItActions (fixItArray8, kFixItReplace, temp_9) ;
            inCompiler->emitSemanticError (enumerator_3309.current_mValue (HERE).getter_location (HERE), GALGAS_string ("only '%selector' attribute is allowed here"), fixItArray8  COMMA_SOURCE_FILE ("type-list.galgas", 82)) ;
          }
        }
      }
      enumerator_3309.gotoNextObject () ;
    }
    var_typedAttributeList_3059.addAssign_operation (var_attributeTypeIndex_3264, enumerator_3129.current_mPropertyName (HERE), enumerator_3129.current_mIsPublic (HERE), var_hasSelector_3285  COMMA_SOURCE_FILE ("type-list.galgas", 87)) ;
    enumerator_3129.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_uintType_4087 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("uint"), var_uintType_4087 COMMA_SOURCE_FILE ("type-list.galgas", 90)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_listTypeIndex_4212 ;
  {
  const GALGAS_listDeclarationAST temp_10 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_10.getter_mListTypeName (HERE), var_listTypeIndex_4212 COMMA_SOURCE_FILE ("type-list.galgas", 92)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_listElementTypeIndex_4460 ;
  {
  const GALGAS_listDeclarationAST temp_11 = object ;
  const GALGAS_listDeclarationAST temp_12 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_11.getter_mListTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 96)), temp_12.getter_mListTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 96)), var_listElementTypeIndex_4460 COMMA_SOURCE_FILE ("type-list.galgas", 94)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_4545 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 100)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_4604 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 101)) ;
  GALGAS_formalParameterSignature var_setterOutputFormalArgumentList_4672 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 102)) ;
  GALGAS_formalParameterSignature var_setterInputFormalArgumentList_4739 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 103)) ;
  cEnumerator_typedPropertyList enumerator_4799 (var_typedAttributeList_3059, kENUMERATION_UP) ;
  while (enumerator_4799.hasCurrentObject ()) {
    GALGAS_string temp_13 ;
    const enumGalgasBool test_14 = enumerator_4799.current_mHasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_14) {
      temp_13 = enumerator_4799.current_mPropertyName (HERE).getter_string (HERE) ;
    }else if (kBoolFalse == test_14) {
      temp_13 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string var_selector_4842 = temp_13 ;
    var_enumerationDescriptor_4545.addAssign_operation (enumerator_4799.current_mPropertyTypeEntry (HERE), enumerator_4799.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 106)) ;
    var_constructorAttributeTypeList_4604.addAssign_operation (var_selector_4842.getter_nowhere (SOURCE_FILE ("type-list.galgas", 108)), enumerator_4799.current_mPropertyTypeEntry (HERE), enumerator_4799.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 107)) ;
    var_setterOutputFormalArgumentList_4672.addAssign_operation (var_selector_4842.getter_nowhere (SOURCE_FILE ("type-list.galgas", 112)), enumerator_4799.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-list.galgas", 114)), enumerator_4799.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 111)) ;
    var_setterInputFormalArgumentList_4739.addAssign_operation (var_selector_4842.getter_nowhere (SOURCE_FILE ("type-list.galgas", 117)), enumerator_4799.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 119)), enumerator_4799.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 116)) ;
    enumerator_4799.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_5428 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 123)) ;
  {
  const GALGAS_listDeclarationAST temp_15 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_5428, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyList"), temp_15.getter_mListTypeName (HERE).getter_string (HERE), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 124)) ;
  }
  {
  var_constructorMap_5428.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("listWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 132))  COMMA_SOURCE_FILE ("type-list.galgas", 132)), var_constructorAttributeTypeList_4604, GALGAS_bool (false), var_listTypeIndex_4212, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 131)) ;
  }
  GALGAS_getterMap var_getterMap_5871 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5871, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 138)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5871, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 139)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5871, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 146)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_16 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_5871, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_16.getter_mListTypeName (HERE).getter_string (HERE), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 153)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_17 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_5871, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListToIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_17.getter_mListTypeName (HERE).getter_string (HERE), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 160)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_18 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_5871, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), temp_18.getter_mListTypeName (HERE).getter_string (HERE), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 167)) ;
  }
  cEnumerator_typedPropertyList enumerator_6926 (var_typedAttributeList_3059, kENUMERATION_UP) ;
  while (enumerator_6926.hasCurrentObject ()) {
    {
    GALGAS_functionSignature temp_19 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 178)) ;
    temp_19.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 178)), var_uintType_4087, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 178)) ;
    var_getterMap_5871.setter_insertOrReplace (GALGAS_lstring::constructor_new (enumerator_6926.current_mPropertyName (HERE).getter_string (HERE).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 176)), enumerator_6926.current_mPropertyName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 176)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 177)), temp_19, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 179)), GALGAS_bool (true), enumerator_6926.current_mPropertyTypeEntry (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 182)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 175)) ;
    }
    enumerator_6926.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_7383 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 187)) ;
  {
  var_instanceMethodMap_7383.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("first"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 189))  COMMA_SOURCE_FILE ("type-list.galgas", 189)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 190)), var_setterOutputFormalArgumentList_4672, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 192)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 194)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 188)) ;
  }
  {
  var_instanceMethodMap_7383.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("last"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 199))  COMMA_SOURCE_FILE ("type-list.galgas", 199)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 200)), var_setterOutputFormalArgumentList_4672, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 202)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 204)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 198)) ;
  }
  GALGAS_setterMap var_setterMap_7949 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 209)) ;
  {
  GALGAS_formalParameterSignature temp_20 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 213)) ;
  temp_20.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 213)), var_listElementTypeIndex_4460, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-list.galgas", 213)), GALGAS_string ("inElement")  COMMA_SOURCE_FILE ("type-list.galgas", 213)) ;
  var_setterMap_7949.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("append"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 211))  COMMA_SOURCE_FILE ("type-list.galgas", 211)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 212)), temp_20, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 215)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 210)) ;
  }
  {
  var_setterMap_7949.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popFirst"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 219))  COMMA_SOURCE_FILE ("type-list.galgas", 219)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 220)), var_setterOutputFormalArgumentList_4672, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 223)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 218)) ;
  }
  {
  var_setterMap_7949.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popLast"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 227))  COMMA_SOURCE_FILE ("type-list.galgas", 227)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 228)), var_setterOutputFormalArgumentList_4672, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 231)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 226)) ;
  }
  var_setterOutputFormalArgumentList_4672.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 234)), var_uintType_4087, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 234)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 234)) ;
  {
  var_setterMap_7949.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 236))  COMMA_SOURCE_FILE ("type-list.galgas", 236)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 237)), var_setterOutputFormalArgumentList_4672, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 240)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 235)) ;
  }
  cEnumerator_typedPropertyList enumerator_9030 (var_typedAttributeList_3059, kENUMERATION_UP) ;
  while (enumerator_9030.hasCurrentObject ()) {
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = enumerator_9030.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_21) {
        GALGAS_formalParameterSignature var_setterFormalArgumentList_9114 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 246)) ;
        var_setterFormalArgumentList_9114.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 247)), enumerator_9030.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 247)), enumerator_9030.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 247)) ;
        var_setterFormalArgumentList_9114.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 248)), var_uintType_4087, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 248)), enumerator_9030.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 248)) ;
        {
        var_setterMap_7949.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_9030.current_mPropertyName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-list.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 250)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 250)), enumerator_9030.current_mPropertyName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 250)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 251)), var_setterFormalArgumentList_9114, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 254)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 249)) ;
        }
      }
    }
    enumerator_9030.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_4739.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 260)), var_uintType_4087, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 260)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 260)) ;
  {
  var_setterMap_7949.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 262))  COMMA_SOURCE_FILE ("type-list.galgas", 262)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 263)), var_setterInputFormalArgumentList_4739, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 266)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 261)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_22 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_22.getter_mListTypeName (HERE), var_getterMap_5871, var_setterMap_7949, var_instanceMethodMap_7383, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 271)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_23 = object ;
  const GALGAS_listDeclarationAST temp_24 = object ;
  const GALGAS_listDeclarationAST temp_25 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_23.getter_mListTypeName (HERE), temp_24.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-list.galgas", 287)), GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-list.galgas", 288)), GALGAS_bool (true), var_typedAttributeList_3059, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 291)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 292)), var_constructorMap_5428, var_getterMap_5871, var_setterMap_7949, var_instanceMethodMap_7383, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 297)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 298)), var_enumerationDescriptor_4545, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-list.galgas", 300)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("type-list.galgas", 300)) COMMA_SOURCE_FILE ("type-list.galgas", 300)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("type-list.galgas", 300)) COMMA_SOURCE_FILE ("type-list.galgas", 300)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-list.galgas", 300)) COMMA_SOURCE_FILE ("type-list.galgas", 300)), var_constructorAttributeTypeList_4604, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 302)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 303)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 304)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 305)), GALGAS_bool (false), var_listElementTypeIndex_4460, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (temp_25.getter_mListTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-list.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 309)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-list.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 283)) ;
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
//
//Overriding extension method '@listDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_11657 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 319)) ;
  const GALGAS_listDeclarationAST temp_0 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_11716 (temp_0.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_11716.hasCurrentObject ()) {
    var_structAttributeList_11657.addAssign_operation (enumerator_11716.current_isConstant (HERE), enumerator_11716.current_mPropertyTypeName (HERE), enumerator_11716.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 326))  COMMA_SOURCE_FILE ("type-list.galgas", 321)) ;
    enumerator_11716.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_1 = object ;
  const GALGAS_listDeclarationAST temp_2 = object ;
  const GALGAS_listDeclarationAST temp_3 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.getter_mIsPredefined (HERE), GALGAS_lstring::constructor_new (temp_2.getter_mListTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 330)), temp_3.getter_mListTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 330)), var_structAttributeList_11657, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-list.galgas", 328))  COMMA_SOURCE_FILE ("type-list.galgas", 328)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                             extensionMethod_listDeclarationAST_addAssociatedElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listDeclarationAST_addAssociatedElement (defineExtensionMethod_listDeclarationAST_addAssociatedElement, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  const GALGAS_listDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_12797 = function_typeNameForUsefulEntitiesGraph (temp_0.getter_mListTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 350)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_12797, var_nameForUsefulness_12797, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 351)) ;
  }
  const GALGAS_listDeclarationAST temp_1 = object ;
  const GALGAS_listDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_12961 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.getter_mListTypeName (HERE).getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 352)), temp_2.getter_mListTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 352)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_12797, var_elementTypeNameForUsefulness_12961 COMMA_SOURCE_FILE ("type-list.galgas", 353)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_13197 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 355)) ;
  GALGAS_propertyIndexMap var_attributeMap_13239 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 356)) ;
  const GALGAS_listDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_13310 (temp_3.getter_mPropertyList (HERE), kENUMERATION_UP) ;
  while (enumerator_13310.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_13374 = function_typeNameForUsefulEntitiesGraph (enumerator_13310.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 358)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_12797, var_propertyTypeNameForUsefulness_13374 COMMA_SOURCE_FILE ("type-list.galgas", 359)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_13526 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_13310.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 360)) ;
    GALGAS_bool var_hasSetter_13627 = enumerator_13310.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasSelector_13659 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_13683 (enumerator_13310.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_13683.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, enumerator_13683.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (enumerator_13683.current_mValue (HERE).getter_location (HERE), GALGAS_string ("obsolete attribute: setter is implicitly generated for a public property"), fixItArray5  COMMA_SOURCE_FILE ("type-list.galgas", 365)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsEqual, enumerator_13683.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticWarning (enumerator_13683.current_mValue (HERE).getter_location (HERE), GALGAS_string ("obsolete attribute: use 'private' qualifier"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 367)) ;
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsEqual, enumerator_13683.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_8) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_hasSelector_13659.boolEnum () ;
                if (kBoolTrue == test_9) {
                  TC_Array <C_FixItDescription> fixItArray10 ;
                  inCompiler->emitSemanticError (enumerator_13683.current_mValue (HERE).getter_location (HERE), GALGAS_string ("the '%selector' attribute is already named"), fixItArray10  COMMA_SOURCE_FILE ("type-list.galgas", 370)) ;
                }
              }
              var_hasSelector_13659 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_8) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            GALGAS_stringlist temp_12 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 376)) ;
            temp_12.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 376)) ;
            appendFixItActions (fixItArray11, kFixItReplace, temp_12) ;
            inCompiler->emitSemanticError (enumerator_13683.current_mValue (HERE).getter_location (HERE), GALGAS_string ("only '%selector' attribut is allowed here"), fixItArray11  COMMA_SOURCE_FILE ("type-list.galgas", 374)) ;
          }
        }
      }
      enumerator_13683.gotoNextObject () ;
    }
    var_typedAttributeList_13197.addAssign_operation (var_t_13526, enumerator_13310.current_mPropertyName (HERE), var_hasSetter_13627, var_hasSelector_13659  COMMA_SOURCE_FILE ("type-list.galgas", 379)) ;
    {
    var_attributeMap_13239.setter_insertKey (enumerator_13310.current_mPropertyName (HERE), var_t_13526, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 384)) ;
    }
    enumerator_13310.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_13 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_14455 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), temp_13.getter_mListTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 387)) ;
  const GALGAS_listDeclarationAST temp_14 = object ;
  const GALGAS_listDeclarationAST temp_15 = object ;
  const GALGAS_listDeclarationAST temp_16 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (temp_14.getter_mListTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 389)), GALGAS_listTypeForGeneration::constructor_new (var_selfType_14455, GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (temp_15.getter_mListTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 392)), temp_16.getter_mListTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 392)), var_typedAttributeList_13197  COMMA_SOURCE_FILE ("type-list.galgas", 390))  COMMA_SOURCE_FILE ("type-list.galgas", 388)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                         extensionMethod_listDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listDeclarationAST_semanticAnalysis (defineExtensionMethod_listDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'listGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_listGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_listGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_listGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_listGenerationTemplate_0,
  0,
  gWrapperAllDirectories_listGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'listGenerationTemplate listTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (C_Compiler * inCompiler,
                                                                             const GALGAS_string & in_TYPE_5F_NAME,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_list {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- List constructor used by listmap\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const capCollectionElementArray & inSharedArray) ;\n"
    "\n"
    "//--------------------------------- Element constructor\n"
    "  public: static void makeAttributesFromObjects (" ;
  columnMarker = result.currentColumn () ;
  result << "capCollectionElement & outAttributes" ;
  GALGAS_uint index_787_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_787 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_787.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const class GALGAS_" ;
      result << enumerator_787.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      result << " & in_" ;
      result << enumerator_787.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      index_787_.increment () ;
      enumerator_787.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'listGenerationTemplate listTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                         const GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cCollectionElement {\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element mObject ;\n"
    "\n"
    "//--- Constructors\n"
    "  public: cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_545_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_545 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_545.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_545.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      result << " & in_" ;
      result << enumerator_545.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      if (enumerator_545.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_545_.increment () ;
      enumerator_545.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "  public: cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inElement COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Virtual method for comparing elements\n"
    "  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n"
    "\n"
    "//--- Virtual method that checks that all attributes are valid\n"
    "  public: virtual bool isValid (void) const ;\n"
    "\n"
    "//--- Virtual method that returns a copy of current object\n"
    "  public: virtual cCollectionElement * copy (void) ;\n"
    "\n"
    "//--- Description\n"
    "  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1555_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1555 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1555.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_1555.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      result << " & in_" ;
      result << enumerator_1555.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      if (enumerator_1555.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1555_.increment () ;
      enumerator_1555.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "cCollectionElement (THERE),\n"
    "mObject (" ;
  GALGAS_uint index_1792_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1792 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1792.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_1792.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 45)).stringValue () ;
      if (enumerator_1792.hasNextObject ()) {
        result << ", " ;
      }
      index_1792_.increment () ;
      enumerator_1792.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inElement COMMA_LOCATION_ARGS) :\n"
    "cCollectionElement (THERE),\n"
    "mObject (" ;
  GALGAS_uint index_2210_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2210 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2210.hasCurrentObject ()) {
      result << "inElement.mProperty_" ;
      result << enumerator_2210.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 57)).stringValue () ;
      if (enumerator_2210.hasNextObject ()) {
        result << ", " ;
      }
      index_2210_.increment () ;
      enumerator_2210.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "bool cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n"
    "  return mObject.isValid () ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cCollectionElement * cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copy (void) {\n"
    "  cCollectionElement * result = NULL ;\n"
    "  macroMyNew (result, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_2859_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2859 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2859.hasCurrentObject ()) {
      result << "mObject.mProperty_" ;
      result << enumerator_2859.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 75)).stringValue () ;
      if (enumerator_2859.hasNextObject ()) {
        result << ", " ;
      }
      index_2859_.increment () ;
      enumerator_2859.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (C_String & ioString, const int32_t inIndentation) const {\n" ;
  GALGAS_uint index_3257_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3257 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3257.hasCurrentObject ()) {
      result << "  ioString << \"\\n\" ;\n"
        "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
        "  ioString << " ;
      result << enumerator_3257.current_mPropertyName (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 89)).stringValue () ;
      result << " \":\" ;\n"
        "  mObject.mProperty_" ;
      result << enumerator_3257.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 90)).stringValue () ;
      result << ".description (ioString, inIndentation) ;\n" ;
      index_3257_.increment () ;
      enumerator_3257.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::compare (const cCollectionElement * inOperand) const {\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * operand = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n"
    "  macroValidSharedObject (operand, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return mObject.objectCompare (operand->mObject) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_list () {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const capCollectionElementArray & inSharedArray) :\n"
    "AC_GALGAS_list (inSharedArray) {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (UNUSED_LOCATION_ARGS) {\n"
    "  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "  (capCollectionElementArray ()) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_listWithValue (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5024_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5024 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5024.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_5024.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      result << " & inOperand" ;
      result << index_5024_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      if (enumerator_5024.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5024_IDX.increment () ;
      enumerator_5024.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (" ;
  GALGAS_uint index_5256_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5256 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5256.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_5256_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 131)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_5256.hasNextObject ()) {
        result << " && " ;
      }
      index_5256_IDX.increment () ;
      enumerator_5256.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (capCollectionElementArray ()) ;\n"
    "    capCollectionElement attributes ;\n"
    "    GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (attributes" ;
  GALGAS_uint index_5550_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5550 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5550.hasCurrentObject ()) {
      result << ", inOperand" ;
      result << index_5550_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 139)).stringValue () ;
      index_5550_IDX.increment () ;
      enumerator_5550.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    result.appendObject (attributes) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (" ;
  columnMarker = result.currentColumn () ;
  result << "capCollectionElement & outAttributes" ;
  GALGAS_uint index_5927_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5927 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5927.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_5927.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      result << " & in_" ;
      result << enumerator_5927.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      index_5927_.increment () ;
      enumerator_5927.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "  macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6229_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6229 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6229.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_6229.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 158)).stringValue () ;
      if (enumerator_6229.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6229_.increment () ;
      enumerator_6229.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "  outAttributes.setPointer (p) ;\n"
    "  macroDetachSharedObject (p) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6611_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6611 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6611.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_6611.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      result << " & inOperand" ;
      result << index_6611_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      if (enumerator_6611.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6611_IDX.increment () ;
      enumerator_6611.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()) {\n"
    "    if (" ;
  GALGAS_uint index_6828_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6828 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6828.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_6828_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 177)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_6828.hasNextObject ()) {
        result << " && " ;
      }
      index_6828_IDX.increment () ;
      enumerator_6828.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "      cCollectionElement * p = NULL ;\n"
    "      macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_7046_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7046 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7046.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7046_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 184)).stringValue () ;
      if (enumerator_7046.hasNextObject ()) {
        result << ", " ;
      }
      index_7046_IDX.increment () ;
      enumerator_7046.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "      capCollectionElement attributes ;\n"
    "      attributes.setPointer (p) ;\n"
    "      macroDetachSharedObject (p) ;\n"
    "      appendObject (attributes) ;\n"
    "    }else{ // Destroy receiver\n"
    "      drop () ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_append (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inElement,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()) {\n"
    "    if (inElement.isValid ()) {\n"
    "      cCollectionElement * p = NULL ;\n"
    "      macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inElement COMMA_THERE)) ;\n"
    "      capCollectionElement attributes ;\n"
    "      attributes.setPointer (p) ;\n"
    "      macroDetachSharedObject (p) ;\n"
    "      appendObject (attributes) ;\n"
    "    }else{\n"
    "      drop () ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_insertAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8197_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8197 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8197.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_8197.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 221)).stringValue () ;
      result << " inOperand" ;
      result << index_8197_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 221)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_8197_IDX.increment () ;
      enumerator_8197.gotoNextObject () ;
    }
  }
  result << "const GALGAS_uint inInsertionIndex,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()) {\n"
    "    if (inInsertionIndex.isValid ()" ;
  GALGAS_uint index_8505_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8505 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8505.hasCurrentObject ()) {
      result << " && inOperand" ;
      result << index_8505_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 229)).stringValue () ;
      result << ".isValid ()" ;
      index_8505_IDX.increment () ;
      enumerator_8505.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "      cCollectionElement * p = NULL ;\n"
    "      macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_8710_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8710 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8710.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_8710_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 235)).stringValue () ;
      if (enumerator_8710.hasNextObject ()) {
        result << ", " ;
      }
      index_8710_IDX.increment () ;
      enumerator_8710.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "      capCollectionElement attributes ;\n"
    "      attributes.setPointer (p) ;\n"
    "      macroDetachSharedObject (p) ;\n"
    "      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;\n"
    "    }else{\n"
    "      drop () ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_removeAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9254_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9254 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9254.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_9254.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 253)).stringValue () ;
      result << " & outOperand" ;
      result << index_9254_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 253)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9254_IDX.increment () ;
      enumerator_9254.gotoNextObject () ;
    }
  }
  result << "const GALGAS_uint inRemoveIndex,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()) {\n"
    "    if (inRemoveIndex.isValid ()) {\n"
    "      capCollectionElement attributes ;\n"
    "      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;\n"
    "      cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "      if (NULL == p) {\n" ;
  GALGAS_uint index_9822_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9822 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9822.hasCurrentObject ()) {
      result << "        outOperand" ;
      result << index_9822_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 266)).stringValue () ;
      result << ".drop () ;\n" ;
      index_9822_IDX.increment () ;
      enumerator_9822.gotoNextObject () ;
    }
  }
  result << "        drop () ;\n"
    "      }else{\n"
    "        macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_10030_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10030 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10030.hasCurrentObject ()) {
      result << "        outOperand" ;
      result << index_10030_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 273)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_10030.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 273)).stringValue () ;
      result << " ;\n" ;
      index_10030_IDX.increment () ;
      enumerator_10030.gotoNextObject () ;
    }
  }
  result << "      }\n"
    "    }else{\n" ;
  GALGAS_uint index_10209_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10209 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10209.hasCurrentObject ()) {
      result << "      outOperand" ;
      result << index_10209_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 279)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10209_IDX.increment () ;
      enumerator_10209.gotoNextObject () ;
    }
  }
  result << "      drop () ;    \n"
    "    }\n"
    "  }else{\n" ;
  GALGAS_uint index_10343_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10343 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10343.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10343_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 286)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10343_IDX.increment () ;
      enumerator_10343.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popFirst (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10623_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10623 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10623.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_10623.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 295)).stringValue () ;
      result << " & outOperand" ;
      result << index_10623_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 295)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10623_IDX.increment () ;
      enumerator_10623.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  capCollectionElement attributes ;\n"
    "  removeFirstObject (attributes, inCompiler COMMA_THERE) ;\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_11040_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11040 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11040.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11040_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 305)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11040_IDX.increment () ;
      enumerator_11040.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_11218_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11218 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11218.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11218_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 311)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_11218.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 311)).stringValue () ;
      result << " ;\n" ;
      index_11218_IDX.increment () ;
      enumerator_11218.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popLast (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11556_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11556 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11556.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_11556.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 320)).stringValue () ;
      result << " & outOperand" ;
      result << index_11556_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 320)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11556_IDX.increment () ;
      enumerator_11556.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  capCollectionElement attributes ;\n"
    "  removeLastObject (attributes, inCompiler COMMA_THERE) ;\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_11972_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11972 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11972.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11972_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 330)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11972_IDX.increment () ;
      enumerator_11972.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_12150_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12150 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12150.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12150_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 336)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_12150.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 336)).stringValue () ;
      result << " ;\n" ;
      index_12150_IDX.increment () ;
      enumerator_12150.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_first (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12486_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12486 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12486.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_12486.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 345)).stringValue () ;
      result << " & outOperand" ;
      result << index_12486_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 345)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_12486_IDX.increment () ;
      enumerator_12486.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElement attributes ;\n"
    "  readFirst (attributes, inCompiler COMMA_THERE) ;\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_12901_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12901 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12901.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12901_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 355)).stringValue () ;
      result << ".drop () ;\n" ;
      index_12901_IDX.increment () ;
      enumerator_12901.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_13079_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13079 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13079.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13079_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 361)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_13079.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 361)).stringValue () ;
      result << " ;\n" ;
      index_13079_IDX.increment () ;
      enumerator_13079.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_last (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_13414_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13414 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13414.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_13414.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 370)).stringValue () ;
      result << " & outOperand" ;
      result << index_13414_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 370)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_13414_IDX.increment () ;
      enumerator_13414.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElement attributes ;\n"
    "  readLast (attributes, inCompiler COMMA_THERE) ;\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_13828_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13828 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13828.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13828_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 380)).stringValue () ;
      result << ".drop () ;\n" ;
      index_13828_IDX.increment () ;
      enumerator_13828.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_14006_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14006 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14006.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_14006_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 386)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_14006.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 386)).stringValue () ;
      result << " ;\n" ;
      index_14006_IDX.increment () ;
      enumerator_14006.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::add_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand,\n"
    "                                            " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    "                                            " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (isValid () && inOperand.isValid ()) {\n"
    "    result = *this ;\n"
    "    result.appendList (inOperand) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subListWithRange (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_range & inRange,\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (THERE) ;\n"
    "  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subListFromIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_uint & inIndex,\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (THERE) ;\n"
    "  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subListToIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_uint & inIndex,\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (THERE) ;\n"
    "  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::plusAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inOperand,\n"
    "                          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    "                          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
    "  appendList (inOperand) ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_16806_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16806 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16806.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_16806.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_16806.current_mPropertyName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).stringValue () ;
        result << "AtIndex (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << enumerator_16806.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).stringValue () ;
        result << " inOperand,\n"
          "                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "GALGAS_uint inIndex,\n"
          "                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "C_Compiler * inCompiler\n"
          "                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) {\n"
          "  cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " * p = (cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;\n"
          "  if (NULL != p) {\n"
          "    macroValidSharedObject (p, cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ") ;\n"
          "    macroUniqueSharedObject (p) ;\n"
          "    p->mObject.mProperty_" ;
        result << enumerator_16806.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 454)).stringValue () ;
        result << " = inOperand ;\n"
          "  }\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_0) {
      }
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_16806.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 460)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_16806.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 460)).stringValue () ;
      result << "AtIndex (" ;
      columnMarker = result.currentColumn () ;
      result << "const GALGAS_uint & inIndex,\n"
        "                                              " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        "                                              " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n"
        "  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;\n"
        "  cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) attributes.ptr () ;\n"
        "  GALGAS_" ;
      result << enumerator_16806.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 465)).stringValue () ;
      result << " result ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    result = p->mObject.mProperty_" ;
      result << enumerator_16806.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 468)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_16806_IDX.increment () ;
      enumerator_16806.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inEnumeratedObject,\n"
    "                   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const typeEnumerationOrder inOrder) :\n"
    "cGenericAbstractEnumerator (inOrder) {\n"
    "  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current (LOCATION_ARGS) const {\n"
    "  const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return p->mObject ;\n"
    "}\n"
    "\n"
    "\n" ;
  GALGAS_uint index_19720_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_19720 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19720.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_19720.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 494)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_19720.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 494)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n"
        "  const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentObjectPtr (THERE) ;\n"
        "  macroValidSharedObject (p, cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  return p->mObject.mProperty_" ;
      result << enumerator_19720.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 497)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_19720_IDX.increment () ;
      enumerator_19720.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  const GALGAS_listTypeForGeneration temp_0 = object ;
  const GALGAS_listTypeForGeneration temp_1 = object ;
  const GALGAS_listTypeForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, temp_0.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 430)), temp_1.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 431)), temp_2.getter_mTypedAttributeList (HERE) COMMA_SOURCE_FILE ("type-list.galgas", 429))) ;
  const GALGAS_listTypeForGeneration temp_3 = object ;
  const GALGAS_listTypeForGeneration temp_4 = object ;
  const GALGAS_listTypeForGeneration temp_5 = object ;
  const GALGAS_listTypeForGeneration temp_6 = object ;
  const GALGAS_listTypeForGeneration temp_7 = object ;
  const GALGAS_listTypeForGeneration temp_8 = object ;
  const GALGAS_listTypeForGeneration temp_9 = object ;
  const GALGAS_listTypeForGeneration temp_10 = object ;
  const GALGAS_listTypeForGeneration temp_11 = object ;
  const GALGAS_listTypeForGeneration temp_12 = object ;
  const GALGAS_listTypeForGeneration temp_13 = object ;
  const GALGAS_listTypeForGeneration temp_14 = object ;
  const GALGAS_listTypeForGeneration temp_15 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 435)), temp_4.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 436)), temp_5.getter_mSelfTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 437)), temp_6.getter_mSelfTypeEntry (HERE).getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 438)), temp_7.getter_mSelfTypeEntry (HERE).getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 439)), temp_8.getter_mSelfTypeEntry (HERE).getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 440)), temp_9.getter_mSelfTypeEntry (HERE).getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 441)), temp_10.getter_mSelfTypeEntry (HERE).getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 442)), temp_11.getter_mSelfTypeEntry (HERE).getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 443)), temp_12.getter_mSelfTypeEntry (HERE).getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 444)), temp_13.getter_mSelfTypeEntry (HERE).getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 445)), temp_14.getter_mSelfTypeEntry (HERE).getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 446)), temp_15.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 447)) COMMA_SOURCE_FILE ("type-list.galgas", 434))), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 434)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                              extensionMethod_listTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_listTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  const GALGAS_listTypeForGeneration temp_0 = object ;
  cEnumerator_typedPropertyList enumerator_17267 (temp_0.getter_mTypedAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_17267.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_17267.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 458)) ;
    enumerator_17267.gotoNextObject () ;
  }
  const GALGAS_listTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.getter_mListElementTypeIndex (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 460)) ;
  const GALGAS_listTypeForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.getter_mSelfTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 461)) ;
  const GALGAS_listTypeForGeneration temp_3 = object ;
  const GALGAS_listTypeForGeneration temp_4 = object ;
  const GALGAS_listTypeForGeneration temp_5 = object ;
  const GALGAS_listTypeForGeneration temp_6 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, temp_3.getter_mSelfTypeEntry (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 463)), temp_4.getter_mSelfTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 464)), temp_5.getter_mTypedAttributeList (HERE), temp_6.getter_mSelfTypeEntry (HERE).getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 466)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 466)) COMMA_SOURCE_FILE ("type-list.galgas", 462))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                                     extensionMethod_listTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_listTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_1588 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 37)) ;
  var_structAttributeList_1588.addAssign_operation (GALGAS_bool (false), GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 40)), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 41)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 43))  COMMA_SOURCE_FILE ("type-listmap.galgas", 38)) ;
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  var_structAttributeList_1588.addAssign_operation (GALGAS_bool (false), temp_0.getter_mAssociatedListTypeName (HERE), GALGAS_string ("mList").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 47)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 49))  COMMA_SOURCE_FILE ("type-listmap.galgas", 44)) ;
  const GALGAS_listmapDeclarationAST temp_1 = object ;
  const GALGAS_listmapDeclarationAST temp_2 = object ;
  const GALGAS_listmapDeclarationAST temp_3 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.getter_mIsPredefined (HERE), GALGAS_lstring::constructor_new (temp_2.getter_mListmapTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 53)), temp_3.getter_mListmapTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 53)), var_structAttributeList_1588, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 51))  COMMA_SOURCE_FILE ("type-listmap.galgas", 51)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                             extensionMethod_listmapDeclarationAST_addAssociatedElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapDeclarationAST_addAssociatedElement (defineExtensionMethod_listmapDeclarationAST_addAssociatedElement, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                           GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                           GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                           GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                           GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  const GALGAS_listmapDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_2856 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.getter_mListmapTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 69)), temp_1.getter_mListmapTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 69)) ;
  {
  const GALGAS_listmapDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2856, temp_2, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 70)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_3 = object ;
  const GALGAS_listmapDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2856, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.getter_mAssociatedListTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 71)), temp_4.getter_mAssociatedListTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 71)) COMMA_SOURCE_FILE ("type-listmap.galgas", 71)) ;
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
//
//Overriding extension method '@listmapDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                          const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                          const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                          const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum_3936 ;
  GALGAS_typedPropertyList var_listTypedAttributeList_3994 ;
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  GALGAS_bool joker_3898_3 ; // Joker input parameter
  GALGAS_bool joker_3898_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_3898_1 ; // Joker input parameter
  GALGAS_bool joker_3942 ; // Joker input parameter
  GALGAS_propertyMap joker_4000_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_4000_19 ; // Joker input parameter
  GALGAS_constructorMap joker_4000_18 ; // Joker input parameter
  GALGAS_getterMap joker_4000_17 ; // Joker input parameter
  GALGAS_setterMap joker_4000_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_4000_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_4000_14 ; // Joker input parameter
  GALGAS_optionalMethodMap joker_4000_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_4000_12 ; // Joker input parameter
  GALGAS_operators joker_4000_11 ; // Joker input parameter
  GALGAS_functionSignature joker_4000_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_4000_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_4000_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_4000_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_4000_6 ; // Joker input parameter
  GALGAS_bool joker_4000_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_4000_4 ; // Joker input parameter
  GALGAS_string joker_4000_3 ; // Joker input parameter
  GALGAS_string joker_4000_2 ; // Joker input parameter
  GALGAS_headerKind joker_4000_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_mTypeMap (HERE).method_searchKey (temp_0.getter_mAssociatedListTypeName (HERE), joker_3898_3, joker_3898_2, joker_3898_1, var_typeKindEnum_3936, joker_3942, var_listTypedAttributeList_3994, joker_4000_20, joker_4000_19, joker_4000_18, joker_4000_17, joker_4000_16, joker_4000_15, joker_4000_14, joker_4000_13, joker_4000_12, joker_4000_11, joker_4000_10, joker_4000_9, joker_4000_8, joker_4000_7, joker_4000_6, joker_4000_5, joker_4000_4, joker_4000_3, joker_4000_2, joker_4000_1, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 84)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_3936.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 92)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_listmapDeclarationAST temp_2 = object ;
      const GALGAS_listmapDeclarationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.getter_mAssociatedListTypeName (HERE).getter_location (HERE), GALGAS_string ("the '@").add_operation (temp_3.getter_mAssociatedListTypeName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 93)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 93)), fixItArray4  COMMA_SOURCE_FILE ("type-listmap.galgas", 93)) ;
      var_listTypedAttributeList_3994 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 94)) ;
    }
  }
  GALGAS_constructorMap var_constructorMap_4270 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 97)) ;
  GALGAS_getterMap var_getterMap_4360 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4360, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 98)) ;
  }
  GALGAS_setterMap var_setterMap_4389 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 99)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4437 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 100)) ;
  GALGAS_unifiedTypeMap_2D_entry var_associatedListTypeIndex_4596 ;
  {
  const GALGAS_listmapDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_5.getter_mAssociatedListTypeName (HERE), var_associatedListTypeIndex_4596 COMMA_SOURCE_FILE ("type-listmap.galgas", 102)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_4730 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_4730 COMMA_SOURCE_FILE ("type-listmap.galgas", 104)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4360, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 106)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4360, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 113)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4360, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 120)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_6 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_4360, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("listForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), temp_6.getter_mAssociatedListTypeName (HERE).getter_string (HERE), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 127)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_7 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_4270, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), temp_7.getter_mListmapTypeName (HERE).getter_string (HERE), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 137)) ;
  }
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor_5784 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 145)) ;
  var_enumeratorDescriptor_5784.addAssign_operation (var_stringTypeIndex_4730, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-listmap.galgas", 146)) ;
  var_enumeratorDescriptor_5784.addAssign_operation (var_associatedListTypeIndex_4596, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("type-listmap.galgas", 147)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription_5997 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 149)) ;
  var_addAssignOperatorDescription_5997.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 150)), var_stringTypeIndex_4730, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-listmap.galgas", 150)) ;
  cEnumerator_typedPropertyList enumerator_6138 (var_listTypedAttributeList_3994, kENUMERATION_UP) ;
  while (enumerator_6138.hasCurrentObject ()) {
    var_addAssignOperatorDescription_5997.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 152)), enumerator_6138.current_mPropertyTypeEntry (HERE), enumerator_6138.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 152)) ;
    enumerator_6138.gotoNextObject () ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_8 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_8.getter_mListmapTypeName (HERE), var_getterMap_4360, var_setterMap_4389, var_instanceMethodMap_4437, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 155)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_listElementTypeIndex_6825 ;
  {
  const GALGAS_listmapDeclarationAST temp_9 = object ;
  const GALGAS_listmapDeclarationAST temp_10 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_9.getter_mListmapTypeName (HERE).getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 169)), temp_10.getter_mListmapTypeName (HERE).getter_location (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 169)), var_listElementTypeIndex_6825 COMMA_SOURCE_FILE ("type-listmap.galgas", 167)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_11 = object ;
  const GALGAS_listmapDeclarationAST temp_12 = object ;
  const GALGAS_listmapDeclarationAST temp_13 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_11.getter_mListmapTypeName (HERE), temp_12.getter_mIsPredefined (HERE), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-listmap.galgas", 177)), GALGAS_typeKindEnum::constructor_arrayType (SOURCE_FILE ("type-listmap.galgas", 178)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 180)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 181)), var_listTypedAttributeList_3994, var_constructorMap_4270, var_getterMap_4360, var_setterMap_4389, var_instanceMethodMap_4437, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 187)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 188)), var_enumeratorDescriptor_5784, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-listmap.galgas", 190)), var_addAssignOperatorDescription_5997, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 192)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 193)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 194)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 195)), GALGAS_bool (false), var_listElementTypeIndex_6825, GALGAS_string ("emptyMap"), GALGAS_string ("listmap-").add_operation (temp_13.getter_mListmapTypeName (HERE).getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-listmap.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 199)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-listmap.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 173)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                               extensionMethod_listmapDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterInSemanticContext (defineExtensionMethod_listmapDeclarationAST_enterInSemanticContext, NULL) ;

