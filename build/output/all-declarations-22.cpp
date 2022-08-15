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

void cPtr_lexicalAttributeInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                    GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalTypeEnum var_attributeLexicalType_15994 ;
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_15994, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 351)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_15994.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalAttributeInputArgumentAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_15994, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 357)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 358)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 359)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 360)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 357)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                    GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 371)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCharacterInputArgumentAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mCharacter ().readProperty_location (), GALGAS_string ("type error, a literal character has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 372)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 373)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 374)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 372)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalUnsignedInputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalUnsignedInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                   GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 385)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalUnsignedInputArgumentAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mUnsigned ().readProperty_location (), GALGAS_string ("type error, a literal unsigned value has @uint").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 386)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 387)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 388)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 386)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCurrentCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalCurrentCharacterInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                           GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 399)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCurrentCharacterInputArgumentAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GALGAS_string ("type error, current character value has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 400)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 402)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 401)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 402)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 400)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFunctionInputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                   GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_18732 ;
  GALGAS_lexicalTypeEnum var_returnedLexicalFormalType_18767 ;
  GALGAS_string var_replacementFunctionName_18800 ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = this ;
  GALGAS_bool joker_18806 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_lexicalFormalTypeList_18732, var_returnedLexicalFormalType_18767, var_replacementFunctionName_18800, joker_18806, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 413)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_replacementFunctionName_18800.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_18800, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 422)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 422)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 422)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_returnedLexicalFormalType_18767.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_18767, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 426)).add_operation (GALGAS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 427)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 428)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 429)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 426)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_lexicalFunctionInputArgumentAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsNotEqual, var_lexicalFormalTypeList_18732.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 433)).objectCompare (temp_8.readProperty_mFunctionActualArgumentList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 433)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_9 = this ;
      const GALGAS_lexicalFunctionInputArgumentAST temp_10 = this ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this lexical function names ").add_operation (temp_10.readProperty_mFunctionActualArgumentList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 435)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 435)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 434)).add_operation (GALGAS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 435)).add_operation (var_lexicalFormalTypeList_18732.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 437)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 437)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 436)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 437)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 434)) ;
    }
  }
  const GALGAS_lexicalFunctionInputArgumentAST temp_12 = this ;
  cEnumerator_lexicalFunctionFormalArgumentList enumerator_19799 (var_lexicalFormalTypeList_18732, kENUMERATION_UP) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_19855 (temp_12.readProperty_mFunctionActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_19799.hasCurrentObject () && enumerator_19855.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_19855.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_19799.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 441)) ;
    enumerator_19799.gotoNextObject () ;
    enumerator_19855.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalAttributeInputOutputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputOutputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                          GALGAS_lexicalArgumentModeAST inArgument_inLexicalRoutineFormalArgumentMode,
                                                                                          GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalTypeEnum var_attributeLexicalType_21138 ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_21138, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 464)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_attributeLexicalType_21138.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalAttributeInputOutputArgumentAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_21138, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 470)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 471)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 472)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 473)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 470)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (SOURCE_FILE ("lexiqueCompilation.galgas", 477)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_lexicalAttributeInputOutputArgumentAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualPassingModeLocation (), GALGAS_string ("the output mode (!) is required here, not an output/input mode"), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 478)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFormalInputArgumentAST checkLexicalRoutineCallArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalFormalInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalArgumentModeAST inArgument_inLexicalRoutineFormalArgumentMode,
                                                                                 GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_lexicalFormalInputArgumentAST temp_0 = this ;
  callExtensionMethod_checkLexicalRoutineCallArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), ioArgument_ioLexiqueAnalysisContext, inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 489)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (SOURCE_FILE ("lexiqueCompilation.galgas", 494)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalFormalInputArgumentAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualPassingModeLocation (), GALGAS_string ("the output/input mode (!\?) is required here, not an input mode"), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 495)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalStructuredSendInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalStructuredSendInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                               GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_lexicalStructuredSendInstructionAST temp_0 = this ;
  cEnumerator_lexicalSendSearchListAST enumerator_23281 (temp_0.readProperty_mLexicalSendSearchList (), kENUMERATION_UP) ;
  while (enumerator_23281.hasCurrentObject ()) {
    {
    ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalTokenListMap.setter_setMShouldBeGeneratedForKey (GALGAS_bool (true), enumerator_23281.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 513)) ;
    }
    GALGAS_lexicalTypeEnum joker_23507 ; // Joker input parameter
    ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_23281.current_mAttributeName (HERE), joker_23507, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 514)) ;
    enumerator_23281.gotoNextObject () ;
  }
  const GALGAS_lexicalStructuredSendInstructionAST temp_1 = this ;
  callExtensionMethod_checkLexicalDefaultAction ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 516)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalSimpleSendInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalSimpleSendInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                           GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_lexicalSimpleSendInstructionAST temp_0 = this ;
  GALGAS_lexicalSentValueList joker_23964 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mSentTerminal (), joker_23964, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 524)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalRepeatInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalRepeatInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_lexicalRepeatInstructionAST temp_0 = this ;
  cEnumerator_lexicalWhileBranchListAST enumerator_24289 (temp_0.readProperty_mLexicalWhileBranchList (), kENUMERATION_UP) ;
  while (enumerator_24289.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) enumerator_24289.current_mWhileExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 533)) ;
    GALGAS_lexicalTagMap var_tagMap_24413 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 534)) ;
    cEnumerator_lexicalInstructionListAST enumerator_24484 (enumerator_24289.current_mWhileInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_24484.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_24484.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_24413, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 536)) ;
      enumerator_24484.gotoNextObject () ;
    }
    enumerator_24289.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap_24621 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 539)) ;
  const GALGAS_lexicalRepeatInstructionAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_24690 (temp_1.readProperty_mRepeatedInstructionList (), kENUMERATION_UP) ;
  while (enumerator_24690.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_24690.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_24621, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 541)) ;
    enumerator_24690.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalSelectInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalSelectInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_lexicalSelectInstructionAST temp_0 = this ;
  cEnumerator_lexicalSelectBranchListAST enumerator_25138 (temp_0.readProperty_mLexicalSelectBranchList (), kENUMERATION_UP) ;
  while (enumerator_25138.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) enumerator_25138.current_mSelectExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 551)) ;
    GALGAS_lexicalTagMap var_tagMap_25264 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 552)) ;
    cEnumerator_lexicalInstructionListAST enumerator_25335 (enumerator_25138.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_25335.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_25335.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_25264, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 554)) ;
      enumerator_25335.gotoNextObject () ;
    }
    enumerator_25138.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap_25473 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 557)) ;
  const GALGAS_lexicalSelectInstructionAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_25542 (temp_1.readProperty_mDefaultInstructionList (), kENUMERATION_UP) ;
  while (enumerator_25542.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_25542.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_25473, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 559)) ;
    enumerator_25542.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalRoutineInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalRoutineInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                        GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_26077 ;
  GALGAS_stringlist var_routineErrorMessageList_26110 ;
  const GALGAS_lexicalRoutineInstructionAST temp_0 = this ;
  GALGAS_bool joker_26116 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalRoutineMessageMap ().method_searchKey (temp_0.readProperty_mRoutineName (), var_lexicalRoutineFormalArgumentList_26077, var_routineErrorMessageList_26110, joker_26116, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 568)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalRoutineInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, var_lexicalRoutineFormalArgumentList_26077.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 575)).objectCompare (temp_2.readProperty_mActualArgumentList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 575)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalRoutineInstructionAST temp_3 = this ;
      const GALGAS_lexicalRoutineInstructionAST temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("this lexical routine call names ").add_operation (temp_4.readProperty_mActualArgumentList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 577)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 577)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 576)).add_operation (GALGAS_string (" actual argument(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 577)).add_operation (var_lexicalRoutineFormalArgumentList_26077.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 579)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 578)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 579)), fixItArray5  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 576)) ;
    }
  }
  const GALGAS_lexicalRoutineInstructionAST temp_6 = this ;
  cEnumerator_lexicalRoutineFormalArgumentList enumerator_26624 (var_lexicalRoutineFormalArgumentList_26077, kENUMERATION_UP) ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_26693 (temp_6.readProperty_mActualArgumentList (), kENUMERATION_UP) ;
  while (enumerator_26624.hasCurrentObject () && enumerator_26693.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRoutineCallArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_26693.current_mLexicalRoutineActualArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_26624.current_mLexicalFormalArgumentMode (HERE), enumerator_26624.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 583)) ;
    enumerator_26624.gotoNextObject () ;
    enumerator_26693.gotoNextObject () ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_lexicalRoutineInstructionAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsNotEqual, var_routineErrorMessageList_26110.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 590)).objectCompare (temp_8.readProperty_mErrorMessageList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 590)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_lexicalRoutineInstructionAST temp_9 = this ;
      const GALGAS_lexicalRoutineInstructionAST temp_10 = this ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("this lexical routine call names ").add_operation (temp_10.readProperty_mErrorMessageList ().getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 592)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 591)).add_operation (GALGAS_string (" error message(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 592)).add_operation (var_routineErrorMessageList_26110.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 594)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 593)).add_operation (GALGAS_string (" error message(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 594)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 591)) ;
    }
  }
  const GALGAS_lexicalRoutineInstructionAST temp_12 = this ;
  cEnumerator_lstringlist enumerator_27333 (temp_12.readProperty_mErrorMessageList (), kENUMERATION_UP) ;
  while (enumerator_27333.hasCurrentObject ()) {
    cMapElement_lexicalMessageMap * objectArray_27372 = (cMapElement_lexicalMessageMap *) ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, enumerator_27333.current_mValue (HERE), kSearchErrorMessage_lexicalMessageMap_searchKey  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 598)) ;
    if (NULL != objectArray_27372) {
      macroValidSharedObject (objectArray_27372, cMapElement_lexicalMessageMap) ;
      objectArray_27372->mProperty_mMessageIsUsed = GALGAS_bool (true) ;
    }
    enumerator_27333.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalLogInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalLogInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                    GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalRewindInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalRewindInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_lexicalRewindInstructionAST temp_0 = this ;
  ioArgument_ioTagMap.method_searchKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 616)) ;
  const GALGAS_lexicalRewindInstructionAST temp_1 = this ;
  GALGAS_lexicalSentValueList joker_28181 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_1.readProperty_mTerminalName (), joker_28181, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 617)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalDropInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalDropInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                     GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_lexicalDropInstructionAST temp_0 = this ;
  GALGAS_lexicalSentValueList joker_28539 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mTerminalName (), joker_28539, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 625)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalTagInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalTagInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                    GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  {
  const GALGAS_lexicalTagInstructionAST temp_0 = this ;
  ioArgument_ioTagMap.setter_insertKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 633)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalErrorInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  {
  const GALGAS_lexicalErrorInstructionAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_0.readProperty_mErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 642)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalWarningInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalWarningInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                        GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  {
  const GALGAS_lexicalWarningInstructionAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_0.readProperty_mWarningMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 650)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalImplicitRuleAST checkLexicalRule'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalImplicitRuleAST::method_checkLexicalRule (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_lexicalImplicitRuleAST temp_0 = this ;
  GALGAS_lexicalExplicitTokenListMap joker_30379 ; // Joker input parameter
  GALGAS_tokenSortedlist joker_30382 ; // Joker input parameter
  GALGAS_bool joker_30385 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_30379, joker_30382, joker_30385, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 664)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalExplicitRuleAST checkLexicalRule'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalExplicitRuleAST::method_checkLexicalRule (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_lexicalExplicitRuleAST temp_0 = this ;
  callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 671)) ;
  GALGAS_lexicalTagMap var_tagMap_30734 = GALGAS_lexicalTagMap::constructor_emptyMap (SOURCE_FILE ("lexiqueCompilation.galgas", 672)) ;
  const GALGAS_lexicalExplicitRuleAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_30759 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_30759.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_30759.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_30734, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 674)) ;
    enumerator_30759.gotoNextObject () ;
  }
}
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
  GALGAS_uint index_790_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap ().isValid ()) {
    cEnumerator_lexicalRoutineMap enumerator_790 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap (), kENUMERATION_UP) ;
    while (enumerator_790.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_790.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "\n"
          "void scanner_routine_" ;
        result << enumerator_790.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " (C_Lexique & inLexique" ;
        GALGAS_uint index_1011_ (0) ;
        if (enumerator_790.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          cEnumerator_lexicalRoutineFormalArgumentList enumerator_1011 (enumerator_790.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
          while (enumerator_1011.hasCurrentObject ()) {
            result << ",\n"
              "                " ;
            result << extensionGetter_cppConstInFormalArgument (enumerator_1011.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 17)).stringValue () ;
            result << extensionGetter_cppTypeName (enumerator_1011.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 18)).stringValue () ;
            result << extensionGetter_cppReferenceInFormalArgument (enumerator_1011.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 19)).stringValue () ;
            result << " " ;
            result << enumerator_1011.current_mArgumentNameForComment (HERE).stringValue () ;
            index_1011_.increment () ;
            enumerator_1011.gotoNextObject () ;
          }
        }
        GALGAS_uint index_1364_ (0) ;
        if (enumerator_790.current_mErrorMessageList (HERE).isValid ()) {
          cEnumerator_stringlist enumerator_1364 (enumerator_790.current_mErrorMessageList (HERE), kENUMERATION_UP) ;
          while (enumerator_1364.hasCurrentObject ()) {
            result << ",\n"
              "                const char * " ;
            result << enumerator_1364.current_mValue (HERE).stringValue () ;
            index_1364_.increment () ;
            enumerator_1364.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_790_.increment () ;
      enumerator_790.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                    E X T E R N    F U N C T I O N S                                           \n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_1933_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap ().isValid ()) {
    cEnumerator_lexicalFunctionMap enumerator_1933 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap (), kENUMERATION_UP) ;
    while (enumerator_1933.hasCurrentObject ()) {
      const enumGalgasBool test_1 = enumerator_1933.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "\n" ;
        result << extensionGetter_cppTypeName (enumerator_1933.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 35)).stringValue () ;
        result << " scanner_function_" ;
        result << enumerator_1933.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " (C_Lexique & inLexique" ;
        GALGAS_uint index_2130_ (0) ;
        if (enumerator_1933.current_mLexicalTypeList (HERE).isValid ()) {
          cEnumerator_lexicalFunctionFormalArgumentList enumerator_2130 (enumerator_1933.current_mLexicalTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_2130.hasCurrentObject ()) {
            result << ",\n"
              "                const " ;
            result << extensionGetter_cppTypeName (enumerator_2130.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 37)).stringValue () ;
            result << " " ;
            result << enumerator_2130.current_mArgumentNameForComment (HERE).stringValue () ;
            index_2130_.increment () ;
            enumerator_2130.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_1933_.increment () ;
      enumerator_1933.gotoNextObject () ;
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
  GALGAS_uint index_2737_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_2737 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), kENUMERATION_UP) ;
    while (enumerator_2737.hasCurrentObject ()) {
      result << "  public: " ;
      result << extensionGetter_cppTypeName (enumerator_2737.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 50)).stringValue () ;
      result << " mLexicalAttribute_" ;
      result << enumerator_2737.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 50)).stringValue () ;
      result << " ;\n" ;
      index_2737_.increment () ;
      enumerator_2737.gotoNextObject () ;
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
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 80)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 80)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 80)))).boolEnum () ;
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
  GALGAS_uint index_217_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_217 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_217.hasCurrentObject ()) {
      result << ",\n"
        "   kToken_" ;
      result << enumerator_217.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 5)).stringValue () ;
      index_217_.increment () ;
      enumerator_217.gotoNextObject () ;
    }
  }
  result << "} ;\n" ;
  GALGAS_uint index_402_ (0) ;
  if (in_DELIMITOR_5F_LIST_5F_LIST.isValid ()) {
    cEnumerator_lexicalListDeclarationListAST enumerator_402 (in_DELIMITOR_5F_LIST_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_402.hasCurrentObject ()) {
      result << "\n"
        "//--- Key words table '" ;
      result << enumerator_402.current_mName (HERE).readProperty_string ().stringValue () ;
      result << "'\n"
        "  public: static int16_t search_into_" ;
      result << enumerator_402.current_mName (HERE).readProperty_string ().stringValue () ;
      result << " (const C_String & inSearchedString) ;\n" ;
      index_402_.increment () ;
      enumerator_402.gotoNextObject () ;
    }
  }
  result << "  \n"
    "\n"
    "//--- Assign from attribute\n" ;
  GALGAS_uint index_670_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_670 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), kENUMERATION_UP) ;
    while (enumerator_670.hasCurrentObject ()) {
      result << "  public: GALGAS_l" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_670.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 18)).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 18)).stringValue () ;
      result << " synthetizedAttribute_" ;
      result << enumerator_670.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 18)).stringValue () ;
      result << " (void) const ;\n" ;
      index_670_.increment () ;
      enumerator_670.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//--- Attribute access\n" ;
  GALGAS_uint index_944_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_944 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), kENUMERATION_UP) ;
    while (enumerator_944.hasCurrentObject ()) {
      result << "  public: " ;
      result << extensionGetter_cppTypeName (enumerator_944.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 25)).stringValue () ;
      result << " attributeValue_" ;
      result << enumerator_944.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 25)).stringValue () ;
      result << " (void) const ;\n" ;
      index_944_.increment () ;
      enumerator_944.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//--- Indexing keys\n" ;
  GALGAS_uint index_1171_ (0) ;
  if (in_INDEXING_5F_LIST.isValid ()) {
    cEnumerator_indexingListAST enumerator_1171 (in_INDEXING_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_1171 = enumerator_1171.hasCurrentObject () ;
    if (nonEmpty_enumerator_1171) {
      result << "  public: enum {" ;
    }
    while (enumerator_1171.hasCurrentObject ()) {
      result << "\n"
        "    kIndexing_" ;
      result << enumerator_1171.current_mIndexName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 33)).stringValue () ;
      if (enumerator_1171.hasNextObject ()) {
        result << "," ;
      }
      index_1171_.increment () ;
      enumerator_1171.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_1171) {
      result << "\n"
        "  } ;\n" ;
    }
  }
  result << "\n"
    "//--- Unicode test functions\n" ;
  GALGAS_uint index_1373_ (0) ;
  if (in_UNICODE_5F_TEST_5F_FUNCTIONS.isValid ()) {
    cEnumerator_lexicalFunctionListAST enumerator_1373 (in_UNICODE_5F_TEST_5F_FUNCTIONS, kENUMERATION_UP) ;
    while (enumerator_1373.hasCurrentObject ()) {
      result << "  public: static bool " ;
      result << enumerator_1373.current_mFunctionName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 41)).stringValue () ;
      result << " (const utf32 inUnicodeCharacter) ;\n" ;
      index_1373_.increment () ;
      enumerator_1373.gotoNextObject () ;
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
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_length (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 54)).getter_string (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 54)).stringValue () ;
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
  GALGAS_uint index_736_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_736 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_736 = enumerator_736.hasCurrentObject () ;
    if (nonEmpty_enumerator_736) {
      result << " :\n" ;
    }
    while (enumerator_736.hasCurrentObject ()) {
      result << "mLexicalAttribute_" ;
      result << enumerator_736.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 16)).stringValue () ;
      result << " ()" ;
      if (enumerator_736.hasNextObject ()) {
        result << ",\n" ;
      }
      index_736_.increment () ;
      enumerator_736.gotoNextObject () ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 28)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 28)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 28)))).boolEnum () ;
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
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 41)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 41)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 41)))).boolEnum () ;
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
  GALGAS_uint index_2747_ (0) ;
  if (in_LEXICAL_5F_MESSAGE_5F_MAP.isValid ()) {
    cEnumerator_lexicalMessageMap enumerator_2747 (in_LEXICAL_5F_MESSAGE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2747.hasCurrentObject ()) {
      result << "\n"
        "static const char * gLexicalMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_2747.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " = " ;
      result << enumerator_2747.current_mLexicalMessage (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 60)).stringValue () ;
      result << " ;\n" ;
      index_2747_.increment () ;
      enumerator_2747.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//          Syntax error messages, for every terminal symbol                                     \n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_3355_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_3355 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3355.hasCurrentObject ()) {
      result << "\n"
        "//--- Syntax error message for terminal '$" ;
      result << enumerator_3355.current_mTerminalName (HERE).readProperty_string ().stringValue () ;
      result << "$' :\n"
        "static const char * gSyntaxErrorMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_3355.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 69)).stringValue () ;
      result << " = " ;
      result << enumerator_3355.current_mSyntaxErrorMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 69)).stringValue () ;
      result << " ;\n" ;
      index_3355_.increment () ;
      enumerator_3355.gotoNextObject () ;
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
  result << in_TERMINAL_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).stringValue () ;
  result << ")) {\n"
    "    static const char * syntaxErrorMessageArray [" ;
  result << in_TERMINAL_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).stringValue () ;
  result << "] = {kEndOfSourceLexicalErrorMessage" ;
  GALGAS_uint index_4439_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_4439 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4439.hasCurrentObject ()) {
      result << ",\n"
        "        gSyntaxErrorMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_4439.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 81)).stringValue () ;
      index_4439_.increment () ;
      enumerator_4439.gotoNextObject () ;
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
  GALGAS_uint index_5031_ (0) ;
  if (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES.isValid ()) {
    cEnumerator_stringset enumerator_5031 (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES, kENUMERATION_UP) ;
    while (enumerator_5031.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_5031.current_key (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 94)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 94)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 94)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "\n"
          "//--- Unicode string for '$" ;
        result << enumerator_5031.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 95)).stringValue () ;
        result << "$'\n"
          "static const utf32 kUnicodeString_" ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5031.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 96)).stringValue () ;
        result << " [] = " ;
        result << enumerator_5031.current_key (HERE).getter_utf_33__32_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 96)).stringValue () ;
        result << " ;\n" ;
      }else if (kBoolFalse == test_2) {
      }
      index_5031_.increment () ;
      enumerator_5031.gotoNextObject () ;
    }
  }
  result << "\n" ;
  GALGAS_uint index_5422_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_5422 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_5422.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "//             Key words table '" ;
      result << enumerator_5422.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << "'      \n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "static const int32_t ktable_size_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5422.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " = " ;
      result << enumerator_5422.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 105)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 105)).stringValue () ;
      result << " ;\n"
        "\n"
        "static const C_unicode_lexique_table_entry ktable_for_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5422.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " [ktable_size_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5422.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_6153_ (0) ;
      if (enumerator_5422.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_6153 (enumerator_5422.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
        while (enumerator_6153.hasCurrentObject ()) {
          result << "  C_unicode_lexique_table_entry (kUnicodeString_" ;
          result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_6153.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 108)).stringValue () ;
          result << ", " ;
          result << enumerator_6153.current_mLength (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 108)).stringValue () ;
          result << ", C_Lexique_" ;
          result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
          result << "::kToken_" ;
          result << enumerator_6153.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 108)).stringValue () ;
          result << ")" ;
          if (enumerator_6153.hasNextObject ()) {
            result << ",\n" ;
          }
          index_6153_.increment () ;
          enumerator_6153.gotoNextObject () ;
        }
      }
      result << "\n"
        "} ;\n"
        "\n"
        "int16_t C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::search_into_" ;
      result << enumerator_5422.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " (const C_String & inSearchedString) {\n"
        "  return searchInList (inSearchedString, ktable_for_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5422.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << ", ktable_size_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5422.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << ") ;\n"
        "}\n"
        "\n" ;
      index_5422_.increment () ;
      enumerator_5422.gotoNextObject () ;
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
  GALGAS_uint index_7568_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_7568 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7568.hasCurrentObject ()) {
      result << "    case kToken_" ;
      result << enumerator_7568.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 132)).stringValue () ;
      result << ":\n"
        "      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;\n"
        "      s.appendCString (" ;
      result << enumerator_7568.current_mTerminalName (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 134)).stringValue () ;
      result << ") ;\n"
        "      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;\n" ;
      GALGAS_uint index_7953_ (0) ;
      if (enumerator_7568.current_mSentAttributeList (HERE).isValid ()) {
        cEnumerator_lexicalSentValueList enumerator_7953 (enumerator_7568.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
        while (enumerator_7953.hasCurrentObject ()) {
          result << "      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;\n"
            "      s." ;
          result << extensionGetter_appendMethodName (enumerator_7953.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue () ;
          result << " (ptr->mLexicalAttribute_" ;
          result << enumerator_7953.current_mLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue () ;
          result << extensionGetter_appendArgumentOfMethod (enumerator_7953.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue () ;
          result << ") ;\n" ;
          index_7953_.increment () ;
          enumerator_7953.gotoNextObject () ;
        }
      }
      result << "      break ;\n" ;
      index_7568_.increment () ;
      enumerator_7568.gotoNextObject () ;
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
  GALGAS_uint index_8882_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
    cEnumerator_templateDelimitorList enumerator_8882 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList (), kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_8882 = enumerator_8882.hasCurrentObject () ;
    if (nonEmpty_enumerator_8882) {
      result << "static const cTemplateDelimiter " ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_kTemplateDefinitionArray [" ;
      result << in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 154)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 154)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_8882.hasCurrentObject ()) {
      result << "  cTemplateDelimiter (kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_8882.current_mStartString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 155)).stringValue () ;
      result << ", " ;
      result << enumerator_8882.current_mStartString (HERE).readProperty_string ().getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 155)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 155)).stringValue () ;
      result << ", " ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_8882.current_mEndString (HERE).readProperty_string ().getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 156)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 156)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 156)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "NULL, 0," ;
      }else if (kBoolFalse == test_3) {
        result << "kUnicodeString_" ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_8882.current_mEndString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).stringValue () ;
        result << ", " ;
        result << enumerator_8882.current_mEndString (HERE).readProperty_string ().getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).stringValue () ;
        result << "," ;
      }
      result << " NULL, " ;
      result << enumerator_8882.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 162)).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 162)).stringValue () ;
      result << ")" ;
      if (enumerator_8882.hasNextObject ()) {
        result << ",\n" ;
      }
      index_8882_.increment () ;
      enumerator_8882.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8882) {
      result << "\n"
        "} ;\n" ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                           Template Replacements                                               \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_9928_ (0) ;
  if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
    cEnumerator_templateReplacementListAST enumerator_9928 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_9928 = enumerator_9928.hasCurrentObject () ;
    if (nonEmpty_enumerator_9928) {
      result << "static const cTemplateDelimiter " ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_kTemplateReplacementArray [" ;
      result << in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 173)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 173)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_9928.hasCurrentObject ()) {
      result << "  cTemplateDelimiter (kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9928.current_mMatchString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 175)).stringValue () ;
      result << ", " ;
      result << enumerator_9928.current_mMatchString (HERE).readProperty_string ().getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 175)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 175)).stringValue () ;
      result << ", kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9928.current_mReplacementString (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).stringValue () ;
      result << ", " ;
      result << enumerator_9928.current_mReplacementString (HERE).readProperty_string ().getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).stringValue () ;
      result << ", " ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_9928.current_mReplacementFunction (HERE).readProperty_string ().getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 177)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 177)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 177)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "NULL" ;
      }else if (kBoolFalse == test_4) {
        result << "scanner_routine_" ;
        result << enumerator_9928.current_mReplacementFunction (HERE).readProperty_string ().stringValue () ;
      }
      result << ", true)" ;
      if (enumerator_9928.hasNextObject ()) {
        result << ",\n" ;
      }
      index_9928_.increment () ;
      enumerator_9928.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_9928) {
      result << "\n"
        "} ;\n" ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//            Terminal Symbols as end of script in template mark                                 \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 191)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 191)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 191)))).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_uint index_11117_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
      cEnumerator_terminalList enumerator_11117 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_11117 = enumerator_11117.hasCurrentObject () ;
      if (nonEmpty_enumerator_11117) {
        result << "static const bool " ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << "_kEndOfScriptInTemplateArray [" ;
        result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).stringValue () ;
        result << "] = {\n" ;
      }
      while (enumerator_11117.hasCurrentObject ()) {
        result << "  " ;
        result << enumerator_11117.current_mIsEndOfTemplateMark (HERE).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 194)).stringValue () ;
        result << " /* " ;
        result << enumerator_11117.current_mTerminalName (HERE).readProperty_string ().stringValue () ;
        result << " */" ;
        if (enumerator_11117.hasNextObject ()) {
          result << ",\n" ;
        }
        index_11117_.increment () ;
        enumerator_11117.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_11117) {
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
  GALGAS_uint index_11657_ (0) ;
  if (in_UNICODE_5F_TEST_5F_FUNCTIONS.isValid ()) {
    cEnumerator_lexicalFunctionListAST enumerator_11657 (in_UNICODE_5F_TEST_5F_FUNCTIONS, kENUMERATION_UP) ;
    while (enumerator_11657.hasCurrentObject ()) {
      result << "bool C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::" ;
      result << enumerator_11657.current_mFunctionName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 206)).stringValue () ;
      result << " (const utf32 inUnicodeCharacter) {\n"
        "  return " ;
      result << callExtensionGetter_generateForUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) enumerator_11657.current_mLexicalExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 207)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_11657_.increment () ;
      enumerator_11657.gotoNextObject () ;
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
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 220)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 220)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 220)))).boolEnum () ;
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
    GALGAS_uint index_14962_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_14962 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_14962.hasCurrentObject ()) {
        result << "    token.mLexicalAttribute_" ;
        result << enumerator_14962.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 258)).stringValue () ;
        result << extensionGetter_initialization (enumerator_14962.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 258)).stringValue () ;
        result << " ;\n" ;
        index_14962_.increment () ;
        enumerator_14962.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n"
      "    try{\n" ;
    if (GALGAS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 263)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 263)).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 263)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 263)).uintValue ()) ;
    }
    GALGAS_uint index_15189_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_15189 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_15189.hasCurrentObject ()) {
        result << callExtensionGetter_generateCode ((const cPtr_abstractLexicalRuleAST *) enumerator_15189.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 265)).stringValue () ;
        index_15189_.increment () ;
        enumerator_15189.gotoNextObject () ;
      }
    }
    if (GALGAS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 263)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 263)).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 263)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 263)).uintValue ())) ;
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
    GALGAS_uint index_15996_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_15996 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_15996.hasCurrentObject ()) {
        result << "    token.mLexicalAttribute_" ;
        result << enumerator_15996.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 285)).stringValue () ;
        result << extensionGetter_initialization (enumerator_15996.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 285)).stringValue () ;
        result << " ;\n" ;
        index_15996_.increment () ;
        enumerator_15996.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n"
      "    try{\n" ;
    if (GALGAS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 290)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 290)).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 290)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 290)).uintValue ()) ;
    }
    GALGAS_uint index_16223_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_16223 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_16223.hasCurrentObject ()) {
        result << callExtensionGetter_generateCode ((const cPtr_abstractLexicalRuleAST *) enumerator_16223.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 292)).stringValue () ;
        index_16223_.increment () ;
        enumerator_16223.gotoNextObject () ;
      }
    }
    if (GALGAS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 290)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 290)).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 290)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 290)).uintValue ())) ;
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
  GALGAS_uint index_17850_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_17850 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_17850.hasCurrentObject ()) {
      result << "  ptr->mLexicalAttribute_" ;
      result << enumerator_17850.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 329)).stringValue () ;
      result << " = ioToken.mLexicalAttribute_" ;
      result << enumerator_17850.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 329)).stringValue () ;
      result << " ;\n" ;
      index_17850_.increment () ;
      enumerator_17850.gotoNextObject () ;
    }
  }
  result << "  enterTokenFromPointer (ptr) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//               A T T R I B U T E   A C C E S S                                                 \n" ;
  GALGAS_uint index_18300_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_18300 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_18300.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n" ;
      result << extensionGetter_cppTypeName (enumerator_18300.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 339)).stringValue () ;
      result << " C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::attributeValue_" ;
      result << enumerator_18300.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 339)).stringValue () ;
      result << " (void) const {\n"
        "  cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " * ptr = (cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentTokenPtr (HERE) ;\n"
        "  return ptr->mLexicalAttribute_" ;
      result << enumerator_18300.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 341)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_18300_.increment () ;
      enumerator_18300.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//         A S S I G N    F R O M    A T T R I B U T E                                           \n" ;
  GALGAS_uint index_19047_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_19047 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_19047.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_l" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_19047.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 349)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 349)).stringValue () ;
      result << " C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::synthetizedAttribute_" ;
      result << enumerator_19047.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 349)).stringValue () ;
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
      result << extensionGetter_lexicalTypeBaseName (enumerator_19047.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 353)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 353)).stringValue () ;
      result << " value (ptr->mLexicalAttribute_" ;
      result << enumerator_19047.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 353)).stringValue () ;
      result << ") ;\n"
        "  GALGAS_l" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_19047.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 354)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 354)).stringValue () ;
      result << " result (value, currentLocation) ;\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_19047_.increment () ;
      enumerator_19047.gotoNextObject () ;
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
  GALGAS_uint index_20615_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_20615 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_20615.hasCurrentObject ()) {
      result << "  result.addAssign_operation (GALGAS_string (" ;
      result << enumerator_20615.current_mTerminalName (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 365)).stringValue () ;
      result << ") COMMA_THERE) ;\n" ;
      index_20615_.increment () ;
      enumerator_20615.gotoNextObject () ;
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
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 373)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 373)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 373)))).boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "/* ioList */" ;
  }else if (kBoolFalse == test_7) {
    result << "ioList" ;
  }
  result << ") {\n" ;
  GALGAS_uint index_21131_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_21131 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_21131.hasCurrentObject ()) {
      result << "  ioList.appendObject (" ;
      result << in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 377)).add_operation (enumerator_21131.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 377)).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 377)).stringValue () ;
      result << ") ;\n" ;
      index_21131_.increment () ;
      enumerator_21131.gotoNextObject () ;
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
  const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 383)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 383)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 383)))).boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "/* inIdentifier */" ;
  }else if (kBoolFalse == test_8) {
    result << "inIdentifier" ;
  }
  result << ",\n"
    "     " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "bool & " ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)))).boolEnum () ;
  if (kBoolTrue == test_9) {
    result << "/* ioFound */" ;
  }else if (kBoolFalse == test_9) {
    result << "ioFound" ;
  }
  result << ",\n"
    "     " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "TC_UniqueArray <C_String> & " ;
  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 385)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 385)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 385)))).boolEnum () ;
  if (kBoolTrue == test_10) {
    result << "/* ioList */" ;
  }else if (kBoolFalse == test_10) {
    result << "ioList" ;
  }
  result << ") {\n" ;
  GALGAS_uint index_21844_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_21844 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_21844.hasCurrentObject ()) {
      result << "  if (inIdentifier == " ;
      result << in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 389)).add_operation (enumerator_21844.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 389)).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 389)).stringValue () ;
      result << ") {\n"
        "    ioFound = true ;\n" ;
      GALGAS_uint index_22021_ (0) ;
      if (enumerator_21844.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_22021 (enumerator_21844.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
        while (enumerator_22021.hasCurrentObject ()) {
          result << "    ioList.appendObject (" ;
          result << enumerator_22021.current_mName (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 392)).stringValue () ;
          result << ") ;\n" ;
          index_22021_.increment () ;
          enumerator_22021.gotoNextObject () ;
        }
      }
      result << "    ioList.sortArrayUsingCompareMethod() ;\n"
        "  }\n" ;
      index_21844_.increment () ;
      enumerator_21844.gotoNextObject () ;
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
  result << in_TERMINAL_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 410)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 410)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 410)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 410)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 410)).stringValue () ;
  result << "] = {0" ;
  GALGAS_uint index_23160_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_23160 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_23160.hasCurrentObject ()) {
      result << ",\n"
        "    " ;
      result << enumerator_23160.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 412)).stringValue () ;
      result << " /* " ;
      result << in_LEXIQUE_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_23160.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 412)).stringValue () ;
      result << " */" ;
      index_23160_.increment () ;
      enumerator_23160.gotoNextObject () ;
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
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 423)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 423)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 423)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 423)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 423)).stringValue () ;
  result << ") {\n"
    "    static const char * kStyleArray [" ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 424)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 424)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 424)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 424)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 424)).stringValue () ;
  result << "] = {\n"
    "      \"\"" ;
  GALGAS_uint index_24044_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_24044 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_24044.hasCurrentObject ()) {
      result << ",\n"
        "      " ;
      result << enumerator_24044.current_mName (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 427)).stringValue () ;
      index_24044_.increment () ;
      enumerator_24044.gotoNextObject () ;
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
  GALGAS_uint index_503_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap ().isValid ()) {
    cEnumerator_lexicalRoutineMap enumerator_503 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalRoutineMessageMap (), kENUMERATION_UP) ;
    while (enumerator_503.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_503.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "\n"
          "void scanner_cocoa_routine_" ;
        result << enumerator_503.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "BOOL * ioScanningOk" ;
        GALGAS_uint index_732_ (0) ;
        if (enumerator_503.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          cEnumerator_lexicalRoutineFormalArgumentList enumerator_732 (enumerator_503.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
          while (enumerator_732.hasCurrentObject ()) {
            result << ",\n"
              "                " ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << extensionGetter_cppConstInFormalArgument (enumerator_732.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 14)).stringValue () ;
            result << extensionGetter_cocoaTypeName (enumerator_732.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 15)).stringValue () ;
            result << extensionGetter_cocoaPointerInFormalArgument (enumerator_732.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 16)).stringValue () ;
            result << " " ;
            result << enumerator_732.current_mArgumentNameForComment (HERE).stringValue () ;
            index_732_.increment () ;
            enumerator_732.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_503_.increment () ;
      enumerator_503.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                    E X T E R N    F U N C T I O N S                                           \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_1561_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap ().isValid ()) {
    cEnumerator_lexicalFunctionMap enumerator_1561 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalFunctionMap (), kENUMERATION_UP) ;
    while (enumerator_1561.hasCurrentObject ()) {
      const enumGalgasBool test_1 = enumerator_1561.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "\n" ;
        result << extensionGetter_cppTypeName (enumerator_1561.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 31)).stringValue () ;
        result << " scanner_cocoa_function_" ;
        result << enumerator_1561.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "BOOL * ioScanningOk" ;
        GALGAS_uint index_1766_ (0) ;
        if (enumerator_1561.current_mLexicalTypeList (HERE).isValid ()) {
          cEnumerator_lexicalFunctionFormalArgumentList enumerator_1766 (enumerator_1561.current_mLexicalTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1766.hasCurrentObject ()) {
            result << ",\n"
              "                " ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << "const " ;
            result << extensionGetter_cppTypeName (enumerator_1766.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 33)).stringValue () ;
            result << " " ;
            result << enumerator_1766.current_mArgumentNameForComment (HERE).stringValue () ;
            index_1766_.increment () ;
            enumerator_1766.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_1561_.increment () ;
      enumerator_1561.gotoNextObject () ;
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
  GALGAS_uint index_2438_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_2438 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_2438.hasCurrentObject ()) {
      result << ",\n"
        "  " ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_2438.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 48)).stringValue () ;
      index_2438_.increment () ;
      enumerator_2438.gotoNextObject () ;
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
  GALGAS_uint index_2965_ (0) ;
  if (in_UNICODE_5F_TEST_5F_FUNCTIONS.isValid ()) {
    cEnumerator_lexicalFunctionListAST enumerator_2965 (in_UNICODE_5F_TEST_5F_FUNCTIONS, kENUMERATION_UP) ;
    while (enumerator_2965.hasCurrentObject ()) {
      result << "bool " ;
      result << enumerator_2965.current_mFunctionName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 60)).stringValue () ;
      result << " (const utf32 inUnicodeCharacter) ;\n"
        "\n" ;
      index_2965_.increment () ;
      enumerator_2965.gotoNextObject () ;
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
  GALGAS_uint index_3565_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap ().isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_3565 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalAttributeMap (), kENUMERATION_UP) ;
    while (enumerator_3565.hasCurrentObject ()) {
      result << "  @private " ;
      result << extensionGetter_cocoaTypeName (enumerator_3565.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 72)).stringValue () ;
      result << " mLexicalAttribute_" ;
      result << enumerator_3565.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " ;\n" ;
      index_3565_.increment () ;
      enumerator_3565.gotoNextObject () ;
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
  GALGAS_uint index_472_ (0) ;
  if (in_UNICODE_5F_TEST_5F_FUNCTIONS.isValid ()) {
    cEnumerator_lexicalFunctionListAST enumerator_472 (in_UNICODE_5F_TEST_5F_FUNCTIONS, kENUMERATION_UP) ;
    while (enumerator_472.hasCurrentObject ()) {
      result << "bool " ;
      result << enumerator_472.current_mFunctionName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 10)).stringValue () ;
      result << " (const utf32 inUnicodeCharacter) {\n"
        "  return " ;
      result << callExtensionGetter_generateForUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) enumerator_472.current_mLexicalExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 11)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_472_.increment () ;
      enumerator_472.gotoNextObject () ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 24)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 24)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 24)))).boolEnum () ;
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
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 34)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 34)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 34)))).boolEnum () ;
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
  GALGAS_uint index_2138_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_2138 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2138.hasCurrentObject ()) {
      result << "    mLexicalAttribute_" ;
      result << enumerator_2138.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " = " ;
      result << extensionGetter_cocoaInitializationCode (enumerator_2138.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 45)).stringValue () ;
      result << " ;\n" ;
      index_2138_.increment () ;
      enumerator_2138.gotoNextObject () ;
    }
  }
  result << "  }\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 48)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 48)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 48)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "  if (nil == kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 49)).stringValue () ;
    result << ") {\n"
      "    kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 50)).stringValue () ;
    result << " = [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_2629_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList ().isValid ()) {
      cEnumerator_templateDelimitorList enumerator_2629 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTemplateDelimitorList (), kENUMERATION_UP) ;
      while (enumerator_2629.hasCurrentObject ()) {
        result << "      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@" ;
        result << enumerator_2629.current_mStartString (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 52)).stringValue () ;
        result << " endString:" ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2629.current_mEndString (HERE).readProperty_string ().getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 53)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 53)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 53)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          result << "nil" ;
        }else if (kBoolFalse == test_3) {
          result << "@" ;
          result << enumerator_2629.current_mEndString (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 56)).stringValue () ;
        }
        result << " discardStartString:" ;
        result << enumerator_2629.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 59)).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 59)).stringValue () ;
        result << "],\n" ;
        index_2629_.increment () ;
        enumerator_2629.gotoNextObject () ;
      }
    }
    result << "      nil\n"
      "    ] ;\n"
      "  }\n" ;
  }else if (kBoolFalse == test_2) {
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 66)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 66)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 66)))).boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "  if (nil == kTemplateReplacementArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 67)).stringValue () ;
    result << ") {\n"
      "\n"
      "    kTemplateReplacementArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 68)).stringValue () ;
    result << " = [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_3356_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_3356 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_3356.hasCurrentObject ()) {
        result << "      @" ;
        result << enumerator_3356.current_mMatchString (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 70)).stringValue () ;
        result << ", " ;
        index_3356_.increment () ;
        enumerator_3356.gotoNextObject () ;
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
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_INDEXING_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 103)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 103)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 103)))).boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "  return [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_4626_ (0) ;
    if (in_INDEXING_5F_LIST.isValid ()) {
      cEnumerator_indexingListAST enumerator_4626 (in_INDEXING_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4626.hasCurrentObject ()) {
        result << "    @" ;
        result << enumerator_4626.current_mIndexComment (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 107)).stringValue () ;
        result << ",\n" ;
        index_4626_.increment () ;
        enumerator_4626.gotoNextObject () ;
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
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 124)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 124)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 124)))).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_uint index_5480_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
      cEnumerator_terminalList enumerator_5480 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_5480 = enumerator_5480.hasCurrentObject () ;
      if (nonEmpty_enumerator_5480) {
        result << "static const BOOL kEndOfScriptInTemplateArray_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 126)).stringValue () ;
        result << " [" ;
        result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 126)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 126)).stringValue () ;
        result << "] = {\n" ;
      }
      while (enumerator_5480.hasCurrentObject ()) {
        result << "  " ;
        result << enumerator_5480.current_mIsEndOfTemplateMark (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 127)).stringValue () ;
        result << " /* " ;
        result << enumerator_5480.current_mTerminalName (HERE).readProperty_string ().stringValue () ;
        result << " */" ;
        if (enumerator_5480.hasNextObject ()) {
          result << ",\n" ;
        }
        index_5480_.increment () ;
        enumerator_5480.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_5480) {
        result << "\n"
          "} ;\n" ;
      }
    }
  }else if (kBoolFalse == test_6) {
  }
  result << "\n"
    "\n" ;
  GALGAS_uint index_5773_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap ().isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_5773 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mLexicalTokenListMap (), kENUMERATION_UP) ;
    while (enumerator_5773.hasCurrentObject ()) {
      const enumGalgasBool test_7 = enumerator_5773.current_mShouldBeGenerated (HERE).boolEnum () ;
      if (kBoolTrue == test_7) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "//\n"
          "//             Key words table '" ;
        result << enumerator_5773.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << "'      \n"
          "//\n"
          "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "static const C_cocoa_lexique_table_entry ktable_for_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 142)).stringValue () ;
        result << "_" ;
        result << enumerator_5773.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " [" ;
        result << enumerator_5773.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 142)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 142)).stringValue () ;
        result << "] = {\n" ;
        GALGAS_uint index_6455_ (0) ;
        if (enumerator_5773.current_mTokenSortedList (HERE).isValid ()) {
          cEnumerator_tokenSortedlist enumerator_6455 (enumerator_5773.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
          while (enumerator_6455.hasCurrentObject ()) {
            result << "  {" ;
            result << enumerator_6455.current_mName (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 144)).stringValue () ;
            result << ", " ;
            result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
            result << "_1_" ;
            result << enumerator_6455.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 144)).stringValue () ;
            result << "}" ;
            if (enumerator_6455.hasNextObject ()) {
              result << ",\n" ;
            }
            index_6455_.increment () ;
            enumerator_6455.gotoNextObject () ;
          }
        }
        result << "\n"
          "} ;\n"
          "\n"
          "static NSInteger search_into_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).stringValue () ;
        result << "_" ;
        result << enumerator_5773.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " (NSString * inSearchedString) {\n"
          "  return searchStringInTable (inSearchedString, ktable_for_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 149)).stringValue () ;
        result << "_" ;
        result << enumerator_5773.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << ", " ;
        result << enumerator_5773.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 149)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 149)).stringValue () ;
        result << ") ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_7) {
      }
      index_5773_.increment () ;
      enumerator_5773.gotoNextObject () ;
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
  const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 167)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 167)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 167)))).boolEnum () ;
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
    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 175)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 175)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 175)))).boolEnum () ;
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
    GALGAS_uint index_8808_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_8808 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_8808.hasCurrentObject ()) {
        result << "      " ;
        result << extensionGetter_cocoaResetPrefix (enumerator_8808.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 186)).stringValue () ;
        result << "mLexicalAttribute_" ;
        result << enumerator_8808.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << extensionGetter_cocoaReset (enumerator_8808.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 186)).stringValue () ;
        result << " ;\n" ;
        index_8808_.increment () ;
        enumerator_8808.gotoNextObject () ;
      }
    }
    result << "      mTokenStartLocation = mCurrentLocation ;\n" ;
    if (GALGAS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 190)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 190)).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 190)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 190)).uintValue ()) ;
    }
    GALGAS_uint index_9034_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_9034 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_9034.hasCurrentObject ()) {
        result << callExtensionGetter_generateCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_9034.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 192)).stringValue () ;
        index_9034_.increment () ;
        enumerator_9034.gotoNextObject () ;
      }
    }
    if (GALGAS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 190)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 190)).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_bigint ("6", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 190)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 190)).uintValue ())) ;
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
    GALGAS_uint index_9672_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_9672 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_9672.hasCurrentObject ()) {
        result << "    " ;
        result << extensionGetter_cocoaResetPrefix (enumerator_9672.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 210)).stringValue () ;
        result << "mLexicalAttribute_" ;
        result << enumerator_9672.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << extensionGetter_cocoaReset (enumerator_9672.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 210)).stringValue () ;
        result << " ;\n" ;
        index_9672_.increment () ;
        enumerator_9672.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n" ;
    if (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 214)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 214)).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 214)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 214)).uintValue ()) ;
    }
    GALGAS_uint index_9894_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_9894 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_9894.hasCurrentObject ()) {
        result << callExtensionGetter_generateCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_9894.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 216)).stringValue () ;
        index_9894_.increment () ;
        enumerator_9894.gotoNextObject () ;
      }
    }
    if (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 214)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 214)).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 214)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 214)).uintValue ())) ;
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
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 239)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 239)).stringValue () ;
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
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 249)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 249)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 249)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 249)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 249)).stringValue () ;
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
  result << GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 259)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 259)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 259)))).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 259)).stringValue () ;
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
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 269)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 269)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 269)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 269)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 269)).stringValue () ;
  result << "] = {0" ;
  GALGAS_uint index_12316_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_12316 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_12316.hasCurrentObject ()) {
      result << ",\n"
        "    " ;
      result << enumerator_12316.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).stringValue () ;
      result << " /* " ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_12316.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).stringValue () ;
      result << " */" ;
      index_12316_.increment () ;
      enumerator_12316.gotoNextObject () ;
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
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 283)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 283)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 283)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 283)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 283)).stringValue () ;
  result << "] = {NO" ;
  GALGAS_uint index_13174_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList ().isValid ()) {
    cEnumerator_terminalList enumerator_13174 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.readProperty_mTerminalList (), kENUMERATION_UP) ;
    while (enumerator_13174.hasCurrentObject ()) {
      result << ",\n"
        "    " ;
      result << enumerator_13174.current_mAtomicSelection (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 285)).stringValue () ;
      result << " /* " ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_13174.current_mTerminalName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 285)).stringValue () ;
      result << " */" ;
      index_13174_.increment () ;
      enumerator_13174.gotoNextObject () ;
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
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 298)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 298)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 298)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 298)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 298)).stringValue () ;
  result << ")) {\n"
    "    NSString * kStyleArray [" ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 299)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 299)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 299)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 299)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 299)).stringValue () ;
  result << "] = {\n"
    "      @\"Default Style\"" ;
  GALGAS_uint index_14029_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_14029 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14029.hasCurrentObject ()) {
      result << ",\n"
        "      @" ;
      result << enumerator_14029.current_mComment (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 302)).stringValue () ;
      index_14029_.increment () ;
      enumerator_14029.gotoNextObject () ;
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
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 317)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 317)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 317)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 317)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 317)).stringValue () ;
  result << ")) {\n"
    "    NSString * kStyleArray [" ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 318)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 318)).getter_uint (inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 318)), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 318)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 318)).stringValue () ;
  result << "] = {\n"
    "      @\"" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << "\"" ;
  GALGAS_uint index_14837_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_14837 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14837.hasCurrentObject ()) {
      result << ",\n"
        "      @\"" ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "-" ;
      result << enumerator_14837.current_mName (HERE).readProperty_string ().stringValue () ;
      result << "\"" ;
      index_14837_.increment () ;
      enumerator_14837.gotoNextObject () ;
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

void cPtr_optionComponentDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_optionComponentDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("optionCompilation.galgas", 167)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                   const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                   const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                   GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_commandLineOptionMap var_boolOptionMap_6857 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 180)) ;
  GALGAS_commandLineOptionMap var_uintOptionMap_6904 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 181)) ;
  GALGAS_commandLineOptionMap var_stringOptionMap_6953 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 182)) ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_7006 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 183)) ;
  GALGAS_stringset var_optionNameSet_7031 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("optionCompilation.galgas", 184)) ;
  const GALGAS_optionComponentDeclarationAST temp_0 = this ;
  cEnumerator_commandLineOptionListAST enumerator_7203 (temp_0.readProperty_mOptions (), kENUMERATION_UP) ;
  while (enumerator_7203.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_optionNameSet_7031.getter_hasKey (enumerator_7203.current_mOptionInternalName (HERE).readProperty_string () COMMA_SOURCE_FILE ("optionCompilation.galgas", 186)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_7203.current_mOptionInternalName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_7203.current_mOptionInternalName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 187)).add_operation (GALGAS_string ("' command line option has been already declared"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 187)), fixItArray2  COMMA_SOURCE_FILE ("optionCompilation.galgas", 187)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, enumerator_7203.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("bool"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          var_boolOptionMap_6857.setter_insertKey (enumerator_7203.current_mOptionInternalName (HERE), enumerator_7203.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_7203.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_7203.current_mOptionComment (HERE).readProperty_string (), GALGAS_string ("false"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 189)) ;
          }
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsNotEqual, enumerator_7203.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 196)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (enumerator_7203.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @bool option cannot have a default value (default value is always false)"), fixItArray5  COMMA_SOURCE_FILE ("optionCompilation.galgas", 197)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsEqual, enumerator_7203.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            {
            GALGAS_string temp_7 ;
            const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_7203.current_mOptionDefaultValue (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_8) {
              temp_7 = GALGAS_string ("0") ;
            }else if (kBoolFalse == test_8) {
              temp_7 = enumerator_7203.current_mOptionDefaultValue (HERE).readProperty_string () ;
            }
            var_uintOptionMap_6904.setter_insertKey (enumerator_7203.current_mOptionInternalName (HERE), enumerator_7203.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_7203.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_7203.current_mOptionComment (HERE).readProperty_string (), temp_7, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 200)) ;
            }
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsEqual, enumerator_7203.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 207)))).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_7203.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @uint option default value cannot be an @string value"), fixItArray10  COMMA_SOURCE_FILE ("optionCompilation.galgas", 208)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = GALGAS_bool (kIsEqual, enumerator_7203.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
            if (kBoolTrue == test_11) {
              {
              var_stringOptionMap_6953.setter_insertKey (enumerator_7203.current_mOptionInternalName (HERE), enumerator_7203.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_7203.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_7203.current_mOptionComment (HERE).readProperty_string (), enumerator_7203.current_mOptionDefaultValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 211)) ;
              }
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (kIsEqual, enumerator_7203.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 218)))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  TC_Array <C_FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (enumerator_7203.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @string option default value cannot be an @uint value"), fixItArray13  COMMA_SOURCE_FILE ("optionCompilation.galgas", 219)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_11) {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              test_14 = GALGAS_bool (kIsEqual, enumerator_7203.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("stringlist"))).boolEnum () ;
              if (kBoolTrue == test_14) {
                {
                var_stringListOptionMap_7006.setter_insertKey (enumerator_7203.current_mOptionInternalName (HERE), enumerator_7203.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_7203.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_7203.current_mOptionComment (HERE).readProperty_string (), enumerator_7203.current_mOptionDefaultValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 222)) ;
                }
                enumGalgasBool test_15 = kBoolTrue ;
                if (kBoolTrue == test_15) {
                  test_15 = GALGAS_bool (kIsNotEqual, enumerator_7203.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 229)))).boolEnum () ;
                  if (kBoolTrue == test_15) {
                    TC_Array <C_FixItDescription> fixItArray16 ;
                    inCompiler->emitSemanticError (enumerator_7203.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @stringlist option cannot accept default value"), fixItArray16  COMMA_SOURCE_FILE ("optionCompilation.galgas", 230)) ;
                  }
                }
              }
            }
            if (kBoolFalse == test_14) {
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (enumerator_7203.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("only the @bool, @uint or @string types are allowed here"), fixItArray17  COMMA_SOURCE_FILE ("optionCompilation.galgas", 233)) ;
            }
          }
        }
      }
    }
    var_optionNameSet_7031.addAssign_operation (enumerator_7203.current_mOptionInternalName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 235)) ;
    enumerator_7203.gotoNextObject () ;
  }
  {
  const GALGAS_optionComponentDeclarationAST temp_18 = this ;
  const GALGAS_optionComponentDeclarationAST temp_19 = this ;
  ioArgument_ioSemanticContext.mProperty_mOptionComponentMapForSemanticAnalysis.setter_insertKey (temp_18.readProperty_mOptionComponentName (), temp_19.readProperty_mIsPredefined (), var_boolOptionMap_6857, var_uintOptionMap_6904, var_stringOptionMap_6953, var_stringListOptionMap_7006, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 238)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_optionComponentDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_10366 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 261)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10366, var_nameForUsefulness_10366, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 262)) ;
  }
  GALGAS_bool var_isPredefined_10638 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_10683 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_10728 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_10775 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_10826 ;
  const GALGAS_optionComponentDeclarationAST temp_1 = this ;
  constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_isPredefined_10638, var_boolOptionMap_10683, var_uintOptionMap_10728, var_stringOptionMap_10775, var_stringListOptionMap_10826, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 264)) ;
  const GALGAS_optionComponentDeclarationAST temp_2 = this ;
  const GALGAS_optionComponentDeclarationAST temp_3 = this ;
  const GALGAS_optionComponentDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("option ").add_operation (temp_2.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 274)), GALGAS_optionComponentForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 277)), var_isPredefined_10638, temp_4.readProperty_mOptionComponentName ().readProperty_string (), var_boolOptionMap_10683, var_uintOptionMap_10728, var_stringOptionMap_10775, var_stringListOptionMap_10826  COMMA_SOURCE_FILE ("optionCompilation.galgas", 275))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 273)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentForGeneration isPredefined'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_optionComponentForGeneration::getter_isPredefined (C_Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_optionComponentForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_mIsPredefined () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_optionComponentForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  const GALGAS_optionComponentForGeneration temp_0 = this ;
  GALGAS_headerKind temp_1 ;
  const enumGalgasBool test_2 = temp_0.readProperty_mIsPredefined ().boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("optionCompilation.galgas", 309)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("optionCompilation.galgas", 309)) ;
  }
  result_result = temp_1 ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GALGAS_string & outArgument_outHeader,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionComponentForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mIsPredefined ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outHeader = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_optionComponentForGeneration temp_2 = this ;
    const GALGAS_optionComponentForGeneration temp_3 = this ;
    const GALGAS_optionComponentForGeneration temp_4 = this ;
    const GALGAS_optionComponentForGeneration temp_5 = this ;
    const GALGAS_optionComponentForGeneration temp_6 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (inCompiler, temp_2.readProperty_mOptionComponentName (), temp_3.readProperty_mBoolOptionMap (), temp_4.readProperty_mUIntOptionMap (), temp_5.readProperty_mStringOptionMap (), temp_6.readProperty_mStringListOptionMap () COMMA_SOURCE_FILE ("optionCompilation.galgas", 321))) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_string & outArgument_outImplementation,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_optionComponentForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mIsPredefined ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outImplementation = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_optionComponentForGeneration temp_2 = this ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 341))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 341)) ;
    const GALGAS_optionComponentForGeneration temp_3 = this ;
    const GALGAS_optionComponentForGeneration temp_4 = this ;
    const GALGAS_optionComponentForGeneration temp_5 = this ;
    const GALGAS_optionComponentForGeneration temp_6 = this ;
    const GALGAS_optionComponentForGeneration temp_7 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (inCompiler, temp_3.readProperty_mOptionComponentName (), temp_4.readProperty_mBoolOptionMap (), temp_5.readProperty_mUIntOptionMap (), temp_6.readProperty_mStringOptionMap (), temp_7.readProperty_mStringListOptionMap () COMMA_SOURCE_FILE ("optionCompilation.galgas", 342))) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentForGeneration appendSpecificFiles'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendSpecificFiles (const GALGAS_string constinArgument_inProductDirectory,
                                                                    GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                    GALGAS_stringlist & ioArgument_ioCocoaProductFileList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("optionCompilation.galgas", 360)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("optionCompilation.galgas", 360)).getter_uint (inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 360)))) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      const GALGAS_optionComponentForGeneration temp_2 = this ;
      test_1 = temp_2.readProperty_mIsPredefined ().operator_not (SOURCE_FILE ("optionCompilation.galgas", 360)) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionComponentForGeneration temp_3 = this ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 361)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 361))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 361)) ;
      {
      const GALGAS_optionComponentForGeneration temp_4 = this ;
      const GALGAS_optionComponentForGeneration temp_5 = this ;
      const GALGAS_optionComponentForGeneration temp_6 = this ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_4.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 364)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 364)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (inCompiler, temp_5.readProperty_mOptionComponentName () COMMA_SOURCE_FILE ("optionCompilation.galgas", 368))), GALGAS_string ("\n"
        "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (inCompiler, temp_6.readProperty_mOptionComponentName () COMMA_SOURCE_FILE ("optionCompilation.galgas", 372))), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 362)) ;
      }
      const GALGAS_optionComponentForGeneration temp_7 = this ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_7.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 378)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 378))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 378)) ;
      const GALGAS_optionComponentForGeneration temp_8 = this ;
      ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("option-").add_operation (temp_8.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 379)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 379))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 379)) ;
      {
      const GALGAS_optionComponentForGeneration temp_9 = this ;
      const GALGAS_optionComponentForGeneration temp_10 = this ;
      const GALGAS_optionComponentForGeneration temp_11 = this ;
      const GALGAS_optionComponentForGeneration temp_12 = this ;
      const GALGAS_optionComponentForGeneration temp_13 = this ;
      const GALGAS_optionComponentForGeneration temp_14 = this ;
      const GALGAS_optionComponentForGeneration temp_15 = this ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_9.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 382)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 382)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (inCompiler, GALGAS_string ("option-").add_operation (temp_10.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 387)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 387)), temp_11.readProperty_mOptionComponentName (), temp_12.readProperty_mBoolOptionMap (), temp_13.readProperty_mUIntOptionMap (), temp_14.readProperty_mStringOptionMap (), temp_15.readProperty_mStringListOptionMap () COMMA_SOURCE_FILE ("optionCompilation.galgas", 386))), GALGAS_string ("\n"
        "\n"), GALGAS_string ("\n"
        "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 380)) ;
      }
    }
  }
}
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
  GALGAS_uint index_429_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_429 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_429.hasCurrentObject ()) {
      result << "extern C_BoolCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue () ;
      result << "_" ;
      result << enumerator_429.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_429_.increment () ;
      enumerator_429.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                               UInt options                                                    \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_1000_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1000 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1000.hasCurrentObject ()) {
      result << "extern C_UIntCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue () ;
      result << "_" ;
      result << enumerator_1000.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_1000_.increment () ;
      enumerator_1000.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                              String options                                                   \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_1573_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1573 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1573.hasCurrentObject ()) {
      result << "extern C_StringCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue () ;
      result << "_" ;
      result << enumerator_1573.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_1573_.increment () ;
      enumerator_1573.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                              String List options                                              \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_2153_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2153 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2153.hasCurrentObject ()) {
      result << "extern C_StringListCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue () ;
      result << "_" ;
      result << enumerator_2153.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_2153_.increment () ;
      enumerator_2153.gotoNextObject () ;
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
  GALGAS_uint index_428_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_428 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_428.hasCurrentObject ()) {
      result << "C_BoolCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue () ;
      result << "_" ;
      result << enumerator_428.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_428.current_lkey (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 9)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_428.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_428.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 11)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_428.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 12)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_428_.increment () ;
      enumerator_428.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                               UInt options                                                    \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_1344_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1344 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1344.hasCurrentObject ()) {
      result << "C_UIntCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue () ;
      result << "_" ;
      result << enumerator_1344.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_1344.current_lkey (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 22)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1344.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1344.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 24)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1344.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 25)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1344.current_mDefaultValue (HERE).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_1344_.increment () ;
      enumerator_1344.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                              String options                                                   \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_2327_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2327 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2327.hasCurrentObject ()) {
      result << "C_StringCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue () ;
      result << "_" ;
      result << enumerator_2327.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_2327.current_lkey (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 36)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2327.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2327.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 38)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2327.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 39)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2327.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 40)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_2327_.increment () ;
      enumerator_2327.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                              String List options                                              \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_3338_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_3338 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_3338.hasCurrentObject ()) {
      result << "C_StringListCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue () ;
      result << "_" ;
      result << enumerator_3338.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_3338.current_lkey (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 50)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_3338.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_3338.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 52)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_3338.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 53)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_3338_.increment () ;
      enumerator_3338.gotoNextObject () ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_BOOL_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_UINT_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_STRING_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_STRING_5F_LIST_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).getter_uint (inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "  OC_GGS_CommandLineOption * option ;\n" ;
  }else if (kBoolFalse == test_0) {
  }
  GALGAS_uint index_852_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_852 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_852.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 17)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_852.current_lkey (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 18)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_852.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_852.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 20)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_852.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 21)).stringValue () ;
      result << "\n"
        "    defaultValue:@\"\"\n"
        "  ] ;\n"
        "  [ioBoolOptionArray addObject:option] ;\n" ;
      index_852_.increment () ;
      enumerator_852.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1370_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1370 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1370.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 28)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_1370.current_lkey (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 29)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_1370.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_1370.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 31)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_1370.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 32)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_1370.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 33)).stringValue () ;
      result << "\n"
        "  ] ;\n"
        "  [ioUIntOptionArray addObject:option] ;\n" ;
      index_1370_.increment () ;
      enumerator_1370.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1925_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1925 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1925.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 39)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_1925.current_lkey (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 40)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_1925.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_1925.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 42)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_1925.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 43)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_1925.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 44)).stringValue () ;
      result << "\n"
        "  ] ;\n"
        "  [ioStringOptionArray addObject:option] ;\n" ;
      index_1925_.increment () ;
      enumerator_1925.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2487_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2487 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2487.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 50)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_2487.current_lkey (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 51)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_2487.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_2487.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 53)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_2487.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 54)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_2487.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 55)).stringValue () ;
      result << "\n"
        "  ] ;\n"
        "  [ioStringListOptionArray addObject:option] ;\n" ;
      index_2487_.increment () ;
      enumerator_2487.gotoNextObject () ;
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
  outArgument_outOptionComponentMapForGeneration = GALGAS_optionComponentMapForGeneration::constructor_emptyMap (SOURCE_FILE ("guiCompilation.galgas", 369)) ;
  cEnumerator_galgas_33_GUIComponentListAST enumerator_12338 (constinArgument_inGuiComponentListAST, kENUMERATION_UP) ;
  while (enumerator_12338.hasCurrentObject ()) {
    {
    routine_guiComponentSemanticAnalysis (enumerator_12338.current (HERE), constinArgument_inSemanticContext, outArgument_outOptionComponentMapForGeneration, inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 371)) ;
    }
    enumerator_12338.gotoNextObject () ;
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
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inGUIComponentAST.readProperty_mGUIComponentName ().readProperty_string ().objectCompare (GALGAS_string ("cocoa"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName ().readProperty_location (), GALGAS_string ("the gui name should be 'cocoa'"), fixItArray1  COMMA_SOURCE_FILE ("guiCompilation.galgas", 387)) ;
    }
  }
  GALGAS_guiAnalysisContext var_context_13004 = GALGAS_guiAnalysisContext::constructor_default (SOURCE_FILE ("guiCompilation.galgas", 390)) ;
  cEnumerator_lstringlist enumerator_13068 (constinArgument_inGUIComponentAST.readProperty_mImportedOptionList (), kENUMERATION_UP) ;
  while (enumerator_13068.hasCurrentObject ()) {
    GALGAS_bool joker_13207_5 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_13207_4 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_13207_3 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_13207_2 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_13207_1 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (enumerator_13068.current_mValue (HERE), joker_13207_5, joker_13207_4, joker_13207_3, joker_13207_2, joker_13207_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 393)) ;
    var_context_13004.mProperty_mImportedOptionComponentList.addAssign_operation (enumerator_13068.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 397)) ;
    enumerator_13068.gotoNextObject () ;
  }
  GALGAS_bool var_runOptionDefined_13329 = GALGAS_bool (false) ;
  cEnumerator_guiSimpleAttributeListAST enumerator_13356 (constinArgument_inGUIComponentAST.readProperty_mGlobalSimpleAttributeList (), kENUMERATION_UP) ;
  while (enumerator_13356.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_13356.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("run"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_runOptionDefined_13329.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_13356.current_mKey (HERE).readProperty_location (), GALGAS_string ("option already defined"), fixItArray4  COMMA_SOURCE_FILE ("guiCompilation.galgas", 404)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (kIsEqual, enumerator_13356.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_13356.current_mValue (HERE).readProperty_location (), GALGAS_string ("run option string should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("guiCompilation.galgas", 406)) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_context_13004.setter_setMBuildRunOption (enumerator_13356.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("guiCompilation.galgas", 408)) ;
            var_runOptionDefined_13329 = GALGAS_bool (true) ;
          }
        }
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsEqual, enumerator_13356.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("nibAndMainClass"))).boolEnum () ;
        if (kBoolTrue == test_7) {
          cEnumerator_stringlist enumerator_13839 (enumerator_13356.current_mValue (HERE).readProperty_string ().getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("guiCompilation.galgas", 412)), kENUMERATION_UP) ;
          while (enumerator_13839.hasCurrentObject ()) {
            var_context_13004.mProperty_mNibAndClassList.addAssign_operation (enumerator_13839.current (HERE).readProperty_mValue ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 413)) ;
            enumerator_13839.gotoNextObject () ;
          }
        }
      }
      if (kBoolFalse == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticWarning (enumerator_13356.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_13356.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 416)).add_operation (GALGAS_string ("' key is invalid and has no effect"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 416)), fixItArray8  COMMA_SOURCE_FILE ("guiCompilation.galgas", 416)) ;
      }
    }
    enumerator_13356.gotoNextObject () ;
  }
  cEnumerator_withLexiqueListAST enumerator_14111 (constinArgument_inGUIComponentAST.readProperty_mWithLexiqueList (), kENUMERATION_UP) ;
  GALGAS_uint index_14047 ((uint32_t) 0) ;
  while (enumerator_14111.hasCurrentObject ()) {
    GALGAS_terminalMap var_terminalMap_14313 ;
    GALGAS_indexingListAST joker_14321_2 ; // Joker input parameter
    GALGAS_lstring joker_14321_1 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (enumerator_14111.current_mLexiqueFileName (HERE), var_terminalMap_14313, joker_14321_2, joker_14321_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 422)) ;
    GALGAS_stringset var_terminalSymbolSet_14388 = var_terminalMap_14313.getter_keySet (SOURCE_FILE ("guiCompilation.galgas", 428)) ;
    cEnumerator_guiLabelListAST enumerator_14458 (enumerator_14111.current_mLabels (HERE), kENUMERATION_UP) ;
    while (enumerator_14458.hasCurrentObject ()) {
      cEnumerator_terminalLabelListAST enumerator_14496 (enumerator_14458.current_mTerminalList (HERE), kENUMERATION_UP) ;
      while (enumerator_14496.hasCurrentObject ()) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_terminalSymbolSet_14388.getter_hasKey (enumerator_14496.current_mTerminal (HERE).readProperty_string () COMMA_SOURCE_FILE ("guiCompilation.galgas", 432)).operator_not (SOURCE_FILE ("guiCompilation.galgas", 432)).boolEnum () ;
          if (kBoolTrue == test_9) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_14496.current_mTerminal (HERE).readProperty_location (), GALGAS_string ("the '$").add_operation (enumerator_14496.current_mTerminal (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 433)).add_operation (GALGAS_string ("$' terminal symbol is not declared by the '"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 434)).add_operation (enumerator_14111.current_mLexiqueFileName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 435)).add_operation (GALGAS_string ("' lexique"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 436)), fixItArray10  COMMA_SOURCE_FILE ("guiCompilation.galgas", 433)) ;
          }
        }
        enumerator_14496.gotoNextObject () ;
      }
      enumerator_14458.gotoNextObject () ;
    }
    GALGAS_textMacroList var_textMacroList_14853 = GALGAS_textMacroList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 442)) ;
    cEnumerator_guiCompoundAttributeListAST enumerator_14894 (enumerator_14111.current_mCompoundAttributes (HERE), kENUMERATION_UP) ;
    while (enumerator_14894.hasCurrentObject ()) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsNotEqual, enumerator_14894.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("textMacro"))).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_14894.current_mKey (HERE).readProperty_location (), GALGAS_string ("for a compound attribute, only the 'textMacro' key is valid"), fixItArray12  COMMA_SOURCE_FILE ("guiCompilation.galgas", 445)) ;
        }
      }
      if (kBoolFalse == test_11) {
        var_textMacroList_14853.addAssign_operation (enumerator_14894.current_mAttributeName (HERE).readProperty_string (), enumerator_14894.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 447)) ;
      }
      enumerator_14894.gotoNextObject () ;
    }
    GALGAS_bool var_hasAssociatedExtension_15198 = GALGAS_bool (false) ;
    GALGAS_bool var_hasTabViewTitle_15236 = GALGAS_bool (false) ;
    GALGAS_bool var_hasBlockComment_15274 = GALGAS_bool (false) ;
    GALGAS_string var_tabViewTitle_15311 = GALGAS_string::makeEmptyString () ;
    GALGAS_string var_blockComment_15345 = GALGAS_string::makeEmptyString () ;
    cEnumerator_guiSimpleAttributeListAST enumerator_15371 (enumerator_14111.current_mSimpleAttributes (HERE), kENUMERATION_UP) ;
    while (enumerator_15371.hasCurrentObject ()) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsEqual, enumerator_15371.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("fileExtension"))).boolEnum () ;
        if (kBoolTrue == test_13) {
          {
          var_context_13004.mProperty_mExtensionMap.setter_insertKey (enumerator_15371.current_mValue (HERE), enumerator_14111.current_mLexiqueFileName (HERE).readProperty_string (), index_14047, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 458)) ;
          }
          var_hasAssociatedExtension_15198 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_13) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = GALGAS_bool (kIsEqual, enumerator_15371.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("title"))).boolEnum () ;
          if (kBoolTrue == test_14) {
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              test_15 = var_hasTabViewTitle_15236.boolEnum () ;
              if (kBoolTrue == test_15) {
                TC_Array <C_FixItDescription> fixItArray16 ;
                inCompiler->emitSemanticError (enumerator_15371.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_15371.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 462)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 462)), fixItArray16  COMMA_SOURCE_FILE ("guiCompilation.galgas", 462)) ;
              }
            }
            var_hasTabViewTitle_15236 = GALGAS_bool (true) ;
            var_tabViewTitle_15311 = enumerator_15371.current_mValue (HERE).readProperty_string () ;
          }
        }
        if (kBoolFalse == test_14) {
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (kIsEqual, enumerator_15371.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("blockComment"))).boolEnum () ;
            if (kBoolTrue == test_17) {
              enumGalgasBool test_18 = kBoolTrue ;
              if (kBoolTrue == test_18) {
                test_18 = var_hasBlockComment_15274.boolEnum () ;
                if (kBoolTrue == test_18) {
                  TC_Array <C_FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (enumerator_15371.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_15371.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 468)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 468)), fixItArray19  COMMA_SOURCE_FILE ("guiCompilation.galgas", 468)) ;
                }
              }
              var_hasBlockComment_15274 = GALGAS_bool (true) ;
              var_blockComment_15345 = enumerator_15371.current_mValue (HERE).readProperty_string () ;
            }
          }
          if (kBoolFalse == test_17) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_15371.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_15371.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 473)).add_operation (GALGAS_string ("' key is not valid (valid keys: 'blockComment,', 'fileExtension', 'title')"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 473)), fixItArray20  COMMA_SOURCE_FILE ("guiCompilation.galgas", 473)) ;
          }
        }
      }
      enumerator_15371.gotoNextObject () ;
    }
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = var_hasAssociatedExtension_15198.operator_not (SOURCE_FILE ("guiCompilation.galgas", 477)).boolEnum () ;
      if (kBoolTrue == test_21) {
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_14111.current_mLexiqueFileName (HERE).readProperty_location (), GALGAS_string ("one or more file extensions should be associated with a lexique (fileExtension : \"...\")"), fixItArray22  COMMA_SOURCE_FILE ("guiCompilation.galgas", 478)) ;
      }
    }
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      test_23 = var_hasTabViewTitle_15236.operator_not (SOURCE_FILE ("guiCompilation.galgas", 481)).boolEnum () ;
      if (kBoolTrue == test_23) {
        TC_Array <C_FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_14111.current_mLexiqueFileName (HERE).readProperty_location (), GALGAS_string ("the 'title' key should be defined once (it is not defined)"), fixItArray24  COMMA_SOURCE_FILE ("guiCompilation.galgas", 482)) ;
      }
    }
    var_context_13004.mProperty_mWithLexiqueList.addAssign_operation (enumerator_14111.current_mLexiqueFileName (HERE).readProperty_string (), index_14047, var_blockComment_15345, var_tabViewTitle_15311, var_textMacroList_14853, enumerator_14111.current_mLabels (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 485)) ;
    enumerator_14111.gotoNextObject () ;
    index_14047.increment_operation (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 420)) ;
  }
  {
  ioArgument_ioOptionComponentMapForGeneration.setter_insertKey (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName (), var_context_13004, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 494)) ;
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
  cEnumerator_optionComponentMapForGeneration enumerator_17338 (constinArgument_inOptionComponentMapForGeneration, kENUMERATION_UP) ;
  while (enumerator_17338.hasCurrentObject ()) {
    GALGAS_string var_fileName_17396 = GALGAS_string ("gui-").add_operation (enumerator_17338.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 512)).add_operation (GALGAS_string (".m"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 512)) ;
    ioArgument_ioApplicationSourceSet.addAssign_operation (var_fileName_17396  COMMA_SOURCE_FILE ("guiCompilation.galgas", 513)) ;
    ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_17396  COMMA_SOURCE_FILE ("guiCompilation.galgas", 514)) ;
    GALGAS_string var_s_17514 = GALGAS_string (filewrapperTemplate_guiGenerationTemplates_gui_5F_implementation (inCompiler, enumerator_17338.current_mGuiComponentContext (HERE), constinArgument_inQuietOutputByDefault, enumerator_17338.current_mGuiComponentContext (HERE).readProperty_mBuildRunOption () COMMA_SOURCE_FILE ("guiCompilation.galgas", 515))) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_17396, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), var_s_17514, GALGAS_string ("\n"
      "\n"), GALGAS_string ("\n"
      "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 520)) ;
    }
    enumerator_17338.gotoNextObject () ;
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
  GALGAS_uint index_204_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    cEnumerator_importedLexiqueList enumerator_204 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList (), kENUMERATION_UP) ;
    while (enumerator_204.hasCurrentObject ()) {
      result << "#import \"lexique-" ;
      result << enumerator_204.current_mLexiqueClassName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 6)).stringValue () ;
      result << "-cocoa.h\"\n" ;
      index_204_.increment () ;
      enumerator_204.gotoNextObject () ;
    }
  }
  GALGAS_uint index_334_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList ().isValid ()) {
    cEnumerator_stringlist enumerator_334 (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList (), kENUMERATION_UP) ;
    while (enumerator_334.hasCurrentObject ()) {
      result << "#import \"" ;
      result << enumerator_334.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_334_.increment () ;
      enumerator_334.gotoNextObject () ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_GUI_5F_CONTEXT.readProperty_mNibAndClassList ().getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 26)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 26)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 26)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "NSArray * nibsAndClasses (void) {\n"
      "  return [NSArray array] ;\n"
      "}\n" ;
  }else if (kBoolFalse == test_0) {
    result << "NSArray * nibsAndClasses (void) {\n"
      "  return [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_1176_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList ().isValid ()) {
      cEnumerator_stringlist enumerator_1176 (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList (), kENUMERATION_UP) ;
      while (enumerator_1176.hasCurrentObject ()) {
        result << "    [NSArray arrayWithObjects:@\"" ;
        result << enumerator_1176.current_mValue (HERE).stringValue () ;
        result << "\", [" ;
        result << enumerator_1176.current_mValue (HERE).stringValue () ;
        result << " class], nil],\n" ;
        index_1176_.increment () ;
        enumerator_1176.gotoNextObject () ;
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
  GALGAS_uint index_1846_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList ().isValid ()) {
    cEnumerator_stringlist enumerator_1846 (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList (), kENUMERATION_UP) ;
    while (enumerator_1846.hasCurrentObject ()) {
      result << "#import \"option-" ;
      result << enumerator_1846.current_mValue (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 55)).stringValue () ;
      result << "-cocoa.h\"\n" ;
      index_1846_.increment () ;
      enumerator_1846.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterOptions (NSMutableArray * ioBoolOptionArray,\n"
    "                   NSMutableArray * ioUIntOptionArray,\n"
    "                   NSMutableArray * ioStringOptionArray,\n"
    "                   NSMutableArray * ioStringListOptionArray) {\n" ;
  GALGAS_uint index_2332_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList ().isValid ()) {
    cEnumerator_stringlist enumerator_2332 (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList (), kENUMERATION_UP) ;
    while (enumerator_2332.hasCurrentObject ()) {
      result << "  enterOptionsFor_" ;
      result << enumerator_2332.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 66)).stringValue () ;
      result << " (ioBoolOptionArray, ioUIntOptionArray, ioStringOptionArray, ioStringListOptionArray) ;\n" ;
      index_2332_.increment () ;
      enumerator_2332.gotoNextObject () ;
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
  GALGAS_uint index_3252_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    cEnumerator_importedLexiqueList enumerator_3252 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList (), kENUMERATION_UP) ;
    while (enumerator_3252.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "#pragma mark Lexique " ;
      result << enumerator_3252.current_mLexiqueClassName (HERE).stringValue () ;
      result << "\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "//\n"
        "//                     P O P    U P    L I S T    D A T A                                        \n"
        "//\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n" ;
      GALGAS_uint index_3886_ (0) ;
      if (enumerator_3252.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_3886 (enumerator_3252.current_mLabels (HERE), kENUMERATION_UP) ;
        while (enumerator_3886.hasCurrentObject ()) {
          result << "static const UInt16 gPopUpData_" ;
          result << enumerator_3252.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << "_" ;
          result << enumerator_3252.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << "_" ;
          result << enumerator_3886.current_mLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << " [" ;
          result << GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).multiply_operation (enumerator_3886.current_mTerminalList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).getter_bigint (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).add_operation (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << "] = {\n"
            "  " ;
          result << enumerator_3886.current_mLeadingCharacterStrippedCount (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 101)).stringValue () ;
          result << ", // Leading character count to strip\n" ;
          GALGAS_uint index_4226_ (0) ;
          if (enumerator_3886.current_mTerminalList (HERE).isValid ()) {
            cEnumerator_terminalLabelListAST enumerator_4226 (enumerator_3886.current_mTerminalList (HERE), kENUMERATION_UP) ;
            while (enumerator_4226.hasCurrentObject ()) {
              result << "  " ;
              result << enumerator_3252.current_mLexiqueClassName (HERE).stringValue () ;
              result << "_1_" ;
              result << enumerator_4226.current_mTerminal (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 103)).stringValue () ;
              result << ", " ;
              result << enumerator_4226.current_mDisplayFlags (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 103)).stringValue () ;
              result << ",\n" ;
              index_4226_.increment () ;
              enumerator_4226.gotoNextObject () ;
            }
          }
          result << "  0\n"
            "} ;\n"
            "\n" ;
          index_3886_.increment () ;
          enumerator_3886.gotoNextObject () ;
        }
      }
      result << "static const UInt16 * gPopUpData_" ;
      result << enumerator_3252.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).stringValue () ;
      result << "_" ;
      result << enumerator_3252.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).stringValue () ;
      result << " [" ;
      result << enumerator_3252.current_mLabels (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_4599_ (0) ;
      if (enumerator_3252.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_4599 (enumerator_3252.current_mLabels (HERE), kENUMERATION_UP) ;
        while (enumerator_4599.hasCurrentObject ()) {
          result << "  gPopUpData_" ;
          result << enumerator_3252.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).stringValue () ;
          result << "_" ;
          result << enumerator_3252.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).stringValue () ;
          result << "_" ;
          result << enumerator_4599.current_mLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).stringValue () ;
          result << ",\n" ;
          index_4599_.increment () ;
          enumerator_4599.gotoNextObject () ;
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
      result << enumerator_3252.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 119)).stringValue () ;
      result << "_" ;
      result << enumerator_3252.current_mLexiqueClassName (HERE).stringValue () ;
      result << " : OC_Lexique_" ;
      result << enumerator_3252.current_mLexiqueClassName (HERE).stringValue () ;
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
      result << enumerator_3252.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 129)).stringValue () ;
      result << "_" ;
      result << enumerator_3252.current_mLexiqueClassName (HERE).stringValue () ;
      result << "\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSString *) blockComment {\n"
        "  return @" ;
      result << enumerator_3252.current_mBlockComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 132)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (const UInt16 * *) popupListData {\n"
        "  return gPopUpData_" ;
      result << enumerator_3252.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 136)).stringValue () ;
      result << "_" ;
      result << enumerator_3252.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 136)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSUInteger) textMacroCount {\n"
        "  return " ;
      result << enumerator_3252.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 140)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 140)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSString *) tabItemTitle {\n"
        "  return @" ;
      result << enumerator_3252.current_mTitle (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 144)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {\n"
        "  static NSString * kTextMacroTitle [" ;
      result << enumerator_3252.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 148)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 148)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 148)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 148)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 148)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_7073_ (0) ;
      if (enumerator_3252.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_7073 (enumerator_3252.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_7073.hasCurrentObject ()) {
          result << "    @" ;
          result << enumerator_7073.current_mKey (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 150)).stringValue () ;
          result << ",\n" ;
          index_7073_.increment () ;
          enumerator_7073.gotoNextObject () ;
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
      result << enumerator_3252.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 158)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 158)).getter_uint (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 158)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 158)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 158)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_7536_ (0) ;
      if (enumerator_3252.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_7536 (enumerator_3252.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_7536.hasCurrentObject ()) {
          result << "    @" ;
          result << enumerator_7536.current_mContents (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 160)).stringValue () ;
          result << ",\n" ;
          index_7536_.increment () ;
          enumerator_7536.gotoNextObject () ;
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
      index_3252_.increment () ;
      enumerator_3252.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "OC_Lexique * tokenizerForExtension (const NSString * inExtension) {\n"
    "  OC_Lexique * result = nil ;\n" ;
  GALGAS_uint index_8125_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    cEnumerator_extensionMap enumerator_8125 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap (), kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_8125 = enumerator_8125.hasCurrentObject () ;
    if (nonEmpty_enumerator_8125) {
      result << "  if" ;
    }
    while (enumerator_8125.hasCurrentObject ()) {
      result << " ([inExtension isEqualToString:@" ;
      result << enumerator_8125.current_lkey (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 177)).stringValue () ;
      result << "]) {\n"
        "    result = [OC_Tokenizer_" ;
      result << enumerator_8125.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 178)).stringValue () ;
      result << "_" ;
      result << enumerator_8125.current_mLexiqueName (HERE).stringValue () ;
      result << " new] ;\n" ;
      if (enumerator_8125.hasNextObject ()) {
        result << "  }else if" ;
      }
      index_8125_.increment () ;
      enumerator_8125.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8125) {
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
  GALGAS_uint index_8636_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    cEnumerator_importedLexiqueList enumerator_8636 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList (), kENUMERATION_UP) ;
    while (enumerator_8636.hasCurrentObject ()) {
      result << "    [OC_Tokenizer_" ;
      result << enumerator_8636.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 190)).stringValue () ;
      result << "_" ;
      result << enumerator_8636.current_mLexiqueClassName (HERE).stringValue () ;
      result << " new],\n" ;
      index_8636_.increment () ;
      enumerator_8636.gotoNextObject () ;
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

void cPtr_arrayDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_arrayDeclarationAST temp_0 = this ;
  const GALGAS_arrayDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_3164 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 77)), temp_1.readProperty_mArrayTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-array.galgas", 77)) ;
  {
  const GALGAS_arrayDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3164, temp_2, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 78)) ;
  }
  {
  const GALGAS_arrayDeclarationAST temp_3 = this ;
  const GALGAS_arrayDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3164, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mElementTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 79)), temp_4.readProperty_mElementTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-array.galgas", 79)) COMMA_SOURCE_FILE ("type-array.galgas", 79)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                         const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                         const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_arrayDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mDimension ().readProperty_bigint ().objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 92)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_arrayDeclarationAST temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mDimension ().readProperty_location (), GALGAS_string ("the dimension of an array should be > 0"), fixItArray3  COMMA_SOURCE_FILE ("type-array.galgas", 93)) ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_arrayTypeIndex_4398 ;
  {
  const GALGAS_arrayDeclarationAST temp_4 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_4.readProperty_mArrayTypeName (), var_arrayTypeIndex_4398, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 97)) ;
  }
  GALGAS_unifiedTypeMapEntry var_elementTypeIndex_4504 ;
  {
  const GALGAS_arrayDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_5.readProperty_mElementTypeName (), var_elementTypeIndex_4504, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 99)) ;
  }
  GALGAS_constructorMap var_constructorMap_4637 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 102)) ;
  GALGAS_getterMap var_getterMap_4727 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4727, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 103)) ;
  }
  GALGAS_setterMap var_setterMap_4756 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 104)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4803 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 105)) ;
  GALGAS_unifiedTypeMapEntry var_boolType_4972 ;
  {
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("bool"), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-array.galgas", 108))  COMMA_SOURCE_FILE ("type-array.galgas", 108)), var_boolType_4972, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 108)) ;
  }
  GALGAS_unifiedTypeMapEntry var_uintType_5137 ;
  {
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_nowhere (SOURCE_FILE ("type-array.galgas", 111))  COMMA_SOURCE_FILE ("type-array.galgas", 111)), var_uintType_5137, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 111)) ;
  }
  GALGAS_functionSignature var_uintArgs_5177 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 113)) ;
  GALGAS_uint var_idx_5198 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_arrayDeclarationAST temp_6 = this ;
  if (temp_6.readProperty_mDimension ().readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 115)).isValid ()) {
    uint32_t variant_5209 = temp_6.readProperty_mDimension ().readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 115)).uintValue () ;
    bool loop_5209 = true ;
    while (loop_5209) {
      const GALGAS_arrayDeclarationAST temp_7 = this ;
      loop_5209 = GALGAS_bool (kIsStrictInf, var_idx_5198.objectCompare (temp_7.readProperty_mDimension ().readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 115)))).isValid () ;
      if (loop_5209) {
        loop_5209 = GALGAS_bool (kIsStrictInf, var_idx_5198.objectCompare (temp_7.readProperty_mDimension ().readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 115)))).boolValue () ;
      }
      if (loop_5209 && (0 == variant_5209)) {
        loop_5209 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 115)) ;
      }
      if (loop_5209) {
        variant_5209 -- ;
        var_uintArgs_5177.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 116)), var_uintType_5137, GALGAS_string ("inSize").add_operation (var_idx_5198.getter_string (SOURCE_FILE ("type-array.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 116))  COMMA_SOURCE_FILE ("type-array.galgas", 116)) ;
        var_idx_5198.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 117)) ;
      }
    }
  }
  {
  var_constructorMap_4637.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 121))  COMMA_SOURCE_FILE ("type-array.galgas", 121)), var_uintArgs_5177, GALGAS_bool (false), var_arrayTypeIndex_4398, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 120)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (var_getterMap_4727, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("axisCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 127)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_4727, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("sizeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 134)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_4727, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("rangeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("range"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 141)) ;
  }
  {
  var_getterMap_4727.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("isValueValidAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 151))  COMMA_SOURCE_FILE ("type-array.galgas", 151)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 152)), var_uintArgs_5177, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 154)), GALGAS_bool (true), var_boolType_4972, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 157)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-array.galgas", 150)) ;
  }
  {
  var_getterMap_4727.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("valueAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 161))  COMMA_SOURCE_FILE ("type-array.galgas", 161)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 162)), var_uintArgs_5177, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 164)), GALGAS_bool (true), var_elementTypeIndex_4504, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 167)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-array.galgas", 160)) ;
  }
  GALGAS_formalParameterSignature var_setterFormalArgumentList_6611 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 171)) ;
  var_setterFormalArgumentList_6611.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 172)), var_elementTypeIndex_4504, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 172)), GALGAS_string ("InValue")  COMMA_SOURCE_FILE ("type-array.galgas", 172)) ;
  var_idx_5198 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_arrayDeclarationAST temp_8 = this ;
  if (temp_8.readProperty_mDimension ().readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 174)).isValid ()) {
    uint32_t variant_6782 = temp_8.readProperty_mDimension ().readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 174)).uintValue () ;
    bool loop_6782 = true ;
    while (loop_6782) {
      const GALGAS_arrayDeclarationAST temp_9 = this ;
      loop_6782 = GALGAS_bool (kIsStrictInf, var_idx_5198.objectCompare (temp_9.readProperty_mDimension ().readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 174)))).isValid () ;
      if (loop_6782) {
        loop_6782 = GALGAS_bool (kIsStrictInf, var_idx_5198.objectCompare (temp_9.readProperty_mDimension ().readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 174)))).boolValue () ;
      }
      if (loop_6782 && (0 == variant_6782)) {
        loop_6782 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 174)) ;
      }
      if (loop_6782) {
        variant_6782 -- ;
        var_setterFormalArgumentList_6611.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 175)), var_uintType_5137, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 175)), GALGAS_string ("inIndex").add_operation (var_idx_5198.getter_string (SOURCE_FILE ("type-array.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 175))  COMMA_SOURCE_FILE ("type-array.galgas", 175)) ;
        var_idx_5198.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 176)) ;
      }
    }
  }
  {
  var_setterMap_4756.setter_insertKey (GALGAS_string ("setValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 179)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 180)), var_setterFormalArgumentList_6611, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 183)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 178)) ;
  }
  {
  var_setterMap_4756.setter_insertKey (GALGAS_string ("forceValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 187)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 188)), var_setterFormalArgumentList_6611, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 191)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 186)) ;
  }
  {
  GALGAS_lstring joker_7386_4 ; // Joker input parameter
  GALGAS_unifiedTypeMapEntry joker_7386_3 ; // Joker input parameter
  GALGAS_formalArgumentPassingModeAST joker_7386_2 ; // Joker input parameter
  GALGAS_string joker_7386_1 ; // Joker input parameter
  var_setterFormalArgumentList_6611.setter_popFirst (joker_7386_4, joker_7386_3, joker_7386_2, joker_7386_1, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 194)) ;
  }
  {
  var_setterMap_4756.setter_insertKey (GALGAS_string ("invalidateValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 196)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 197)), var_setterFormalArgumentList_6611, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 200)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 195)) ;
  }
  {
  var_setterMap_4756.setter_insertKey (GALGAS_string ("setSize").getter_nowhere (SOURCE_FILE ("type-array.galgas", 204)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 205)), var_setterFormalArgumentList_6611, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 208)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 203)) ;
  }
  var_setterFormalArgumentList_6611 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 211)) ;
  var_setterFormalArgumentList_6611.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 212)), var_uintType_5137, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 212)), GALGAS_string ("inSize")  COMMA_SOURCE_FILE ("type-array.galgas", 212)) ;
  var_setterFormalArgumentList_6611.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 213)), var_uintType_5137, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 213)), GALGAS_string ("inAxisIndex")  COMMA_SOURCE_FILE ("type-array.galgas", 213)) ;
  {
  var_setterMap_4756.setter_insertKey (GALGAS_string ("setSizeForAxis").getter_nowhere (SOURCE_FILE ("type-array.galgas", 215)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 216)), var_setterFormalArgumentList_6611, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 219)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 214)) ;
  }
  const GALGAS_arrayDeclarationAST temp_10 = this ;
  const GALGAS_arrayDeclarationAST temp_11 = this ;
  const GALGAS_arrayDeclarationAST temp_12 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_8264 = GALGAS_unifiedTypeDefinition::constructor_new (temp_10.readProperty_mArrayTypeName (), temp_11.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-array.galgas", 227)), GALGAS_typeKindEnum::constructor_listMapType (SOURCE_FILE ("type-array.galgas", 228)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 230)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 231)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 232)), var_constructorMap_4637, var_getterMap_4727, var_setterMap_4756, var_instanceMethodMap_4803, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 237)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 238)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 239)), GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-array.galgas", 240)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 241)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 242)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 243)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 244)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 245)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-array.galgas", 247)), GALGAS_string::makeEmptyString (), GALGAS_string ("array-").add_operation (temp_12.readProperty_mArrayTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-array.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 249)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-array.galgas", 250))  COMMA_SOURCE_FILE ("type-array.galgas", 223)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_8264, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 252)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                        const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_arrayDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_9871 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 268)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9871, var_nameForUsefulness_9871, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 269)) ;
  }
  const GALGAS_arrayDeclarationAST temp_1 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_10036 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mElementTypeName (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 270)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_9871, var_elementTypeNameForUsefulness_10036 COMMA_SOURCE_FILE ("type-array.galgas", 271)) ;
  }
  const GALGAS_arrayDeclarationAST temp_2 = this ;
  const GALGAS_arrayDeclarationAST temp_3 = this ;
  const GALGAS_arrayDeclarationAST temp_4 = this ;
  const GALGAS_arrayDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("array ").add_operation (temp_2.readProperty_mArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 274)), GALGAS_arrayTypeForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 276)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_4.readProperty_mElementTypeName (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 277)), temp_5.readProperty_mDimension ().readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 278))  COMMA_SOURCE_FILE ("type-array.galgas", 275))  COMMA_SOURCE_FILE ("type-array.galgas", 273)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                GALGAS_string & outArgument_outHeader,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_arrayTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_11179 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 296)) ;
  const GALGAS_arrayTypeForGeneration temp_1 = this ;
  const GALGAS_arrayTypeForGeneration temp_2 = this ;
  const GALGAS_arrayTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (inCompiler, var_selfTypeDefinition_11179.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 299)), extensionGetter_identifierRepresentation (temp_2.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 300)), temp_3.readProperty_mDimension () COMMA_SOURCE_FILE ("type-array.galgas", 297))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_11179.readProperty_mTypeName ().readProperty_string (), var_selfTypeDefinition_11179.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-array.galgas", 305)), var_selfTypeDefinition_11179.readProperty_mIsConcrete (), var_selfTypeDefinition_11179.readProperty_mConstructorMap (), var_selfTypeDefinition_11179.readProperty_mGetterMap (), var_selfTypeDefinition_11179.readProperty_mSetterMap (), var_selfTypeDefinition_11179.readProperty_mInstanceMethodMap (), var_selfTypeDefinition_11179.readProperty_mClassMethodMap (), var_selfTypeDefinition_11179.readProperty_mOptionalMethodMap (), var_selfTypeDefinition_11179.readProperty_mEnumerationDescriptor (), var_selfTypeDefinition_11179.readProperty_mHandledOperatorFlags (), var_selfTypeDefinition_11179.readProperty_mAddAssignOperatorArguments (), var_selfTypeDefinition_11179.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-array.galgas", 303))), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 303)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_string & outArgument_outImplementation,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_arrayTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_12430 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 326)) ;
  const GALGAS_arrayTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 327)) ;
  const GALGAS_arrayTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 328)) ;
  GALGAS_stringlist var_suffixList_12604 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 330)) ;
  GALGAS_uint var_idx_12637 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_arrayTypeForGeneration temp_3 = this ;
  if (temp_3.readProperty_mDimension ().isValid ()) {
    uint32_t variant_12648 = temp_3.readProperty_mDimension ().uintValue () ;
    bool loop_12648 = true ;
    while (loop_12648) {
      const GALGAS_arrayTypeForGeneration temp_4 = this ;
      loop_12648 = GALGAS_bool (kIsStrictInf, var_idx_12637.objectCompare (temp_4.readProperty_mDimension ())).isValid () ;
      if (loop_12648) {
        loop_12648 = GALGAS_bool (kIsStrictInf, var_idx_12637.objectCompare (temp_4.readProperty_mDimension ())).boolValue () ;
      }
      if (loop_12648 && (0 == variant_12648)) {
        loop_12648 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 332)) ;
      }
      if (loop_12648) {
        variant_12648 -- ;
        var_suffixList_12604.addAssign_operation (var_idx_12637.getter_string (SOURCE_FILE ("type-array.galgas", 333))  COMMA_SOURCE_FILE ("type-array.galgas", 333)) ;
        var_idx_12637.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 334)) ;
      }
    }
  }
  const GALGAS_arrayTypeForGeneration temp_5 = this ;
  const GALGAS_arrayTypeForGeneration temp_6 = this ;
  const GALGAS_arrayTypeForGeneration temp_7 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_12430.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_5.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 338)), extensionGetter_identifierRepresentation (temp_6.readProperty_mElementTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 339)), temp_7.readProperty_mDimension (), var_suffixList_12604 COMMA_SOURCE_FILE ("type-array.galgas", 336))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                 GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                 GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                 GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                 GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_boolsetDeclarationAST temp_0 = this ;
  const GALGAS_boolsetDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_3081 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 81)), temp_1.readProperty_mBoolsetTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 81)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3081, temp_2, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 82)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolsetDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_boolsetDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_boolsetDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("boolset @").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 90)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForBoolset'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForBoolset (C_Compiler *
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-boolset.galgas", 98)) ;
  result_result.addAssign_operation (GALGAS_string ("all")  COMMA_SOURCE_FILE ("type-boolset.galgas", 99)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-boolset.galgas", 100)) ;
  result_result.addAssign_operation (GALGAS_string ("dynamicType")  COMMA_SOURCE_FILE ("type-boolset.galgas", 101)) ;
  result_result.addAssign_operation (GALGAS_string ("none")  COMMA_SOURCE_FILE ("type-boolset.galgas", 102)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-boolset.galgas", 103)) ;
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
//Overriding extension method '@boolsetDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                           const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                           const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringset var_slotNameSet_4654 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-boolset.galgas", 115)) ;
  const GALGAS_boolsetDeclarationAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_4675 (temp_0.readProperty_mFlagList (), kENUMERATION_UP) ;
  while (enumerator_4675.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 117)).getter_hasKey (enumerator_4675.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 117)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_m_4782 = GALGAS_string ("a slot cannot be named:") ;
        cEnumerator_stringset enumerator_4852 (function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 119)), kENUMERATION_UP) ;
        while (enumerator_4852.hasCurrentObject ()) {
          var_m_4782.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_4852.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 120)) ;
          enumerator_4852.gotoNextObject () ;
        }
        var_m_4782.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 122)) ;
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4675.current_mValue (HERE).readProperty_location (), var_m_4782, fixItArray2  COMMA_SOURCE_FILE ("type-boolset.galgas", 123)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_slotNameSet_4654.getter_hasKey (enumerator_4675.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 124)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_4675.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated slot name"), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 125)) ;
        }
      }
    }
    var_slotNameSet_4654.addAssign_operation (enumerator_4675.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 127)) ;
    enumerator_4675.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_boolsetTypeIndex_5199 ;
  {
  const GALGAS_boolsetDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_5.readProperty_mBoolsetTypeName (), var_boolsetTypeIndex_5199, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 130)) ;
  }
  GALGAS_getterMap var_getterMap_5317 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5317, inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 132)) ;
  }
  GALGAS_constructorMap var_constructorMap_5355 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 133)) ;
  {
  var_constructorMap_5355.setter_insertKey (GALGAS_string ("none").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 134)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 134)), GALGAS_bool (false), var_boolsetTypeIndex_5199, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 134)) ;
  }
  {
  var_constructorMap_5355.setter_insertKey (GALGAS_string ("all").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 135)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 135)), GALGAS_bool (false), var_boolsetTypeIndex_5199, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 135)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5317, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("none"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 136)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5317, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("all"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 143)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = this ;
  cEnumerator_lstringlist enumerator_5886 (temp_6.readProperty_mFlagList (), kENUMERATION_UP) ;
  while (enumerator_5886.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_constructorMap_5355.getter_hasKey (enumerator_5886.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 151)).operator_not (SOURCE_FILE ("type-boolset.galgas", 151)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        var_constructorMap_5355.setter_insertKey (enumerator_5886.current_mValue (HERE), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 152)), GALGAS_bool (false), var_boolsetTypeIndex_5199, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 152)) ;
        }
        {
        routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5317, ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_5886.current_mValue (HERE).readProperty_string (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 153)) ;
        }
      }
    }
    enumerator_5886.gotoNextObject () ;
  }
  GALGAS_setterMap var_setterMap_6301 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 163)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6371 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 165)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_8 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_8.readProperty_mBoolsetTypeName (), GALGAS_bool (false), var_getterMap_5317, var_setterMap_6301, var_instanceMethodMap_6371, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 167)) ;
  }
  GALGAS_operators var_operators_6733 = GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("type-boolset.galgas", 180)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("type-boolset.galgas", 180)) COMMA_SOURCE_FILE ("type-boolset.galgas", 180)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("type-boolset.galgas", 180)) COMMA_SOURCE_FILE ("type-boolset.galgas", 180)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("type-boolset.galgas", 180)) COMMA_SOURCE_FILE ("type-boolset.galgas", 180)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-boolset.galgas", 181)) COMMA_SOURCE_FILE ("type-boolset.galgas", 180)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("type-boolset.galgas", 181)) COMMA_SOURCE_FILE ("type-boolset.galgas", 181)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-boolset.galgas", 181)) COMMA_SOURCE_FILE ("type-boolset.galgas", 181)) ;
  const GALGAS_boolsetDeclarationAST temp_9 = this ;
  const GALGAS_boolsetDeclarationAST temp_10 = this ;
  const GALGAS_boolsetDeclarationAST temp_11 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_6951 = GALGAS_unifiedTypeDefinition::constructor_new (temp_9.readProperty_mBoolsetTypeName (), temp_10.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-boolset.galgas", 187)), GALGAS_typeKindEnum::constructor_boolsetType (SOURCE_FILE ("type-boolset.galgas", 188)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 190)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 191)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 192)), var_constructorMap_5355, var_getterMap_5317, var_setterMap_6301, var_instanceMethodMap_6371, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 197)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 198)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 199)), var_operators_6733, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 201)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 202)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 203)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 204)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 205)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-boolset.galgas", 207)), GALGAS_string ("none"), GALGAS_string ("boolset-").add_operation (temp_11.readProperty_mBoolsetTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-boolset.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 209)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-boolset.galgas", 210))  COMMA_SOURCE_FILE ("type-boolset.galgas", 183)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_6951, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 212)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                          const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                          GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_boolsetDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mFlagList ().getter_length (SOURCE_FILE ("type-boolset.galgas", 229)).objectCompare (GALGAS_bigint ("64", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 229)).getter_uint (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 229)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_boolsetDeclarationAST temp_2 = this ;
      GALGAS_location var_s_8375 = temp_2.readProperty_mFlagList ().getter_mValueAtIndex (GALGAS_uint (uint32_t (64U)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 230)).readProperty_location () ;
      const GALGAS_boolsetDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_s_8375, GALGAS_string ("max flags count is 64 (here: ").add_operation (temp_3.readProperty_mFlagList ().getter_length (SOURCE_FILE ("type-boolset.galgas", 231)).getter_string (SOURCE_FILE ("type-boolset.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 231)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 231)), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 231)) ;
    }
  }
  const GALGAS_boolsetDeclarationAST temp_5 = this ;
  GALGAS_lstring var_boolsetNameForUsefulness_8554 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 234)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_boolsetNameForUsefulness_8554, var_boolsetNameForUsefulness_8554, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 235)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = this ;
  const GALGAS_boolsetDeclarationAST temp_7 = this ;
  const GALGAS_boolsetDeclarationAST temp_8 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("boolset ").add_operation (temp_6.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 237)), GALGAS_boolsetTypeForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_7.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 239)), temp_8.readProperty_mFlagList ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 238))  COMMA_SOURCE_FILE ("type-boolset.galgas", 236)) ;
}
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
  GALGAS_uint index_1089_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_1089 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1089.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_1089.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 32)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) {\n"
        "  return GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " (((uint64_t) 1) << " ;
      result << index_1089_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 33)).stringValue () ;
      result << ") ;\n"
        "}\n"
        "\n" ;
      index_1089_idx.increment () ;
      enumerator_1089.gotoNextObject () ;
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
  GALGAS_uint index_5172_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_5172 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5172.hasCurrentObject ()) {
      result << "    if ((mFlags & ((uint64_t) 1) << " ;
      result << index_5172_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 129)).stringValue () ;
      result << ") != 0) {\n"
        "      ioString << \" " ;
      result << enumerator_5172.current_mValue (HERE).readProperty_string ().stringValue () ;
      result << "\" ;\n"
        "    }\n" ;
      index_5172_idx.increment () ;
      enumerator_5172.gotoNextObject () ;
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
  GALGAS_uint index_6026_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_6026 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6026.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_6026.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 159)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n"
        "  GALGAS_bool result ;\n"
        "  if (mIsValid) {\n"
        "    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << " ;
      result << index_6026_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 162)).stringValue () ;
      result << ") != 0) ;\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_6026_idx.increment () ;
      enumerator_6026.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_boolsetTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                  GALGAS_string & outArgument_outHeader,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_boolsetTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_10121 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 275)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (inCompiler, var_typedefinition_10121.readProperty_mTypeName ().readProperty_string (), var_typedefinition_10121.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-boolset.galgas", 278)), temp_1.readProperty_mFlagList () COMMA_SOURCE_FILE ("type-boolset.galgas", 276))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typedefinition_10121.readProperty_mTypeName ().readProperty_string (), var_typedefinition_10121.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-boolset.galgas", 283)), var_typedefinition_10121.readProperty_mIsConcrete (), var_typedefinition_10121.readProperty_mConstructorMap (), var_typedefinition_10121.readProperty_mGetterMap (), var_typedefinition_10121.readProperty_mSetterMap (), var_typedefinition_10121.readProperty_mInstanceMethodMap (), var_typedefinition_10121.readProperty_mClassMethodMap (), var_typedefinition_10121.readProperty_mOptionalMethodMap (), var_typedefinition_10121.readProperty_mEnumerationDescriptor (), var_typedefinition_10121.readProperty_mHandledOperatorFlags (), var_typedefinition_10121.readProperty_mAddAssignOperatorArguments (), var_typedefinition_10121.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-boolset.galgas", 281))), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 281)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_boolsetTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outImplementation,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_boolsetTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 305)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = this ;
  const GALGAS_boolsetTypeForGeneration temp_2 = this ;
  const GALGAS_boolsetTypeForGeneration temp_3 = this ;
  const GALGAS_boolsetTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (inCompiler, extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 307)).readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 308)), temp_3.readProperty_mFlagList (), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 310)).left_shift_operation (temp_4.readProperty_mFlagList ().getter_length (SOURCE_FILE ("type-boolset.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 310)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 310)) COMMA_SOURCE_FILE ("type-boolset.galgas", 306))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Function 'weakSuffix'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_weakSuffix (C_Compiler *
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

GALGAS_string cPtr_classDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_classDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("valueclass @").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 176)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_classDeclarationAST temp_0 = this ;
  const GALGAS_classDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_6526 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 187)), temp_1.readProperty_mClassTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 187)) ;
  {
  const GALGAS_classDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_6526, temp_2, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 188)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_classDeclarationAST temp_4 = this ;
    test_3 = GALGAS_bool (kIsNotEqual, temp_4.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_classDeclarationAST temp_5 = this ;
      const GALGAS_classDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6526, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_5.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 193)), temp_6.readProperty_mSuperClassName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 193)) COMMA_SOURCE_FILE ("type-class.galgas", 191)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_7 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_6938 (temp_7.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_6938.hasCurrentObject ()) {
    {
    const GALGAS_classDeclarationAST temp_8 = this ;
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_6526, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_6938.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 200)), temp_8.readProperty_mSuperClassName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 200)) COMMA_SOURCE_FILE ("type-class.galgas", 198)) ;
    }
    enumerator_6938.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_getterMap var_getterMap_7936 ;
  GALGAS_setterMap var_setterMap_7963 ;
  GALGAS_instanceMethodMap var_instanceMethodMap_8006 ;
  GALGAS_typedPropertyList var_inheritedTypedPropertyList_8058 ;
  GALGAS_propertyMap var_attributeMap_8090 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 218)) ;
  GALGAS_unifiedTypeMapEntry var_superClassIndex_8162 ;
  GALGAS_bool var_generateHeaderInSeparateFile_8203 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_8162 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 223)) ;
      {
      routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_7936, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 224)) ;
      }
      var_setterMap_7963 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 225)) ;
      var_instanceMethodMap_8006 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 226)) ;
      var_inheritedTypedPropertyList_8058 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 227)) ;
      var_attributeMap_8090 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 228)) ;
      var_generateHeaderInSeparateFile_8203 = GALGAS_bool (false) ;
      const GALGAS_classDeclarationAST temp_2 = this ;
      cEnumerator_lstringlist enumerator_8530 (temp_2.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
      while (enumerator_8530.hasCurrentObject ()) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, enumerator_8530.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_generateHeaderInSeparateFile_8203 = GALGAS_bool (true) ;
          }
        }
        enumerator_8530.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_classDeclarationAST temp_4 = this ;
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_4.readProperty_mSuperClassName (), var_superClassIndex_8162, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 236)) ;
    }
    GALGAS_unifiedTypeDefinition var_superTypeDefinition_8860 ;
    const GALGAS_classDeclarationAST temp_5 = this ;
    extensionMethod_searchType (ioArgument_ioSemanticContext.readProperty_mTypeMap (), temp_5.readProperty_mSuperClassName (), var_superTypeDefinition_8860, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 237)) ;
    var_inheritedTypedPropertyList_8058 = var_superTypeDefinition_8860.readProperty_mAllTypedPropertyList () ;
    var_attributeMap_8090 = var_superTypeDefinition_8860.readProperty_mPropertyMap () ;
    var_generateHeaderInSeparateFile_8203 = var_superTypeDefinition_8860.readProperty_mGenerateHeaderInSeparateFile () ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_superTypeDefinition_8860.readProperty_mTypeKindEnum ().getter_isClassType (SOURCE_FILE ("type-class.galgas", 242)).operator_not (SOURCE_FILE ("type-class.galgas", 242)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_classDeclarationAST temp_7 = this ;
        const GALGAS_classDeclarationAST temp_8 = this ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mSuperClassName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_8.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 243)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 243)), fixItArray9  COMMA_SOURCE_FILE ("type-class.galgas", 243)) ;
      }
    }
    var_setterMap_7963 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 246)) ;
    cEnumerator_setterMap enumerator_9362 (var_superTypeDefinition_8860.readProperty_mSetterMap (), kENUMERATION_UP) ;
    while (enumerator_9362.hasCurrentObject ()) {
      {
      var_setterMap_7963.setter_insertKey (enumerator_9362.current_lkey (HERE), enumerator_9362.current_mKind (HERE), enumerator_9362.current_mParameterList (HERE), enumerator_9362.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 253)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 248)) ;
      }
      enumerator_9362.gotoNextObject () ;
    }
    var_getterMap_7936 = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 258)) ;
    cEnumerator_getterMap enumerator_9748 (var_superTypeDefinition_8860.readProperty_mGetterMap (), kENUMERATION_UP) ;
    while (enumerator_9748.hasCurrentObject ()) {
      {
      var_getterMap_7936.setter_insertKey (enumerator_9748.current_lkey (HERE), enumerator_9748.current_mKind (HERE), enumerator_9748.current_mArgumentTypeList (HERE), enumerator_9748.current_mDeclarationLocation (HERE), enumerator_9748.current_mHasCompilerArgument (HERE), enumerator_9748.current_mReturnedType (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 268)), enumerator_9748.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 261)) ;
      }
      enumerator_9748.gotoNextObject () ;
    }
    var_instanceMethodMap_8006 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 273)) ;
    cEnumerator_instanceMethodMap enumerator_10194 (var_superTypeDefinition_8860.readProperty_mInstanceMethodMap (), kENUMERATION_UP) ;
    while (enumerator_10194.hasCurrentObject ()) {
      {
      var_instanceMethodMap_8006.setter_insertKey (enumerator_10194.current_lkey (HERE), enumerator_10194.current_mKind (HERE), enumerator_10194.current_mParameterList (HERE), enumerator_10194.current_mDeclarationLocation (HERE), enumerator_10194.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 282)), enumerator_10194.current_mMutability (HERE), enumerator_10194.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 276)) ;
      }
      enumerator_10194.gotoNextObject () ;
    }
  }
  GALGAS_functionSignature var_constructorPropertyTypeList_10592 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 289)) ;
  cEnumerator_typedPropertyList enumerator_10652 (var_inheritedTypedPropertyList_8058, kENUMERATION_UP) ;
  while (enumerator_10652.hasCurrentObject ()) {
    GALGAS_lstring temp_10 ;
    const enumGalgasBool test_11 = enumerator_10652.current_mHasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = enumerator_10652.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 292)) ;
    }
    var_constructorPropertyTypeList_10592.addAssign_operation (temp_10, enumerator_10652.current_mPropertyTypeEntry (HERE), enumerator_10652.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 291)) ;
    enumerator_10652.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_12 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10920 (temp_12.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_10920.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_11033 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_10920.current_mPropertyTypeName (HERE), var_attributeTypeIndex_11033, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 297)) ;
    }
    GALGAS_bool var_hasSelector_11054 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_11081 (enumerator_10920.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_11081.hasCurrentObject ()) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsEqual, enumerator_11081.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
        if (kBoolTrue == test_13) {
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = var_hasSelector_11054.boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray15 ;
              fixItArray15.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (enumerator_11081.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray15  COMMA_SOURCE_FILE ("type-class.galgas", 302)) ;
            }
          }
          var_hasSelector_11054 = GALGAS_bool (true) ;
        }
      }
      enumerator_11081.gotoNextObject () ;
    }
    GALGAS_lstring temp_16 ;
    const enumGalgasBool test_17 = var_hasSelector_11054.boolEnum () ;
    if (kBoolTrue == test_17) {
      temp_16 = enumerator_10920.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_17) {
      temp_16 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 308)) ;
    }
    var_constructorPropertyTypeList_10592.addAssign_operation (temp_16, var_attributeTypeIndex_11033, enumerator_10920.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 307)) ;
    {
    var_attributeMap_8090.setter_insertKey (enumerator_10920.current_mPropertyName (HERE), enumerator_10920.current_mIsPublic (HERE), enumerator_10920.current_isConstant (HERE), var_attributeTypeIndex_11033, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 311)) ;
    }
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_getterMap_7936.getter_hasKey (enumerator_10920.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-class.galgas", 317)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_10920.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_10920.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 318)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined getter"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 318)), fixItArray19  COMMA_SOURCE_FILE ("type-class.galgas", 318)) ;
      }
    }
    enumerator_10920.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_classIndex_11880 ;
  {
  const GALGAS_classDeclarationAST temp_20 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_20.readProperty_mClassTypeName (), var_classIndex_11880, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 322)) ;
  }
  GALGAS_constructorMap var_constructorMap_11939 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 327)) ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    const GALGAS_classDeclarationAST temp_22 = this ;
    test_21 = temp_22.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("type-class.galgas", 328)).boolEnum () ;
    if (kBoolTrue == test_21) {
      {
      var_constructorMap_11939.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 330))  COMMA_SOURCE_FILE ("type-class.galgas", 330)), var_constructorPropertyTypeList_10592, GALGAS_bool (false), var_classIndex_11880, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 329)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_currentClassTypedPropertyList_12211 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 337)) ;
  GALGAS_typedPropertyList var_allTypedAttributeList_12263 = var_inheritedTypedPropertyList_8058 ;
  const GALGAS_classDeclarationAST temp_23 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_12357 (temp_23.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12357.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_12470 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_12357.current_mPropertyTypeName (HERE), var_attributeTypeIndex_12470, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 340)) ;
    }
    GALGAS_bool var_hasSelector_12491 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_12515 (enumerator_12357.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_12515.hasCurrentObject ()) {
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = GALGAS_bool (kIsEqual, enumerator_12515.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_24) {
          TC_Array <C_FixItDescription> fixItArray25 ;
          inCompiler->emitSemanticWarning (enumerator_12515.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%nogetter' is obsolete and has no effect"), fixItArray25  COMMA_SOURCE_FILE ("type-class.galgas", 344)) ;
        }
      }
      if (kBoolFalse == test_24) {
        enumGalgasBool test_26 = kBoolTrue ;
        if (kBoolTrue == test_26) {
          test_26 = GALGAS_bool (kIsEqual, enumerator_12515.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_26) {
            TC_Array <C_FixItDescription> fixItArray27 ;
            inCompiler->emitSemanticWarning (enumerator_12515.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%setter' is obsolete and has no effect"), fixItArray27  COMMA_SOURCE_FILE ("type-class.galgas", 346)) ;
          }
        }
        if (kBoolFalse == test_26) {
          enumGalgasBool test_28 = kBoolTrue ;
          if (kBoolTrue == test_28) {
            test_28 = GALGAS_bool (kIsEqual, enumerator_12515.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_28) {
              var_hasSelector_12491 = GALGAS_bool (true) ;
            }
          }
        }
      }
      enumerator_12515.gotoNextObject () ;
    }
    var_currentClassTypedPropertyList_12211.addAssign_operation (var_attributeTypeIndex_12470, enumerator_12357.current_mPropertyName (HERE), enumerator_12357.current_mIsPublic (HERE), var_hasSelector_12491  COMMA_SOURCE_FILE ("type-class.galgas", 351)) ;
    var_allTypedAttributeList_12263.addAssign_operation (var_attributeTypeIndex_12470, enumerator_12357.current_mPropertyName (HERE), enumerator_12357.current_mIsPublic (HERE), var_hasSelector_12491  COMMA_SOURCE_FILE ("type-class.galgas", 352)) ;
    enumerator_12357.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_13117 (var_currentClassTypedPropertyList_12211, kENUMERATION_UP) ;
  while (enumerator_13117.hasCurrentObject ()) {
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = enumerator_13117.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_29) {
        {
        GALGAS_formalParameterSignature temp_30 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 360)) ;
        temp_30.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 360)), enumerator_13117.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-class.galgas", 360)), enumerator_13117.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 360)) ;
        var_setterMap_7963.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_13117.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-class.galgas", 358)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 358)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 358))  COMMA_SOURCE_FILE ("type-class.galgas", 358)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 359)), temp_30, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-class.galgas", 362)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 357)) ;
        }
      }
    }
    enumerator_13117.gotoNextObject () ;
  }
  {
  const GALGAS_classDeclarationAST temp_31 = this ;
  const GALGAS_classDeclarationAST temp_32 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_31.readProperty_mClassTypeName (), GALGAS_bool (true), var_getterMap_7936, var_setterMap_7963, var_instanceMethodMap_8006, temp_32.readProperty_mIsReference ().operator_not (SOURCE_FILE ("type-class.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 368)) ;
  }
  const GALGAS_classDeclarationAST temp_33 = this ;
  GALGAS_string temp_34 ;
  const enumGalgasBool test_35 = temp_33.readProperty_mIsAbstract ().boolEnum () ;
  if (kBoolTrue == test_35) {
    temp_34 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_35) {
    temp_34 = GALGAS_string ("default") ;
  }
  GALGAS_string var_defaultConstructorName_14002 = temp_34 ;
  cEnumerator_typedPropertyList enumerator_14079 (var_allTypedAttributeList_12263, kENUMERATION_UP) ;
  bool bool_36 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_14002.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_14079.hasCurrentObject () && bool_36) {
    while (enumerator_14079.hasCurrentObject () && bool_36) {
      enumGalgasBool test_37 = kBoolTrue ;
      if (kBoolTrue == test_37) {
        test_37 = GALGAS_bool (kIsEqual, extensionGetter_definition (enumerator_14079.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 383)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_37) {
          var_defaultConstructorName_14002 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_14079.gotoNextObject () ;
      if (enumerator_14079.hasCurrentObject ()) {
        bool_36 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_14002.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_38 = this ;
  const GALGAS_classDeclarationAST temp_39 = this ;
  const GALGAS_classDeclarationAST temp_40 = this ;
  const GALGAS_classDeclarationAST temp_41 = this ;
  const GALGAS_classDeclarationAST temp_42 = this ;
  GALGAS_operators temp_43 ;
  const enumGalgasBool test_44 = temp_42.readProperty_mIsReference ().boolEnum () ;
  if (kBoolTrue == test_44) {
    temp_43 = GALGAS_operators::constructor_isReferenceEquatable (SOURCE_FILE ("type-class.galgas", 405)) ;
  }else if (kBoolFalse == test_44) {
    temp_43 = GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-class.galgas", 405)) ;
  }
  const GALGAS_classDeclarationAST temp_45 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_14309 = GALGAS_unifiedTypeDefinition::constructor_new (temp_38.readProperty_mClassTypeName (), temp_39.readProperty_mIsPredefined (), temp_40.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("type-class.galgas", 391)), var_superClassIndex_8162, GALGAS_typeKindEnum::constructor_classType (temp_41.readProperty_mIsReference ()  COMMA_SOURCE_FILE ("type-class.galgas", 393)), GALGAS_bool (false), var_allTypedAttributeList_12263, var_attributeMap_8090, var_currentClassTypedPropertyList_12211, var_constructorMap_11939, var_getterMap_7936, var_setterMap_7963, var_instanceMethodMap_8006, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 402)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 403)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 404)), temp_43, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 406)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 407)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 408)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 409)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 410)), var_generateHeaderInSeparateFile_8203, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 412)), var_defaultConstructorName_14002, GALGAS_string ("class-").add_operation (temp_45.readProperty_mClassTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-class.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 414)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-class.galgas", 415))  COMMA_SOURCE_FILE ("type-class.galgas", 388)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_14309, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 417)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                        const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_classDeclarationAST temp_0 = this ;
  GALGAS_lstring var_classTypeNameForUsefulness_16132 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 432)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_classTypeNameForUsefulness_16132, var_classTypeNameForUsefulness_16132, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 433)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_classDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_classDeclarationAST temp_3 = this ;
      GALGAS_lstring var_superClassNameForUsefulness_16360 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 435)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16132, var_superClassNameForUsefulness_16360 COMMA_SOURCE_FILE ("type-class.galgas", 436)) ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_classDeclarationAST temp_5 = this ;
    test_4 = temp_5.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_classDeclarationAST temp_6 = this ;
      const GALGAS_classDeclarationAST temp_7 = this ;
      GALGAS_lstring var_weakRefTypeNameForUsefulness_16583 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_6.readProperty_mClassTypeName ().readProperty_string ().add_operation (function_weakSuffix (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 439)), temp_7.readProperty_mClassTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 439)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16132, var_weakRefTypeNameForUsefulness_16583 COMMA_SOURCE_FILE ("type-class.galgas", 440)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_8 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_16847 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_8.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 443)) ;
  const GALGAS_classDeclarationAST temp_9 = this ;
  GALGAS_unifiedTypeMapEntry temp_10 ;
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, temp_9.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 446)) ;
  }else if (kBoolFalse == test_11) {
    const GALGAS_classDeclarationAST temp_12 = this ;
    temp_10 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_12.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 447)) ;
  }
  GALGAS_unifiedTypeMapEntry var_superClassEntry_16974 = temp_10 ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (kIsNotEqual, var_superClassEntry_16974.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 452)))).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_bool var_superClassIsReference_17410 ;
      extensionGetter_definition (var_superClassEntry_16974, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 453)).readProperty_mTypeKindEnum ().method_classType (var_superClassIsReference_17410, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 453)) ;
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        const GALGAS_classDeclarationAST temp_15 = this ;
        test_14 = var_superClassIsReference_17410.operator_and (temp_15.readProperty_mIsReference ().operator_not (SOURCE_FILE ("type-class.galgas", 454)) COMMA_SOURCE_FILE ("type-class.galgas", 454)).boolEnum () ;
        if (kBoolTrue == test_14) {
          const GALGAS_classDeclarationAST temp_16 = this ;
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("this class should be declared by 'refClass', as its super class"), fixItArray17  COMMA_SOURCE_FILE ("type-class.galgas", 455)) ;
        }
      }
      if (kBoolFalse == test_14) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          const GALGAS_classDeclarationAST temp_19 = this ;
          test_18 = var_superClassIsReference_17410.operator_not (SOURCE_FILE ("type-class.galgas", 456)).operator_and (temp_19.readProperty_mIsReference () COMMA_SOURCE_FILE ("type-class.galgas", 456)).boolEnum () ;
          if (kBoolTrue == test_18) {
            const GALGAS_classDeclarationAST temp_20 = this ;
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (temp_20.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("this class should be declared by 'valueclass', as its super class"), fixItArray21  COMMA_SOURCE_FILE ("type-class.galgas", 457)) ;
          }
        }
      }
    }
  }
  GALGAS_typedPropertyList var_allAttributeList_17956 ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (kIsEqual, var_superClassEntry_16974.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-class.galgas", 464)))).boolEnum () ;
    if (kBoolTrue == test_22) {
      var_allAttributeList_17956 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 465)) ;
      GALGAS_bool var_generatedInSeparateFileFeature_18062 = GALGAS_bool (false) ;
      enumGalgasBool test_23 = kBoolTrue ;
      if (kBoolTrue == test_23) {
        const GALGAS_classDeclarationAST temp_24 = this ;
        test_23 = GALGAS_bool (kIsStrictSup, temp_24.readProperty_mClassFeatureList ().getter_length (SOURCE_FILE ("type-class.galgas", 467)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 467)).getter_uint (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 467)))).boolEnum () ;
        if (kBoolTrue == test_23) {
          const GALGAS_classDeclarationAST temp_25 = this ;
          cEnumerator_lstringlist enumerator_18136 (temp_25.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
          while (enumerator_18136.hasCurrentObject ()) {
            enumGalgasBool test_26 = kBoolTrue ;
            if (kBoolTrue == test_26) {
              test_26 = GALGAS_bool (kIsEqual, enumerator_18136.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
              if (kBoolTrue == test_26) {
                enumGalgasBool test_27 = kBoolTrue ;
                if (kBoolTrue == test_27) {
                  test_27 = var_generatedInSeparateFileFeature_18062.boolEnum () ;
                  if (kBoolTrue == test_27) {
                    TC_Array <C_FixItDescription> fixItArray28 ;
                    inCompiler->emitSemanticError (enumerator_18136.current_mValue (HERE).readProperty_location (), GALGAS_string ("the 'generatedInSeparateFile' is already named"), fixItArray28  COMMA_SOURCE_FILE ("type-class.galgas", 471)) ;
                  }
                }
                var_generatedInSeparateFileFeature_18062 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_26) {
              TC_Array <C_FixItDescription> fixItArray29 ;
              inCompiler->emitSemanticError (enumerator_18136.current_mValue (HERE).readProperty_location (), GALGAS_string ("only the 'generatedInSeparateFile' attribute is allowed here"), fixItArray29  COMMA_SOURCE_FILE ("type-class.galgas", 475)) ;
            }
            enumerator_18136.gotoNextObject () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_22) {
    var_allAttributeList_17956 = extensionGetter_definition (var_superClassEntry_16974, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 480)).readProperty_mAllTypedPropertyList () ;
    enumGalgasBool test_30 = kBoolTrue ;
    if (kBoolTrue == test_30) {
      const GALGAS_classDeclarationAST temp_31 = this ;
      test_30 = GALGAS_bool (kIsStrictSup, temp_31.readProperty_mClassFeatureList ().getter_length (SOURCE_FILE ("type-class.galgas", 481)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 481)).getter_uint (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 481)))).boolEnum () ;
      if (kBoolTrue == test_30) {
        const GALGAS_classDeclarationAST temp_32 = this ;
        cEnumerator_lstringlist enumerator_18686 (temp_32.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
        while (enumerator_18686.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray33 ;
          inCompiler->emitSemanticError (enumerator_18686.current_mValue (HERE).readProperty_location (), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray33  COMMA_SOURCE_FILE ("type-class.galgas", 483)) ;
          enumerator_18686.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_18891 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 488)) ;
  GALGAS_propertyIndexMap var_attributeMap_18933 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 489)) ;
  const GALGAS_classDeclarationAST temp_34 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_19003 (temp_34.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_19003.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_19067 = function_typeNameForUsefulEntitiesGraph (enumerator_19003.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 491)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16132, var_propertyTypeNameForUsefulness_19067 COMMA_SOURCE_FILE ("type-class.galgas", 492)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_19228 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_19003.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 493)) ;
    GALGAS_bool var_hasSelector_19308 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_19332 (enumerator_19003.current_mAttributeList (HERE), kENUMERATION_UP) ;
    bool bool_35 = var_hasSelector_19308.operator_not (SOURCE_FILE ("type-class.galgas", 495)).isValidAndTrue () ;
    if (enumerator_19332.hasCurrentObject () && bool_35) {
      while (enumerator_19332.hasCurrentObject () && bool_35) {
        var_hasSelector_19308 = GALGAS_bool (kIsEqual, enumerator_19332.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))) ;
        enumerator_19332.gotoNextObject () ;
        if (enumerator_19332.hasCurrentObject ()) {
          bool_35 = var_hasSelector_19308.operator_not (SOURCE_FILE ("type-class.galgas", 495)).isValidAndTrue () ;
        }
      }
    }
    var_typedAttributeList_18891.addAssign_operation (var_t_19228, enumerator_19003.current_mPropertyName (HERE), enumerator_19003.current_mIsPublic (HERE), var_hasSelector_19308  COMMA_SOURCE_FILE ("type-class.galgas", 498)) ;
    var_allAttributeList_17956.addAssign_operation (var_t_19228, enumerator_19003.current_mPropertyName (HERE), enumerator_19003.current_mIsPublic (HERE), var_hasSelector_19308  COMMA_SOURCE_FILE ("type-class.galgas", 503)) ;
    {
    var_attributeMap_18933.setter_insertKey (enumerator_19003.current_mPropertyName (HERE), var_t_19228, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 508)) ;
    }
    enumerator_19003.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_36 = this ;
  const GALGAS_classDeclarationAST temp_37 = this ;
  const GALGAS_classDeclarationAST temp_38 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (temp_36.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 512)), GALGAS_classTypeForGeneration::constructor_new (var_selfType_16847, temp_37.readProperty_mIsAbstract (), temp_38.readProperty_mIsReference (), var_superClassEntry_16974, var_allAttributeList_17956, var_typedAttributeList_18891, extensionGetter_definition (var_selfType_16847, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 520)).readProperty_mGenerateHeaderInSeparateFile ()  COMMA_SOURCE_FILE ("type-class.galgas", 513))  COMMA_SOURCE_FILE ("type-class.galgas", 511)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                GALGAS_string & outArgument_outHeader,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classTypeForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 541)).operator_not (SOURCE_FILE ("type-class.galgas", 541)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_classTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 542)) ;
    }
  }
  const GALGAS_classTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_21146 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 544)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_classTypeForGeneration temp_5 = this ;
    test_4 = temp_5.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_classTypeForGeneration temp_6 = this ;
      const GALGAS_classTypeForGeneration temp_7 = this ;
      GALGAS_string temp_8 ;
      const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 549)).boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_9) {
        const GALGAS_classTypeForGeneration temp_10 = this ;
        temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 549)) ;
      }
      const GALGAS_classTypeForGeneration temp_11 = this ;
      const GALGAS_classTypeForGeneration temp_12 = this ;
      const GALGAS_classTypeForGeneration temp_13 = this ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_31_ (inCompiler, var_selfTypeDefinition_21146.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 548)), temp_8, temp_11.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_12.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 551)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())), temp_13.readProperty_mCurrentTypedAttributeList () COMMA_SOURCE_FILE ("type-class.galgas", 546))) ;
    }
  }
  if (kBoolFalse == test_4) {
    const GALGAS_classTypeForGeneration temp_14 = this ;
    const GALGAS_classTypeForGeneration temp_15 = this ;
    GALGAS_string temp_16 ;
    const enumGalgasBool test_17 = temp_15.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 558)).boolEnum () ;
    if (kBoolTrue == test_17) {
      temp_16 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_17) {
      const GALGAS_classTypeForGeneration temp_18 = this ;
      temp_16 = extensionGetter_identifierRepresentation (temp_18.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 558)) ;
    }
    const GALGAS_classTypeForGeneration temp_19 = this ;
    const GALGAS_classTypeForGeneration temp_20 = this ;
    const GALGAS_classTypeForGeneration temp_21 = this ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_31_ (inCompiler, var_selfTypeDefinition_21146.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_14.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 557)), temp_16, temp_19.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_20.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 560)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())), temp_21.readProperty_mCurrentTypedAttributeList () COMMA_SOURCE_FILE ("type-class.galgas", 555))) ;
  }
  const GALGAS_classTypeForGeneration temp_22 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_21146.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_22.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 566)), var_selfTypeDefinition_21146.readProperty_mIsConcrete (), var_selfTypeDefinition_21146.readProperty_mConstructorMap (), var_selfTypeDefinition_21146.readProperty_mGetterMap (), var_selfTypeDefinition_21146.readProperty_mSetterMap (), var_selfTypeDefinition_21146.readProperty_mInstanceMethodMap (), var_selfTypeDefinition_21146.readProperty_mClassMethodMap (), var_selfTypeDefinition_21146.readProperty_mOptionalMethodMap (), var_selfTypeDefinition_21146.readProperty_mEnumerationDescriptor (), var_selfTypeDefinition_21146.readProperty_mHandledOperatorFlags (), var_selfTypeDefinition_21146.readProperty_mAddAssignOperatorArguments (), var_selfTypeDefinition_21146.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-class.galgas", 564))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 564)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendDeclaration2'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendDeclaration_32_ (const GALGAS_string constinArgument_inOutputDirectory,
                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                GALGAS_string & outArgument_outHeader,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_classTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_23075 (temp_0.readProperty_mCurrentTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_23075.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_23075.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 587)) ;
    enumerator_23075.gotoNextObject () ;
  }
  const GALGAS_classTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_23184 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 589)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_classTypeForGeneration temp_3 = this ;
    test_2 = temp_3.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_classTypeForGeneration temp_5 = this ;
        test_4 = temp_5.readProperty_mGenerateHeaderInSeparateFile ().boolEnum () ;
        if (kBoolTrue == test_4) {
          const GALGAS_classTypeForGeneration temp_6 = this ;
          const GALGAS_classTypeForGeneration temp_7 = this ;
          GALGAS_string temp_8 ;
          const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 595)).boolEnum () ;
          if (kBoolTrue == test_9) {
            temp_8 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_9) {
            const GALGAS_classTypeForGeneration temp_10 = this ;
            temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 595)) ;
          }
          const GALGAS_classTypeForGeneration temp_11 = this ;
          const GALGAS_classTypeForGeneration temp_12 = this ;
          const GALGAS_classTypeForGeneration temp_13 = this ;
          const GALGAS_classTypeForGeneration temp_14 = this ;
          const GALGAS_classTypeForGeneration temp_15 = this ;
          GALGAS_string var_part_31__23318 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23184.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 594)), temp_8, temp_11.readProperty_mCurrentTypedAttributeList (), temp_12.readProperty_mAllTypedAttributeList (), temp_13.readProperty_mIsAbstract (), extensionGetter_definition (temp_14.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 599)).readProperty_mGetterMap (), extensionGetter_definition (temp_15.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 600)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 592))) ;
          const GALGAS_classTypeForGeneration temp_16 = this ;
          const GALGAS_classTypeForGeneration temp_17 = this ;
          GALGAS_string temp_18 ;
          const enumGalgasBool test_19 = temp_17.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 605)).boolEnum () ;
          if (kBoolTrue == test_19) {
            temp_18 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_19) {
            const GALGAS_classTypeForGeneration temp_20 = this ;
            temp_18 = extensionGetter_identifierRepresentation (temp_20.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 605)) ;
          }
          const GALGAS_classTypeForGeneration temp_21 = this ;
          const GALGAS_classTypeForGeneration temp_22 = this ;
          const GALGAS_classTypeForGeneration temp_23 = this ;
          GALGAS_string var_part_32__23833 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23184.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_16.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 604)), temp_18, temp_21.readProperty_mCurrentTypedAttributeList (), temp_22.readProperty_mAllTypedAttributeList (), temp_23.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 602))) ;
          const GALGAS_classTypeForGeneration temp_24 = this ;
          GALGAS_string var_headerFileName_24243 = GALGAS_string ("separateHeaderFor_").add_operation (extensionGetter_identifierRepresentation (temp_24.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 610)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 610)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 610)) ;
          {
          GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 612)), var_headerFileName_24243, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
            "\n"), var_part_31__23318, GALGAS_string ("\n"
            "\n"), var_part_32__23833, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 611)) ;
          }
          outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_24243, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 622)).add_operation (GALGAS_string ("\"\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 622)) ;
        }
      }
      if (kBoolFalse == test_4) {
        const GALGAS_classTypeForGeneration temp_25 = this ;
        const GALGAS_classTypeForGeneration temp_26 = this ;
        GALGAS_string temp_27 ;
        const enumGalgasBool test_28 = temp_26.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 627)).boolEnum () ;
        if (kBoolTrue == test_28) {
          temp_27 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_28) {
          const GALGAS_classTypeForGeneration temp_29 = this ;
          temp_27 = extensionGetter_identifierRepresentation (temp_29.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 627)) ;
        }
        const GALGAS_classTypeForGeneration temp_30 = this ;
        const GALGAS_classTypeForGeneration temp_31 = this ;
        const GALGAS_classTypeForGeneration temp_32 = this ;
        const GALGAS_classTypeForGeneration temp_33 = this ;
        const GALGAS_classTypeForGeneration temp_34 = this ;
        outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23184.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_25.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 626)), temp_27, temp_30.readProperty_mCurrentTypedAttributeList (), temp_31.readProperty_mAllTypedAttributeList (), temp_32.readProperty_mIsAbstract (), extensionGetter_definition (temp_33.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 631)).readProperty_mGetterMap (), extensionGetter_definition (temp_34.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 632)).readProperty_mInstanceMethodMap () COMMA_SOURCE_FILE ("type-class.galgas", 624))) ;
        const GALGAS_classTypeForGeneration temp_35 = this ;
        const GALGAS_classTypeForGeneration temp_36 = this ;
        GALGAS_string temp_37 ;
        const enumGalgasBool test_38 = temp_36.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 637)).boolEnum () ;
        if (kBoolTrue == test_38) {
          temp_37 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_38) {
          const GALGAS_classTypeForGeneration temp_39 = this ;
          temp_37 = extensionGetter_identifierRepresentation (temp_39.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 637)) ;
        }
        const GALGAS_classTypeForGeneration temp_40 = this ;
        const GALGAS_classTypeForGeneration temp_41 = this ;
        const GALGAS_classTypeForGeneration temp_42 = this ;
        outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23184.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_35.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 636)), temp_37, temp_40.readProperty_mCurrentTypedAttributeList (), temp_41.readProperty_mAllTypedAttributeList (), temp_42.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 634))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 634)) ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_43 = kBoolTrue ;
    if (kBoolTrue == test_43) {
      const GALGAS_classTypeForGeneration temp_44 = this ;
      test_43 = temp_44.readProperty_mGenerateHeaderInSeparateFile ().boolEnum () ;
      if (kBoolTrue == test_43) {
        const GALGAS_classTypeForGeneration temp_45 = this ;
        const GALGAS_classTypeForGeneration temp_46 = this ;
        GALGAS_string temp_47 ;
        const enumGalgasBool test_48 = temp_46.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 648)).boolEnum () ;
        if (kBoolTrue == test_48) {
          temp_47 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_48) {
          const GALGAS_classTypeForGeneration temp_49 = this ;
          temp_47 = extensionGetter_identifierRepresentation (temp_49.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 648)) ;
        }
        const GALGAS_classTypeForGeneration temp_50 = this ;
        const GALGAS_classTypeForGeneration temp_51 = this ;
        const GALGAS_classTypeForGeneration temp_52 = this ;
        GALGAS_string var_part_31__25766 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23184.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_45.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 647)), temp_47, temp_50.readProperty_mCurrentTypedAttributeList (), temp_51.readProperty_mAllTypedAttributeList (), temp_52.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 645))) ;
        const GALGAS_classTypeForGeneration temp_53 = this ;
        const GALGAS_classTypeForGeneration temp_54 = this ;
        GALGAS_string temp_55 ;
        const enumGalgasBool test_56 = temp_54.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 656)).boolEnum () ;
        if (kBoolTrue == test_56) {
          temp_55 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_56) {
          const GALGAS_classTypeForGeneration temp_57 = this ;
          temp_55 = extensionGetter_identifierRepresentation (temp_57.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 656)) ;
        }
        const GALGAS_classTypeForGeneration temp_58 = this ;
        const GALGAS_classTypeForGeneration temp_59 = this ;
        const GALGAS_classTypeForGeneration temp_60 = this ;
        GALGAS_string var_part_32__26163 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23184.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_53.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 655)), temp_55, temp_58.readProperty_mCurrentTypedAttributeList (), temp_59.readProperty_mAllTypedAttributeList (), temp_60.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 653))) ;
        const GALGAS_classTypeForGeneration temp_61 = this ;
        GALGAS_string var_headerFileName_26569 = GALGAS_string ("separateHeaderFor_").add_operation (extensionGetter_identifierRepresentation (temp_61.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 661)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 661)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 661)) ;
        {
        GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 663)), var_headerFileName_26569, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
          "\n"), var_part_31__25766, GALGAS_string ("\n"
          "\n"), var_part_32__26163, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 662)) ;
        }
        outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_26569, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 673)).add_operation (GALGAS_string ("\"\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 673)) ;
      }
    }
    if (kBoolFalse == test_43) {
      const GALGAS_classTypeForGeneration temp_62 = this ;
      const GALGAS_classTypeForGeneration temp_63 = this ;
      GALGAS_string temp_64 ;
      const enumGalgasBool test_65 = temp_63.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 678)).boolEnum () ;
      if (kBoolTrue == test_65) {
        temp_64 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_65) {
        const GALGAS_classTypeForGeneration temp_66 = this ;
        temp_64 = extensionGetter_identifierRepresentation (temp_66.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 678)) ;
      }
      const GALGAS_classTypeForGeneration temp_67 = this ;
      const GALGAS_classTypeForGeneration temp_68 = this ;
      const GALGAS_classTypeForGeneration temp_69 = this ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, var_typedefinition_23184.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_62.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 677)), temp_64, temp_67.readProperty_mCurrentTypedAttributeList (), temp_68.readProperty_mAllTypedAttributeList (), temp_69.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 675))) ;
      const GALGAS_classTypeForGeneration temp_70 = this ;
      const GALGAS_classTypeForGeneration temp_71 = this ;
      GALGAS_string temp_72 ;
      const enumGalgasBool test_73 = temp_71.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 686)).boolEnum () ;
      if (kBoolTrue == test_73) {
        temp_72 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_73) {
        const GALGAS_classTypeForGeneration temp_74 = this ;
        temp_72 = extensionGetter_identifierRepresentation (temp_74.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 686)) ;
      }
      const GALGAS_classTypeForGeneration temp_75 = this ;
      const GALGAS_classTypeForGeneration temp_76 = this ;
      const GALGAS_classTypeForGeneration temp_77 = this ;
      outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, var_typedefinition_23184.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_70.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 685)), temp_72, temp_75.readProperty_mCurrentTypedAttributeList (), temp_76.readProperty_mAllTypedAttributeList (), temp_77.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 683))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 683)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_classTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_string & outArgument_outImplementation,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_classTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 700)) ;
  const GALGAS_classTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_28406 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 701)) ;
  const GALGAS_classTypeForGeneration temp_2 = this ;
  const GALGAS_classTypeForGeneration temp_3 = this ;
  const GALGAS_classTypeForGeneration temp_4 = this ;
  GALGAS_typedPropertyList var_at_28450 = temp_2.readProperty_mAllTypedAttributeList ().getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint (uint32_t (0U)), temp_3.readProperty_mAllTypedAttributeList ().getter_length (SOURCE_FILE ("type-class.galgas", 703)).substract_operation (temp_4.readProperty_mCurrentTypedAttributeList ().getter_length (SOURCE_FILE ("type-class.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 703))  COMMA_SOURCE_FILE ("type-class.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 702)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_classTypeForGeneration temp_6 = this ;
    test_5 = temp_6.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_classTypeForGeneration temp_7 = this ;
      const GALGAS_classTypeForGeneration temp_8 = this ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = temp_8.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 709)).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_10) {
        const GALGAS_classTypeForGeneration temp_11 = this ;
        temp_9 = extensionGetter_identifierRepresentation (temp_11.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 709)) ;
      }
      const GALGAS_classTypeForGeneration temp_12 = this ;
      const GALGAS_classTypeForGeneration temp_13 = this ;
      const GALGAS_classTypeForGeneration temp_14 = this ;
      const GALGAS_classTypeForGeneration temp_15 = this ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeSpecificImplementation (inCompiler, var_typedefinition_28406.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_7.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 708)), temp_9, temp_12.readProperty_mCurrentTypedAttributeList (), temp_13.readProperty_mAllTypedAttributeList (), var_at_28450, temp_14.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_15.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 714)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 706))) ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_classTypeForGeneration temp_16 = this ;
    const GALGAS_classTypeForGeneration temp_17 = this ;
    GALGAS_string temp_18 ;
    const enumGalgasBool test_19 = temp_17.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 720)).boolEnum () ;
    if (kBoolTrue == test_19) {
      temp_18 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_19) {
      const GALGAS_classTypeForGeneration temp_20 = this ;
      temp_18 = extensionGetter_identifierRepresentation (temp_20.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 720)) ;
    }
    const GALGAS_classTypeForGeneration temp_21 = this ;
    const GALGAS_classTypeForGeneration temp_22 = this ;
    const GALGAS_classTypeForGeneration temp_23 = this ;
    const GALGAS_classTypeForGeneration temp_24 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeSpecificImplementation (inCompiler, var_typedefinition_28406.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_16.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 719)), temp_18, temp_21.readProperty_mCurrentTypedAttributeList (), temp_22.readProperty_mAllTypedAttributeList (), var_at_28450, temp_23.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, extensionGetter_definition (temp_24.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 725)).readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 717))) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Function 'generateClassGetterDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_generateClassGetterDeclaration (const GALGAS_lstring & constinArgument_inGetterName,
                                                       const GALGAS_functionSignature & constinArgument_inArgumentTypeList,
                                                       const GALGAS_bool & constinArgument_inHasCompilerArgument,
                                                       const GALGAS_unifiedTypeMapEntry & constinArgument_inReturnedType,
                                                       const GALGAS_methodQualifier & constinArgument_inQualifier,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  GALGAS_bool var_generateMethodDeclaration_30174 = GALGAS_bool (true) ;
  GALGAS_string var_suffix_30194 = GALGAS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GALGAS_methodQualifier::kNotBuilt:
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualAbstract:
    {
      var_suffix_30194 = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtual:
    {
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isBasic:
  case GALGAS_methodQualifier::kEnum_isBasicFinal:
    {
      var_generateMethodDeclaration_30174 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isInherited:
    {
      var_generateMethodDeclaration_30174 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverriding:
    {
      var_suffix_30194 = GALGAS_string (" override") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverridingAbstract:
    {
      var_suffix_30194 = GALGAS_string (" override = 0") ;
    }
    break ;
  }
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_30174.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("//--- Extension getter ").add_operation (constinArgument_inGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 756)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 756)) ;
      result_result.plusAssign_operation(GALGAS_string ("  public: virtual class GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inReturnedType, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 757)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 757)) ;
      result_result.plusAssign_operation(GALGAS_string (" getter_").add_operation (constinArgument_inGetterName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-class.galgas", 758)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 758)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 758)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 758)) ;
      GALGAS_bool var_first_30841 = GALGAS_bool (true) ;
      cEnumerator_functionSignature enumerator_30893 (constinArgument_inArgumentTypeList, kENUMERATION_UP) ;
      while (enumerator_30893.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_first_30841.boolEnum () ;
          if (kBoolTrue == test_1) {
            var_first_30841 = GALGAS_bool (false) ;
          }
        }
        if (kBoolFalse == test_1) {
          result_result.plusAssign_operation(GALGAS_string (",\n"
            "           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 765)) ;
        }
        result_result.plusAssign_operation(GALGAS_string ("const class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_30893.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 767)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 767)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 767)) ;
        result_result.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_30893.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 768)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 768)) ;
        enumerator_30893.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_first_30841.operator_not (SOURCE_FILE ("type-class.galgas", 771)).boolEnum () ;
            if (kBoolTrue == test_3) {
              result_result.plusAssign_operation(GALGAS_string (",\n"
                "           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 772)) ;
            }
          }
          result_result.plusAssign_operation(GALGAS_string ("C_Compiler *"), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 774)) ;
          var_first_30841 = GALGAS_bool (false) ;
        }
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = var_first_30841.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("LOCATION_ARGS") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string (" COMMA_LOCATION_ARGS") ;
      }
      result_result.plusAssign_operation(temp_4.add_operation (GALGAS_string (") const"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 777)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 777)) ;
      result_result.plusAssign_operation(var_suffix_30194.add_operation (GALGAS_string (" ;\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 778)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 778)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_generateClassGetterDeclaration [6] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_functionSignature,
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_unifiedTypeMapEntry,
  & kTypeDescriptor_GALGAS_methodQualifier,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_generateClassGetterDeclaration (C_Compiler * inCompiler,
                                                                               const cObjectArray & inEffectiveParameterArray,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_functionSignature operand1 = GALGAS_functionSignature::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                     inCompiler
                                                                                     COMMA_THERE) ;
  const GALGAS_bool operand2 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_unifiedTypeMapEntry operand3 = GALGAS_unifiedTypeMapEntry::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                         inCompiler
                                                                                         COMMA_THERE) ;
  const GALGAS_methodQualifier operand4 = GALGAS_methodQualifier::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  return function_generateClassGetterDeclaration (operand0,
                                                  operand1,
                                                  operand2,
                                                  operand3,
                                                  operand4,
                                                  inCompiler
                                                  COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_generateClassGetterDeclaration ("generateClassGetterDeclaration",
                                                                                functionWithGenericHeader_generateClassGetterDeclaration,
                                                                                & kTypeDescriptor_GALGAS_string,
                                                                                5,
                                                                                functionArgs_generateClassGetterDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Function 'generateClassInstanceMethodDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_generateClassInstanceMethodDeclaration (const GALGAS_lstring & constinArgument_inMethodName,
                                                               const GALGAS_formalParameterSignature & constinArgument_inArgumentTypeList,
                                                               const GALGAS_instanceMethodMutability & constinArgument_inMutability,
                                                               const GALGAS_bool & constinArgument_inHasCompilerArgument,
                                                               const GALGAS_methodQualifier & constinArgument_inQualifier,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  GALGAS_bool var_generateMethodDeclaration_32033 = GALGAS_bool (true) ;
  GALGAS_string var_suffix_32053 = GALGAS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GALGAS_methodQualifier::kNotBuilt:
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualAbstract:
    {
      var_suffix_32053 = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtual:
    {
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isBasic:
  case GALGAS_methodQualifier::kEnum_isBasicFinal:
    {
      var_generateMethodDeclaration_32033 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isInherited:
    {
      var_generateMethodDeclaration_32033 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverriding:
    {
      var_suffix_32053 = GALGAS_string (" override") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isVirtualOverridingAbstract:
    {
      var_suffix_32053 = GALGAS_string (" override = 0") ;
    }
    break ;
  }
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_generateMethodDeclaration_32033.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result.plusAssign_operation(GALGAS_string ("//--- Extension method ").add_operation (constinArgument_inMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 809)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 809)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 809)) ;
      result_result.plusAssign_operation(GALGAS_string ("  public: virtual void method_").add_operation (constinArgument_inMethodName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-class.galgas", 810)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 810)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 810)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 810)) ;
      GALGAS_bool var_first_32670 = GALGAS_bool (true) ;
      cEnumerator_formalParameterSignature enumerator_32722 (constinArgument_inArgumentTypeList, kENUMERATION_UP) ;
      while (enumerator_32722.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_first_32670.boolEnum () ;
          if (kBoolTrue == test_1) {
            var_first_32670 = GALGAS_bool (false) ;
          }
        }
        if (kBoolFalse == test_1) {
          result_result.plusAssign_operation(GALGAS_string (",\n"
            "           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 817)) ;
        }
        switch (enumerator_32722.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
            result_result.plusAssign_operation(GALGAS_string ("const class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_32722.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 821)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 821)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 821)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_32722.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 823)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 823)).add_operation (GALGAS_string (" &"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 823)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 823)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_32722.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 825)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 825)).add_operation (GALGAS_string (" &"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 825)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 825)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            result_result.plusAssign_operation(GALGAS_string ("class GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_32722.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 827)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 827)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 827)) ;
          }
          break ;
        }
        result_result.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_32722.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 829)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 829)) ;
        enumerator_32722.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_first_32670.operator_not (SOURCE_FILE ("type-class.galgas", 832)).boolEnum () ;
            if (kBoolTrue == test_3) {
              result_result.plusAssign_operation(GALGAS_string (",\n"
                "           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 833)) ;
            }
          }
          result_result.plusAssign_operation(GALGAS_string ("C_Compiler *"), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 835)) ;
          var_first_32670 = GALGAS_bool (false) ;
        }
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = var_first_32670.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("LOCATION_ARGS") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string (" COMMA_LOCATION_ARGS") ;
      }
      result_result.plusAssign_operation(temp_4.add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 838)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 838)) ;
      switch (constinArgument_inMutability.enumValue ()) {
      case GALGAS_instanceMethodMutability::kNotBuilt:
        break ;
      case GALGAS_instanceMethodMutability::kEnum_constantMethod:
        {
          result_result.plusAssign_operation(GALGAS_string (" const"), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 841)) ;
        }
        break ;
      case GALGAS_instanceMethodMutability::kEnum_mutatingMethod:
        {
        }
        break ;
      }
      result_result.plusAssign_operation(var_suffix_32053.add_operation (GALGAS_string (" ;\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 844)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 844)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_generateClassInstanceMethodDeclaration [6] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_formalParameterSignature,
  & kTypeDescriptor_GALGAS_instanceMethodMutability,
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_methodQualifier,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_generateClassInstanceMethodDeclaration (C_Compiler * inCompiler,
                                                                                       const cObjectArray & inEffectiveParameterArray,
                                                                                       const GALGAS_location & /* inErrorLocation */
                                                                                       COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_formalParameterSignature operand1 = GALGAS_formalParameterSignature::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                   inCompiler
                                                                                                   COMMA_THERE) ;
  const GALGAS_instanceMethodMutability operand2 = GALGAS_instanceMethodMutability::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                                   inCompiler
                                                                                                   COMMA_THERE) ;
  const GALGAS_bool operand3 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_methodQualifier operand4 = GALGAS_methodQualifier::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  return function_generateClassInstanceMethodDeclaration (operand0,
                                                          operand1,
                                                          operand2,
                                                          operand3,
                                                          operand4,
                                                          inCompiler
                                                          COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_generateClassInstanceMethodDeclaration ("generateClassInstanceMethodDeclaration",
                                                                                        functionWithGenericHeader_generateClassInstanceMethodDeclaration,
                                                                                        & kTypeDescriptor_GALGAS_string,
                                                                                        5,
                                                                                        functionArgs_generateClassInstanceMethodDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@weakReferenceDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_weakReferenceDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_weakReferenceDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("weak reference @").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 18)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                       GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                       GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_weakReferenceDeclarationAST temp_0 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_1648 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 30)), temp_1.readProperty_mWeakReferenceTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 30)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_1648, temp_2, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 31)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
    test_3 = GALGAS_bool (kIsNotEqual, temp_4.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_weakReferenceDeclarationAST temp_5 = this ;
      const GALGAS_weakReferenceDeclarationAST temp_6 = this ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_1648, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 35)), temp_6.readProperty_mSuperWeakReferenceTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 35)) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 33)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntry var_superClassIndex_2889 ;
  GALGAS_bool var_generateHeaderInSeparateFile_2930 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_weakReferenceDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_2889 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 58)) ;
      var_generateHeaderInSeparateFile_2930 = GALGAS_bool (false) ;
      const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
      cEnumerator_lstringlist enumerator_3091 (temp_2.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
      while (enumerator_3091.hasCurrentObject ()) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, enumerator_3091.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_generateHeaderInSeparateFile_2930 = GALGAS_bool (true) ;
          }
        }
        enumerator_3091.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_4.readProperty_mSuperWeakReferenceTypeName (), var_superClassIndex_2889, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 66)) ;
    }
    GALGAS_unifiedTypeDefinition var_superTypeDefinition_3445 ;
    const GALGAS_weakReferenceDeclarationAST temp_5 = this ;
    extensionMethod_searchType (ioArgument_ioSemanticContext.readProperty_mTypeMap (), temp_5.readProperty_mSuperWeakReferenceTypeName (), var_superTypeDefinition_3445, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 67)) ;
    var_generateHeaderInSeparateFile_2930 = var_superTypeDefinition_3445.readProperty_mGenerateHeaderInSeparateFile () ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_superTypeDefinition_3445.readProperty_mTypeKindEnum ().getter_isWeakReferenceType (SOURCE_FILE ("type-weak-reference.galgas", 78)).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 78)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_weakReferenceDeclarationAST temp_7 = this ;
        const GALGAS_weakReferenceDeclarationAST temp_8 = this ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mSuperWeakReferenceTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_8.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 79)).add_operation (GALGAS_string (" should be a weak reference type"), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 79)), fixItArray9  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 79)) ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_weakReferenceIndex_4089 ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_10 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_10.readProperty_mWeakReferenceTypeName (), var_weakReferenceIndex_4089, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 83)) ;
  }
  GALGAS_constructorMap var_constructorMap_4148 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 88)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_11 = this ;
  var_constructorMap_4148.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nil"), temp_11.readProperty_mWeakReferenceTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 90)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 91)), GALGAS_bool (false), var_weakReferenceIndex_4089, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 89)) ;
  }
  GALGAS_getterMap var_getterMap_4342 = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 96)) ;
  GALGAS_setterMap var_setterMap_4374 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 97)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4422 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 98)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_12 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_12.readProperty_mWeakReferenceTypeName (), GALGAS_bool (false), var_getterMap_4342, var_setterMap_4374, var_instanceMethodMap_4422, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 99)) ;
  }
  cEnumerator_getterMap enumerator_4754 (var_getterMap_4342, kENUMERATION_UP) ;
  while (enumerator_4754.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray13 ;
    inCompiler->emitSemanticError (enumerator_4754.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray13  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 112)) ;
    enumerator_4754.gotoNextObject () ;
  }
  cEnumerator_setterMap enumerator_4855 (var_setterMap_4374, kENUMERATION_UP) ;
  while (enumerator_4855.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticError (enumerator_4855.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray14  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 115)) ;
    enumerator_4855.gotoNextObject () ;
  }
  cEnumerator_instanceMethodMap enumerator_4956 (var_instanceMethodMap_4422, kENUMERATION_UP) ;
  while (enumerator_4956.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray15 ;
    inCompiler->emitSemanticError (enumerator_4956.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray15  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 118)) ;
    enumerator_4956.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_classIndex_5153 ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_16 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_16.readProperty_mClassTypeName (), var_classIndex_5153, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 121)) ;
  }
  const GALGAS_weakReferenceDeclarationAST temp_17 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_18 = this ;
  const GALGAS_weakReferenceDeclarationAST temp_19 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_5175 = GALGAS_unifiedTypeDefinition::constructor_new (temp_17.readProperty_mWeakReferenceTypeName (), temp_18.readProperty_mIsPredefined (), GALGAS_bool (true), var_superClassIndex_2889, GALGAS_typeKindEnum::constructor_weakReferenceType (var_classIndex_5153  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 127)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 129)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 130)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 131)), var_constructorMap_4148, GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 133)), GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 134)), GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 135)), GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 136)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 137)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 138)), GALGAS_operators::constructor_isReferenceEquatable (SOURCE_FILE ("type-weak-reference.galgas", 139)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 140)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 141)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 142)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 143)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 144)), var_generateHeaderInSeparateFile_2930, GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 146)), GALGAS_string ("nil"), GALGAS_string ("weak-reference-").add_operation (temp_19.readProperty_mWeakReferenceTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 148)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-weak-reference.galgas", 149))  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 122)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_5175, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 151)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_weakReferenceDeclarationAST temp_0 = this ;
  GALGAS_lstring var_weakRefTypeNameForUsefulness_6761 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 167)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_weakRefTypeNameForUsefulness_6761, var_weakRefTypeNameForUsefulness_6761, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 168)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_weakReferenceDeclarationAST temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_weakReferenceDeclarationAST temp_3 = this ;
      GALGAS_lstring var_superWeakRefNameForUsefulness_7015 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 170)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_weakRefTypeNameForUsefulness_6761, var_superWeakRefNameForUsefulness_7015 COMMA_SOURCE_FILE ("type-weak-reference.galgas", 171)) ;
      }
    }
  }
  const GALGAS_weakReferenceDeclarationAST temp_4 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_7243 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_4.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 174)) ;
  const GALGAS_weakReferenceDeclarationAST temp_5 = this ;
  GALGAS_unifiedTypeMapEntry temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 177)) ;
  }else if (kBoolFalse == test_7) {
    const GALGAS_weakReferenceDeclarationAST temp_8 = this ;
    temp_6 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_8.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 178)) ;
  }
  GALGAS_unifiedTypeMapEntry var_superClassEntry_7378 = temp_6 ;
  GALGAS_typedPropertyList var_allAttributeList_7762 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, var_superClassEntry_7378.objectCompare (GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 184)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      var_allAttributeList_7762 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 185)) ;
      GALGAS_bool var_generatedInSeparateFileFeature_7868 = GALGAS_bool (false) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_weakReferenceDeclarationAST temp_11 = this ;
        test_10 = GALGAS_bool (kIsStrictSup, temp_11.readProperty_mClassFeatureList ().getter_length (SOURCE_FILE ("type-weak-reference.galgas", 187)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 187)).getter_uint (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 187)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_weakReferenceDeclarationAST temp_12 = this ;
          cEnumerator_lstringlist enumerator_7942 (temp_12.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
          while (enumerator_7942.hasCurrentObject ()) {
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (kIsEqual, enumerator_7942.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
              if (kBoolTrue == test_13) {
                enumGalgasBool test_14 = kBoolTrue ;
                if (kBoolTrue == test_14) {
                  test_14 = var_generatedInSeparateFileFeature_7868.boolEnum () ;
                  if (kBoolTrue == test_14) {
                    TC_Array <C_FixItDescription> fixItArray15 ;
                    inCompiler->emitSemanticError (enumerator_7942.current_mValue (HERE).readProperty_location (), GALGAS_string ("the 'generatedInSeparateFile' is already named"), fixItArray15  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 191)) ;
                  }
                }
                var_generatedInSeparateFileFeature_7868 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_13) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (enumerator_7942.current_mValue (HERE).readProperty_location (), GALGAS_string ("only the 'generatedInSeparateFile' attribute is allowed here"), fixItArray16  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 195)) ;
            }
            enumerator_7942.gotoNextObject () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    var_allAttributeList_7762 = extensionGetter_definition (var_superClassEntry_7378, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 200)).readProperty_mAllTypedPropertyList () ;
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      const GALGAS_weakReferenceDeclarationAST temp_18 = this ;
      test_17 = GALGAS_bool (kIsStrictSup, temp_18.readProperty_mClassFeatureList ().getter_length (SOURCE_FILE ("type-weak-reference.galgas", 201)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 201)).getter_uint (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 201)))).boolEnum () ;
      if (kBoolTrue == test_17) {
        const GALGAS_weakReferenceDeclarationAST temp_19 = this ;
        cEnumerator_lstringlist enumerator_8492 (temp_19.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
        while (enumerator_8492.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (enumerator_8492.current_mValue (HERE).readProperty_location (), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray20  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 203)) ;
          enumerator_8492.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_8697 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 208)) ;
  GALGAS_propertyIndexMap var_attributeMap_8739 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 209)) ;
  const GALGAS_weakReferenceDeclarationAST temp_21 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_8808 (temp_21.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_8808.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_t_8844 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_8808.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 211)) ;
    GALGAS_bool var_hasSelector_8924 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_8948 (enumerator_8808.current_mAttributeList (HERE), kENUMERATION_UP) ;
    bool bool_22 = var_hasSelector_8924.operator_not (SOURCE_FILE ("type-weak-reference.galgas", 213)).isValidAndTrue () ;
    if (enumerator_8948.hasCurrentObject () && bool_22) {
      while (enumerator_8948.hasCurrentObject () && bool_22) {
        var_hasSelector_8924 = GALGAS_bool (kIsEqual, enumerator_8948.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))) ;
        enumerator_8948.gotoNextObject () ;
        if (enumerator_8948.hasCurrentObject ()) {
          bool_22 = var_hasSelector_8924.operator_not (SOURCE_FILE ("type-weak-reference.galgas", 213)).isValidAndTrue () ;
        }
      }
    }
    var_typedAttributeList_8697.addAssign_operation (var_t_8844, enumerator_8808.current_mPropertyName (HERE), enumerator_8808.current_mIsPublic (HERE), var_hasSelector_8924  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 216)) ;
    var_allAttributeList_7762.addAssign_operation (var_t_8844, enumerator_8808.current_mPropertyName (HERE), enumerator_8808.current_mIsPublic (HERE), var_hasSelector_8924  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 221)) ;
    {
    var_attributeMap_8739.setter_insertKey (enumerator_8808.current_mPropertyName (HERE), var_t_8844, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 226)) ;
    }
    enumerator_8808.gotoNextObject () ;
  }
  const GALGAS_weakReferenceDeclarationAST temp_23 = this ;
  GALGAS_unifiedTypeMapEntry var_referenceClassType_9336 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_23.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 229)) ;
  const GALGAS_weakReferenceDeclarationAST temp_24 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("weak reference ").add_operation (temp_24.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 233)), GALGAS_weakReferenceTypeForGeneration::constructor_new (var_selfType_7243, var_referenceClassType_9336, var_superClassEntry_7378, var_allAttributeList_7762, var_typedAttributeList_8697, extensionGetter_definition (var_selfType_7243, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 240)).readProperty_mGenerateHeaderInSeparateFile ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 234))  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 232)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_weakReferenceTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_weakReferenceTypeForGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 260)).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 260)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_weakReferenceTypeForGeneration temp_2 = this ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 261)) ;
    }
  }
  const GALGAS_weakReferenceTypeForGeneration temp_3 = this ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReferenceClassType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 263)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_4 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_10944 = extensionGetter_definition (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 264)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_5 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_6 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_7 = this ;
  GALGAS_string temp_8 ;
  const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 268)).boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_9) {
    const GALGAS_weakReferenceTypeForGeneration temp_10 = this ;
    temp_8 = extensionGetter_identifierRepresentation (temp_10.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 268)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeHeader_31_ (inCompiler, extensionGetter_identifierRepresentation (temp_5.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 266)), extensionGetter_identifierRepresentation (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 267)), temp_8, GALGAS_bool (kIsNotEqual, var_typedefinition_10944.readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 265))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_typedefinition_10944.readProperty_mTypeName ().readProperty_string (), var_typedefinition_10944.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 273)), var_typedefinition_10944.readProperty_mIsConcrete (), var_typedefinition_10944.readProperty_mConstructorMap (), var_typedefinition_10944.readProperty_mGetterMap (), var_typedefinition_10944.readProperty_mSetterMap (), var_typedefinition_10944.readProperty_mInstanceMethodMap (), var_typedefinition_10944.readProperty_mClassMethodMap (), var_typedefinition_10944.readProperty_mOptionalMethodMap (), var_typedefinition_10944.readProperty_mEnumerationDescriptor (), var_typedefinition_10944.readProperty_mHandledOperatorFlags (), var_typedefinition_10944.readProperty_mAddAssignOperatorArguments (), var_typedefinition_10944.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-weak-reference.galgas", 271))), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 271)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_weakReferenceTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_weakReferenceTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 295)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_typedefinition_12304 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 296)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_2 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_3 = this ;
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = temp_3.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 300)).boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_5) {
    const GALGAS_weakReferenceTypeForGeneration temp_6 = this ;
    temp_4 = extensionGetter_identifierRepresentation (temp_6.readProperty_mSuperClass (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 300)) ;
  }
  const GALGAS_weakReferenceTypeForGeneration temp_7 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_8 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_9 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_10 = this ;
  const GALGAS_weakReferenceTypeForGeneration temp_11 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mReferenceClassType (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 298)), var_typedefinition_12304.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 299)), temp_4, temp_7.readProperty_mTypedAttributeList (), temp_8.readProperty_mAllTypedPropertyList (), temp_9.readProperty_mAllTypedPropertyList ().getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint (uint32_t (0U)), temp_10.readProperty_mAllTypedPropertyList ().getter_length (SOURCE_FILE ("type-weak-reference.galgas", 303)).substract_operation (temp_11.readProperty_mTypedAttributeList ().getter_length (SOURCE_FILE ("type-weak-reference.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 303))  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 303)), GALGAS_bool (kIsNotEqual, var_typedefinition_12304.readProperty_mDefaultConstructorName ().objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 297))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_4453 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 128)), temp_1.readProperty_mEnumTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-enum.galgas", 128)) ;
  {
  const GALGAS_enumDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4453, temp_2, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 129)) ;
  }
  GALGAS_bool var_circularReference_4695 = GALGAS_bool (true) ;
  const GALGAS_enumDeclarationAST temp_3 = this ;
  cEnumerator_enumConstantList enumerator_4742 (temp_3.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_4 = var_circularReference_4695.isValidAndTrue () ;
  if (enumerator_4742.hasCurrentObject () && bool_4) {
    while (enumerator_4742.hasCurrentObject () && bool_4) {
      GALGAS_bool var_namesCurrentType_4817 = GALGAS_bool (false) ;
      cEnumerator__32_lstringlist enumerator_4844 (enumerator_4742.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
      bool bool_5 = var_namesCurrentType_4817.operator_not (SOURCE_FILE ("type-enum.galgas", 134)).isValidAndTrue () ;
      if (enumerator_4844.hasCurrentObject () && bool_5) {
        while (enumerator_4844.hasCurrentObject () && bool_5) {
          GALGAS_lstring var_propertyKey_4931 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_4844.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 135)), enumerator_4844.current_mValue_30_ (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-enum.galgas", 135)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, var_propertyKey_4931.readProperty_string ().objectCompare (var_key_4453.readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_namesCurrentType_4817 = GALGAS_bool (true) ;
            }
          }
          enumerator_4844.gotoNextObject () ;
          if (enumerator_4844.hasCurrentObject ()) {
            bool_5 = var_namesCurrentType_4817.operator_not (SOURCE_FILE ("type-enum.galgas", 134)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_namesCurrentType_4817.operator_not (SOURCE_FILE ("type-enum.galgas", 140)).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_circularReference_4695 = GALGAS_bool (false) ;
        }
      }
      enumerator_4742.gotoNextObject () ;
      if (enumerator_4742.hasCurrentObject ()) {
        bool_4 = var_circularReference_4695.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_circularReference_4695.boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumDeclarationAST temp_9 = this ;
      cEnumerator_enumConstantList enumerator_5293 (temp_9.readProperty_mConstantList (), kENUMERATION_UP) ;
      while (enumerator_5293.hasCurrentObject ()) {
        cEnumerator__32_lstringlist enumerator_5340 (enumerator_5293.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_5340.hasCurrentObject ()) {
          GALGAS_lstring var_propertyKey_5402 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_5340.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 148)), enumerator_5340.current_mValue_30_ (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-enum.galgas", 148)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsNotEqual, var_propertyKey_5402.readProperty_string ().objectCompare (var_key_4453.readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              {
              ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4453, var_propertyKey_5402 COMMA_SOURCE_FILE ("type-enum.galgas", 150)) ;
              }
            }
          }
          enumerator_5340.gotoNextObject () ;
        }
        enumerator_5293.gotoNextObject () ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_constructorMap var_constructorMap_6333 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 167)) ;
  GALGAS_setterMap var_setterMap_6365 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 168)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6413 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 169)) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_6504 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 171)) ;
  GALGAS_unifiedTypeMapEntry var_enumTypeEntry_6619 ;
  {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mEnumTypeName (), var_enumTypeEntry_6619, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 173)) ;
  }
  GALGAS_constantIndexMap var_constantMap_6674 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 175)) ;
  GALGAS_bool var_hasAssociatedValues_6711 = GALGAS_bool (false) ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  cEnumerator_enumConstantList enumerator_6771 (temp_1.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_6771.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_6849 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 178)) ;
    GALGAS_functionSignature var_argumentTypeList_6898 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 179)) ;
    cEnumerator__32_lstringlist enumerator_6934 (enumerator_6771.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_6934.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_7054 ;
      {
      extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_6934.current_mValue_30_ (HERE), var_associatedTypeEntry_7054, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 181)) ;
      }
      var_argumentTypeList_6898.addAssign_operation (enumerator_6934.current_mValue_31_ (HERE), var_associatedTypeEntry_7054, enumerator_6934.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 182)) ;
      var_associatedTypeList_6849.addAssign_operation (var_associatedTypeEntry_7054  COMMA_SOURCE_FILE ("type-enum.galgas", 183)) ;
      var_hasAssociatedValues_6711 = GALGAS_bool (true) ;
      enumerator_6934.gotoNextObject () ;
    }
    {
    var_constantMap_6674.setter_insertKey (enumerator_6771.current_mConstantName (HERE), var_constantMap_6674.getter_count (SOURCE_FILE ("type-enum.galgas", 186)), var_associatedTypeList_6849, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 186)) ;
    }
    {
    var_constructorMap_6333.setter_insertOrReplace (enumerator_6771.current_mConstantName (HERE), var_argumentTypeList_6898, GALGAS_bool (false), var_enumTypeEntry_6619 COMMA_SOURCE_FILE ("type-enum.galgas", 187)) ;
    }
    enumerator_6771.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_2 = this ;
  cEnumerator_enumConstantList enumerator_7503 (temp_2.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_7503.hasCurrentObject ()) {
    GALGAS_optionalMethodSignature var_argumentTypeList_7579 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 196)) ;
    cEnumerator__32_lstringlist enumerator_7615 (enumerator_7503.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_7615.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_7735 ;
      {
      extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_7615.current_mValue_30_ (HERE), var_associatedTypeEntry_7735, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 198)) ;
      }
      var_argumentTypeList_7579.addAssign_operation (GALGAS_bool (false), enumerator_7615.current_mValue_31_ (HERE), var_associatedTypeEntry_7735, enumerator_7615.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 199)) ;
      enumerator_7615.gotoNextObject () ;
    }
    {
    var_optionalMethodMap_6504.setter_insertKey (enumerator_7503.current_mConstantName (HERE), var_argumentTypeList_7579, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 201)) ;
    }
    enumerator_7503.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_3 = this ;
  cEnumerator_enumConstantList enumerator_7995 (temp_3.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_7995.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_7995.current_mAssociatedValueDefinitionList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 208)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 208)).getter_uint (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 208)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_unifiedTypeMapEntryList var_associatedTypeList_8131 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 209)) ;
        GALGAS_formalParameterSignature var_argumentTypeList_8189 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 210)) ;
        cEnumerator__32_lstringlist enumerator_8227 (enumerator_7995.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_8227.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_8349 ;
          {
          extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8227.current_mValue_30_ (HERE), var_associatedTypeEntry_8349, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 212)) ;
          }
          var_argumentTypeList_8189.addAssign_operation (enumerator_8227.current_mValue_31_ (HERE), var_associatedTypeEntry_8349, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-enum.galgas", 213)), enumerator_8227.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 213)) ;
          var_associatedTypeList_8131.addAssign_operation (var_associatedTypeEntry_8349  COMMA_SOURCE_FILE ("type-enum.galgas", 214)) ;
          var_hasAssociatedValues_6711 = GALGAS_bool (true) ;
          enumerator_8227.gotoNextObject () ;
        }
        {
        var_instanceMethodMap_6413.setter_insertKey (enumerator_7995.current_mConstantName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-enum.galgas", 219)), var_argumentTypeList_8189, enumerator_7995.current_mConstantName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-enum.galgas", 223)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-enum.galgas", 224)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 217)) ;
        }
      }
    }
    enumerator_7995.gotoNextObject () ;
  }
  GALGAS_getterMap var_getterMap_8878 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_8878, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 230)) ;
  }
  const GALGAS_enumDeclarationAST temp_5 = this ;
  cEnumerator_enumConstantList enumerator_8902 (temp_5.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_8902.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument (var_getterMap_8878, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("is").add_operation (enumerator_8902.current_mConstantName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-enum.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 235)), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 232)) ;
    }
    enumerator_8902.gotoNextObject () ;
  }
  {
  const GALGAS_enumDeclarationAST temp_6 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_6.readProperty_mEnumTypeName (), GALGAS_bool (false), var_getterMap_8878, var_setterMap_6365, var_instanceMethodMap_6413, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 241)) ;
  }
  GALGAS_string var_defaultConstructorName_9532 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_enumDeclarationAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mDefaultConstantName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_unifiedTypeMapEntryList var_associatedTypeList_9691 ;
      const GALGAS_enumDeclarationAST temp_9 = this ;
      GALGAS_uint joker_9666 ; // Joker input parameter
      var_constantMap_6674.method_searchKey (temp_9.readProperty_mDefaultConstantName (), joker_9666, var_associatedTypeList_9691, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 256)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (kIsEqual, var_associatedTypeList_9691.getter_length (SOURCE_FILE ("type-enum.galgas", 257)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 257)).getter_uint (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 257)))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_enumDeclarationAST temp_11 = this ;
          var_defaultConstructorName_9532 = temp_11.readProperty_mDefaultConstantName ().readProperty_string () ;
        }
      }
      if (kBoolFalse == test_10) {
        const GALGAS_enumDeclarationAST temp_12 = this ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mDefaultConstantName ().readProperty_location (), GALGAS_string ("the default constant should have no associated values"), fixItArray13  COMMA_SOURCE_FILE ("type-enum.galgas", 260)) ;
      }
    }
  }
  const GALGAS_enumDeclarationAST temp_14 = this ;
  const GALGAS_enumDeclarationAST temp_15 = this ;
  const GALGAS_enumDeclarationAST temp_16 = this ;
  const GALGAS_enumDeclarationAST temp_17 = this ;
  GALGAS_headerKind temp_18 ;
  const enumGalgasBool test_19 = var_hasAssociatedValues_6711.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-enum.galgas", 291)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-enum.galgas", 291)) ;
  }
  GALGAS_unifiedTypeDefinition var_typeDefinition_9969 = GALGAS_unifiedTypeDefinition::constructor_new (temp_14.readProperty_mEnumTypeName (), temp_15.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-enum.galgas", 268)), GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("type-enum.galgas", 269)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 271)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 272)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 273)), var_constructorMap_6333, var_getterMap_8878, var_setterMap_6365, var_instanceMethodMap_6413, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 278)), var_optionalMethodMap_6504, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 280)), GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-enum.galgas", 281)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-enum.galgas", 281)) COMMA_SOURCE_FILE ("type-enum.galgas", 281)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 282)), var_constantMap_6674, temp_16.readProperty_mConstantList (), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 285)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 286)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-enum.galgas", 288)), var_defaultConstructorName_9532, GALGAS_string ("enum-").add_operation (temp_17.readProperty_mEnumTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-enum.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 290)), temp_18  COMMA_SOURCE_FILE ("type-enum.galgas", 264)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_9969, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 293)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_enumDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_11523 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mEnumTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 309)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11523, var_nameForUsefulness_11523, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 310)) ;
  }
  GALGAS_stringlist var_constantList_11690 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 312)) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration_11774 = GALGAS_enumConstantListForGeneration::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 313)) ;
  GALGAS_constantIndexMap var_constantMap_11797 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 314)) ;
  const GALGAS_enumDeclarationAST temp_1 = this ;
  cEnumerator_enumConstantList enumerator_11872 (temp_1.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_11872.hasCurrentObject ()) {
    var_constantList_11690.addAssign_operation (enumerator_11872.current_mConstantName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 316)) ;
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_11992 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 317)) ;
    GALGAS_stringset var_associatedValueNameSet_12039 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-enum.galgas", 318)) ;
    cEnumerator__32_lstringlist enumerator_12069 (enumerator_11872.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_12069.hasCurrentObject ()) {
      GALGAS_lstring var_propertyTypeNameForUsefulness_12147 = function_typeNameForUsefulEntitiesGraph (enumerator_12069.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 320)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_11523, var_propertyTypeNameForUsefulness_12147 COMMA_SOURCE_FILE ("type-enum.galgas", 321)) ;
      }
      GALGAS_unifiedTypeMapEntry var_associatedTypeEntry_12311 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_12069.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 322)) ;
      var_associatedTypeList_11992.addAssign_operation (var_associatedTypeEntry_12311  COMMA_SOURCE_FILE ("type-enum.galgas", 323)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_associatedValueNameSet_12039.getter_hasKey (enumerator_12069.current_mValue_31_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-enum.galgas", 324)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_12069.current_mValue_31_ (HERE).readProperty_location (), GALGAS_string ("duplicated name"), fixItArray3  COMMA_SOURCE_FILE ("type-enum.galgas", 325)) ;
        }
      }
      var_associatedValueNameSet_12039.addAssign_operation (enumerator_12069.current_mValue_31_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 327)) ;
      enumerator_12069.gotoNextObject () ;
    }
    {
    var_constantMap_11797.setter_insertKey (enumerator_11872.current_mConstantName (HERE), var_constantMap_11797.getter_count (SOURCE_FILE ("type-enum.galgas", 329)), var_associatedTypeList_11992, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 329)) ;
    }
    var_enumConstantListForGeneration_11774.addAssign_operation (enumerator_11872.current_mConstantName (HERE).readProperty_string (), var_associatedTypeList_11992  COMMA_SOURCE_FILE ("type-enum.galgas", 330)) ;
    enumerator_11872.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_4 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_12771 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_4.readProperty_mEnumTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 333)) ;
  const GALGAS_enumDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (temp_5.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 335)), GALGAS_enumTypeForGeneration::constructor_new (var_selfType_12771, var_enumConstantListForGeneration_11774  COMMA_SOURCE_FILE ("type-enum.galgas", 336))  COMMA_SOURCE_FILE ("type-enum.galgas", 334)) ;
}
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
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" enum"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).stringValue () ;
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
  GALGAS_uint index_652_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_652 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_652.hasCurrentObject ()) {
      result << ",\n"
        "    kEnum_" ;
      result << enumerator_652.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 15)).stringValue () ;
      index_652_.increment () ;
      enumerator_652.gotoNextObject () ;
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
    GALGAS_uint index_290_ (0) ;
    if (in_CONSTANT_5F_LIST.isValid ()) {
      cEnumerator_enumConstantListForGeneration enumerator_290 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_290.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_290.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 8)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 8)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 8)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "//----------------------------------------------------------------------------------------------------------------------\n"
            "\n"
            "class cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_290.current_mConstantName (HERE).stringValue () ;
          result << " : public cEnumAssociatedValues {\n" ;
          GALGAS_uint index_631_idx (0) ;
          if (enumerator_290.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapEntryList enumerator_631 (enumerator_290.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_631.hasCurrentObject ()) {
              result << "  public: const GALGAS_" ;
              result << extensionGetter_identifierRepresentation (enumerator_631.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " mAssociatedValue" ;
              result << index_631_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " ;\n" ;
              index_631_idx.increment () ;
              enumerator_631.gotoNextObject () ;
            }
          }
          result << "\n"
            "//--- Constructor\n"
            "  public: cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_290.current_mConstantName (HERE).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_916_idx (0) ;
          if (enumerator_290.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapEntryList enumerator_916 (enumerator_290.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_916.hasCurrentObject ()) {
              result << "const GALGAS_" ;
              result << extensionGetter_identifierRepresentation (enumerator_916.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              result << " inAssociatedValue" ;
              result << index_916_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              if (enumerator_916.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_916_idx.increment () ;
              enumerator_916.gotoNextObject () ;
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
          result << enumerator_290.current_mConstantName (HERE).stringValue () ;
          result << " (void) {}\n"
            "} ;\n"
            "\n" ;
        }else if (kBoolFalse == test_1) {
        }
        index_290_.increment () ;
        enumerator_290.gotoNextObject () ;
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
  GALGAS_uint index_65_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_65 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_65.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_65.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 3)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 3)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 3)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << "::cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_432_idx (0) ;
        if (enumerator_65.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_432 (enumerator_65.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_432.hasCurrentObject ()) {
            result << "const GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_432.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue () ;
            result << " inAssociatedValue" ;
            result << index_432_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue () ;
            if (enumerator_432.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_432_idx.increment () ;
            enumerator_432.gotoNextObject () ;
          }
        }
        result << "\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) :\n"
          "cEnumAssociatedValues (THERE)" ;
        GALGAS_uint index_672_idx (0) ;
        if (enumerator_65.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_672 (enumerator_65.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_672.hasCurrentObject ()) {
            result << ",\n"
              "mAssociatedValue" ;
            result << index_672_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue () ;
            result << " (inAssociatedValue" ;
            result << index_672_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue () ;
            result << ")" ;
            index_672_idx.increment () ;
            enumerator_672.gotoNextObject () ;
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
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << "::description (" ;
        columnMarker = result.currentColumn () ;
        result << "C_String & ioString,\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "const int32_t inIndentation) const {\n"
          "  ioString << \"(\\n\" ;\n" ;
        GALGAS_uint index_1179_idx (0) ;
        if (enumerator_65.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_1179 (enumerator_65.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1179.hasCurrentObject ()) {
            result << "  mAssociatedValue" ;
            result << index_1179_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 22)).stringValue () ;
            result << ".description (ioString, inIndentation) ;\n" ;
            index_1179_idx.increment () ;
            enumerator_1179.gotoNextObject () ;
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
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << "::compare (const cEnumAssociatedValues * inOperand) const {\n"
          "  const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = dynamic_cast<const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << " *> (inOperand) ;\n"
          "  macroValidPointer (ptr) ;\n"
          "  typeComparisonResult result = kOperandEqual ;\n" ;
        GALGAS_uint index_1913_idx (0) ;
        if (enumerator_65.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_1913 (enumerator_65.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1913.hasCurrentObject ()) {
            result << "  if (result == kOperandEqual) {\n"
              "    result = mAssociatedValue" ;
            result << index_1913_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue () ;
            result << ".objectCompare (ptr->mAssociatedValue" ;
            result << index_1913_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue () ;
            result << ") ;\n"
              "  }\n" ;
            index_1913_idx.increment () ;
            enumerator_1913.gotoNextObject () ;
          }
        }
        result << "  return result ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_65_.increment () ;
      enumerator_65.gotoNextObject () ;
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
  GALGAS_uint index_2477_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_2477 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2477.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_2477.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 54)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_2477.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 55)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 55)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 55)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "UNUSED_LOCATION_ARGS" ;
      }else if (kBoolFalse == test_2) {
        GALGAS_uint index_2867_idx (0) ;
        if (enumerator_2477.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_2867 (enumerator_2477.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_2867.hasCurrentObject ()) {
            result << "const GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_2867.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue () ;
            result << " & inAssociatedValue" ;
            result << index_2867_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue () ;
            if (enumerator_2867.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_2867_idx.increment () ;
            enumerator_2867.gotoNextObject () ;
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
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2477.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 66)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 66)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 66)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  result.mEnum = kEnum_" ;
        result << enumerator_2477.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 67)).stringValue () ;
        result << " ;\n" ;
      }else if (kBoolFalse == test_3) {
        result << "  if (" ;
        GALGAS_uint index_3277_idx (0) ;
        if (enumerator_2477.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_3277 (enumerator_2477.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_3277.hasCurrentObject ()) {
            result << "inAssociatedValue" ;
            result << index_3277_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 71)).stringValue () ;
            result << ".isValid ()" ;
            if (enumerator_3277.hasNextObject ()) {
              result << " && " ;
            }
            index_3277_idx.increment () ;
            enumerator_3277.gotoNextObject () ;
          }
        }
        result << ") {\n"
          "    result.mEnum = kEnum_" ;
        result << enumerator_2477.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 75)).stringValue () ;
        result << " ;\n"
          "    cEnumAssociatedValues * ptr = NULL ;\n"
          "    macroMyNew (ptr, cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_2477.current_mConstantName (HERE).stringValue () ;
        result << " (" ;
        GALGAS_uint index_3638_idx (0) ;
        if (enumerator_2477.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_3638 (enumerator_2477.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_3638.hasCurrentObject ()) {
            result << "inAssociatedValue" ;
            result << index_3638_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).stringValue () ;
            if (enumerator_3638.hasNextObject ()) {
              result << ", " ;
            }
            index_3638_idx.increment () ;
            enumerator_3638.gotoNextObject () ;
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
      index_2477_.increment () ;
      enumerator_2477.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3943_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_3943 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3943.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, enumerator_3943.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 92)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 92)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 92)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::method_" ;
        result << enumerator_3943.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 94)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_4272_idx (0) ;
        if (enumerator_3943.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4272 (enumerator_3943.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4272.hasCurrentObject ()) {
            result << "GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_4272.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue () ;
            result << " & outAssociatedValue" ;
            result << index_4272_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue () ;
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            index_4272_idx.increment () ;
            enumerator_4272.gotoNextObject () ;
          }
        }
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "C_Compiler * inCompiler\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) const {\n"
          "  if (mEnum != kEnum_" ;
        result << enumerator_3943.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 100)).stringValue () ;
        result << ") {\n" ;
        GALGAS_uint index_4578_idx (0) ;
        if (enumerator_3943.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4578 (enumerator_3943.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4578.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_4578_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 102)).stringValue () ;
            result << ".drop () ;\n" ;
            index_4578_idx.increment () ;
            enumerator_4578.gotoNextObject () ;
          }
        }
        result << "    C_String s ;\n"
          "    s << \"method @" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " " ;
        result << enumerator_3943.current_mConstantName (HERE).stringValue () ;
        result << " invoked with an invalid enum value\" ;\n"
          "    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n"
          "  }else{\n"
          "    const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_3943.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_3943.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n" ;
        GALGAS_uint index_5081_idx (0) ;
        if (enumerator_3943.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_5081 (enumerator_3943.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_5081.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_5081_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue () ;
            result << " = ptr->mAssociatedValue" ;
            result << index_5081_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue () ;
            result << " ;\n" ;
            index_5081_idx.increment () ;
            enumerator_5081.gotoNextObject () ;
          }
        }
        result << "  }\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_4) {
      }
      index_3943_.increment () ;
      enumerator_3943.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5279_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_5279 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5279.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::optional_" ;
      result << enumerator_5279.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 120)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_5566_idx (0) ;
      if (enumerator_5279.current_mAssociatedValueTypeList (HERE).isValid ()) {
        cEnumerator_unifiedTypeMapEntryList enumerator_5566 (enumerator_5279.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
        while (enumerator_5566.hasCurrentObject ()) {
          result << "GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_5566.current_mEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue () ;
          result << " & outAssociatedValue" ;
          result << index_5566_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue () ;
          if (enumerator_5566.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_5566_idx.increment () ;
          enumerator_5566.gotoNextObject () ;
        }
      }
      result << ") const {\n"
        "  const bool ok = mEnum == kEnum_" ;
      result << enumerator_5279.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 128)).stringValue () ;
      result << " ;\n" ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, enumerator_5279.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 129)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 129)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 129)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        result << "  if (ok) {\n"
          "    const auto * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5279.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n"
          "    // const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5279.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5279.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n" ;
        GALGAS_uint index_6225_idx (0) ;
        if (enumerator_5279.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_6225 (enumerator_5279.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_6225.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_6225_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 134)).stringValue () ;
            result << " = ptr->mAssociatedValue" ;
            result << index_6225_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 134)).stringValue () ;
            result << " ;\n" ;
            index_6225_idx.increment () ;
            enumerator_6225.gotoNextObject () ;
          }
        }
        result << "  }\n" ;
      }else if (kBoolFalse == test_5) {
      }
      result << "  return ok ;\n"
        "}\n"
        "\n" ;
      index_5279_.increment () ;
      enumerator_5279.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static const char * gEnumNameArrayFor_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " [" ;
  result << in_CONSTANT_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 144)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 144)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 144)), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 144)).getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 144)).stringValue () ;
  result << "] = {\n"
    "  \"(not built)\"" ;
  GALGAS_uint index_6703_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6703 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6703.hasCurrentObject ()) {
      result << ",\n"
        "  " ;
      result << enumerator_6703.current_mConstantName (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 147)).stringValue () ;
      index_6703_.increment () ;
      enumerator_6703.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n" ;
  GALGAS_uint index_6823_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6823 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6823.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_is" ;
      result << enumerator_6823.current_mConstantName (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n"
        "  return GALGAS_bool (kNotBuilt != mEnum, kEnum_" ;
      result << enumerator_6823.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 156)).stringValue () ;
      result << " == mEnum) ;\n"
        "}\n"
        "\n" ;
      index_6823_.increment () ;
      enumerator_6823.gotoNextObject () ;
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

void cPtr_enumTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                               GALGAS_string & outArgument_outHeader,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool var_hasAssociatedValues_14764 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_14806 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_14764.operator_not (SOURCE_FILE ("type-enum.galgas", 389)).isValidAndTrue () ;
  if (enumerator_14806.hasCurrentObject () && bool_1) {
    while (enumerator_14806.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_14764 = GALGAS_bool (kIsStrictSup, enumerator_14806.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 390)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 390)).getter_uint (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 390)))) ;
      enumerator_14806.gotoNextObject () ;
      if (enumerator_14806.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_14764.operator_not (SOURCE_FILE ("type-enum.galgas", 389)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_14957 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 392)) ;
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, var_selfTypedefinition_14957.readProperty_mTypeName ().readProperty_string (), var_selfTypedefinition_14957.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 395)), temp_3.readProperty_mConstantList (), var_hasAssociatedValues_14764 COMMA_SOURCE_FILE ("type-enum.galgas", 393))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_14957.readProperty_mTypeName ().readProperty_string (), var_selfTypedefinition_14957.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 401)), var_selfTypedefinition_14957.readProperty_mIsConcrete (), var_selfTypedefinition_14957.readProperty_mConstructorMap (), var_selfTypedefinition_14957.readProperty_mGetterMap (), var_selfTypedefinition_14957.readProperty_mSetterMap (), var_selfTypedefinition_14957.readProperty_mInstanceMethodMap (), var_selfTypedefinition_14957.readProperty_mClassMethodMap (), var_selfTypedefinition_14957.readProperty_mOptionalMethodMap (), var_selfTypedefinition_14957.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_14957.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_14957.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_14957.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-enum.galgas", 399))), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 399)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendDeclaration2'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendDeclaration_32_ (const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                               GALGAS_string & outArgument_outHeader,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool var_hasAssociatedValues_16184 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_16226 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_16184.operator_not (SOURCE_FILE ("type-enum.galgas", 424)).isValidAndTrue () ;
  if (enumerator_16226.hasCurrentObject () && bool_1) {
    while (enumerator_16226.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_16184 = GALGAS_bool (kIsStrictSup, enumerator_16226.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 425)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 425)).getter_uint (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 425)))) ;
      enumerator_16226.gotoNextObject () ;
      if (enumerator_16226.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_16184.operator_not (SOURCE_FILE ("type-enum.galgas", 424)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_16386 (temp_2.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_16386.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapEntryList enumerator_16427 (enumerator_16386.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
    while (enumerator_16427.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName_31_ (enumerator_16427.current_mEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 429)) ;
      enumerator_16427.gotoNextObject () ;
    }
    enumerator_16386.gotoNextObject () ;
  }
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_16548 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 432)) ;
  const GALGAS_enumTypeForGeneration temp_4 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (inCompiler, var_selfTypedefinition_16548.readProperty_mTypeName ().readProperty_string (), var_selfTypedefinition_16548.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 435)), temp_4.readProperty_mConstantList (), var_hasAssociatedValues_16184 COMMA_SOURCE_FILE ("type-enum.galgas", 433))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_string & outArgument_outImplementation,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool var_hasAssociatedValues_17138 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = this ;
  cEnumerator_enumConstantListForGeneration enumerator_17180 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_17138.operator_not (SOURCE_FILE ("type-enum.galgas", 449)).isValidAndTrue () ;
  if (enumerator_17180.hasCurrentObject () && bool_1) {
    while (enumerator_17180.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_17138 = GALGAS_bool (kIsStrictSup, enumerator_17180.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 450)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 450)).getter_uint (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 450)))) ;
      enumerator_17180.gotoNextObject () ;
      if (enumerator_17180.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_17138.operator_not (SOURCE_FILE ("type-enum.galgas", 449)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 452)) ;
  const GALGAS_enumTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_17390 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 453)) ;
  const GALGAS_enumTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, var_selfTypedefinition_17390.readProperty_mTypeName ().readProperty_string (), var_selfTypedefinition_17390.readProperty_mTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-enum.galgas", 456)), temp_4.readProperty_mConstantList (), var_hasAssociatedValues_17138 COMMA_SOURCE_FILE ("type-enum.galgas", 454))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                    GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                    GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                    GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                    GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_11974 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 313)), temp_1.readProperty_mExternTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-extern.galgas", 313)) ;
  {
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_11974, temp_2, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 314)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                              const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                              const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                              GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_getterMap var_getterMap_12876 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_12876, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 327)) ;
  }
  GALGAS_constructorMap var_constructorMap_12915 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 328)) ;
  GALGAS_setterMap var_setterMap_12947 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 329)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_12995 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 330)) ;
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  cEnumerator_externTypeConstructorList enumerator_13073 (temp_0.readProperty_mExternTypeConstructorList (), kENUMERATION_UP) ;
  while (enumerator_13073.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_returnedTypeEntry_13196 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_13073.current_mResultTypeName (HERE), var_returnedTypeEntry_13196, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 333)) ;
    }
    GALGAS_functionSignature var_arguments_13241 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 335)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_13317 (enumerator_13073.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_13317.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentTypeEntry_13434 ;
      {
      extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_13317.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_13434, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 337)) ;
      }
      var_arguments_13241.addAssign_operation (enumerator_13317.current_mFormalSelector (HERE), var_argumentTypeEntry_13434, enumerator_13317.current_mFormalParameterName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 338)) ;
      enumerator_13317.gotoNextObject () ;
    }
    {
    var_constructorMap_12915.setter_insertKey (enumerator_13073.current_mConstructorName (HERE), var_arguments_13241, GALGAS_bool (true), var_returnedTypeEntry_13196, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 341)) ;
    }
    enumerator_13073.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  cEnumerator_externTypeGetterList enumerator_13753 (temp_1.readProperty_mExternTypeGetterList (), kENUMERATION_UP) ;
  while (enumerator_13753.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_returnedTypeEntry_13871 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_13753.current_mResultTypeName (HERE), var_returnedTypeEntry_13871, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 350)) ;
    }
    GALGAS_functionSignature var_arguments_13916 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 352)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_13992 (enumerator_13753.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_13992.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentTypeEntry_14109 ;
      {
      extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_13992.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_14109, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 354)) ;
      }
      var_arguments_13916.addAssign_operation (enumerator_13992.current_mFormalSelector (HERE), var_argumentTypeEntry_14109, enumerator_13992.current_mFormalParameterName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 355)) ;
      enumerator_13992.gotoNextObject () ;
    }
    {
    var_getterMap_12876.setter_insertKey (enumerator_13753.current_mGetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 360)), var_arguments_13916, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 362)), GALGAS_bool (true), var_returnedTypeEntry_13871, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 365)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 358)) ;
    }
    enumerator_13753.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  cEnumerator_externTypeSetterList enumerator_14533 (temp_2.readProperty_mExternTypeSetterList (), kENUMERATION_UP) ;
  while (enumerator_14533.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_14618 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 371)) ;
    cEnumerator_formalParameterListAST enumerator_14721 (enumerator_14533.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_14721.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_14881 ;
      {
      extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_14721.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_14881, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 373)) ;
      }
      var_routineSignature_14618.addAssign_operation (enumerator_14721.current_mFormalSelector (HERE), var_parameterTypeIndex_14881, enumerator_14721.current_mFormalArgumentPassingMode (HERE), enumerator_14721.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 377)) ;
      enumerator_14721.gotoNextObject () ;
    }
    {
    var_setterMap_12947.setter_insertKey (enumerator_14533.current_mSetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 382)), var_routineSignature_14618, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 385)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 380)) ;
    }
    enumerator_14533.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_3 = this ;
  cEnumerator_externTypeMethodList enumerator_15326 (temp_3.readProperty_mExternTypeMethodList (), kENUMERATION_UP) ;
  while (enumerator_15326.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_15385 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 391)) ;
    cEnumerator_formalParameterListAST enumerator_15514 (enumerator_15326.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_15514.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_15653 ;
      {
      extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_15514.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_15653, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 393)) ;
      }
      var_routineSignature_15385.addAssign_operation (enumerator_15514.current_mFormalSelector (HERE), var_parameterTypeIndex_15653, enumerator_15514.current_mFormalArgumentPassingMode (HERE), enumerator_15514.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 397)) ;
      enumerator_15514.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_12995.setter_insertKey (enumerator_15326.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 402)), var_routineSignature_15385, enumerator_15326.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 406)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-extern.galgas", 407)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 400)) ;
    }
    enumerator_15326.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_4 = this ;
  const GALGAS_externTypeDeclarationAST temp_5 = this ;
  const GALGAS_externTypeDeclarationAST temp_6 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_16132 = GALGAS_unifiedTypeDefinition::constructor_new (temp_4.readProperty_mExternTypeName (), temp_5.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-extern.galgas", 416)), GALGAS_typeKindEnum::constructor_externType (SOURCE_FILE ("type-extern.galgas", 417)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 419)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 420)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 421)), var_constructorMap_12915, var_getterMap_12876, var_setterMap_12947, var_instanceMethodMap_12995, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 426)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 427)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 428)), GALGAS_operators::constructor_none (SOURCE_FILE ("type-extern.galgas", 429)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 430)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 431)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 432)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 433)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 434)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-extern.galgas", 436)), GALGAS_string ("default"), GALGAS_string ("externtype-").add_operation (temp_6.readProperty_mExternTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-extern.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 438)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-extern.galgas", 439))  COMMA_SOURCE_FILE ("type-extern.galgas", 412)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_16132, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 441)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                             const GALGAS_string /* constinArgument_inProductDirectory */,
                                                             const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                             const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                             GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_17599 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 457)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17599, var_nameForUsefulness_17599, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 458)) ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = this ;
  const GALGAS_externTypeDeclarationAST temp_2 = this ;
  const GALGAS_externTypeDeclarationAST temp_3 = this ;
  const GALGAS_externTypeDeclarationAST temp_4 = this ;
  const GALGAS_externTypeDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (temp_1.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 461)), GALGAS_externTypeDeclarationForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_2.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 463)), temp_3.readProperty_mExternTypeName ().readProperty_string (), temp_4.readProperty_mCppPreDeclarationCode (), temp_5.readProperty_mCppClassCode ()  COMMA_SOURCE_FILE ("type-extern.galgas", 462))  COMMA_SOURCE_FILE ("type-extern.galgas", 460)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_externTypeDeclarationForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_18806 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 485)) ;
  const GALGAS_externTypeDeclarationForGeneration temp_1 = this ;
  const GALGAS_externTypeDeclarationForGeneration temp_2 = this ;
  const GALGAS_externTypeDeclarationForGeneration temp_3 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, var_selfTypedefinition_18806.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 488)), temp_2.readProperty_mCppPreDeclarationCode (), temp_3.readProperty_mCppClassCode () COMMA_SOURCE_FILE ("type-extern.galgas", 486))) ;
  const GALGAS_externTypeDeclarationForGeneration temp_4 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_18806.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 494)), var_selfTypedefinition_18806.readProperty_mIsConcrete (), var_selfTypedefinition_18806.readProperty_mConstructorMap (), var_selfTypedefinition_18806.readProperty_mGetterMap (), var_selfTypedefinition_18806.readProperty_mSetterMap (), var_selfTypedefinition_18806.readProperty_mInstanceMethodMap (), var_selfTypedefinition_18806.readProperty_mClassMethodMap (), var_selfTypedefinition_18806.readProperty_mOptionalMethodMap (), var_selfTypedefinition_18806.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_18806.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_18806.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_18806.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-extern.galgas", 492))), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 492)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  const GALGAS_graphDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_3883 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 104)), temp_1.readProperty_mGraphTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-graph.galgas", 104)) ;
  {
  const GALGAS_graphDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3883, temp_2, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 105)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = this ;
  const GALGAS_graphDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3883, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 106)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-graph.galgas", 106)) COMMA_SOURCE_FILE ("type-graph.galgas", 106)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                         const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                         const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntry var_stringTypeEntry_4934 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeEntry_4934, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 119)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringTypeEntry_5076 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeEntry_5076, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 124)) ;
  }
  GALGAS_unifiedTypeMapEntry var_graphTypeEntry_5214 ;
  {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mGraphTypeName (), var_graphTypeEntry_5214, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 129)) ;
  }
  GALGAS_unifiedTypeMapEntry var_associatedListTypeEntry_5380 ;
  {
  const GALGAS_graphDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_1.readProperty_mAssociatedListTypeName (), var_associatedListTypeEntry_5380, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 134)) ;
  }
  GALGAS_unifiedTypeMapEntry var_lstringListTypeEntry_5535 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeEntry_5535, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 139)) ;
  }
  GALGAS_getterMap var_getterMap_5629 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5629, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 144)) ;
  }
  GALGAS_constructorMap var_constructorMap_5668 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 145)) ;
  GALGAS_setterMap var_setterMap_5700 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 146)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5748 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 147)) ;
  GALGAS_formalParameterSignature var_formalParameterList_5839 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 149)) ;
  var_formalParameterList_5839.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 151)), var_associatedListTypeEntry_5380, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 153)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 150)) ;
  var_formalParameterList_5839.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 156)), var_lstringListTypeEntry_5535, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 158)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 155)) ;
  var_formalParameterList_5839.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 161)), var_associatedListTypeEntry_5380, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 163)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 160)) ;
  var_formalParameterList_5839.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 166)), var_lstringListTypeEntry_5535, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 168)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 165)) ;
  {
  var_instanceMethodMap_5748.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("topologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 171))  COMMA_SOURCE_FILE ("type-graph.galgas", 171)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 172)), var_formalParameterList_5839, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 174)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 176)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-graph.galgas", 177)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 170)) ;
  }
  {
  var_instanceMethodMap_5748.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 181))  COMMA_SOURCE_FILE ("type-graph.galgas", 181)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 182)), var_formalParameterList_5839, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 184)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 186)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-graph.galgas", 187)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 180)) ;
  }
  var_formalParameterList_5839 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 192)) ;
  var_formalParameterList_5839.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 194)), var_associatedListTypeEntry_5380, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 196)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 193)) ;
  var_formalParameterList_5839.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 199)), var_lstringListTypeEntry_5535, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 201)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 198)) ;
  {
  var_instanceMethodMap_5748.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("circularities"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 204))  COMMA_SOURCE_FILE ("type-graph.galgas", 204)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 205)), var_formalParameterList_5839, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 207)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 209)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-graph.galgas", 210)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 203)) ;
  }
  {
  var_instanceMethodMap_5748.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 214))  COMMA_SOURCE_FILE ("type-graph.galgas", 214)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 215)), var_formalParameterList_5839, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 217)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 219)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-graph.galgas", 220)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 213)) ;
  }
  {
  var_instanceMethodMap_5748.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 224))  COMMA_SOURCE_FILE ("type-graph.galgas", 224)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 225)), var_formalParameterList_5839, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 227)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 229)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-graph.galgas", 230)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 223)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_2 = this ;
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5629, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("nodeList"), temp_2.readProperty_mAssociatedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 235)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = this ;
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5629, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("reversedGraph"), temp_3.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 243)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5629, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 251)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5629, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 259)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5629, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 267)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5629, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 275)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_5629, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isNodeDefined"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 283)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_5629, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 293)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5629, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 303)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5629, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lkeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 311)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5629, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("edges"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 319)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_4 = this ;
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_5629, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), temp_4.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 327)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_5629, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("accessibleNodesFrom"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), GALGAS_string ("lstringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 339)) ;
  }
  {
  var_constructorMap_5668.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("emptyGraph"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 350))  COMMA_SOURCE_FILE ("type-graph.galgas", 350)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 351)), GALGAS_bool (false), var_graphTypeEntry_5214, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 349)) ;
  }
  var_formalParameterList_5839 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 356)) ;
  var_formalParameterList_5839.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 358)), var_lstringTypeEntry_5076, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 360)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 357)) ;
  cEnumerator_functionSignature enumerator_12152 (extensionGetter_definition (var_associatedListTypeEntry_5380, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 362)).readProperty_mAddAssignOperatorArguments (), kENUMERATION_UP) ;
  while (enumerator_12152.hasCurrentObject ()) {
    var_formalParameterList_5839.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 364)), enumerator_12152.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 366)), enumerator_12152.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 363)) ;
    enumerator_12152.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_5 = this ;
  cEnumerator_graphInsertModifierList enumerator_12408 (temp_5.readProperty_mInsertModifierList (), kENUMERATION_UP) ;
  while (enumerator_12408.hasCurrentObject ()) {
    {
    var_setterMap_5700.setter_insertOrReplace (enumerator_12408.current_mInsertModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 372)), var_formalParameterList_5839, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 375)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-graph.galgas", 370)) ;
    }
    enumerator_12408.gotoNextObject () ;
  }
  {
  var_setterMap_5700.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 382))  COMMA_SOURCE_FILE ("type-graph.galgas", 382)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 383)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 384)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 386)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 381)) ;
  }
  var_formalParameterList_5839 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 390)) ;
  var_formalParameterList_5839.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 391)), var_stringTypeEntry_4934, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 391)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("type-graph.galgas", 391)) ;
  {
  var_setterMap_5700.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 393))  COMMA_SOURCE_FILE ("type-graph.galgas", 393)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 394)), var_formalParameterList_5839, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 397)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 392)) ;
  }
  var_formalParameterList_5839 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 402)) ;
  var_formalParameterList_5839.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 403)), var_lstringTypeEntry_5076, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 403)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 403)) ;
  var_formalParameterList_5839.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 404)), var_lstringTypeEntry_5076, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 404)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 404)) ;
  {
  var_setterMap_5700.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("addEdge"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 406))  COMMA_SOURCE_FILE ("type-graph.galgas", 406)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 407)), var_formalParameterList_5839, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 410)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 405)) ;
  }
  var_formalParameterList_5839 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 415)) ;
  var_formalParameterList_5839.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 416)), var_lstringTypeEntry_5076, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 416)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 416)) ;
  {
  var_setterMap_5700.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("noteNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 418))  COMMA_SOURCE_FILE ("type-graph.galgas", 418)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 419)), var_formalParameterList_5839, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 422)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 417)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_6 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_6.readProperty_mGraphTypeName (), GALGAS_bool (false), var_getterMap_5629, var_setterMap_5700, var_instanceMethodMap_5748, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 427)) ;
  }
  const GALGAS_graphDeclarationAST temp_7 = this ;
  const GALGAS_graphDeclarationAST temp_8 = this ;
  const GALGAS_graphDeclarationAST temp_9 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_14818 = GALGAS_unifiedTypeDefinition::constructor_new (temp_7.readProperty_mGraphTypeName (), temp_8.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-graph.galgas", 444)), GALGAS_typeKindEnum::constructor_graphType (SOURCE_FILE ("type-graph.galgas", 445)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 447)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 448)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 449)), var_constructorMap_5668, var_getterMap_5629, var_setterMap_5700, var_instanceMethodMap_5748, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 454)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 455)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 456)), GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-graph.galgas", 457)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 458)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 459)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 460)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 461)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 462)), GALGAS_bool (false), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-graph.galgas", 464)), GALGAS_string ("emptyGraph"), GALGAS_string ("graph-").add_operation (temp_9.readProperty_mGraphTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-graph.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 466)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-graph.galgas", 467))  COMMA_SOURCE_FILE ("type-graph.galgas", 440)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_14818, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 469)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                        const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_graphDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_16411 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 485)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_16411, var_nameForUsefulness_16411, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 486)) ;
  }
  const GALGAS_graphDeclarationAST temp_1 = this ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_16579 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 487)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16411, var_associatedTypeNameForUsefulness_16579 COMMA_SOURCE_FILE ("type-graph.galgas", 488)) ;
  }
  const GALGAS_graphDeclarationAST temp_2 = this ;
  GALGAS_unifiedTypeMapEntry var_graphTypeEntry_16758 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_2.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 490)) ;
  const GALGAS_graphDeclarationAST temp_3 = this ;
  GALGAS_unifiedTypeMapEntry var_associatedListTypeEntry_16850 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 491)) ;
  const GALGAS_graphDeclarationAST temp_4 = this ;
  const GALGAS_graphDeclarationAST temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_associatedListElementTypeEntry_16958 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_4.readProperty_mAssociatedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 493)), temp_5.readProperty_mAssociatedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-graph.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 492)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (var_associatedListTypeEntry_16850, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 495)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-graph.galgas", 495)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_graphDeclarationAST temp_7 = this ;
      const GALGAS_graphDeclarationAST temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_8.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 496)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 496)), fixItArray9  COMMA_SOURCE_FILE ("type-graph.galgas", 496)) ;
    }
  }
  GALGAS_stringset temp_10 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-graph.galgas", 499)) ;
  temp_10.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("type-graph.galgas", 499)) ;
  temp_10.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("type-graph.galgas", 499)) ;
  GALGAS_stringset var_reservedModifierNames_17393 = temp_10 ;
  const GALGAS_graphDeclarationAST temp_11 = this ;
  cEnumerator_graphInsertModifierList enumerator_17467 (temp_11.readProperty_mInsertModifierList (), kENUMERATION_UP) ;
  while (enumerator_17467.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_reservedModifierNames_17393.getter_hasKey (enumerator_17467.current_mInsertModifierName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-graph.galgas", 501)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_17467.current_mInsertModifierName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17467.current_mInsertModifierName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 502)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 502)), fixItArray13  COMMA_SOURCE_FILE ("type-graph.galgas", 502)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_17467.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 504)) ;
    }
    enumerator_17467.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_14 = this ;
  const GALGAS_graphDeclarationAST temp_15 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (temp_14.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 508)), GALGAS_graphDeclarationForGeneration::constructor_new (var_graphTypeEntry_16758, var_associatedListTypeEntry_16850, var_associatedListElementTypeEntry_16958, temp_15.readProperty_mInsertModifierList ()  COMMA_SOURCE_FILE ("type-graph.galgas", 509))  COMMA_SOURCE_FILE ("type-graph.galgas", 507)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                       GALGAS_string & outArgument_outHeader,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_graphDeclarationForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_18827 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 532)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, var_selfTypedefinition_18827.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 535)) COMMA_SOURCE_FILE ("type-graph.galgas", 533))) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_18827.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 539)), var_selfTypedefinition_18827.readProperty_mIsConcrete (), var_selfTypedefinition_18827.readProperty_mConstructorMap (), var_selfTypedefinition_18827.readProperty_mGetterMap (), var_selfTypedefinition_18827.readProperty_mSetterMap (), var_selfTypedefinition_18827.readProperty_mInstanceMethodMap (), var_selfTypedefinition_18827.readProperty_mClassMethodMap (), var_selfTypedefinition_18827.readProperty_mOptionalMethodMap (), var_selfTypedefinition_18827.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_18827.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_18827.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_18827.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-graph.galgas", 537))), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 537)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_string & outArgument_outImplementation,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_graphDeclarationForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 560)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 561)) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mAssociatedListElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 562)) ;
  const GALGAS_graphDeclarationForGeneration temp_3 = this ;
  const GALGAS_graphDeclarationForGeneration temp_4 = this ;
  const GALGAS_graphDeclarationForGeneration temp_5 = this ;
  const GALGAS_graphDeclarationForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 565)), temp_5.readProperty_mAssociatedListTypeEntry (), temp_6.readProperty_mInsertModifierList () COMMA_SOURCE_FILE ("type-graph.galgas", 563))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_listDeclarationAST temp_0 = this ;
  const GALGAS_listDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_3204 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 84)), temp_1.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 84)) ;
  {
  const GALGAS_listDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3204, temp_2, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 85)) ;
  }
  const GALGAS_listDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_3364 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_3364.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3364.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 87)), enumerator_3364.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 87)) COMMA_SOURCE_FILE ("type-list.galgas", 87)) ;
    }
    enumerator_3364.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList var_typedAttributeList_4233 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 102)) ;
  const GALGAS_listDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_4303 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_4303.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_4417 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_4303.current_mPropertyTypeName (HERE), var_attributeTypeIndex_4417, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 104)) ;
    }
    GALGAS_bool var_hasSelector_4438 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_4462 (enumerator_4303.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_4462.hasCurrentObject ()) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, enumerator_4462.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticWarning (enumerator_4462.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%setter' is obsolete and has no effect"), fixItArray2  COMMA_SOURCE_FILE ("type-list.galgas", 108)) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, enumerator_4462.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticWarning (enumerator_4462.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%nogetter' is obsolete and has no effect"), fixItArray4  COMMA_SOURCE_FILE ("type-list.galgas", 110)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (kIsEqual, enumerator_4462.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_5) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = var_hasSelector_4438.boolEnum () ;
                if (kBoolTrue == test_6) {
                  TC_Array <C_FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_4462.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '%selector' attribute is already named"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 113)) ;
                }
              }
              var_hasSelector_4438 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_5) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            GALGAS_stringlist temp_9 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 119)) ;
            temp_9.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 119)) ;
            appendFixItActions (fixItArray8, kFixItReplace, temp_9) ;
            inCompiler->emitSemanticError (enumerator_4462.current_mValue (HERE).readProperty_location (), GALGAS_string ("only '%selector' attribute is allowed here"), fixItArray8  COMMA_SOURCE_FILE ("type-list.galgas", 117)) ;
          }
        }
      }
      enumerator_4462.gotoNextObject () ;
    }
    var_typedAttributeList_4233.addAssign_operation (var_attributeTypeIndex_4417, enumerator_4303.current_mPropertyName (HERE), enumerator_4303.current_mIsPublic (HERE), var_hasSelector_4438  COMMA_SOURCE_FILE ("type-list.galgas", 122)) ;
    enumerator_4303.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_uintType_5218 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("uint"), var_uintType_5218, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 125)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listTypeIndex_5322 ;
  {
  const GALGAS_listDeclarationAST temp_10 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_10.readProperty_mListTypeName (), var_listTypeIndex_5322, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 127)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_5543 ;
  {
  const GALGAS_listDeclarationAST temp_11 = this ;
  const GALGAS_listDeclarationAST temp_12 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_11.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 130)), temp_12.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 130)), var_listElementTypeIndex_5543, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 129)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_5628 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 134)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_5687 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 135)) ;
  GALGAS_formalParameterSignature var_setterOutputFormalArgumentList_5755 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 136)) ;
  GALGAS_formalParameterSignature var_setterInputFormalArgumentList_5822 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 137)) ;
  cEnumerator_typedPropertyList enumerator_5891 (var_typedAttributeList_4233, kENUMERATION_UP) ;
  while (enumerator_5891.hasCurrentObject ()) {
    GALGAS_string temp_13 ;
    const enumGalgasBool test_14 = enumerator_5891.current_mHasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_14) {
      temp_13 = enumerator_5891.current_mPropertyName (HERE).readProperty_string () ;
    }else if (kBoolFalse == test_14) {
      temp_13 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string var_selector_5934 = temp_13 ;
    var_enumerationDescriptor_5628.addAssign_operation (enumerator_5891.current_mPropertyTypeEntry (HERE), enumerator_5891.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 140)) ;
    var_constructorAttributeTypeList_5687.addAssign_operation (var_selector_5934.getter_nowhere (SOURCE_FILE ("type-list.galgas", 142)), enumerator_5891.current_mPropertyTypeEntry (HERE), enumerator_5891.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 141)) ;
    var_setterOutputFormalArgumentList_5755.addAssign_operation (var_selector_5934.getter_nowhere (SOURCE_FILE ("type-list.galgas", 146)), enumerator_5891.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-list.galgas", 148)), enumerator_5891.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 145)) ;
    var_setterInputFormalArgumentList_5822.addAssign_operation (var_selector_5934.getter_nowhere (SOURCE_FILE ("type-list.galgas", 151)), enumerator_5891.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 153)), enumerator_5891.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 150)) ;
    enumerator_5891.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_6520 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 157)) ;
  {
  const GALGAS_listDeclarationAST temp_15 = this ;
  routine_enterConstructorWithoutArgument (var_constructorMap_6520, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyList"), temp_15.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 158)) ;
  }
  {
  var_constructorMap_6520.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("listWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 166))  COMMA_SOURCE_FILE ("type-list.galgas", 166)), var_constructorAttributeTypeList_5687, GALGAS_bool (false), var_listTypeIndex_5322, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 165)) ;
  }
  GALGAS_getterMap var_getterMap_6962 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_6962, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 172)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_6962, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 173)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_6962, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 180)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_16 = this ;
  routine_enterBaseGetterWithArgument (var_getterMap_6962, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_16.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 187)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_17 = this ;
  routine_enterBaseGetterWithArgument (var_getterMap_6962, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListToIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_17.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 194)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_18 = this ;
  routine_enterBaseGetterWithArgument (var_getterMap_6962, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), temp_18.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 201)) ;
  }
  cEnumerator_typedPropertyList enumerator_8017 (var_typedAttributeList_4233, kENUMERATION_UP) ;
  while (enumerator_8017.hasCurrentObject ()) {
    {
    GALGAS_functionSignature temp_19 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 212)) ;
    temp_19.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 212)), var_uintType_5218, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 212)) ;
    var_getterMap_6962.setter_insertOrReplace (GALGAS_lstring::constructor_new (enumerator_8017.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 210)), enumerator_8017.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 210)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 211)), temp_19, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 213)), GALGAS_bool (true), enumerator_8017.current_mPropertyTypeEntry (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 216)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 209)) ;
    }
    enumerator_8017.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_8474 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 221)) ;
  {
  var_instanceMethodMap_8474.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("first"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 223))  COMMA_SOURCE_FILE ("type-list.galgas", 223)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 224)), var_setterOutputFormalArgumentList_5755, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 226)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 228)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-list.galgas", 229)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 222)) ;
  }
  {
  var_instanceMethodMap_8474.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("last"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 233))  COMMA_SOURCE_FILE ("type-list.galgas", 233)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 234)), var_setterOutputFormalArgumentList_5755, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 236)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 238)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-list.galgas", 239)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 232)) ;
  }
  GALGAS_setterMap var_setterMap_9038 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 243)) ;
  {
  GALGAS_formalParameterSignature temp_20 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 247)) ;
  temp_20.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 247)), var_listElementTypeIndex_5543, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-list.galgas", 247)), GALGAS_string ("inElement")  COMMA_SOURCE_FILE ("type-list.galgas", 247)) ;
  var_setterMap_9038.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("append"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 245))  COMMA_SOURCE_FILE ("type-list.galgas", 245)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 246)), temp_20, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 249)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 244)) ;
  }
  {
  var_setterMap_9038.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popFirst"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 253))  COMMA_SOURCE_FILE ("type-list.galgas", 253)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 254)), var_setterOutputFormalArgumentList_5755, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 257)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 252)) ;
  }
  {
  var_setterMap_9038.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popLast"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 261))  COMMA_SOURCE_FILE ("type-list.galgas", 261)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 262)), var_setterOutputFormalArgumentList_5755, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 265)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 260)) ;
  }
  var_setterOutputFormalArgumentList_5755.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 268)), var_uintType_5218, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 268)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 268)) ;
  {
  var_setterMap_9038.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 270))  COMMA_SOURCE_FILE ("type-list.galgas", 270)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 271)), var_setterOutputFormalArgumentList_5755, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 274)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 269)) ;
  }
  cEnumerator_typedPropertyList enumerator_10120 (var_typedAttributeList_4233, kENUMERATION_UP) ;
  while (enumerator_10120.hasCurrentObject ()) {
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = enumerator_10120.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_21) {
        GALGAS_formalParameterSignature var_setterFormalArgumentList_10204 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 280)) ;
        var_setterFormalArgumentList_10204.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 281)), enumerator_10120.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 281)), enumerator_10120.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 281)) ;
        var_setterFormalArgumentList_10204.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 282)), var_uintType_5218, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 282)), enumerator_10120.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 282)) ;
        {
        var_setterMap_9038.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_10120.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-list.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 284)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 284)), enumerator_10120.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 284)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 285)), var_setterFormalArgumentList_10204, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 288)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 283)) ;
        }
      }
    }
    enumerator_10120.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_5822.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 294)), var_uintType_5218, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 294)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 294)) ;
  {
  var_setterMap_9038.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 296))  COMMA_SOURCE_FILE ("type-list.galgas", 296)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 297)), var_setterInputFormalArgumentList_5822, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 300)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 295)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_22 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_22.readProperty_mListTypeName (), GALGAS_bool (false), var_getterMap_6962, var_setterMap_9038, var_instanceMethodMap_8474, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 305)) ;
  }
  const GALGAS_listDeclarationAST temp_23 = this ;
  const GALGAS_listDeclarationAST temp_24 = this ;
  const GALGAS_listDeclarationAST temp_25 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_11624 = GALGAS_unifiedTypeDefinition::constructor_new (temp_23.readProperty_mListTypeName (), temp_24.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-list.galgas", 322)), GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-list.galgas", 323)), GALGAS_bool (true), var_typedAttributeList_4233, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 326)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 327)), var_constructorMap_6520, var_getterMap_6962, var_setterMap_9038, var_instanceMethodMap_8474, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 332)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 333)), var_enumerationDescriptor_5628, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-list.galgas", 335)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("type-list.galgas", 335)) COMMA_SOURCE_FILE ("type-list.galgas", 335)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("type-list.galgas", 335)) COMMA_SOURCE_FILE ("type-list.galgas", 335)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-list.galgas", 335)) COMMA_SOURCE_FILE ("type-list.galgas", 335)), var_constructorAttributeTypeList_5687, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 337)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 338)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 339)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 340)), GALGAS_bool (false), var_listElementTypeIndex_5543, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (temp_25.readProperty_mListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-list.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 344)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-list.galgas", 345))  COMMA_SOURCE_FILE ("type-list.galgas", 318)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_11624, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 347)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST var_structAttributeList_12838 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 355)) ;
  const GALGAS_listDeclarationAST temp_0 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_12897 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12897.hasCurrentObject ()) {
    var_structAttributeList_12838.addAssign_operation (enumerator_12897.current_isConstant (HERE), enumerator_12897.current_mPropertyTypeName (HERE), enumerator_12897.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 362))  COMMA_SOURCE_FILE ("type-list.galgas", 357)) ;
    enumerator_12897.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_1 = this ;
  const GALGAS_listDeclarationAST temp_2 = this ;
  const GALGAS_listDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 366)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 366)), temp_3.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 366)), var_structAttributeList_12838, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-list.galgas", 364))  COMMA_SOURCE_FILE ("type-list.galgas", 364)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_listDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_13978 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 386)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_13978, var_nameForUsefulness_13978, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 387)) ;
  }
  const GALGAS_listDeclarationAST temp_1 = this ;
  const GALGAS_listDeclarationAST temp_2 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_14142 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mListTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 388)), temp_2.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 388)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_13978, var_elementTypeNameForUsefulness_14142 COMMA_SOURCE_FILE ("type-list.galgas", 389)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_14378 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 391)) ;
  GALGAS_propertyIndexMap var_attributeMap_14420 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 392)) ;
  const GALGAS_listDeclarationAST temp_3 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_14491 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_14491.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_14555 = function_typeNameForUsefulEntitiesGraph (enumerator_14491.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 394)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_13978, var_propertyTypeNameForUsefulness_14555 COMMA_SOURCE_FILE ("type-list.galgas", 395)) ;
    }
    GALGAS_unifiedTypeMapEntry var_t_14707 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_14491.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 396)) ;
    GALGAS_bool var_hasSetter_14785 = enumerator_14491.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasSelector_14817 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_14841 (enumerator_14491.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_14841.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, enumerator_14841.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (enumerator_14841.current_mValue (HERE).readProperty_location (), GALGAS_string ("obsolete attribute: setter is implicitly generated for a public property"), fixItArray5  COMMA_SOURCE_FILE ("type-list.galgas", 401)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsEqual, enumerator_14841.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticWarning (enumerator_14841.current_mValue (HERE).readProperty_location (), GALGAS_string ("obsolete attribute: use 'private' qualifier"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 403)) ;
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsEqual, enumerator_14841.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_8) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_hasSelector_14817.boolEnum () ;
                if (kBoolTrue == test_9) {
                  TC_Array <C_FixItDescription> fixItArray10 ;
                  inCompiler->emitSemanticError (enumerator_14841.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '%selector' attribute is already named"), fixItArray10  COMMA_SOURCE_FILE ("type-list.galgas", 406)) ;
                }
              }
              var_hasSelector_14817 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_8) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            GALGAS_stringlist temp_12 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 412)) ;
            temp_12.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 412)) ;
            appendFixItActions (fixItArray11, kFixItReplace, temp_12) ;
            inCompiler->emitSemanticError (enumerator_14841.current_mValue (HERE).readProperty_location (), GALGAS_string ("only '%selector' attribut is allowed here"), fixItArray11  COMMA_SOURCE_FILE ("type-list.galgas", 410)) ;
          }
        }
      }
      enumerator_14841.gotoNextObject () ;
    }
    var_typedAttributeList_14378.addAssign_operation (var_t_14707, enumerator_14491.current_mPropertyName (HERE), var_hasSetter_14785, var_hasSelector_14817  COMMA_SOURCE_FILE ("type-list.galgas", 415)) ;
    {
    var_attributeMap_14420.setter_insertKey (enumerator_14491.current_mPropertyName (HERE), var_t_14707, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 420)) ;
    }
    enumerator_14491.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_13 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_15613 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_13.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 423)) ;
  const GALGAS_listDeclarationAST temp_14 = this ;
  const GALGAS_listDeclarationAST temp_15 = this ;
  const GALGAS_listDeclarationAST temp_16 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (temp_14.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 425)), GALGAS_listTypeForGeneration::constructor_new (var_selfType_15613, extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_15.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 428)), temp_16.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 428)), var_typedAttributeList_14378  COMMA_SOURCE_FILE ("type-list.galgas", 426))  COMMA_SOURCE_FILE ("type-list.galgas", 424)) ;
}
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
  GALGAS_uint index_843_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_843 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_843.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const class GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_843.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      result << " & in_" ;
      result << enumerator_843.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      index_843_.increment () ;
      enumerator_843.gotoNextObject () ;
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
  GALGAS_uint index_601_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_601 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_601.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_601.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      result << " & in_" ;
      result << enumerator_601.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      if (enumerator_601.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_601_.increment () ;
      enumerator_601.gotoNextObject () ;
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
  GALGAS_uint index_1667_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1667 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1667.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_1667.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      result << " & in_" ;
      result << enumerator_1667.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      if (enumerator_1667.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1667_.increment () ;
      enumerator_1667.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "cCollectionElement (THERE),\n"
    "mObject (" ;
  GALGAS_uint index_1960_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1960 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1960.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_1960.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 45)).stringValue () ;
      if (enumerator_1960.hasNextObject ()) {
        result << ", " ;
      }
      index_1960_.increment () ;
      enumerator_1960.gotoNextObject () ;
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
  GALGAS_uint index_2434_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2434 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2434.hasCurrentObject ()) {
      result << "inElement.mProperty_" ;
      result << enumerator_2434.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 57)).stringValue () ;
      if (enumerator_2434.hasNextObject ()) {
        result << ", " ;
      }
      index_2434_.increment () ;
      enumerator_2434.gotoNextObject () ;
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
  GALGAS_uint index_3139_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3139 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3139.hasCurrentObject ()) {
      result << "mObject.mProperty_" ;
      result << enumerator_3139.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 75)).stringValue () ;
      if (enumerator_3139.hasNextObject ()) {
        result << ", " ;
      }
      index_3139_.increment () ;
      enumerator_3139.gotoNextObject () ;
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
  GALGAS_uint index_3593_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3593 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3593.hasCurrentObject ()) {
      result << "  ioString << \"\\n\" ;\n"
        "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
        "  ioString << " ;
      result << enumerator_3593.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 89)).stringValue () ;
      result << " \":\" ;\n"
        "  mObject.mProperty_" ;
      result << enumerator_3593.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 90)).stringValue () ;
      result << ".description (ioString, inIndentation) ;\n" ;
      index_3593_.increment () ;
      enumerator_3593.gotoNextObject () ;
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
  GALGAS_uint index_5416_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5416 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5416.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_5416.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      result << " & inOperand" ;
      result << index_5416_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      if (enumerator_5416.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5416_IDX.increment () ;
      enumerator_5416.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (" ;
  GALGAS_uint index_5704_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5704 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5704.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_5704_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 131)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_5704.hasNextObject ()) {
        result << " && " ;
      }
      index_5704_IDX.increment () ;
      enumerator_5704.gotoNextObject () ;
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
  GALGAS_uint index_6054_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6054 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6054.hasCurrentObject ()) {
      result << ", inOperand" ;
      result << index_6054_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 139)).stringValue () ;
      index_6054_IDX.increment () ;
      enumerator_6054.gotoNextObject () ;
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
  GALGAS_uint index_6487_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6487 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6487.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_6487.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      result << " & in_" ;
      result << enumerator_6487.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      index_6487_.increment () ;
      enumerator_6487.gotoNextObject () ;
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
  GALGAS_uint index_6845_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6845 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6845.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_6845.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 158)).stringValue () ;
      if (enumerator_6845.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6845_.increment () ;
      enumerator_6845.gotoNextObject () ;
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
  GALGAS_uint index_7283_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7283 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7283.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_7283.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      result << " & inOperand" ;
      result << index_7283_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      if (enumerator_7283.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7283_IDX.increment () ;
      enumerator_7283.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()) {\n"
    "    if (" ;
  GALGAS_uint index_7556_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7556 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7556.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7556_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 177)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_7556.hasNextObject ()) {
        result << " && " ;
      }
      index_7556_IDX.increment () ;
      enumerator_7556.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "      cCollectionElement * p = NULL ;\n"
    "      macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_7830_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7830 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7830.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7830_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 184)).stringValue () ;
      if (enumerator_7830.hasNextObject ()) {
        result << ", " ;
      }
      index_7830_IDX.increment () ;
      enumerator_7830.gotoNextObject () ;
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
  GALGAS_uint index_9037_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9037 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9037.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_9037.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 221)).stringValue () ;
      result << " inOperand" ;
      result << index_9037_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 221)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9037_IDX.increment () ;
      enumerator_9037.gotoNextObject () ;
    }
  }
  result << "const GALGAS_uint inInsertionIndex,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()) {\n"
    "    if (inInsertionIndex.isValid ()" ;
  GALGAS_uint index_9401_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9401 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9401.hasCurrentObject ()) {
      result << " && inOperand" ;
      result << index_9401_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 229)).stringValue () ;
      result << ".isValid ()" ;
      index_9401_IDX.increment () ;
      enumerator_9401.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "      cCollectionElement * p = NULL ;\n"
    "      macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_9662_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9662 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9662.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_9662_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 235)).stringValue () ;
      if (enumerator_9662.hasNextObject ()) {
        result << ", " ;
      }
      index_9662_IDX.increment () ;
      enumerator_9662.gotoNextObject () ;
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
  GALGAS_uint index_10262_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10262 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10262.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_10262.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 253)).stringValue () ;
      result << " & outOperand" ;
      result << index_10262_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 253)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10262_IDX.increment () ;
      enumerator_10262.gotoNextObject () ;
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
  GALGAS_uint index_10886_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10886 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10886.hasCurrentObject ()) {
      result << "        outOperand" ;
      result << index_10886_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 266)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10886_IDX.increment () ;
      enumerator_10886.gotoNextObject () ;
    }
  }
  result << "        drop () ;\n"
    "      }else{\n"
    "        macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_11150_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11150 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11150.hasCurrentObject ()) {
      result << "        outOperand" ;
      result << index_11150_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 273)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_11150.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 273)).stringValue () ;
      result << " ;\n" ;
      index_11150_IDX.increment () ;
      enumerator_11150.gotoNextObject () ;
    }
  }
  result << "      }\n"
    "    }else{\n" ;
  GALGAS_uint index_11385_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11385 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11385.hasCurrentObject ()) {
      result << "      outOperand" ;
      result << index_11385_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 279)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11385_IDX.increment () ;
      enumerator_11385.gotoNextObject () ;
    }
  }
  result << "      drop () ;    \n"
    "    }\n"
    "  }else{\n" ;
  GALGAS_uint index_11575_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11575 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11575.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11575_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 286)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11575_IDX.increment () ;
      enumerator_11575.gotoNextObject () ;
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
  GALGAS_uint index_11911_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11911 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11911.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_11911.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 295)).stringValue () ;
      result << " & outOperand" ;
      result << index_11911_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 295)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11911_IDX.increment () ;
      enumerator_11911.gotoNextObject () ;
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
  GALGAS_uint index_12384_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12384 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12384.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12384_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 305)).stringValue () ;
      result << ".drop () ;\n" ;
      index_12384_IDX.increment () ;
      enumerator_12384.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_12618_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12618 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12618.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12618_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 311)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_12618.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 311)).stringValue () ;
      result << " ;\n" ;
      index_12618_IDX.increment () ;
      enumerator_12618.gotoNextObject () ;
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
  GALGAS_uint index_13012_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13012 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13012.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_13012.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 320)).stringValue () ;
      result << " & outOperand" ;
      result << index_13012_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 320)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_13012_IDX.increment () ;
      enumerator_13012.gotoNextObject () ;
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
  GALGAS_uint index_13484_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13484 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13484.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13484_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 330)).stringValue () ;
      result << ".drop () ;\n" ;
      index_13484_IDX.increment () ;
      enumerator_13484.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_13718_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13718 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13718.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13718_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 336)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_13718.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 336)).stringValue () ;
      result << " ;\n" ;
      index_13718_IDX.increment () ;
      enumerator_13718.gotoNextObject () ;
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
  GALGAS_uint index_14110_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14110 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14110.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_14110.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 345)).stringValue () ;
      result << " & outOperand" ;
      result << index_14110_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 345)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_14110_IDX.increment () ;
      enumerator_14110.gotoNextObject () ;
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
  GALGAS_uint index_14581_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14581 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14581.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_14581_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 355)).stringValue () ;
      result << ".drop () ;\n" ;
      index_14581_IDX.increment () ;
      enumerator_14581.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_14815_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14815 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14815.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_14815_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 361)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_14815.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 361)).stringValue () ;
      result << " ;\n" ;
      index_14815_IDX.increment () ;
      enumerator_14815.gotoNextObject () ;
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
  GALGAS_uint index_15206_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15206 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15206.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_15206.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 370)).stringValue () ;
      result << " & outOperand" ;
      result << index_15206_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 370)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_15206_IDX.increment () ;
      enumerator_15206.gotoNextObject () ;
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
  GALGAS_uint index_15676_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15676 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15676.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_15676_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 380)).stringValue () ;
      result << ".drop () ;\n" ;
      index_15676_IDX.increment () ;
      enumerator_15676.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_15910_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15910 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15910.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_15910_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 386)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_15910.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 386)).stringValue () ;
      result << " ;\n" ;
      index_15910_IDX.increment () ;
      enumerator_15910.gotoNextObject () ;
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
  GALGAS_uint index_18766_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18766 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18766.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_18766.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_18766.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).stringValue () ;
        result << "AtIndex (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_18766.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).stringValue () ;
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
        result << enumerator_18766.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 454)).stringValue () ;
        result << " = inOperand ;\n"
          "  }\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_0) {
      }
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_18766.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 460)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_18766.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 460)).stringValue () ;
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
      result << extensionGetter_identifierRepresentation (enumerator_18766.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 465)).stringValue () ;
      result << " result ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    result = p->mObject.mProperty_" ;
      result << enumerator_18766.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 468)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_18766_IDX.increment () ;
      enumerator_18766.gotoNextObject () ;
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
  GALGAS_uint index_21736_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_21736 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_21736.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_21736.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 494)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_21736.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 494)).stringValue () ;
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
      result << enumerator_21736.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 497)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_21736_IDX.increment () ;
      enumerator_21736.gotoNextObject () ;
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

void cPtr_listTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                               GALGAS_string & outArgument_outHeader,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_listTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_17273 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 465)) ;
  const GALGAS_listTypeForGeneration temp_1 = this ;
  const GALGAS_listTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, var_selfTypedefinition_17273.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 468)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-list.galgas", 466))) ;
  const GALGAS_listTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_17273.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 473)), var_selfTypedefinition_17273.readProperty_mIsConcrete (), var_selfTypedefinition_17273.readProperty_mConstructorMap (), var_selfTypedefinition_17273.readProperty_mGetterMap (), var_selfTypedefinition_17273.readProperty_mSetterMap (), var_selfTypedefinition_17273.readProperty_mInstanceMethodMap (), var_selfTypedefinition_17273.readProperty_mClassMethodMap (), var_selfTypedefinition_17273.readProperty_mOptionalMethodMap (), var_selfTypedefinition_17273.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_17273.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_17273.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_17273.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-list.galgas", 471))), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 471)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                      GALGAS_string & outArgument_outImplementation,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_listTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_18560 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_18560.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_18560.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 495)) ;
    enumerator_18560.gotoNextObject () ;
  }
  const GALGAS_listTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 497)) ;
  const GALGAS_listTypeForGeneration temp_2 = this ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 498)) ;
  const GALGAS_listTypeForGeneration temp_3 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_18791 = extensionGetter_definition (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 499)) ;
  const GALGAS_listTypeForGeneration temp_4 = this ;
  const GALGAS_listTypeForGeneration temp_5 = this ;
  const GALGAS_listTypeForGeneration temp_6 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, var_selfTypedefinition_18791.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_4.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 502)), temp_5.readProperty_mTypedAttributeList (), extensionGetter_identifierRepresentation (extensionGetter_definition (temp_6.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 504)).readProperty_mTypeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 504)) COMMA_SOURCE_FILE ("type-list.galgas", 500))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST var_structAttributeList_2622 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 63)) ;
  var_structAttributeList_2622.addAssign_operation (GALGAS_bool (false), GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 66)), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 67)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 69))  COMMA_SOURCE_FILE ("type-listmap.galgas", 64)) ;
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  var_structAttributeList_2622.addAssign_operation (GALGAS_bool (false), temp_0.readProperty_mAssociatedListTypeName (), GALGAS_string ("mList").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 73)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 75))  COMMA_SOURCE_FILE ("type-listmap.galgas", 70)) ;
  const GALGAS_listmapDeclarationAST temp_1 = this ;
  const GALGAS_listmapDeclarationAST temp_2 = this ;
  const GALGAS_listmapDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 79)), temp_3.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 79)), var_structAttributeList_2622, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 77))  COMMA_SOURCE_FILE ("type-listmap.galgas", 77)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                 GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                 GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                 GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                 GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  const GALGAS_listmapDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_3891 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 95)), temp_1.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 95)) ;
  {
  const GALGAS_listmapDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3891, temp_2, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 96)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_3 = this ;
  const GALGAS_listmapDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3891, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 97)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 97)) COMMA_SOURCE_FILE ("type-listmap.galgas", 97)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                           const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                           const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeDefinition var_associatedTypeDefinition_4965 ;
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  extensionMethod_searchType (ioArgument_ioSemanticContext.readProperty_mTypeMap (), temp_0.readProperty_mAssociatedListTypeName (), var_associatedTypeDefinition_4965, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 110)) ;
  GALGAS_typedPropertyList var_listTypedAttributeList_5014 = var_associatedTypeDefinition_4965.readProperty_mAllTypedPropertyList () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_associatedTypeDefinition_4965.readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 120)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_listmapDeclarationAST temp_2 = this ;
      const GALGAS_listmapDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 121)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 121)), fixItArray4  COMMA_SOURCE_FILE ("type-listmap.galgas", 121)) ;
      var_listTypedAttributeList_5014 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 122)) ;
    }
  }
  GALGAS_constructorMap var_constructorMap_5548 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 125)) ;
  GALGAS_getterMap var_getterMap_5637 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5637, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 126)) ;
  }
  GALGAS_setterMap var_setterMap_5666 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 127)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5714 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 128)) ;
  GALGAS_unifiedTypeMapEntry var_associatedListTypeIndex_5852 ;
  {
  const GALGAS_listmapDeclarationAST temp_5 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_5.readProperty_mAssociatedListTypeName (), var_associatedListTypeIndex_5852, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 130)) ;
  }
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_5964 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_5964, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 132)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5637, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 134)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5637, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 141)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5637, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 148)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_6 = this ;
  routine_enterBaseGetterWithArgument (var_getterMap_5637, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("listForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), temp_6.readProperty_mAssociatedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 155)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_7 = this ;
  routine_enterConstructorWithoutArgument (var_constructorMap_5548, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), temp_7.readProperty_mListmapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 165)) ;
  }
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor_7018 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 173)) ;
  var_enumeratorDescriptor_7018.addAssign_operation (var_stringTypeIndex_5964, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-listmap.galgas", 174)) ;
  var_enumeratorDescriptor_7018.addAssign_operation (var_associatedListTypeIndex_5852, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("type-listmap.galgas", 175)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription_7232 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 177)) ;
  var_addAssignOperatorDescription_7232.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 178)), var_stringTypeIndex_5964, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-listmap.galgas", 178)) ;
  cEnumerator_typedPropertyList enumerator_7374 (var_listTypedAttributeList_5014, kENUMERATION_UP) ;
  while (enumerator_7374.hasCurrentObject ()) {
    var_addAssignOperatorDescription_7232.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 180)), enumerator_7374.current_mPropertyTypeEntry (HERE), enumerator_7374.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 180)) ;
    enumerator_7374.gotoNextObject () ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_8 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_8.readProperty_mListmapTypeName (), GALGAS_bool (false), var_getterMap_5637, var_setterMap_5666, var_instanceMethodMap_5714, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 183)) ;
  }
  GALGAS_unifiedTypeMapEntry var_listElementTypeIndex_8054 ;
  {
  const GALGAS_listmapDeclarationAST temp_9 = this ;
  const GALGAS_listmapDeclarationAST temp_10 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_9.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 197)), temp_10.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 197)), var_listElementTypeIndex_8054, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 196)) ;
  }
  const GALGAS_listmapDeclarationAST temp_11 = this ;
  const GALGAS_listmapDeclarationAST temp_12 = this ;
  const GALGAS_listmapDeclarationAST temp_13 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_8107 = GALGAS_unifiedTypeDefinition::constructor_new (temp_11.readProperty_mListmapTypeName (), temp_12.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-listmap.galgas", 205)), GALGAS_typeKindEnum::constructor_arrayType (SOURCE_FILE ("type-listmap.galgas", 206)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 208)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 209)), var_listTypedAttributeList_5014, var_constructorMap_5548, var_getterMap_5637, var_setterMap_5666, var_instanceMethodMap_5714, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 215)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 216)), var_enumeratorDescriptor_7018, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-listmap.galgas", 218)), var_addAssignOperatorDescription_7232, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 220)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 221)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 222)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 223)), GALGAS_bool (false), var_listElementTypeIndex_8054, GALGAS_string ("emptyMap"), GALGAS_string ("listmap-").add_operation (temp_13.readProperty_mListmapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-listmap.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 227)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-listmap.galgas", 228))  COMMA_SOURCE_FILE ("type-listmap.galgas", 201)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_8107, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 230)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listmapDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                          const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                          GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_9694 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListmapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 246)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9694, var_nameForUsefulness_9694, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 247)) ;
  }
  const GALGAS_listmapDeclarationAST temp_1 = this ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_9864 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 248)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_9694, var_associatedTypeNameForUsefulness_9864 COMMA_SOURCE_FILE ("type-listmap.galgas", 249)) ;
  }
  const GALGAS_listmapDeclarationAST temp_2 = this ;
  const GALGAS_listmapDeclarationAST temp_3 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_10052 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_2.readProperty_mListmapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 250)), temp_3.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 250)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_9694, var_elementTypeNameForUsefulness_10052 COMMA_SOURCE_FILE ("type-listmap.galgas", 251)) ;
  }
  GALGAS_unifiedTypeDefinition var_associatedTypeDefinition_10392 ;
  const GALGAS_listmapDeclarationAST temp_4 = this ;
  extensionMethod_searchType (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_4.readProperty_mAssociatedListTypeName (), var_associatedTypeDefinition_10392, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 253)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_associatedTypeDefinition_10392.readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 263)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_listmapDeclarationAST temp_6 = this ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("associated type should be a list type"), fixItArray7  COMMA_SOURCE_FILE ("type-listmap.galgas", 264)) ;
    }
  }
  const GALGAS_listmapDeclarationAST temp_8 = this ;
  const GALGAS_listmapDeclarationAST temp_9 = this ;
  const GALGAS_listmapDeclarationAST temp_10 = this ;
  const GALGAS_listmapDeclarationAST temp_11 = this ;
  const GALGAS_listmapDeclarationAST temp_12 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (temp_8.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 268)), GALGAS_listmapTypeForGeneration::constructor_new (extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_9.readProperty_mListmapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 270)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_10.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 271)), var_associatedTypeDefinition_10392.readProperty_mAllTypedPropertyList (), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_11.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 273)), temp_12.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 273))  COMMA_SOURCE_FILE ("type-listmap.galgas", 269))  COMMA_SOURCE_FILE ("type-listmap.galgas", 267)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listmapTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                  GALGAS_string & outArgument_outHeader,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_listmapTypeForGeneration temp_0 = this ;
  cEnumerator_typedPropertyList enumerator_12031 (temp_0.readProperty_mAssociatedListTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_12031.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_12031.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 293)) ;
    enumerator_12031.gotoNextObject () ;
  }
  const GALGAS_listmapTypeForGeneration temp_1 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypedefinition_12152 = extensionGetter_definition (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 295)) ;
  const GALGAS_listmapTypeForGeneration temp_2 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (inCompiler, var_selfTypedefinition_12152.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 298)) COMMA_SOURCE_FILE ("type-listmap.galgas", 296))) ;
  const GALGAS_listmapTypeForGeneration temp_3 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypedefinition_12152.readProperty_mTypeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 302)), var_selfTypedefinition_12152.readProperty_mIsConcrete (), var_selfTypedefinition_12152.readProperty_mConstructorMap (), var_selfTypedefinition_12152.readProperty_mGetterMap (), var_selfTypedefinition_12152.readProperty_mSetterMap (), var_selfTypedefinition_12152.readProperty_mInstanceMethodMap (), var_selfTypedefinition_12152.readProperty_mClassMethodMap (), var_selfTypedefinition_12152.readProperty_mOptionalMethodMap (), var_selfTypedefinition_12152.readProperty_mEnumerationDescriptor (), var_selfTypedefinition_12152.readProperty_mHandledOperatorFlags (), var_selfTypedefinition_12152.readProperty_mAddAssignOperatorArguments (), var_selfTypedefinition_12152.readProperty_mTypeForEnumeratedElement () COMMA_SOURCE_FILE ("type-listmap.galgas", 300))), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 300)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_listmapTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outImplementation,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_listmapTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 323)) ;
  const GALGAS_listmapTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListMapElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 324)) ;
  const GALGAS_listmapTypeForGeneration temp_2 = this ;
  const GALGAS_listmapTypeForGeneration temp_3 = this ;
  const GALGAS_listmapTypeForGeneration temp_4 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (inCompiler, extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 326)), extensionGetter_identifierRepresentation (temp_3.readProperty_mAssociatedListTypeIndex (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 327)), temp_4.readProperty_mAssociatedListTypedAttributeList () COMMA_SOURCE_FILE ("type-listmap.galgas", 325))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dictDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_dictDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_dictDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("dict @").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 15)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_addAssociatedElement (GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST var_structAttributeList_3788 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 111)) ;
  const GALGAS_dictDeclarationAST temp_0 = this ;
  var_structAttributeList_3788.addAssign_operation (GALGAS_bool (false), temp_0.readProperty_mKeyTypeName (), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 112)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 112))  COMMA_SOURCE_FILE ("type-dict.galgas", 112)) ;
  const GALGAS_dictDeclarationAST temp_1 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_3928 (temp_1.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_3928.hasCurrentObject ()) {
    var_structAttributeList_3788.addAssign_operation (GALGAS_bool (false), enumerator_3928.current_mPropertyTypeName (HERE), enumerator_3928.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 114))  COMMA_SOURCE_FILE ("type-dict.galgas", 114)) ;
    enumerator_3928.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_2 = this ;
  const GALGAS_dictDeclarationAST temp_3 = this ;
  const GALGAS_dictDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_2.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_3.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 118)), temp_4.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 118)), var_structAttributeList_3788, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-dict.galgas", 116))  COMMA_SOURCE_FILE ("type-dict.galgas", 116)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_dictDeclarationAST temp_0 = this ;
  const GALGAS_dictDeclarationAST temp_1 = this ;
  GALGAS_lstring var_dictionary_5037 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 135)), temp_1.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 135)) ;
  {
  const GALGAS_dictDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_dictionary_5037, temp_2, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 136)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_3 = this ;
  const GALGAS_dictDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mKeyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 137)), temp_4.readProperty_mKeyTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 137)) COMMA_SOURCE_FILE ("type-dict.galgas", 137)) ;
  }
  const GALGAS_dictDeclarationAST temp_5 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_5309 (temp_5.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_5309.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_5309.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 139)), enumerator_5309.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 139)) COMMA_SOURCE_FILE ("type-dict.galgas", 139)) ;
    }
    enumerator_5309.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntry var_keyTypeIndex_6211 ;
  {
  const GALGAS_dictDeclarationAST temp_0 = this ;
  extensionSetter_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mKeyTypeName ().readProperty_string (), var_keyTypeIndex_6211, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 153)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_6269 = GALGAS_enumerationDescriptorList::constructor_listWithValue (var_keyTypeIndex_6211, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 155)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_6394 = GALGAS_bool (false) ;
  const GALGAS_dictDeclarationAST temp_1 = this ;
  cEnumerator_lstringlist enumerator_6411 (temp_1.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_6411.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_6411.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_usesSelectorsInInsertAndSearch_6394.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_6411.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-dict.galgas", 161)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_6394 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_6411.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-dict.galgas", 165)) ;
    }
    enumerator_6411.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_6715 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 169)) ;
  GALGAS_getterMap var_getterMap_6805 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_6805, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 170)) ;
  }
  GALGAS_setterMap var_setterMap_6834 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 171)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6882 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 172)) ;
  {
  const GALGAS_dictDeclarationAST temp_6 = this ;
  routine_enterConstructorWithoutArgument (var_constructorMap_6715, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyDict"), temp_6.readProperty_mDictTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 174)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_7 = this ;
  routine_enterBaseGetterWithArgument (var_getterMap_6805, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), temp_7.readProperty_mKeyTypeName ().readProperty_string (), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 182)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_6805, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 189)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_7574 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 197)) ;
  GALGAS_typedPropertyList var_typedPropertyList_7622 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 198)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_7704 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 199)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_7704.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 200)), var_keyTypeIndex_6211, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 200)) ;
  GALGAS_string temp_8 ;
  const enumGalgasBool test_9 = var_usesSelectorsInInsertAndSearch_6394.boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_9) {
    temp_8 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_7574.addAssign_operation (temp_8.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 202)), var_keyTypeIndex_6211, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 204)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 201)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_8057 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 206)) ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = var_usesSelectorsInInsertAndSearch_6394.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_8057.addAssign_operation (temp_10.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 208)), var_keyTypeIndex_6211, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 210)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 207)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_8310 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 212)) ;
  GALGAS_string temp_12 ;
  const enumGalgasBool test_13 = var_usesSelectorsInInsertAndSearch_6394.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_string::makeEmptyString () ;
  }
  var_optionalMethodSignature_8310.addAssign_operation (GALGAS_bool (true), temp_12.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 215)), var_keyTypeIndex_6211, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 213)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_8497 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 218)) ;
  const GALGAS_dictDeclarationAST temp_14 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_8572 (temp_14.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_8572.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_8686 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8572.current_mPropertyTypeName (HERE), var_attributeTypeIndex_8686, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 220)) ;
    }
    GALGAS_bool var_hasSetter_8705 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_8732 = GALGAS_bool (false) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList_7704.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 223)), var_attributeTypeIndex_8686, enumerator_8572.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 223)) ;
    var_typedPropertyList_7622.addAssign_operation (var_attributeTypeIndex_8686, enumerator_8572.current_mPropertyName (HERE), var_hasSetter_8705, var_hasSelector_8732  COMMA_SOURCE_FILE ("type-dict.galgas", 224)) ;
    var_typesToIncludeInHeaderCompilation_8497.addAssign_operation (var_attributeTypeIndex_8686  COMMA_SOURCE_FILE ("type-dict.galgas", 225)) ;
    var_enumerationDescriptor_6269.addAssign_operation (var_attributeTypeIndex_8686, enumerator_8572.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 226)) ;
    GALGAS_lstring temp_15 ;
    const enumGalgasBool test_16 = var_usesSelectorsInInsertAndSearch_6394.boolEnum () ;
    if (kBoolTrue == test_16) {
      temp_15 = enumerator_8572.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_16) {
      temp_15 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 228)) ;
    }
    var_insertMethodFormalArgumentList_7574.addAssign_operation (temp_15, var_attributeTypeIndex_8686, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 230)), enumerator_8572.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 227)) ;
    GALGAS_lstring temp_17 ;
    const enumGalgasBool test_18 = var_usesSelectorsInInsertAndSearch_6394.boolEnum () ;
    if (kBoolTrue == test_18) {
      temp_17 = enumerator_8572.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_18) {
      temp_17 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 233)) ;
    }
    var_removeMethodFormalArgumentList_8057.addAssign_operation (temp_17, var_attributeTypeIndex_8686, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-dict.galgas", 235)), enumerator_8572.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 232)) ;
    GALGAS_bool test_19 = var_usesSelectorsInInsertAndSearch_6394 ;
    if (kBoolTrue != test_19.boolEnum ()) {
      test_19 = var_hasSelector_8732 ;
    }
    GALGAS_lstring temp_20 ;
    const enumGalgasBool test_21 = test_19.boolEnum () ;
    if (kBoolTrue == test_21) {
      temp_20 = enumerator_8572.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_21) {
      temp_20 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 239)) ;
    }
    var_optionalMethodSignature_8310.addAssign_operation (GALGAS_bool (false), temp_20, var_attributeTypeIndex_8686, enumerator_8572.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 237)) ;
    enumerator_8572.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_22 = this ;
  var_setterMap_6834.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeKey"), temp_22.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 245)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 246)), var_removeMethodFormalArgumentList_8057, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 249)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 244)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_23 = this ;
  const GALGAS_dictDeclarationAST temp_24 = this ;
  var_instanceMethodMap_6882.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("searchKey"), temp_23.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 254)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 255)), var_removeMethodFormalArgumentList_8057, temp_24.readProperty_mDictTypeName ().readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 259)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-dict.galgas", 260)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 253)) ;
  }
  const GALGAS_dictDeclarationAST temp_25 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10379 (temp_25.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_10379.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_10426 = GALGAS_lstring::constructor_new (enumerator_10379.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 265)), enumerator_10379.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 265)) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_10588 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_10379.current_mPropertyTypeName (HERE), var_attributeTypeIndex_10588, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 266)) ;
    }
    {
    GALGAS_functionSignature temp_26 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 270)) ;
    temp_26.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 270)), var_keyTypeIndex_6211, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 270)) ;
    var_getterMap_6805.setter_insertOrReplace (var_accessorName_10426, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 269)), temp_26, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 271)), GALGAS_bool (true), var_attributeTypeIndex_10588, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 274)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 267)) ;
    }
    enumerator_10379.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_27 = this ;
  cEnumerator_propertyInCollectionListAST enumerator_10994 (temp_27.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_10994.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_11041 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_10994.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-dict.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 281)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 281)), enumerator_10994.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 280)) ;
    GALGAS_unifiedTypeMapEntry var_attributeTypeIndex_11298 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_10994.current_mPropertyTypeName (HERE), var_attributeTypeIndex_11298, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 284)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_11339 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 288)) ;
    var_accessorFormalArgumentList_11339.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 289)), var_attributeTypeIndex_11298, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 289)), enumerator_10994.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 289)) ;
    var_accessorFormalArgumentList_11339.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 290)), var_keyTypeIndex_6211, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 290)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 290)) ;
    {
    var_setterMap_6834.setter_insertOrReplace (var_accessorName_11041, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 293)), var_accessorFormalArgumentList_11339, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 296)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 291)) ;
    }
    enumerator_10994.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_28 = this ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_28.readProperty_mDictTypeName (), GALGAS_bool (false), var_getterMap_6805, var_setterMap_6834, var_instanceMethodMap_6882, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 301)) ;
  }
  GALGAS_unifiedTypeMapEntry var_elementTypeEntry_12317 ;
  {
  const GALGAS_dictDeclarationAST temp_29 = this ;
  const GALGAS_dictDeclarationAST temp_30 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_29.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 315)), temp_30.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 315)), var_elementTypeEntry_12317, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 314)) ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_12370 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 319)) ;
  {
  var_optionalMethodMap_12370.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 320)), var_optionalMethodSignature_8310, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 320)) ;
  }
  const GALGAS_dictDeclarationAST temp_31 = this ;
  const GALGAS_dictDeclarationAST temp_32 = this ;
  const GALGAS_dictDeclarationAST temp_33 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_12520 = GALGAS_unifiedTypeDefinition::constructor_new (temp_31.readProperty_mDictTypeName (), temp_32.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::constructor_null (SOURCE_FILE ("type-dict.galgas", 326)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-dict.galgas", 327)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 329)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 330)), var_typedPropertyList_7622, var_constructorMap_6715, var_getterMap_6805, var_setterMap_6834, var_instanceMethodMap_6882, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 336)), var_optionalMethodMap_12370, var_enumerationDescriptor_6269, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-dict.galgas", 339)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-dict.galgas", 339)) COMMA_SOURCE_FILE ("type-dict.galgas", 339)), var_argumentTypeListForAddAssignWithFieldExpressionList_7704, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 341)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 342)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 343)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 344)), GALGAS_bool (false), var_elementTypeEntry_12317, GALGAS_string ("emptyDict"), GALGAS_string ("dict-").add_operation (temp_33.readProperty_mDictTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-dict.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 348)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-dict.galgas", 349))  COMMA_SOURCE_FILE ("type-dict.galgas", 322)) ;
  {
  extensionSetter_insertType (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_typeDefinition_12520, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 351)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'check_K_escapeCharacters'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters (const GALGAS_lstring constinArgument_inString,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_13840 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 359)), kENUMERATION_UP) ;
  while (enumerator_13840.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_13877 = enumerator_13840.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 360)) ;
    {
    GALGAS_string joker_13964 ; // Joker input parameter
    var_explodedArray_13877.setter_popFirst (joker_13964, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 361)) ;
    }
    cEnumerator_stringlist enumerator_13982 (var_explodedArray_13877, kENUMERATION_UP) ;
    while (enumerator_13982.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_13982.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 363)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 363)).getter_uint (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 363)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_14057 = enumerator_13982.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 364)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_14057.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 366)) ;
            }
          }
        }
      }
      enumerator_13982.gotoNextObject () ;
    }
    enumerator_13840.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'check_K_L_escapeCharacters'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_L_5F_escapeCharacters (const GALGAS_lstring constinArgument_inString,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_14550 (constinArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 376)), kENUMERATION_UP) ;
  while (enumerator_14550.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_14587 = enumerator_14550.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 377)) ;
    {
    GALGAS_string joker_14674 ; // Joker input parameter
    var_explodedArray_14587.setter_popFirst (joker_14674, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 378)) ;
    }
    cEnumerator_stringlist enumerator_14692 (var_explodedArray_14587, kENUMERATION_UP) ;
    while (enumerator_14692.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_14692.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 380)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 380)).getter_uint (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 380)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_14767 = enumerator_14692.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 381)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_14767.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_14767.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-dict.galgas", 382)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (constinArgument_inString.readProperty_location (), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 383)) ;
            }
          }
        }
      }
      enumerator_14692.gotoNextObject () ;
    }
    enumerator_14550.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForMapAndDict'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForMapAndDict (C_Compiler *
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-dict.galgas", 393)) ;
  result_result.addAssign_operation (GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 394)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-dict.galgas", 395)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-dict.galgas", 396)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForMapAndDict ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset function_forbiddenKeysForMapAndDict (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict) {
    gOnceFunctionResult_forbiddenKeysForMapAndDict = onceFunction_forbiddenKeysForMapAndDict (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForMapAndDict ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_forbiddenKeysForMapAndDict (void) {
  gOnceFunctionResult_forbiddenKeysForMapAndDict.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForMapAndDict (NULL,
                                                                        releaseOnceFunctionResult_forbiddenKeysForMapAndDict) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForMapAndDict [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_forbiddenKeysForMapAndDict (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForMapAndDict (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForMapAndDict ("forbiddenKeysForMapAndDict",
                                                                            functionWithGenericHeader_forbiddenKeysForMapAndDict,
                                                                            & kTypeDescriptor_GALGAS_stringset,
                                                                            0,
                                                                            functionArgs_forbiddenKeysForMapAndDict) ;

