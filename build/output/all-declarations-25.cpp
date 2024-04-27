#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-25.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalOrExpressionAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalOrExpressionAST::getter_generateSwiftCocoaConditionCode (const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalOrExpressionAST temp_0 = this ;
  result_result = callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 106)) ;
  result_result.plusAssign_operation(GALGAS_string (" || "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 107)) ;
  const GALGAS_lexicalOrExpressionAST temp_1 = this ;
  result_result.plusAssign_operation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 108)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterIntervalMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterIntervalMatchAST::getter_generateSwiftCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  result_outGeneratedCode = GALGAS_string ("self.testForInputFromChar (") ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mLowerBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 118)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 118)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 118)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", toChar:"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 119)) ;
  const GALGAS_lexicalCharacterIntervalMatchAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_1.readProperty_mUpperBound ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 120)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 120)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 121)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStringMatchAST::getter_generateSwiftCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalStringMatchAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("self.testForInputString (").add_operation (temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 129)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", advance: true)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 130)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStringNotMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStringNotMatchAST::getter_generateSwiftCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("self.notTestForInputString (") ;
  const GALGAS_lexicalStringNotMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mString ().readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 139)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (", error: &scanningOk)"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 140)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterMatchAST::getter_generateSwiftCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("self.testForInputChar (") ;
  const GALGAS_lexicalCharacterMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 149)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 149)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 150)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterSetMatchAST generateSwiftCocoaConditionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterSetMatchAST::getter_generateSwiftCocoaConditionCode (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("self.testForCharWithFunction (") ;
  const GALGAS_lexicalCharacterSetMatchAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(temp_0.readProperty_mCharacterSetName ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 158)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 159)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputArgumentAST generateObjcCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalAttributeInputArgumentAST::getter_generateObjcCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 173)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterInputArgumentAST generateObjcCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterInputArgumentAST::getter_generateObjcCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalCharacterInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 180)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 180)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalUnsignedInputArgumentAST generateObjcCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalUnsignedInputArgumentAST::getter_generateObjcCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalUnsignedInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = temp_0.readProperty_mUnsigned ().readProperty_bigint ().getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 186)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateObjcCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCurrentCharacterInputArgumentAST::getter_generateObjcCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("mPreviousChar") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionInputArgumentAST generateObjcCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalFunctionInputArgumentAST::getter_generateObjcCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 200)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 200)) ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_1 = this ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_9283 (temp_1.readProperty_mFunctionActualArgumentList (), EnumerationOrder::up) ;
  while (enumerator_9283.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_9283.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 202)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 202)) ;
    if (enumerator_9283.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 203)) ;
    }
    enumerator_9283.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 205)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalAttributeInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 217)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCharacterInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCharacterInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalCharacterInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = temp_0.readProperty_mCharacter ().readProperty_char ().getter_uint (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 224)).getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 224)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalUnsignedInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalUnsignedInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalUnsignedInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = temp_0.readProperty_mUnsigned ().readProperty_bigint ().getter_string (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 230)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalCurrentCharacterInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalCurrentCharacterInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler */* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("self.previousChar") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFunctionInputArgumentAST generateSwiftCocoaRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalFunctionInputArgumentAST::getter_generateSwiftCocoaRoutineOrFunctionArgument (Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_function_").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 244)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 244)) ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_1 = this ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_11180 (temp_1.readProperty_mFunctionActualArgumentList (), EnumerationOrder::up) ;
  while (enumerator_11180.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_11180.current_mLexicalActualInputArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 246)) ;
    if (enumerator_11180.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 247)) ;
    }
    enumerator_11180.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 249)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSendTerminalByDefaultAST generateObjcCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSendTerminalByDefaultAST::getter_generateObjcCocoaDefaultSendCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 265)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 265)).add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 265)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 265)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorByDefaultAST generateObjcCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalErrorByDefaultAST::getter_generateObjcCocoaDefaultSendCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                      Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = NO ;\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSendTerminalByDefaultAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSendTerminalByDefaultAST::getter_generateSwiftCocoaDefaultSendCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 287)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 287)).add_operation (temp_0.readProperty_mDefaultSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 287)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 287)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorByDefaultAST generateSwiftCocoaDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalErrorByDefaultAST::getter_generateSwiftCocoaDefaultSendCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                       Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = false\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST generateObjcCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalImplicitRuleAST::getter_generateObjcCocoaCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                         const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  GALGAS_tokenSortedlist var_tokenSortedList_14942 ;
  const GALGAS_lexicalImplicitRuleAST temp_0 = this ;
  GALGAS_lexicalExplicitTokenListMap joker_14934 ; // Joker input parameter
  GALGAS_bool joker_14958 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_14934, var_tokenSortedList_14942, joker_14958, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 329)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_tokenSortedlist enumerator_15003 (var_tokenSortedList_14942, EnumerationOrder::down) ;
  while (enumerator_15003.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && [self testForInputString:@"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 332)) ;
    result_outGeneratedCode.plusAssign_operation(enumerator_15003.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 333)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 333)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (" advance:YES]) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 334)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 335)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 335)).add_operation (enumerator_15003.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 335)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 335)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 335)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 336)) ;
    enumerator_15003.gotoNextObject () ;
  }
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST generateObjcCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalExplicitRuleAST::getter_generateObjcCocoaCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                         const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("if (scanningOk && (") ;
  const GALGAS_lexicalExplicitRuleAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 347)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 348)) ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 349)) ;
  }
  const GALGAS_lexicalExplicitRuleAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_15907 (temp_1.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_15907.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_15907.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 351)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 351)) ;
    enumerator_15907.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 353)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 354)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalImplicitRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalImplicitRuleAST::getter_generateSwiftCocoaCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  GALGAS_tokenSortedlist var_tokenSortedList_16965 ;
  const GALGAS_lexicalImplicitRuleAST temp_0 = this ;
  GALGAS_lexicalExplicitTokenListMap joker_16957 ; // Joker input parameter
  GALGAS_bool joker_16981 ; // Joker input parameter
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_16957, var_tokenSortedList_16965, joker_16981, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 372)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  cEnumerator_tokenSortedlist enumerator_17026 (var_tokenSortedList_16965, EnumerationOrder::down) ;
  while (enumerator_17026.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if scanningOk && self.testForInputString ("), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 375)) ;
    result_outGeneratedCode.plusAssign_operation(enumerator_17026.current_mName (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 376)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 376)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", advance: true) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 377)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 378)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 378)).add_operation (enumerator_17026.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 378)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 378)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 379)) ;
    enumerator_17026.gotoNextObject () ;
  }
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalExplicitRuleAST generateSwiftCocoaCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalExplicitRuleAST::getter_generateSwiftCocoaCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("if scanningOk && (") ;
  const GALGAS_lexicalExplicitRuleAST temp_0 = this ;
  result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 390)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 391)) ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 392)) ;
  }
  const GALGAS_lexicalExplicitRuleAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_17927 (temp_1.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_17927.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_17927.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 394)), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 394)) ;
    enumerator_17927.gotoNextObject () ;
  }
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 396)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexiqueCocoaGeneration.galgas", 397)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalSendTerminalByDefaultAST checkLexicalDefaultAction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSendTerminalByDefaultAST::method_checkLexicalDefaultAction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalSendTerminalByDefaultAST temp_0 = this ;
  GALGAS_lexicalSentValueList joker_8184 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mDefaultSentTerminal (), joker_8184, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 200)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalErrorByDefaultAST checkLexicalDefaultAction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorByDefaultAST::method_checkLexicalDefaultAction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_lexicalErrorByDefaultAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_0.readProperty_mDefaultErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 208)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalOrExpressionAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalOrExpressionAST::method_checkLexicalExpression (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalOrExpressionAST temp_0 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_0.readProperty_mLeftOperand ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 222)) ;
  const GALGAS_lexicalOrExpressionAST temp_1 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_1.readProperty_mRightOperand ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 223)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCharacterMatchAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterMatchAST::method_checkLexicalExpression (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCharacterSetMatchAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterSetMatchAST::method_checkLexicalExpression (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_lexicalCharacterSetMatchAST temp_1 = this ;
    test_0 = ioArgument_ioLexiqueAnalysisContext.readProperty_mUnicodeTestFunctions ().getter_hasKey (temp_1.readProperty_mCharacterSetName ().readProperty_string () COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 237)).operator_not (SOURCE_FILE ("lexiqueCompilation.galgas", 237)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCharacterSetMatchAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      appendFixItActions (fixItArray3, kFixItReplace, ioArgument_ioLexiqueAnalysisContext.readProperty_mUnicodeTestFunctions ()) ;
      inCompiler->emitSemanticError (temp_2.readProperty_mCharacterSetName ().readProperty_location (), GALGAS_string ("undefined test function"), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 238)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCharacterIntervalMatchAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterIntervalMatchAST::method_checkLexicalExpression (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalStringMatchAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringMatchAST::method_checkLexicalExpression (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalStringMatchAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mUnicodeStringToGenerate.addAssign_operation (temp_0.readProperty_mString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 252)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalStringNotMatchAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringNotMatchAST::method_checkLexicalExpression (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalStringNotMatchAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mUnicodeStringToGenerate.addAssign_operation (temp_0.readProperty_mString ().readProperty_string ()  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 259)) ;
  {
  const GALGAS_lexicalStringNotMatchAST temp_1 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_1.readProperty_mErrorMessage ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 260)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalAttributeInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputArgumentAST::method_checkLexicalFunctionCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                     GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum var_attributeLexicalType_11794 ;
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_11794, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 277)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_attributeLexicalType_11794.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalAttributeInputArgumentAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_11794, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 283)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 284)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 285)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 286)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 283)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCharacterInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterInputArgumentAST::method_checkLexicalFunctionCallArgument (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                     GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 297)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCharacterInputArgumentAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mCharacter ().readProperty_location (), GALGAS_string ("type error, a literal character has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 298)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 299)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 300)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 298)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalUnsignedInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalUnsignedInputArgumentAST::method_checkLexicalFunctionCallArgument (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                    GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 311)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalUnsignedInputArgumentAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mUnsigned ().readProperty_location (), GALGAS_string ("type error, a literal character has @uint").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 312)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 313)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 314)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 312)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCurrentCharacterInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCurrentCharacterInputArgumentAST::method_checkLexicalFunctionCallArgument (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                            GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 325)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCurrentCharacterInputArgumentAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GALGAS_string ("type error, current character value has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 326)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 327)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 328)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 326)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFunctionInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionInputArgumentAST::method_checkLexicalFunctionCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                    GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_14440 ;
  GALGAS_lexicalTypeEnum var_returnedLexicalFormalType_14471 ;
  GALGAS_string var_replacementFunctionName_14506 ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = this ;
  GALGAS_bool joker_14534 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_lexicalFormalTypeList_14440, var_returnedLexicalFormalType_14471, var_replacementFunctionName_14506, joker_14534, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 339)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_replacementFunctionName_14506.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_14506, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 348)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 348)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 348)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::notEqual, var_returnedLexicalFormalType_14471.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_14471, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 352)).add_operation (GALGAS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 353)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 354)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 355)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 352)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_lexicalFunctionInputArgumentAST temp_8 = this ;
    test_7 = GALGAS_bool (ComparisonKind::notEqual, var_lexicalFormalTypeList_14440.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 359)).objectCompare (temp_8.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 359)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_9 = this ;
      const GALGAS_lexicalFunctionInputArgumentAST temp_10 = this ;
      TC_Array <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this lexical function names ").add_operation (temp_10.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 361)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 360)).add_operation (GALGAS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 361)).add_operation (var_lexicalFormalTypeList_14440.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 363)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 362)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 363)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 360)) ;
    }
  }
  const GALGAS_lexicalFunctionInputArgumentAST temp_12 = this ;
  cEnumerator_lexicalFunctionFormalArgumentList enumerator_15523 (var_lexicalFormalTypeList_14440, EnumerationOrder::up) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_15553 (temp_12.readProperty_mFunctionActualArgumentList (), EnumerationOrder::up) ;
  while (enumerator_15523.hasCurrentObject () && enumerator_15553.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_15553.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_15523.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 367)) ;
    enumerator_15523.gotoNextObject () ;
    enumerator_15553.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalAttributeInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                    GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum var_attributeLexicalType_16646 ;
  const GALGAS_lexicalAttributeInputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_16646, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 388)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_attributeLexicalType_16646.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalAttributeInputArgumentAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_16646, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 394)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 395)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 396)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 397)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 394)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                    GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 408)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCharacterInputArgumentAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mCharacter ().readProperty_location (), GALGAS_string ("type error, a literal character has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 409)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 411)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 410)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 411)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 409)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalUnsignedInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalUnsignedInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                   GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("lexiqueCompilation.galgas", 422)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalUnsignedInputArgumentAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mUnsigned ().readProperty_location (), GALGAS_string ("type error, a literal unsigned value has @uint").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 423)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 424)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 425)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 423)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalCurrentCharacterInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCurrentCharacterInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                                           GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, GALGAS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("lexiqueCompilation.galgas", 436)).objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_lexicalCurrentCharacterInputArgumentAST temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GALGAS_string ("type error, current character value has @char").add_operation (GALGAS_string (" type, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 437)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 438)).add_operation (GALGAS_string (" type value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 439)), fixItArray2  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 437)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFunctionInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFunctionInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                   GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList var_lexicalFormalTypeList_19295 ;
  GALGAS_lexicalTypeEnum var_returnedLexicalFormalType_19326 ;
  GALGAS_string var_replacementFunctionName_19361 ;
  const GALGAS_lexicalFunctionInputArgumentAST temp_0 = this ;
  GALGAS_bool joker_19389 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalFunctionMap ().method_searchKey (temp_0.readProperty_mFunctionName (), var_lexicalFormalTypeList_19295, var_returnedLexicalFormalType_19326, var_replacementFunctionName_19361, joker_19389, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 450)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_replacementFunctionName_19361.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("obsolete lexical function, replaced by '").add_operation (var_replacementFunctionName_19361, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 459)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 459)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 459)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::notEqual, var_returnedLexicalFormalType_19326.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("type error, the function returns an @").add_operation (extensionGetter_lexicalTypeBaseName (var_returnedLexicalFormalType_19326, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 463)).add_operation (GALGAS_string (" value, but lexical routine prototype requires an @"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 464)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 465)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 466)), fixItArray6  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 463)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_lexicalFunctionInputArgumentAST temp_8 = this ;
    test_7 = GALGAS_bool (ComparisonKind::notEqual, var_lexicalFormalTypeList_19295.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 470)).objectCompare (temp_8.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 470)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_lexicalFunctionInputArgumentAST temp_9 = this ;
      const GALGAS_lexicalFunctionInputArgumentAST temp_10 = this ;
      TC_Array <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mFunctionName ().readProperty_location (), GALGAS_string ("this lexical function names ").add_operation (temp_10.readProperty_mFunctionActualArgumentList ().getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 472)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 471)).add_operation (GALGAS_string (" actual argument(s), but the prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 472)).add_operation (var_lexicalFormalTypeList_19295.getter_count (SOURCE_FILE ("lexiqueCompilation.galgas", 474)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 473)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 474)), fixItArray11  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 471)) ;
    }
  }
  const GALGAS_lexicalFunctionInputArgumentAST temp_12 = this ;
  cEnumerator_lexicalFunctionFormalArgumentList enumerator_20378 (var_lexicalFormalTypeList_19295, EnumerationOrder::up) ;
  cEnumerator_lexicalFunctionCallActualArgumentListAST enumerator_20408 (temp_12.readProperty_mFunctionActualArgumentList (), EnumerationOrder::up) ;
  while (enumerator_20378.hasCurrentObject () && enumerator_20408.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalFunctionCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) enumerator_20408.current_mLexicalActualInputArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_20378.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 478)) ;
    enumerator_20378.gotoNextObject () ;
    enumerator_20408.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalImplicitRuleAST checkLexicalRule'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalImplicitRuleAST::method_checkLexicalRule (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalImplicitRuleAST temp_0 = this ;
  GALGAS_lexicalExplicitTokenListMap joker_21663 ; // Joker input parameter
  GALGAS_tokenSortedlist joker_21666 ; // Joker input parameter
  GALGAS_bool joker_21669 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalTokenListMap ().method_searchKey (temp_0.readProperty_mListName (), joker_21663, joker_21666, joker_21669, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 504)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalExplicitRuleAST checkLexicalRule'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalExplicitRuleAST::method_checkLexicalRule (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalExplicitRuleAST temp_0 = this ;
  callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) temp_0.readProperty_mLexicalRuleExpression ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 511)) ;
  GALGAS_lexicalTagMap var_tagMap_21991 = GALGAS_lexicalTagMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_lexicalExplicitRuleAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_22010 (temp_1.readProperty_mInstructionList (), EnumerationOrder::up) ;
  while (enumerator_22010.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_22010.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_21991, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 514)) ;
    enumerator_22010.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalStructuredSendInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStructuredSendInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                               GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalStructuredSendInstructionAST temp_0 = this ;
  cEnumerator_lexicalSendSearchListAST enumerator_4508 (temp_0.readProperty_mLexicalSendSearchList (), EnumerationOrder::up) ;
  while (enumerator_4508.hasCurrentObject ()) {
    {
    ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalTokenListMap.setter_setMShouldBeGeneratedForKey (GALGAS_bool (true), enumerator_4508.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 112)) ;
    }
    GALGAS_lexicalTypeEnum joker_4748 ; // Joker input parameter
    ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_4508.current_mAttributeName (HERE), joker_4748, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 113)) ;
    enumerator_4508.gotoNextObject () ;
  }
  const GALGAS_lexicalStructuredSendInstructionAST temp_1 = this ;
  callExtensionMethod_checkLexicalDefaultAction ((cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 115)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStructuredSendInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                                 const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_0 = this ;
  cEnumerator_lexicalSendSearchListAST enumerator_5329 (temp_0.readProperty_mLexicalSendSearchList (), EnumerationOrder::up) ;
  while (enumerator_5329.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (mTokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 128)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  mTokenCode = search_into_").add_operation (constinArgument_inScannerClassName.getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-structured-send.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 129)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 129)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("_").add_operation (enumerator_5329.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 130)).add_operation (GALGAS_string (" (mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 130)).add_operation (enumerator_5329.current_mAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 130)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 130)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 130)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 131)) ;
    enumerator_5329.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (mTokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 133)) ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (callExtensionGetter_generateObjcCocoaDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 134)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 135)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStructuredSendInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                                  const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_0 = this ;
  cEnumerator_lexicalSendSearchListAST enumerator_6224 (temp_0.readProperty_mLexicalSendSearchList (), EnumerationOrder::up) ;
  while (enumerator_6224.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (tokenCode == 0) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 146)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  tokenCode = search_into_").add_operation (constinArgument_inScannerClassName.getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-structured-send.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 147)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("_").add_operation (enumerator_6224.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 148)).add_operation (GALGAS_string (" (mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 148)).add_operation (enumerator_6224.current_mAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 148)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 148)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 149)) ;
    enumerator_6224.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if tokenCode == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 151)) ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (callExtensionGetter_generateSwiftCocoaDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 152)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 153)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalStructuredSendInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalStructuredSendInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalStructuredSendInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                               const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_0 = this ;
  cEnumerator_lexicalSendSearchListAST enumerator_7448 (temp_0.readProperty_mLexicalSendSearchList (), EnumerationOrder::up) ;
  while (enumerator_7448.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 172)) ;
    result_result.plusAssign_operation(GALGAS_string ("  token.mTokenCode = search_into_").add_operation (enumerator_7448.current_mSearchListName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 173)).add_operation (GALGAS_string (" (token.mLexicalAttribute_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 173)).add_operation (enumerator_7448.current_mAttributeName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-structured-send.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 173)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 173)) ;
    result_result.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 174)) ;
    enumerator_7448.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string ("if (token.mTokenCode == -1) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 176)) ;
  const GALGAS_lexicalStructuredSendInstructionAST temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  ").add_operation (callExtensionGetter_generateDefaultSendCode ((const cPtr_lexicalSendDefaultActionAST *) temp_1.readProperty_mLexicalSendDefaultAction ().ptr (), constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 177)) ;
  result_result.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 178)) ;
  result_result.plusAssign_operation(GALGAS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-structured-send.galgas", 179)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalDropInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalDropInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                     GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalDropInstructionAST temp_0 = this ;
  GALGAS_lexicalSentValueList joker_3051 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mTerminalName (), joker_3051, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 68)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalDropInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalDropInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                       const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalDropInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 79)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 79)).add_operation (temp_0.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-drop.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 79)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 79)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalDropInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalDropInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                        const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalDropInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 88)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 88)).add_operation (temp_0.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-drop.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 88)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 88)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalDropInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalDropInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalDropInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalDropInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                     const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalDropInstructionAST temp_0 = this ;
  result_result = GALGAS_string ("enterDroppedTerminal (kToken_").add_operation (temp_0.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-drop.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 106)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-drop.galgas", 106)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalErrorInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                      GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_lexicalErrorInstructionAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_0.readProperty_mErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 69)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalErrorInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                        const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                        Compiler */* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = NO ;\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalErrorInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                         const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                         Compiler */* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("scanningOk = false\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalErrorInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalErrorInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalErrorInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                      const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalErrorInstructionAST temp_0 = this ;
  result_result = GALGAS_string ("lexicalError (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 106)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 106)).add_operation (temp_0.readProperty_mErrorMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 106)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-error.galgas", 106)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalLogInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalLogInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                    GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalLogInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                      const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                      Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("/* lexicalLog (LINE_AND_SOURCE_FILE) ; */\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalLogInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                       const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("/* lexicalLog (LINE_AND_SOURCE_FILE) */\n") ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalLogInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalLogInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalLogInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                    const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                    Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("lexicalLog (LINE_AND_SOURCE_FILE) ;\n") ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalRepeatInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRepeatInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalRepeatInstructionAST temp_0 = this ;
  cEnumerator_lexicalWhileBranchListAST enumerator_3872 (temp_0.readProperty_mLexicalWhileBranchList (), EnumerationOrder::up) ;
  while (enumerator_3872.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) enumerator_3872.current_mWhileExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 101)) ;
    GALGAS_lexicalTagMap var_tagMap_4011 = GALGAS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 102)) ;
    cEnumerator_lexicalInstructionListAST enumerator_4076 (enumerator_3872.current_mWhileInstructionList (HERE), EnumerationOrder::up) ;
    while (enumerator_4076.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4076.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4011, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 104)) ;
      enumerator_4076.gotoNextObject () ;
    }
    enumerator_3872.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap_4219 = GALGAS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 107)) ;
  const GALGAS_lexicalRepeatInstructionAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_4282 (temp_1.readProperty_mRepeatedInstructionList (), EnumerationOrder::up) ;
  while (enumerator_4282.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4282.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4219, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 109)) ;
    enumerator_4282.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRepeatInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                         const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalRepeatInstructionAST temp_0 = this ;
  GALGAS_string var_loopVarName_4953 = GALGAS_string ("loop").add_operation (temp_0.readProperty_mLocation ().getter_endLocationIndex (inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 121)).getter_string (SOURCE_FILE ("lexique-instruction-repeat.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 121)) ;
  result_outGeneratedCode = GALGAS_string ("BOOL ").add_operation (var_loopVarName_4953, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 122)).add_operation (GALGAS_string (" = YES ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 122)) ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("do {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 123)) ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 124)) ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_5173 (temp_1.readProperty_mRepeatedInstructionList (), EnumerationOrder::up) ;
  while (enumerator_5173.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_5173.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 127)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 127)) ;
    enumerator_5173.gotoNextObject () ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_2 = this ;
  cEnumerator_lexicalWhileBranchListAST enumerator_5376 (temp_2.readProperty_mLexicalWhileBranchList (), EnumerationOrder::up) ;
  while (enumerator_5376.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 132)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_5376.current_mWhileExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 133)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 134)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 135)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_5667 (enumerator_5376.current_mWhileInstructionList (HERE), EnumerationOrder::up) ;
    while (enumerator_5667.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_5667.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 137)) ;
      enumerator_5667.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 139)) ;
    }
    if (enumerator_5376.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 141)) ;
    }
    enumerator_5376.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n  ").add_operation (var_loopVarName_4953, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 144)).add_operation (GALGAS_string (" = NO ;\n}\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 144)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 143)) ;
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 146)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}while (").add_operation (var_loopVarName_4953, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 147)).add_operation (GALGAS_string (" && scanningOk) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 147)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRepeatInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string ("while (loop && scanningOk) {\n") ;
  {
  result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 158)) ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_0 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_6630 (temp_0.readProperty_mRepeatedInstructionList (), EnumerationOrder::up) ;
  while (enumerator_6630.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_6630.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 161)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 161)) ;
    enumerator_6630.gotoNextObject () ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_1 = this ;
  cEnumerator_lexicalWhileBranchListAST enumerator_6834 (temp_1.readProperty_mLexicalWhileBranchList (), EnumerationOrder::up) ;
  while (enumerator_6834.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 166)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_6834.current_mWhileExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 167)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 167)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 168)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 169)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_7124 (enumerator_6834.current_mWhileInstructionList (HERE), EnumerationOrder::up) ;
    while (enumerator_7124.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_7124.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 171)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 171)) ;
      enumerator_7124.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 173)) ;
    }
    if (enumerator_6834.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 175)) ;
    }
    enumerator_6834.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n  loop = false\n}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 177)) ;
  {
  result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 180)) ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\nloop = true\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 181)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalRepeatInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRepeatInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRepeatInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                       const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("do {\n") ;
  {
  result_result.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 200)) ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_0 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_8322 (temp_0.readProperty_mRepeatedInstructionList (), EnumerationOrder::up) ;
  while (enumerator_8322.hasCurrentObject ()) {
    result_result.plusAssign_operation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_8322.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 203)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 203)) ;
    enumerator_8322.gotoNextObject () ;
  }
  const GALGAS_lexicalRepeatInstructionAST temp_1 = this ;
  cEnumerator_lexicalWhileBranchListAST enumerator_8513 (temp_1.readProperty_mLexicalWhileBranchList (), EnumerationOrder::up) ;
  while (enumerator_8513.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 208)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_8513.current_mWhileExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 209)) ;
    result_result.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 210)) ;
    {
    result_result.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 211)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_8747 (enumerator_8513.current_mWhileInstructionList (HERE), EnumerationOrder::up) ;
    while (enumerator_8747.hasCurrentObject ()) {
      result_result.plusAssign_operation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_8747.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 213)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 213)) ;
      enumerator_8747.gotoNextObject () ;
    }
    {
    result_result.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 215)) ;
    }
    if (enumerator_8513.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 217)) ;
    }
    enumerator_8513.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string ("}else{\n  loop = false ;\n}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 219)) ;
  {
  result_result.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 222)) ;
  }
  result_result.plusAssign_operation(GALGAS_string ("}while (loop) ;\nloop = true ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-repeat.galgas", 223)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalRewindInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRewindInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalRewindInstructionAST temp_0 = this ;
  ioArgument_ioTagMap.method_searchKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 73)) ;
  const GALGAS_lexicalRewindInstructionAST temp_1 = this ;
  GALGAS_lexicalSentValueList joker_3239 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_1.readProperty_mTerminalName (), joker_3239, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 74)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRewindInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                         const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalRewindInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("[self restoreScanningPoint: & locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 85)).add_operation (GALGAS_string ("] ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 85)) ;
  const GALGAS_lexicalRewindInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 86)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 86)).add_operation (temp_1.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-rewind.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 86)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 86)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRewindInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                          const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalRewindInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("self.restoreScanningPoint (locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 95)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 95)) ;
  const GALGAS_lexicalRewindInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 96)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 96)).add_operation (temp_1.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-rewind.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 96)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 96)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalRewindInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRewindInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRewindInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                       const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalRewindInstructionAST temp_0 = this ;
  result_result = GALGAS_string ("mCurrentLocation = currentLocationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 113)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 113)) ;
  const GALGAS_lexicalRewindInstructionAST temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("mTokenEndLocation = endLocationForTag_").add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 114)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 114)) ;
  const GALGAS_lexicalRewindInstructionAST temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("mCurrentChar = currentCharForTag_").add_operation (temp_2.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 115)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 115)) ;
  const GALGAS_lexicalRewindInstructionAST temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("token.mTokenCode = kToken_").add_operation (temp_3.readProperty_mTerminalName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-rewind.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 116)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 116)) ;
  result_result.plusAssign_operation(GALGAS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-rewind.galgas", 117)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateObjcCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalAttributeInputOutputArgumentAST::getter_generateObjcCocoaRoutineArgument (const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  GALGAS_lexicalTypeEnum var_lexicalType_6221 ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  constinArgument_inLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_lexicalType_6221, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 159)) ;
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_needsReferenceInInputOutputInCocoa (var_lexicalType_6221, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 161)).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 162)) ;
    }
  }
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_2 = this ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("mLexicalAttribute_").add_operation (temp_2.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 164)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 164)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFormalInputArgumentAST generateObjcCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalFormalInputArgumentAST::getter_generateObjcCocoaRoutineArgument (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalFormalInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = callExtensionGetter_generateObjcCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 172)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalAttributeInputOutputArgumentAST::getter_generateSwiftCocoaRoutineArgument (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("&self.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 192)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFormalInputArgumentAST generateSwiftCocoaRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalFormalInputArgumentAST::getter_generateSwiftCocoaRoutineArgument (const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalFormalInputArgumentAST temp_0 = this ;
  result_outGeneratedCode = callExtensionGetter_generateSwiftCocoaRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 200)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalAttributeInputOutputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputOutputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                          GALGAS_lexicalArgumentModeAST inArgument_inLexicalRoutineFormalArgumentMode,
                                                                                          GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum var_attributeLexicalType_8902 ;
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalAttributeMap ().method_searchKey (temp_0.readProperty_mAttributeName (), var_attributeLexicalType_8902, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 217)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_attributeLexicalType_8902.objectCompare (inArgument_inLexicalRoutineFormalArgumentType)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalAttributeInputOutputArgumentAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAttributeName ().readProperty_location (), GALGAS_string ("type error, attribute type is @").add_operation (extensionGetter_lexicalTypeBaseName (var_attributeLexicalType_8902, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 223)).add_operation (GALGAS_string (" type, but lexical routine prototype requires @"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 224)).add_operation (extensionGetter_lexicalTypeBaseName (inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 225)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 226)), fixItArray3  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 223)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::notEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 230)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_lexicalAttributeInputOutputArgumentAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualPassingModeLocation (), GALGAS_string ("the output mode (!) is required here, not an output/input mode"), fixItArray6  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 231)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalFormalInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalFormalInputArgumentAST::method_checkLexicalRoutineCallArgument (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalArgumentModeAST inArgument_inLexicalRoutineFormalArgumentMode,
                                                                                 GALGAS_lexicalTypeEnum inArgument_inLexicalRoutineFormalArgumentType,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalFormalInputArgumentAST temp_0 = this ;
  callExtensionMethod_checkLexicalRoutineCallArgument ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), ioArgument_ioLexiqueAnalysisContext, inArgument_inLexicalRoutineFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 242)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, inArgument_inLexicalRoutineFormalArgumentMode.objectCompare (GALGAS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 247)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalFormalInputArgumentAST temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualPassingModeLocation (), GALGAS_string ("the output/input mode (!\?) is required here, not an input mode"), fixItArray3  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 248)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalRoutineCallInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRoutineCallInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                            GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_10624 ;
  GALGAS_stringlist var_routineErrorMessageList_10666 ;
  const GALGAS_lexicalRoutineCallInstructionAST temp_0 = this ;
  GALGAS_bool joker_10694 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mLexicalRoutineMessageMap ().method_searchKey (temp_0.readProperty_mRoutineName (), var_lexicalRoutineFormalArgumentList_10624, var_routineErrorMessageList_10666, joker_10694, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 257)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalRoutineCallInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_lexicalRoutineFormalArgumentList_10624.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 264)).objectCompare (temp_2.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 264)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_lexicalRoutineCallInstructionAST temp_3 = this ;
      const GALGAS_lexicalRoutineCallInstructionAST temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("this lexical routine call names ").add_operation (temp_4.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 266)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 265)).add_operation (GALGAS_string (" actual argument(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 266)).add_operation (var_lexicalRoutineFormalArgumentList_10624.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 268)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 267)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 268)), fixItArray5  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 265)) ;
    }
  }
  const GALGAS_lexicalRoutineCallInstructionAST temp_6 = this ;
  cEnumerator_lexicalRoutineFormalArgumentList enumerator_11198 (var_lexicalRoutineFormalArgumentList_10624, EnumerationOrder::up) ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_11239 (temp_6.readProperty_mActualArgumentList (), EnumerationOrder::up) ;
  while (enumerator_11198.hasCurrentObject () && enumerator_11239.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRoutineCallArgument ((cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_11239.current_mLexicalRoutineActualArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_11198.current_mLexicalFormalArgumentMode (HERE), enumerator_11198.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 272)) ;
    enumerator_11198.gotoNextObject () ;
    enumerator_11239.gotoNextObject () ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_lexicalRoutineCallInstructionAST temp_8 = this ;
    test_7 = GALGAS_bool (ComparisonKind::notEqual, var_routineErrorMessageList_10666.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 279)).objectCompare (temp_8.readProperty_mErrorMessageList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 279)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_lexicalRoutineCallInstructionAST temp_9 = this ;
      const GALGAS_lexicalRoutineCallInstructionAST temp_10 = this ;
      TC_Array <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("this lexical routine call names ").add_operation (temp_10.readProperty_mErrorMessageList ().getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 281)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 280)).add_operation (GALGAS_string (" error message(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 281)).add_operation (var_routineErrorMessageList_10666.getter_count (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 283)).getter_string (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 282)).add_operation (GALGAS_string (" error message(s)"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 283)), fixItArray11  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 280)) ;
    }
  }
  const GALGAS_lexicalRoutineCallInstructionAST temp_12 = this ;
  cEnumerator_lstringlist enumerator_11898 (temp_12.readProperty_mErrorMessageList (), EnumerationOrder::up) ;
  while (enumerator_11898.hasCurrentObject ()) {
    cMapElement_lexicalMessageMap * objectArray_11939 = (cMapElement_lexicalMessageMap *) ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, enumerator_11898.current_mValue (HERE), kSearchErrorMessage_lexicalMessageMap_searchKey  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 287)) ;
    if (nullptr != objectArray_11939) {
      macroValidSharedObject (objectArray_11939, cMapElement_lexicalMessageMap) ;
      objectArray_11939->mProperty_mMessageIsUsed = GALGAS_bool (true) ;
    }
    enumerator_11898.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRoutineCallInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRoutineCallInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                              const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalRoutineCallInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_routine_").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 301)).add_operation (GALGAS_string (" (& scanningOk"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 301)) ;
  const GALGAS_lexicalRoutineCallInstructionAST temp_1 = this ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_12596 (temp_1.readProperty_mActualArgumentList (), EnumerationOrder::up) ;
  while (enumerator_12596.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateObjcCocoaRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_12596.current_mLexicalRoutineActualArgument (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 303)) ;
    enumerator_12596.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 305)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRoutineCallInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRoutineCallInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                               const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalRoutineCallInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("scanner_cocoa_routine_").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 314)).add_operation (GALGAS_string (" (&scanningOk"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 314)) ;
  const GALGAS_lexicalRoutineCallInstructionAST temp_1 = this ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_13223 (temp_1.readProperty_mActualArgumentList (), EnumerationOrder::up) ;
  while (enumerator_13223.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateSwiftCocoaRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_13223.current_mLexicalRoutineActualArgument (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 316)) ;
    enumerator_13223.gotoNextObject () ;
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 318)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalAttributeInputOutputArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalAttributeInputOutputArgumentAST::getter_generateRoutineArgument (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalAttributeInputOutputArgumentAST temp_0 = this ;
  result_result = GALGAS_string ("token.mLexicalAttribute_").add_operation (temp_0.readProperty_mAttributeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-routine-call.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 332)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalFormalInputArgumentAST generateRoutineArgument'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalFormalInputArgumentAST::getter_generateRoutineArgument (Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalFormalInputArgumentAST temp_0 = this ;
  result_result = callExtensionGetter_generateRoutineOrFunctionArgument ((const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) temp_0.readProperty_mRoutineOrFunctionFormalInputArgument ().ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 339)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRoutineCallInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalRoutineCallInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalRoutineCallInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalRoutineCallInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                            const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalRoutineCallInstructionAST temp_0 = this ;
  result_result = GALGAS_string ("::scanner_routine_").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 354)).add_operation (GALGAS_string (" (*this"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 354)) ;
  const GALGAS_lexicalRoutineCallInstructionAST temp_1 = this ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_14995 (temp_1.readProperty_mActualArgumentList (), EnumerationOrder::up) ;
  while (enumerator_14995.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string (", ").add_operation (callExtensionGetter_generateRoutineArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_14995.current_mLexicalRoutineActualArgument (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 356)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 356)) ;
    enumerator_14995.gotoNextObject () ;
  }
  const GALGAS_lexicalRoutineCallInstructionAST temp_2 = this ;
  cEnumerator_lstringlist enumerator_15147 (temp_2.readProperty_mErrorMessageList (), EnumerationOrder::up) ;
  while (enumerator_15147.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string (", gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 359)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 359)).add_operation (enumerator_15147.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 359)) ;
    enumerator_15147.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (") ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-routine-call.galgas", 361)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalSelectInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSelectInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                       GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalSelectInstructionAST temp_0 = this ;
  cEnumerator_lexicalSelectBranchListAST enumerator_4299 (temp_0.readProperty_mLexicalSelectBranchList (), EnumerationOrder::up) ;
  while (enumerator_4299.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((cPtr_lexicalExpressionAST *) enumerator_4299.current_mSelectExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 114)) ;
    GALGAS_lexicalTagMap var_tagMap_4441 = GALGAS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 115)) ;
    cEnumerator_lexicalInstructionListAST enumerator_4506 (enumerator_4299.current_mSelectInstructionList (HERE), EnumerationOrder::up) ;
    while (enumerator_4506.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4506.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4441, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 117)) ;
      enumerator_4506.gotoNextObject () ;
    }
    enumerator_4299.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap_4650 = GALGAS_lexicalTagMap::class_func_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 120)) ;
  const GALGAS_lexicalSelectInstructionAST temp_1 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_4713 (temp_1.readProperty_mDefaultInstructionList (), EnumerationOrder::up) ;
  while (enumerator_4713.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((cPtr_lexicalInstructionAST *) enumerator_4713.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_4650, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 122)) ;
    enumerator_4713.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSelectInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSelectInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                         const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalSelectInstructionAST temp_0 = this ;
  cEnumerator_lexicalSelectBranchListAST enumerator_5323 (temp_0.readProperty_mLexicalSelectBranchList (), EnumerationOrder::up) ;
  while (enumerator_5323.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if (scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 138)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_5323.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 139)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (")) {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 140)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 141)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_5617 (enumerator_5323.current_mSelectInstructionList (HERE), EnumerationOrder::up) ;
    while (enumerator_5617.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_5617.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 143)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 143)) ;
      enumerator_5617.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 145)) ;
    }
    if (enumerator_5323.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 147)) ;
    }
    enumerator_5323.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalSelectInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mDefaultInstructionList ().getter_count (SOURCE_FILE ("lexique-instruction-select.galgas", 150)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 151)) ;
      {
      result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 152)) ;
      }
      const GALGAS_lexicalSelectInstructionAST temp_3 = this ;
      cEnumerator_lexicalInstructionListAST enumerator_6038 (temp_3.readProperty_mDefaultInstructionList (), EnumerationOrder::up) ;
      while (enumerator_6038.hasCurrentObject ()) {
        result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateObjcCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_6038.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 154)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 154)) ;
        enumerator_6038.gotoNextObject () ;
      }
      {
      result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 156)) ;
      }
    }
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 158)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSelectInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSelectInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                          const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalSelectInstructionAST temp_0 = this ;
  cEnumerator_lexicalSelectBranchListAST enumerator_6650 (temp_0.readProperty_mLexicalSelectBranchList (), EnumerationOrder::up) ;
  while (enumerator_6650.hasCurrentObject ()) {
    result_outGeneratedCode.plusAssign_operation(GALGAS_string ("if scanningOk && ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 171)) ;
    result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_6650.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 172)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 172)) ;
    result_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 173)) ;
    {
    result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 174)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_6943 (enumerator_6650.current_mSelectInstructionList (HERE), EnumerationOrder::up) ;
    while (enumerator_6943.hasCurrentObject ()) {
      result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_6943.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 176)) ;
      enumerator_6943.gotoNextObject () ;
    }
    {
    result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 178)) ;
    }
    if (enumerator_6650.hasNextObject ()) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 180)) ;
    }
    enumerator_6650.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalSelectInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mDefaultInstructionList ().getter_count (SOURCE_FILE ("lexique-instruction-select.galgas", 183)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 184)) ;
      {
      result_outGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 185)) ;
      }
      const GALGAS_lexicalSelectInstructionAST temp_3 = this ;
      cEnumerator_lexicalInstructionListAST enumerator_7365 (temp_3.readProperty_mDefaultInstructionList (), EnumerationOrder::up) ;
      while (enumerator_7365.hasCurrentObject ()) {
        result_outGeneratedCode.plusAssign_operation(callExtensionGetter_generateSwiftCocoaInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_7365.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 187)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 187)) ;
        enumerator_7365.gotoNextObject () ;
      }
      {
      result_outGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 189)) ;
      }
    }
  }
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 191)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSelectInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalSelectInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
  const GALGAS_lexicalSelectInstructionAST temp_0 = this ;
  cEnumerator_lexicalSelectBranchListAST enumerator_7967 (temp_0.readProperty_mLexicalSelectBranchList (), EnumerationOrder::up) ;
  bool bool_1 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 200)).isValidAndTrue () ;
  if (enumerator_7967.hasCurrentObject () && bool_1) {
    while (enumerator_7967.hasCurrentObject () && bool_1) {
      cEnumerator_lexicalInstructionListAST enumerator_8052 (enumerator_7967.current_mSelectInstructionList (HERE), EnumerationOrder::up) ;
      bool bool_2 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 201)).isValidAndTrue () ;
      if (enumerator_8052.hasCurrentObject () && bool_2) {
        while (enumerator_8052.hasCurrentObject () && bool_2) {
          result_result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_8052.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 202)) ;
          enumerator_8052.gotoNextObject () ;
          if (enumerator_8052.hasCurrentObject ()) {
            bool_2 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 201)).isValidAndTrue () ;
          }
        }
      }
      enumerator_7967.gotoNextObject () ;
      if (enumerator_7967.hasCurrentObject ()) {
        bool_1 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 200)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_lexicalSelectInstructionAST temp_3 = this ;
  cEnumerator_lexicalInstructionListAST enumerator_8200 (temp_3.readProperty_mDefaultInstructionList (), EnumerationOrder::up) ;
  bool bool_4 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 205)).isValidAndTrue () ;
  if (enumerator_8200.hasCurrentObject () && bool_4) {
    while (enumerator_8200.hasCurrentObject () && bool_4) {
      result_result = callExtensionGetter_lexicalInstructionUsesLoopLocalVariable ((const cPtr_lexicalInstructionAST *) enumerator_8200.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 206)) ;
      enumerator_8200.gotoNextObject () ;
      if (enumerator_8200.hasCurrentObject ()) {
        bool_4 = result_result.operator_not (SOURCE_FILE ("lexique-instruction-select.galgas", 205)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSelectInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSelectInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                       const GALGAS_lexiqueAnalysisContext constinArgument_inLexiqueAnalysisContext,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_lexicalSelectInstructionAST temp_0 = this ;
  cEnumerator_lexicalSelectBranchListAST enumerator_8687 (temp_0.readProperty_mLexicalSelectBranchList (), EnumerationOrder::up) ;
  while (enumerator_8687.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("if ("), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 220)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateConditionCode ((const cPtr_lexicalExpressionAST *) enumerator_8687.current_mSelectExpression (HERE).ptr (), constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 221)) ;
    result_result.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 222)) ;
    {
    result_result.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 223)) ;
    }
    cEnumerator_lexicalInstructionListAST enumerator_8924 (enumerator_8687.current_mSelectInstructionList (HERE), EnumerationOrder::up) ;
    while (enumerator_8924.hasCurrentObject ()) {
      result_result.plusAssign_operation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_8924.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 225)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 225)) ;
      enumerator_8924.gotoNextObject () ;
    }
    {
    result_result.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 227)) ;
    }
    if (enumerator_8687.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string ("}else "), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 229)) ;
    }
    enumerator_8687.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_lexicalSelectInstructionAST temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mDefaultInstructionList ().getter_count (SOURCE_FILE ("lexique-instruction-select.galgas", 232)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      result_result.plusAssign_operation(GALGAS_string ("}else{\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 233)) ;
      {
      result_result.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 234)) ;
      }
      const GALGAS_lexicalSelectInstructionAST temp_3 = this ;
      cEnumerator_lexicalInstructionListAST enumerator_9293 (temp_3.readProperty_mDefaultInstructionList (), EnumerationOrder::up) ;
      while (enumerator_9293.hasCurrentObject ()) {
        result_result.plusAssign_operation(callExtensionGetter_generateLexicalInstructionCode ((const cPtr_lexicalInstructionAST *) enumerator_9293.current_mInstruction (HERE).ptr (), constinArgument_inScannerClassName, constinArgument_inLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 236)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 236)) ;
        enumerator_9293.gotoNextObject () ;
      }
      {
      result_result.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 238)) ;
      }
    }
  }
  result_result.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-select.galgas", 240)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalSimpleSendInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSimpleSendInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                           GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_lexicalSimpleSendInstructionAST temp_0 = this ;
  GALGAS_lexicalSentValueList joker_3054 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.readProperty_mTerminalMap ().method_searchKey (temp_0.readProperty_mSentTerminal (), joker_3054, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 66)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSimpleSendInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                             const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalSimpleSendInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("mTokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 77)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 77)).add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 77)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 77)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSimpleSendInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                              const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalSimpleSendInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("tokenCode = ").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 86)).add_operation (GALGAS_string ("_1_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 86)).add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 86)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 86)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalSimpleSendInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalSimpleSendInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalSimpleSendInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                           const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalSimpleSendInstructionAST temp_0 = this ;
  result_result = GALGAS_string ("token.mTokenCode = kToken_").add_operation (temp_0.readProperty_mSentTerminal ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("lexique-instruction-simple-send.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 104)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 104)) ;
  result_result.plusAssign_operation(GALGAS_string ("enterToken (token) ;\n"), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-simple-send.galgas", 105)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalTagInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalTagInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                    GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_lexicalTagInstructionAST temp_0 = this ;
  ioArgument_ioTagMap.setter_insertKey (temp_0.readProperty_mLexicalTagName (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 68)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalTagInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalTagInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                      const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalTagInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("scanningPointStructForCocoa locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 79)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 79)) ;
  const GALGAS_lexicalTagInstructionAST temp_1 = this ;
  result_outGeneratedCode.plusAssign_operation(GALGAS_string ("[self saveScanningPoint: & locationForTag_").add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 80)).add_operation (GALGAS_string ("] ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 80)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalTagInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalTagInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                       const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  const GALGAS_lexicalTagInstructionAST temp_0 = this ;
  result_outGeneratedCode = GALGAS_string ("let locationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 89)).add_operation (GALGAS_string (" = self.savedScanningPoint ()\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 89)) ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalTagInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalTagInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalTagInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalTagInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                    const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalTagInstructionAST temp_0 = this ;
  const GALGAS_lexicalTagInstructionAST temp_1 = this ;
  const GALGAS_lexicalTagInstructionAST temp_2 = this ;
  result_result = GALGAS_string ("const LocationInSource currentLocationForTag_").add_operation (temp_0.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 106)).add_operation (GALGAS_string (" = mCurrentLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 106)).add_operation (GALGAS_string ("const LocationInSource endLocationForTag_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 106)).add_operation (temp_1.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 107)).add_operation (GALGAS_string (" = mTokenEndLocation ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 107)).add_operation (GALGAS_string ("const utf32 currentCharForTag_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 107)).add_operation (temp_2.readProperty_mLexicalTagName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 108)).add_operation (GALGAS_string (" = mCurrentChar ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-tag.galgas", 108)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalWarningInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_lexicalWarningInstructionAST::method_checkLexicalInstruction (GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                        GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_lexicalWarningInstructionAST temp_0 = this ;
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), temp_0.readProperty_mWarningMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 68)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalWarningInstructionAST generateObjcCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalWarningInstructionAST::getter_generateObjcCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                          const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                          Compiler */* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalWarningInstructionAST generateSwiftCocoaInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalWarningInstructionAST::getter_generateSwiftCocoaInstructionCode (const GALGAS_string /* constinArgument_inScannerClassName */,
                                                                                           const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                           Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outGeneratedCode ; // Returned variable
  result_outGeneratedCode = GALGAS_string::makeEmptyString () ;
//---
  return result_outGeneratedCode ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalWarningInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_lexicalWarningInstructionAST::getter_lexicalInstructionUsesLoopLocalVariable (Compiler */* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexicalWarningInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexicalWarningInstructionAST::getter_generateLexicalInstructionCode (const GALGAS_string constinArgument_inScannerClassName,
                                                                                        const GALGAS_lexiqueAnalysisContext /* constinArgument_inLexiqueAnalysisContext */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalWarningInstructionAST temp_0 = this ;
  result_result = GALGAS_string ("lexicalWarning (gLexicalMessage_").add_operation (constinArgument_inScannerClassName, inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 105)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 105)).add_operation (temp_0.readProperty_mWarningMessageName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 105)).add_operation (GALGAS_string (" COMMA_LINE_AND_SOURCE_FILE) ;\n"), inCompiler COMMA_SOURCE_FILE ("lexique-instruction-warning.galgas", 105)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                         GALGAS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                         GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_optionComponentDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("optionCompilation.galgas", 189)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_enterDeclarationInSemanticContext (GALGAS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                                   const GALGAS_extensionInitializerForBuildingContext /* constinArgument_inExtensionInitializerMapForBuildingContext */,
                                                                                   const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                   const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                   const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                   GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                   GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_commandLineOptionMap var_boolOptionMap_7932 = GALGAS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GALGAS_commandLineOptionMap var_uintOptionMap_7979 = GALGAS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GALGAS_commandLineOptionMap var_stringOptionMap_8026 = GALGAS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_8075 = GALGAS_commandLineOptionMap::init (inCompiler COMMA_HERE) ;
  GALGAS_stringset var_optionNameSet_8106 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("optionCompilation.galgas", 209)) ;
  const GALGAS_optionComponentDeclarationAST temp_0 = this ;
  cEnumerator_commandLineOptionListAST enumerator_8268 (temp_0.readProperty_mOptions (), EnumerationOrder::up) ;
  while (enumerator_8268.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_optionNameSet_8106.getter_hasKey (enumerator_8268.current_mOptionInternalName (HERE).readProperty_string () COMMA_SOURCE_FILE ("optionCompilation.galgas", 211)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_8268.current_mOptionInternalName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_8268.current_mOptionInternalName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 212)).add_operation (GALGAS_string ("' command line option has been already declared"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 212)), fixItArray2  COMMA_SOURCE_FILE ("optionCompilation.galgas", 212)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_8268.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("bool"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          var_boolOptionMap_7932.setter_insertKey (enumerator_8268.current_mOptionInternalName (HERE), enumerator_8268.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_8268.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_8268.current_mOptionComment (HERE).readProperty_string (), GALGAS_string ("false"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 214)) ;
          }
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (ComparisonKind::notEqual, enumerator_8268.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 221)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (enumerator_8268.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @bool option cannot have a default value (default value is always false)"), fixItArray5  COMMA_SOURCE_FILE ("optionCompilation.galgas", 222)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (ComparisonKind::equal, enumerator_8268.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            {
            GALGAS_string temp_7 ;
            const enumGalgasBool test_8 = GALGAS_bool (ComparisonKind::equal, enumerator_8268.current_mOptionDefaultValue (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_8) {
              temp_7 = GALGAS_string ("0") ;
            }else if (kBoolFalse == test_8) {
              temp_7 = enumerator_8268.current_mOptionDefaultValue (HERE).readProperty_string () ;
            }
            var_uintOptionMap_7979.setter_insertKey (enumerator_8268.current_mOptionInternalName (HERE), enumerator_8268.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_8268.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_8268.current_mOptionComment (HERE).readProperty_string (), temp_7, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 225)) ;
            }
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (ComparisonKind::equal, enumerator_8268.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::class_func_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 232)))).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_8268.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @uint option default value cannot be an @string value"), fixItArray10  COMMA_SOURCE_FILE ("optionCompilation.galgas", 233)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = GALGAS_bool (ComparisonKind::equal, enumerator_8268.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
            if (kBoolTrue == test_11) {
              {
              var_stringOptionMap_8026.setter_insertKey (enumerator_8268.current_mOptionInternalName (HERE), enumerator_8268.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_8268.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_8268.current_mOptionComment (HERE).readProperty_string (), enumerator_8268.current_mOptionDefaultValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 236)) ;
              }
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (ComparisonKind::equal, enumerator_8268.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 243)))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  TC_Array <FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (enumerator_8268.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @string option default value cannot be an @uint value"), fixItArray13  COMMA_SOURCE_FILE ("optionCompilation.galgas", 244)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_11) {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              test_14 = GALGAS_bool (ComparisonKind::equal, enumerator_8268.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("stringlist"))).boolEnum () ;
              if (kBoolTrue == test_14) {
                {
                var_stringListOptionMap_8075.setter_insertKey (enumerator_8268.current_mOptionInternalName (HERE), enumerator_8268.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_8268.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_8268.current_mOptionComment (HERE).readProperty_string (), enumerator_8268.current_mOptionDefaultValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 247)) ;
                }
                enumGalgasBool test_15 = kBoolTrue ;
                if (kBoolTrue == test_15) {
                  test_15 = GALGAS_bool (ComparisonKind::notEqual, enumerator_8268.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::class_func_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 254)))).boolEnum () ;
                  if (kBoolTrue == test_15) {
                    TC_Array <FixItDescription> fixItArray16 ;
                    inCompiler->emitSemanticError (enumerator_8268.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @stringlist option cannot accept default value"), fixItArray16  COMMA_SOURCE_FILE ("optionCompilation.galgas", 255)) ;
                  }
                }
              }
            }
            if (kBoolFalse == test_14) {
              TC_Array <FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (enumerator_8268.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("only the @bool, @uint or @string types are allowed here"), fixItArray17  COMMA_SOURCE_FILE ("optionCompilation.galgas", 258)) ;
            }
          }
        }
      }
    }
    var_optionNameSet_8106.addAssign_operation (enumerator_8268.current_mOptionInternalName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 260)) ;
    enumerator_8268.gotoNextObject () ;
  }
  {
  const GALGAS_optionComponentDeclarationAST temp_18 = this ;
  const GALGAS_optionComponentDeclarationAST temp_19 = this ;
  ioArgument_ioSemanticContext.mProperty_mOptionComponentMapForSemanticAnalysis.setter_insertKey (temp_18.readProperty_mOptionComponentName (), temp_19.readProperty_isPredefined (), var_boolOptionMap_7932, var_uintOptionMap_7979, var_stringOptionMap_8026, var_stringListOptionMap_8075, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 263)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_optionComponentDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_11434 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 287)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11434, var_nameForUsefulness_11434, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 288)) ;
  }
  GALGAS_bool var_optionIsPredefined_11711 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_11761 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_11806 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_11851 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_11898 ;
  const GALGAS_optionComponentDeclarationAST temp_1 = this ;
  constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_optionIsPredefined_11711, var_boolOptionMap_11761, var_uintOptionMap_11806, var_stringOptionMap_11851, var_stringListOptionMap_11898, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 290)) ;
  GALGAS_commandLineOptionSortedList var_boolOptionSortedList_11976 = GALGAS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  cEnumerator_commandLineOptionMap enumerator_12020 (var_boolOptionMap_11761, EnumerationOrder::up) ;
  while (enumerator_12020.hasCurrentObject ()) {
    var_boolOptionSortedList_11976.addAssign_operation (enumerator_12020.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12020.current (HERE).readProperty_mOptionChar (), enumerator_12020.current (HERE).readProperty_mOptionString (), enumerator_12020.current (HERE).readProperty_mComment (), enumerator_12020.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 301)) ;
    enumerator_12020.gotoNextObject () ;
  }
  GALGAS_commandLineOptionSortedList var_uintOptionSortedList_12247 = GALGAS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  cEnumerator_commandLineOptionMap enumerator_12291 (var_uintOptionMap_11806, EnumerationOrder::up) ;
  while (enumerator_12291.hasCurrentObject ()) {
    var_uintOptionSortedList_12247.addAssign_operation (enumerator_12291.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12291.current (HERE).readProperty_mOptionChar (), enumerator_12291.current (HERE).readProperty_mOptionString (), enumerator_12291.current (HERE).readProperty_mComment (), enumerator_12291.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 310)) ;
    enumerator_12291.gotoNextObject () ;
  }
  GALGAS_commandLineOptionSortedList var_stringOptionSortedList_12518 = GALGAS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  cEnumerator_commandLineOptionMap enumerator_12564 (var_stringOptionMap_11851, EnumerationOrder::up) ;
  while (enumerator_12564.hasCurrentObject ()) {
    var_stringOptionSortedList_12518.addAssign_operation (enumerator_12564.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12564.current (HERE).readProperty_mOptionChar (), enumerator_12564.current (HERE).readProperty_mOptionString (), enumerator_12564.current (HERE).readProperty_mComment (), enumerator_12564.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 319)) ;
    enumerator_12564.gotoNextObject () ;
  }
  GALGAS_commandLineOptionSortedList var_stringListOptionSortedList_12795 = GALGAS_commandLineOptionSortedList::init (inCompiler COMMA_HERE) ;
  cEnumerator_commandLineOptionMap enumerator_12845 (var_stringListOptionMap_11898, EnumerationOrder::up) ;
  while (enumerator_12845.hasCurrentObject ()) {
    var_stringListOptionSortedList_12795.addAssign_operation (enumerator_12845.current (HERE).readProperty_lkey ().readProperty_string (), enumerator_12845.current (HERE).readProperty_mOptionChar (), enumerator_12845.current (HERE).readProperty_mOptionString (), enumerator_12845.current (HERE).readProperty_mComment (), enumerator_12845.current (HERE).readProperty_mDefaultValue ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 328)) ;
    enumerator_12845.gotoNextObject () ;
  }
  const GALGAS_optionComponentDeclarationAST temp_2 = this ;
  const GALGAS_optionComponentDeclarationAST temp_3 = this ;
  const GALGAS_optionComponentDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("option ").add_operation (temp_2.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 337)), GALGAS_optionComponentForGeneration::init_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (GALGAS_bool (true), GALGAS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 340)), var_optionIsPredefined_11711, temp_4.readProperty_mOptionComponentName ().readProperty_string (), var_boolOptionSortedList_11976, var_uintOptionSortedList_12247, var_stringOptionSortedList_12518, var_stringListOptionSortedList_12795, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("optionCompilation.galgas", 336)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_optionComponentForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_optionComponentForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_mIsPredefined () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_optionComponentForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  const GALGAS_optionComponentForGeneration temp_0 = this ;
  GALGAS_headerKind temp_1 ;
  const enumGalgasBool test_2 = temp_0.readProperty_mIsPredefined ().boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("optionCompilation.galgas", 372)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("optionCompilation.galgas", 372)) ;
  }
  result_result = temp_1 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                      GALGAS_string & outArgument_outHeader,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
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
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (inCompiler, temp_2.readProperty_mOptionComponentName (), temp_3.readProperty_mBoolOptionSortedList (), temp_4.readProperty_mUIntOptionSortedList (), temp_5.readProperty_mStringOptionSortedList (), temp_6.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas", 384))) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_string & outArgument_outImplementation,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
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
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 404))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 404)) ;
    const GALGAS_optionComponentForGeneration temp_3 = this ;
    const GALGAS_optionComponentForGeneration temp_4 = this ;
    const GALGAS_optionComponentForGeneration temp_5 = this ;
    const GALGAS_optionComponentForGeneration temp_6 = this ;
    const GALGAS_optionComponentForGeneration temp_7 = this ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (inCompiler, temp_3.readProperty_mOptionComponentName (), temp_4.readProperty_mBoolOptionSortedList (), temp_5.readProperty_mUIntOptionSortedList (), temp_6.readProperty_mStringOptionSortedList (), temp_7.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas", 405))) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentForGeneration appendSpecificFiles'
//
//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentForGeneration::method_appendSpecificFiles (const GALGAS_string constinArgument_inProductDirectory,
                                                                    GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                    GALGAS_stringlist & ioArgument_ioCocoaProductFileList,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("optionCompilation.galgas", 423)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      const GALGAS_optionComponentForGeneration temp_2 = this ;
      test_1 = temp_2.readProperty_mIsPredefined ().operator_not (SOURCE_FILE ("optionCompilation.galgas", 423)) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionComponentForGeneration temp_3 = this ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 424)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 424))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 424)) ;
      {
      const GALGAS_optionComponentForGeneration temp_4 = this ;
      const GALGAS_optionComponentForGeneration temp_5 = this ;
      const GALGAS_optionComponentForGeneration temp_6 = this ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_4.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 427)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 427)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (inCompiler, temp_5.readProperty_mOptionComponentName () COMMA_SOURCE_FILE ("optionCompilation.galgas", 431))), GALGAS_string ("\n\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (inCompiler, temp_6.readProperty_mOptionComponentName () COMMA_SOURCE_FILE ("optionCompilation.galgas", 435))), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 425)) ;
      }
      const GALGAS_optionComponentForGeneration temp_7 = this ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_7.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 441)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 441)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 441))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 441)) ;
      const GALGAS_optionComponentForGeneration temp_8 = this ;
      ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("option-").add_operation (temp_8.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 442)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 442))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 442)) ;
      {
      const GALGAS_optionComponentForGeneration temp_9 = this ;
      const GALGAS_optionComponentForGeneration temp_10 = this ;
      const GALGAS_optionComponentForGeneration temp_11 = this ;
      const GALGAS_optionComponentForGeneration temp_12 = this ;
      const GALGAS_optionComponentForGeneration temp_13 = this ;
      const GALGAS_optionComponentForGeneration temp_14 = this ;
      const GALGAS_optionComponentForGeneration temp_15 = this ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_9.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 445)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 445)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (inCompiler, GALGAS_string ("option-").add_operation (temp_10.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 450)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 450)), temp_11.readProperty_mOptionComponentName (), temp_12.readProperty_mBoolOptionSortedList (), temp_13.readProperty_mUIntOptionSortedList (), temp_14.readProperty_mStringOptionSortedList (), temp_15.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas", 449))), GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 443)) ;
      }
      const GALGAS_optionComponentForGeneration temp_16 = this ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_16.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 462)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 462))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 462)) ;
      const GALGAS_optionComponentForGeneration temp_17 = this ;
      ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("option-").add_operation (temp_17.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 463)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 463))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 463)) ;
      {
      const GALGAS_optionComponentForGeneration temp_18 = this ;
      const GALGAS_optionComponentForGeneration temp_19 = this ;
      const GALGAS_optionComponentForGeneration temp_20 = this ;
      const GALGAS_optionComponentForGeneration temp_21 = this ;
      const GALGAS_optionComponentForGeneration temp_22 = this ;
      const GALGAS_optionComponentForGeneration temp_23 = this ;
      const GALGAS_optionComponentForGeneration temp_24 = this ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_18.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 466)).add_operation (GALGAS_string ("-cocoa.swift"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 466)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationSwiftCocoa (inCompiler, GALGAS_string ("option-").add_operation (temp_19.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 471)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 471)).add_operation (GALGAS_string ("-swift-cocoa"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 471)), temp_20.readProperty_mOptionComponentName (), temp_21.readProperty_mBoolOptionSortedList (), temp_22.readProperty_mUIntOptionSortedList (), temp_23.readProperty_mStringOptionSortedList (), temp_24.readProperty_mStringListSortedList () COMMA_SOURCE_FILE ("optionCompilation.galgas", 470))), GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 464)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'optionGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_optionGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_optionGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_optionGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_optionGenerationTemplates_0,
  0,
  gWrapperAllDirectories_optionGenerationTemplates_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderZone3'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (Compiler * /* inCompiler */,
                                                                                  const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                  const GALGAS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                  const GALGAS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                  const GALGAS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                  const GALGAS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//\n//                               Bool options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_409_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_409 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_409.hasCurrentObject ()) {
      result.appendString ("extern BoolCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_409.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      index_409_.increment () ;
      enumerator_409.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                               UInt options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_972_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_972 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_972.hasCurrentObject ()) {
      result.appendString ("extern UIntCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_972.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      index_972_.increment () ;
      enumerator_972.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String options                                                   \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_1537_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_1537 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1537.hasCurrentObject ()) {
      result.appendString ("extern StringCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_1537.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      index_1537_.increment () ;
      enumerator_1537.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String List options                                              \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_2109_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_2109 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2109.hasCurrentObject ()) {
      result.appendString ("extern StringListCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2109.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (" ;\n\n") ;
      index_2109_.increment () ;
      enumerator_2109.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationGalgas3'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (Compiler * /* inCompiler */,
                                                                                            const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                            const GALGAS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                            const GALGAS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                            const GALGAS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                            const GALGAS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                               Bool options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_408_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_408 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_408.hasCurrentObject ()) {
      result.appendString ("BoolCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_408.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue ()) ;
      result.appendString (" (\"") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("\",\n                                         ") ;
      result.appendString (enumerator_408.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 9)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_408.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_408.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_408.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 12)).stringValue ()) ;
      result.appendString (") ;\n\n") ;
      index_408_.increment () ;
      enumerator_408.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                               UInt options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_1389_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_1389 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1389.hasCurrentObject ()) {
      result.appendString ("UIntCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_1389.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue ()) ;
      result.appendString (" (\"") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("\",\n                                         ") ;
      result.appendString (enumerator_1389.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 22)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_1389.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_1389.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 24)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_1389.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 25)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_1389.current_mDefaultValue (HERE).stringValue ()) ;
      result.appendString (") ;\n\n") ;
      index_1389_.increment () ;
      enumerator_1389.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String options                                                   \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_2437_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_2437 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2437.hasCurrentObject ()) {
      result.appendString ("StringCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_2437.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue ()) ;
      result.appendString (" (\"") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("\",\n                                         ") ;
      result.appendString (enumerator_2437.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_2437.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_2437.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 38)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_2437.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 39)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_2437.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 40)).stringValue ()) ;
      result.appendString (") ;\n\n") ;
      index_2437_.increment () ;
      enumerator_2437.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//                              String List options                                              \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_3533_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_3533 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3533.hasCurrentObject ()) {
      result.appendString ("StringListCommandLineOption gOption_") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3533.current_mOptionIdentifier (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue ()) ;
      result.appendString (" (\"") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
      result.appendString ("\",\n                                         ") ;
      result.appendString (enumerator_3533.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 50)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_3533.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_3533.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 52)).stringValue ()) ;
      result.appendString (",\n                                         ") ;
      result.appendString (enumerator_3533.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 53)).stringValue ()) ;
      result.appendString (") ;\n\n") ;
      index_3533_.increment () ;
      enumerator_3533.gotoNextObject () ;
    }
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone2'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#ifndef ") ;
  result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
  result.appendString ("_FOR_COCOA_DEFINED\n#define ") ;
  result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.stringValue ()) ;
  result.appendString ("_FOR_COCOA_DEFINED\n\n//--------------------------------------------------------------------------------------------------\n\n#import <Cocoa/Cocoa.h>\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone3'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nvoid enterOptionsFor_") ;
  result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-cocoa-zone3.galgasTemplate", 4)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("NSMutableArray * ioBoolOptionArray,\n          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("NSMutableArray * ioUIntOptionArray,\n          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("NSMutableArray * ioStringOptionArray,\n          ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("NSMutableArray * ioStringListOptionArray) ;\n\n//--------------------------------------------------------------------------------------------------\n\n#endif\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationCocoa'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (Compiler * inCompiler,
                                                                                       const GALGAS_string & in_OPTION_5F_HEADER_5F_FILE_5F_NAME,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                       const GALGAS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                       const GALGAS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                       const GALGAS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                       const GALGAS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n#import \"") ;
  result.appendString (in_OPTION_5F_HEADER_5F_FILE_5F_NAME.stringValue ()) ;
  result.appendString (".h\"\n#import \"OC_GGS_CommandLineOption.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nvoid enterOptionsFor_") ;
  result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 8)).stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("NSMutableArray * ioBoolOptionArray,\n           ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("NSMutableArray * ioUIntOptionArray,\n           ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("NSMutableArray * ioStringOptionArray,\n           ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("NSMutableArray * ioStringListOptionArray) {\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::greaterThan, in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("  OC_GGS_CommandLineOption * option ;\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  GALGAS_uint index_864_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_864 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_864.hasCurrentObject ()) {
      result.appendString ("  option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 17)).stringValue ()) ;
      result.appendString ("\n    identifier:@") ;
      result.appendString (enumerator_864.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 18)).stringValue ()) ;
      result.appendString ("\n    commandChar:") ;
      result.appendString (enumerator_864.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).stringValue ()) ;
      result.appendString ("\n    commandString:@") ;
      result.appendString (enumerator_864.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 20)).stringValue ()) ;
      result.appendString ("\n    comment:@") ;
      result.appendString (enumerator_864.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 21)).stringValue ()) ;
      result.appendString ("\n    defaultValue:@\"\"\n  ] ;\n  [ioBoolOptionArray addObject:option] ;\n") ;
      index_864_.increment () ;
      enumerator_864.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1496_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_1496 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1496.hasCurrentObject ()) {
      result.appendString ("  option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 28)).stringValue ()) ;
      result.appendString ("\n    identifier:@") ;
      result.appendString (enumerator_1496.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 29)).stringValue ()) ;
      result.appendString ("\n    commandChar:") ;
      result.appendString (enumerator_1496.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).stringValue ()) ;
      result.appendString ("\n    commandString:@") ;
      result.appendString (enumerator_1496.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 31)).stringValue ()) ;
      result.appendString ("\n    comment:@") ;
      result.appendString (enumerator_1496.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 32)).stringValue ()) ;
      result.appendString ("\n    defaultValue:@") ;
      result.appendString (enumerator_1496.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 33)).stringValue ()) ;
      result.appendString ("\n  ] ;\n  [ioUIntOptionArray addObject:option] ;\n") ;
      index_1496_.increment () ;
      enumerator_1496.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2185_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_2185 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2185.hasCurrentObject ()) {
      result.appendString ("  option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 39)).stringValue ()) ;
      result.appendString ("\n    identifier:@") ;
      result.appendString (enumerator_2185.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 40)).stringValue ()) ;
      result.appendString ("\n    commandChar:") ;
      result.appendString (enumerator_2185.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).stringValue ()) ;
      result.appendString ("\n    commandString:@") ;
      result.appendString (enumerator_2185.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 42)).stringValue ()) ;
      result.appendString ("\n    comment:@") ;
      result.appendString (enumerator_2185.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 43)).stringValue ()) ;
      result.appendString ("\n    defaultValue:@") ;
      result.appendString (enumerator_2185.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 44)).stringValue ()) ;
      result.appendString ("\n  ] ;\n  [ioStringOptionArray addObject:option] ;\n") ;
      index_2185_.increment () ;
      enumerator_2185.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2881_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_2881 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2881.hasCurrentObject ()) {
      result.appendString ("  option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 50)).stringValue ()) ;
      result.appendString ("\n    identifier:@") ;
      result.appendString (enumerator_2881.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 51)).stringValue ()) ;
      result.appendString ("\n    commandChar:") ;
      result.appendString (enumerator_2881.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).stringValue ()) ;
      result.appendString ("\n    commandString:@") ;
      result.appendString (enumerator_2881.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 53)).stringValue ()) ;
      result.appendString ("\n    comment:@") ;
      result.appendString (enumerator_2881.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 54)).stringValue ()) ;
      result.appendString ("\n    defaultValue:@") ;
      result.appendString (enumerator_2881.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 55)).stringValue ()) ;
      result.appendString ("\n  ] ;\n  [ioStringListOptionArray addObject:option] ;\n") ;
      index_2881_.increment () ;
      enumerator_2881.gotoNextObject () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationSwiftCocoa'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationSwiftCocoa (Compiler * inCompiler,
                                                                                            const GALGAS_string & /* in_OPTION_5F_HEADER_5F_FILE_5F_NAME */,
                                                                                            const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                            const GALGAS_commandLineOptionSortedList & in_BOOL_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                            const GALGAS_commandLineOptionSortedList & in_UINT_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                            const GALGAS_commandLineOptionSortedList & in_STRING_5F_OPTION_5F_SORTED_5F_LIST,
                                                                                            const GALGAS_commandLineOptionSortedList & in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nfunc enterOptions (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("_ ioBoolOptionArray : inout [SWIFT_CommandLineOption],\n           ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("_ ioUIntOptionArray : inout [SWIFT_CommandLineOption],\n           ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("_ ioStringOptionArray : inout [SWIFT_CommandLineOption],\n           ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("_ ioStringListOptionArray : inout [SWIFT_CommandLineOption]) {\n") ;
  GALGAS_uint index_502_ (0) ;
  if (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_502 (in_BOOL_5F_OPTION_5F_SORTED_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_502.hasCurrentObject ()) {
      result.appendString ("  ioBoolOptionArray.append (SWIFT_CommandLineOption (\n    domainName: ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 10)).stringValue ()) ;
      result.appendString (",\n    identifier: ") ;
      result.appendString (enumerator_502.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 11)).stringValue ()) ;
      result.appendString (",\n    commandChar: ") ;
      const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_502.current_mOptionChar (HERE).objectCompare (GALGAS_char (TO_UNICODE (0)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString (GALGAS_string ("\"\"").stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.appendString (GALGAS_string ("\"").add_operation (enumerator_502.current_mOptionChar (HERE).getter_string (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 12)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 12)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      result.appendString (",\n    commandString: ") ;
      result.appendString (enumerator_502.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 13)).stringValue ()) ;
      result.appendString (",\n    comment: ") ;
      result.appendString (enumerator_502.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 14)).stringValue ()) ;
      result.appendString (",\n    defaultValue: \"\"\n  ))\n") ;
      index_502_.increment () ;
      enumerator_502.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1145_ (0) ;
  if (in_UINT_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_1145 (in_UINT_5F_OPTION_5F_SORTED_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1145.hasCurrentObject ()) {
      result.appendString ("  ioUIntOptionArray.append (SWIFT_CommandLineOption (\n    domainName: ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 20)).stringValue ()) ;
      result.appendString (",\n    identifier: ") ;
      result.appendString (enumerator_1145.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 21)).stringValue ()) ;
      result.appendString (",\n    commandChar: ") ;
      const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_1145.current_mOptionChar (HERE).objectCompare (GALGAS_char (TO_UNICODE (0)))).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString (GALGAS_string ("\"\"").stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.appendString (GALGAS_string ("\"").add_operation (enumerator_1145.current_mOptionChar (HERE).getter_string (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 22)), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 22)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 22)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      result.appendString (",\n    commandString: ") ;
      result.appendString (enumerator_1145.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 23)).stringValue ()) ;
      result.appendString (",\n    comment: ") ;
      result.appendString (enumerator_1145.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 24)).stringValue ()) ;
      result.appendString (",\n    defaultValue: ") ;
      result.appendString (enumerator_1145.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 25)).stringValue ()) ;
      result.appendString ("\n  ))\n") ;
      index_1145_.increment () ;
      enumerator_1145.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1845_ (0) ;
  if (in_STRING_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_1845 (in_STRING_5F_OPTION_5F_SORTED_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1845.hasCurrentObject ()) {
      result.appendString ("  ioStringOptionArray.append (SWIFT_CommandLineOption (\n    domainName: ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 30)).stringValue ()) ;
      result.appendString (",\n    identifier: ") ;
      result.appendString (enumerator_1845.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 31)).stringValue ()) ;
      result.appendString (",\n    commandChar: ") ;
      const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_1845.current_mOptionChar (HERE).objectCompare (GALGAS_char (TO_UNICODE (0)))).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString (GALGAS_string ("\"\"").stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.appendString (GALGAS_string ("\"").add_operation (enumerator_1845.current_mOptionChar (HERE).getter_string (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 32)), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 32)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 32)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      result.appendString (",\n    commandString: ") ;
      result.appendString (enumerator_1845.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 33)).stringValue ()) ;
      result.appendString (",\n    comment: ") ;
      result.appendString (enumerator_1845.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 34)).stringValue ()) ;
      result.appendString (",\n    defaultValue: ") ;
      result.appendString (enumerator_1845.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 35)).stringValue ()) ;
      result.appendString ("\n  ))\n") ;
      index_1845_.increment () ;
      enumerator_1845.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2552_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST.isValid ()) {
    cEnumerator_commandLineOptionSortedList enumerator_2552 (in_STRING_5F_LIST_5F_OPTION_5F_SORTED_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2552.hasCurrentObject ()) {
      result.appendString ("  ioStringListOptionArray.append (SWIFT_CommandLineOption (\n    domainName: ") ;
      result.appendString (in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 40)).stringValue ()) ;
      result.appendString (",\n    identifier: ") ;
      result.appendString (enumerator_2552.current_mOptionIdentifier (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 41)).stringValue ()) ;
      result.appendString (",\n    commandChar: ") ;
      const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_2552.current_mOptionChar (HERE).objectCompare (GALGAS_char (TO_UNICODE (0)))).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString (GALGAS_string ("\"\"").stringValue ()) ;
        } break ;
      case kBoolFalse : {
        result.appendString (GALGAS_string ("\"").add_operation (enumerator_2552.current_mOptionChar (HERE).getter_string (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 42)), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 42)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 42)).stringValue ()) ;
        } break ;
      default :
        break ;
      }
      result.appendString (",\n    commandString: ") ;
      result.appendString (enumerator_2552.current_mOptionString (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 43)).stringValue ()) ;
      result.appendString (",\n    comment: ") ;
      result.appendString (enumerator_2552.current_mComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 44)).stringValue ()) ;
      result.appendString (",\n    defaultValue: ") ;
      result.appendString (enumerator_2552.current_mDefaultValue (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("option-implementation-swift-cocoa.galgasTemplate", 45)).stringValue ()) ;
      result.appendString ("\n  ))\n") ;
      index_2552_.increment () ;
      enumerator_2552.gotoNextObject () ;
    }
  }
  result.appendString ("  ioBoolOptionArray.append (SWIFT_CommandLineOption (\n    domainName: \"galgas_cli_options\",\n    identifier: \"quiet_output\",\n    commandChar: \"q\",\n    commandString: \"quiet\",\n    comment: \"Quiet output\",\n    defaultValue: \"\"\n  ))\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'compileAllGuiComponentFromASTGalgas3??!'
//
//--------------------------------------------------------------------------------------------------

void routine_compileAllGuiComponentFromASTGalgas_33__3F__3F__21_ (const GALGAS_galgasGUIComponentListAST constinArgument_inGuiComponentListAST,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  GALGAS_optionComponentMapForGeneration & outArgument_outOptionComponentMapForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptionComponentMapForGeneration.drop () ; // Release 'out' argument
  outArgument_outOptionComponentMapForGeneration = GALGAS_optionComponentMapForGeneration::init (inCompiler COMMA_HERE) ;
  cEnumerator_galgasGUIComponentListAST enumerator_13770 (constinArgument_inGuiComponentListAST, EnumerationOrder::up) ;
  while (enumerator_13770.hasCurrentObject ()) {
    {
    routine_guiComponentSemanticAnalysis_3F__3F__26_ (enumerator_13770.current (HERE), constinArgument_inSemanticContext, outArgument_outOptionComponentMapForGeneration, inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 416)) ;
    }
    enumerator_13770.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'guiComponentSemanticAnalysis??&'
//
//--------------------------------------------------------------------------------------------------

void routine_guiComponentSemanticAnalysis_3F__3F__26_ (const GALGAS_galgasGUIComponentListAST_2D_element constinArgument_inGUIComponentAST,
                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                       GALGAS_optionComponentMapForGeneration & ioArgument_ioOptionComponentMapForGeneration,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inGUIComponentAST.readProperty_mGUIComponentName ().readProperty_string ().objectCompare (GALGAS_string ("cocoa"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName ().readProperty_location (), GALGAS_string ("the gui name should be 'cocoa'"), fixItArray1  COMMA_SOURCE_FILE ("guiCompilation.galgas", 430)) ;
    }
  }
  GALGAS_guiAnalysisContext var_context_14505 = GALGAS_guiAnalysisContext::init (inCompiler COMMA_HERE) ;
  var_context_14505.mProperty_mProjectIndexingDescriptorList = constinArgument_inGUIComponentAST.readProperty_mProjectIndexingDescriptorList () ;
  cEnumerator_lstringlist enumerator_14662 (constinArgument_inGUIComponentAST.readProperty_mImportedOptionList (), EnumerationOrder::up) ;
  while (enumerator_14662.hasCurrentObject ()) {
    GALGAS_bool joker_14806_5 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_14806_4 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_14806_3 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_14806_2 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_14806_1 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (enumerator_14662.current_mValue (HERE), joker_14806_5, joker_14806_4, joker_14806_3, joker_14806_2, joker_14806_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 437)) ;
    var_context_14505.mProperty_mImportedOptionComponentList.addAssign_operation (enumerator_14662.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 441)) ;
    enumerator_14662.gotoNextObject () ;
  }
  GALGAS_bool var_runOptionDefined_14913 = GALGAS_bool (false) ;
  cEnumerator_guiSimpleAttributeListAST enumerator_14950 (constinArgument_inGUIComponentAST.readProperty_mGlobalSimpleAttributeList (), EnumerationOrder::up) ;
  while (enumerator_14950.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_14950.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("run"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_runOptionDefined_14913.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_14950.current_mKey (HERE).readProperty_location (), GALGAS_string ("option already defined"), fixItArray4  COMMA_SOURCE_FILE ("guiCompilation.galgas", 448)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (ComparisonKind::equal, enumerator_14950.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_14950.current_mValue (HERE).readProperty_location (), GALGAS_string ("run option string should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("guiCompilation.galgas", 450)) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_context_14505.mProperty_mBuildRunOption = enumerator_14950.current_mValue (HERE).readProperty_string () ;
            var_runOptionDefined_14913 = GALGAS_bool (true) ;
          }
        }
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (ComparisonKind::equal, enumerator_14950.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("nibAndMainClass"))).boolEnum () ;
        if (kBoolTrue == test_7) {
          cEnumerator_stringlist enumerator_15438 (enumerator_14950.current_mValue (HERE).readProperty_string ().getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("guiCompilation.galgas", 456)), EnumerationOrder::up) ;
          while (enumerator_15438.hasCurrentObject ()) {
            var_context_14505.mProperty_mNibAndClassList.addAssign_operation (enumerator_15438.current (HERE).readProperty_mValue ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 457)) ;
            enumerator_15438.gotoNextObject () ;
          }
        }
      }
      if (kBoolFalse == test_7) {
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticWarning (enumerator_14950.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_14950.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 460)).add_operation (GALGAS_string ("' key is invalid and has no effect"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 460)), fixItArray8  COMMA_SOURCE_FILE ("guiCompilation.galgas", 460)) ;
      }
    }
    enumerator_14950.gotoNextObject () ;
  }
  cEnumerator_withLexiqueListAST enumerator_15689 (constinArgument_inGUIComponentAST.readProperty_mWithLexiqueList (), EnumerationOrder::up) ;
  GALGAS_uint index_15644 (uint32_t (0)) ;
  while (enumerator_15689.hasCurrentObject ()) {
    GALGAS_terminalMap var_terminalMap_15906 ;
    GALGAS_lexicalStyleListAST var_lexicalStyleListAST_15939 ;
    GALGAS_bool joker_15879 ; // Joker input parameter
    GALGAS_indexingListAST joker_15924_3 ; // Joker input parameter
    GALGAS_terminalDeclarationListAST joker_15924_2 ; // Joker input parameter
    GALGAS_lexicalAttributeListAST joker_15924_1 ; // Joker input parameter
    GALGAS_lexicalListDeclarationListAST joker_15965 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (enumerator_15689.current_mLexiqueFileName (HERE), joker_15879, var_terminalMap_15906, joker_15924_3, joker_15924_2, joker_15924_1, var_lexicalStyleListAST_15939, joker_15965, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 466)) ;
    GALGAS_stringset var_terminalSymbolSet_16015 = var_terminalMap_15906.getter_keySet (SOURCE_FILE ("guiCompilation.galgas", 475)) ;
    cEnumerator_guiLabelListAST enumerator_16101 (enumerator_15689.current_mLabels (HERE), EnumerationOrder::up) ;
    while (enumerator_16101.hasCurrentObject ()) {
      cEnumerator_terminalLabelListAST enumerator_16138 (enumerator_16101.current_mTerminalList (HERE), EnumerationOrder::up) ;
      while (enumerator_16138.hasCurrentObject ()) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_terminalSymbolSet_16015.getter_hasKey (enumerator_16138.current_mTerminal (HERE).readProperty_string () COMMA_SOURCE_FILE ("guiCompilation.galgas", 479)).operator_not (SOURCE_FILE ("guiCompilation.galgas", 479)).boolEnum () ;
          if (kBoolTrue == test_9) {
            TC_Array <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_16138.current_mTerminal (HERE).readProperty_location (), GALGAS_string ("the '$").add_operation (enumerator_16138.current_mTerminal (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 480)).add_operation (GALGAS_string ("$' terminal symbol is not declared by the '"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 481)).add_operation (enumerator_15689.current_mLexiqueFileName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 482)).add_operation (GALGAS_string ("' lexique"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 483)), fixItArray10  COMMA_SOURCE_FILE ("guiCompilation.galgas", 480)) ;
          }
        }
        enumerator_16138.gotoNextObject () ;
      }
      enumerator_16101.gotoNextObject () ;
    }
    GALGAS_textMacroList var_textMacroList_16482 = GALGAS_textMacroList::init (inCompiler COMMA_HERE) ;
    cEnumerator_guiCompoundAttributeListAST enumerator_16530 (enumerator_15689.current_mCompoundAttributes (HERE), EnumerationOrder::up) ;
    while (enumerator_16530.hasCurrentObject ()) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (ComparisonKind::notEqual, enumerator_16530.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("textMacro"))).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_16530.current_mKey (HERE).readProperty_location (), GALGAS_string ("for a compound attribute, only the 'textMacro' key is valid"), fixItArray12  COMMA_SOURCE_FILE ("guiCompilation.galgas", 492)) ;
        }
      }
      if (kBoolFalse == test_11) {
        var_textMacroList_16482.addAssign_operation (enumerator_16530.current_mAttributeName (HERE).readProperty_string (), enumerator_16530.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 494)) ;
      }
      enumerator_16530.gotoNextObject () ;
    }
    GALGAS_bool var_hasAssociatedExtension_16817 = GALGAS_bool (false) ;
    GALGAS_bool var_hasTabViewTitle_16862 = GALGAS_bool (false) ;
    GALGAS_bool var_hasBlockComment_16900 = GALGAS_bool (false) ;
    GALGAS_string var_tabViewTitle_16940 = GALGAS_string::makeEmptyString () ;
    GALGAS_string var_blockComment_16974 = GALGAS_string::makeEmptyString () ;
    cEnumerator_guiSimpleAttributeListAST enumerator_17006 (enumerator_15689.current_mSimpleAttributes (HERE), EnumerationOrder::up) ;
    while (enumerator_17006.hasCurrentObject ()) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (ComparisonKind::equal, enumerator_17006.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("fileExtension"))).boolEnum () ;
        if (kBoolTrue == test_13) {
          {
          var_context_14505.mProperty_mExtensionMap.setter_insertKey (enumerator_17006.current_mValue (HERE), enumerator_15689.current_mLexiqueFileName (HERE).readProperty_string (), index_15644, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 505)) ;
          }
          var_hasAssociatedExtension_16817 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_13) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = GALGAS_bool (ComparisonKind::equal, enumerator_17006.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("title"))).boolEnum () ;
          if (kBoolTrue == test_14) {
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              test_15 = var_hasTabViewTitle_16862.boolEnum () ;
              if (kBoolTrue == test_15) {
                TC_Array <FixItDescription> fixItArray16 ;
                inCompiler->emitSemanticError (enumerator_17006.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17006.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 509)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 509)), fixItArray16  COMMA_SOURCE_FILE ("guiCompilation.galgas", 509)) ;
              }
            }
            var_hasTabViewTitle_16862 = GALGAS_bool (true) ;
            var_tabViewTitle_16940 = enumerator_17006.current_mValue (HERE).readProperty_string () ;
          }
        }
        if (kBoolFalse == test_14) {
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (ComparisonKind::equal, enumerator_17006.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("blockComment"))).boolEnum () ;
            if (kBoolTrue == test_17) {
              enumGalgasBool test_18 = kBoolTrue ;
              if (kBoolTrue == test_18) {
                test_18 = var_hasBlockComment_16900.boolEnum () ;
                if (kBoolTrue == test_18) {
                  TC_Array <FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (enumerator_17006.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17006.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 515)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 515)), fixItArray19  COMMA_SOURCE_FILE ("guiCompilation.galgas", 515)) ;
                }
              }
              var_hasBlockComment_16900 = GALGAS_bool (true) ;
              var_blockComment_16974 = enumerator_17006.current_mValue (HERE).readProperty_string () ;
            }
          }
          if (kBoolFalse == test_17) {
            TC_Array <FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_17006.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17006.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 520)).add_operation (GALGAS_string ("' key is not valid (valid keys: 'blockComment,', 'fileExtension', 'title')"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 520)), fixItArray20  COMMA_SOURCE_FILE ("guiCompilation.galgas", 520)) ;
          }
        }
      }
      enumerator_17006.gotoNextObject () ;
    }
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = var_hasAssociatedExtension_16817.operator_not (SOURCE_FILE ("guiCompilation.galgas", 524)).boolEnum () ;
      if (kBoolTrue == test_21) {
        TC_Array <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_15689.current_mLexiqueFileName (HERE).readProperty_location (), GALGAS_string ("one or more file extensions should be associated with a lexique (fileExtension : \"...\")"), fixItArray22  COMMA_SOURCE_FILE ("guiCompilation.galgas", 525)) ;
      }
    }
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      test_23 = var_hasTabViewTitle_16862.operator_not (SOURCE_FILE ("guiCompilation.galgas", 528)).boolEnum () ;
      if (kBoolTrue == test_23) {
        TC_Array <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_15689.current_mLexiqueFileName (HERE).readProperty_location (), GALGAS_string ("the 'title' key should be defined once (it is not defined)"), fixItArray24  COMMA_SOURCE_FILE ("guiCompilation.galgas", 529)) ;
      }
    }
    var_context_14505.mProperty_mWithLexiqueList.addAssign_operation (enumerator_15689.current_mLexiqueFileName (HERE).readProperty_string (), index_15644, var_blockComment_16974, var_tabViewTitle_16940, var_textMacroList_16482, enumerator_15689.current_mLabels (HERE), var_lexicalStyleListAST_15939  COMMA_SOURCE_FILE ("guiCompilation.galgas", 532)) ;
    enumerator_15689.gotoNextObject () ;
    index_15644.increment_operation (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 464)) ;
  }
  {
  ioArgument_ioOptionComponentMapForGeneration.setter_insertKey (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName (), var_context_14505, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 542)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateAllGuiComponentsGalgas3???&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateAllGuiComponentsGalgas_33__3F__3F__3F__26__26_ (const GALGAS_optionComponentMapForGeneration constinArgument_inOptionComponentMapForGeneration,
                                                                     const GALGAS_string constinArgument_inOutputDirectory,
                                                                     const GALGAS_bool constinArgument_inQuietOutputByDefault,
                                                                     GALGAS_stringlist & ioArgument_ioApplicationSourceSet,
                                                                     GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_optionComponentMapForGeneration enumerator_19078 (constinArgument_inOptionComponentMapForGeneration, EnumerationOrder::up) ;
  while (enumerator_19078.hasCurrentObject ()) {
    GALGAS_string var_swiftFileName_19147 = GALGAS_string ("gui-").add_operation (enumerator_19078.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 558)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 558)) ;
    ioArgument_ioApplicationSourceSet.addAssign_operation (var_swiftFileName_19147  COMMA_SOURCE_FILE ("guiCompilation.galgas", 559)) ;
    ioArgument_ioAllProductFileSet.addAssign_operation (var_swiftFileName_19147  COMMA_SOURCE_FILE ("guiCompilation.galgas", 560)) ;
    GALGAS_string var_swift_5F_string_19291 = GALGAS_string (filewrapperTemplate_guiGenerationTemplates_swift_5F_gui_5F_implementation (inCompiler, enumerator_19078.current_mGuiComponentContext (HERE), constinArgument_inQuietOutputByDefault COMMA_SOURCE_FILE ("guiCompilation.galgas", 561))) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_swiftFileName_19147, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_swift_5F_string_19291, GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 565)) ;
    }
    GALGAS_string var_objcFileName_19801 = GALGAS_string ("gui-").add_operation (enumerator_19078.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 576)).add_operation (GALGAS_string (".m"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 576)) ;
    ioArgument_ioApplicationSourceSet.addAssign_operation (var_objcFileName_19801  COMMA_SOURCE_FILE ("guiCompilation.galgas", 577)) ;
    ioArgument_ioAllProductFileSet.addAssign_operation (var_objcFileName_19801  COMMA_SOURCE_FILE ("guiCompilation.galgas", 578)) ;
    GALGAS_string var_objc_5F_string_19938 = GALGAS_string (filewrapperTemplate_guiGenerationTemplates_objc_5F_gui_5F_implementation (inCompiler, enumerator_19078.current_mGuiComponentContext (HERE), constinArgument_inQuietOutputByDefault COMMA_SOURCE_FILE ("guiCompilation.galgas", 579))) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_objcFileName_19801, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n\n"), var_objc_5F_string_19938, GALGAS_string ("\n\n"), GALGAS_string ("\n\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 583)) ;
    }
    enumerator_19078.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'guiGenerationTemplates'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_guiGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_guiGenerationTemplates_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_guiGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_guiGenerationTemplates_0,
  0,
  gWrapperAllDirectories_guiGenerationTemplates_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'guiGenerationTemplates objc_gui_implementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_guiGenerationTemplates_objc_5F_gui_5F_implementation (Compiler * inCompiler,
                                                                                        const GALGAS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                        const GALGAS_bool & in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n#import \"OC_Token.h\"\n#import \"F_CocoaWrapperForGalgas.h\"\n#import \"OC_GGS_CommandLineOption.h\"\n") ;
  GALGAS_uint index_220_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    cEnumerator_importedLexiqueList enumerator_220 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList (), EnumerationOrder::up) ;
    while (enumerator_220.hasCurrentObject ()) {
      result.appendString ("#import \"lexique-") ;
      result.appendString (enumerator_220.current_mLexiqueClassName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 6)).stringValue ()) ;
      result.appendString ("-cocoa.h\"\n") ;
      index_220_.increment () ;
      enumerator_220.gotoNextObject () ;
    }
  }
  GALGAS_uint index_350_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList ().isValid ()) {
    cEnumerator_stringlist enumerator_350 (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList (), EnumerationOrder::up) ;
    while (enumerator_350.hasCurrentObject ()) {
      result.appendString ("#import \"") ;
      result.appendString (enumerator_350.current_mValue (HERE).stringValue ()) ;
      result.appendString (".h\"\n") ;
      index_350_.increment () ;
      enumerator_350.gotoNextObject () ;
    }
  }
  result.appendString ("\n#ifdef USER_DEFAULT_COLORS_DEFINED\n  #import \"user_default_colors.h\"\n#endif\n\n//--------------------------------------------------------------------------------------------------\n\n#pragma mark Nibs\n\n//--------------------------------------------------------------------------------------------------\n//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                \n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_GUI_5F_CONTEXT.readProperty_mNibAndClassList ().getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 24)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("NSArray * nibsAndClasses (void) {\n  return [NSArray array] ;\n}\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("NSArray * nibsAndClasses (void) {\n  return [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_1125_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList ().isValid ()) {
      cEnumerator_stringlist enumerator_1125 (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList (), EnumerationOrder::up) ;
      while (enumerator_1125.hasCurrentObject ()) {
        result.appendString ("    [NSArray arrayWithObjects:@\"") ;
        result.appendString (enumerator_1125.current_mValue (HERE).stringValue ()) ;
        result.appendString ("\", [") ;
        result.appendString (enumerator_1125.current_mValue (HERE).stringValue ()) ;
        result.appendString (" class], nil],\n") ;
        index_1125_.increment () ;
        enumerator_1125.gotoNextObject () ;
      }
    }
    result.appendString ("    nil\n  ] ;\n}\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//    Project file extensions\n//--------------------------------------------------------------------------------------------------\n\nNSDictionary * indexingDescriptorDictionary (void) {\n") ;
  const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList ().getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 45)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString (" return [NSDictionary dictionary] ;\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("  return [NSDictionary dictionaryWithObjectsAndKeys: ") ;
    GALGAS_uint index_1774_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList ().isValid ()) {
      cEnumerator_projectIndexingDescriptorList enumerator_1774 (in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList (), EnumerationOrder::up) ;
      while (enumerator_1774.hasCurrentObject ()) {
        result.appendString ("@\"") ;
        result.appendString (enumerator_1774.current_indexingPathSuffix (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("\", @\"") ;
        result.appendString (enumerator_1774.current_mProjectFileExtension (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("\", ") ;
        index_1774_.increment () ;
        enumerator_1774.gotoNextObject () ;
      }
    }
    result.appendString ("nil] ;\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\n#pragma mark Command Line Options\n\n//--------------------------------------------------------------------------------------------------\n//                       Command Line Options                                                    \n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_2371_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList ().isValid ()) {
    cEnumerator_stringlist enumerator_2371 (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList (), EnumerationOrder::up) ;
    while (enumerator_2371.hasCurrentObject ()) {
      result.appendString ("#import \"option-") ;
      result.appendString (enumerator_2371.current_mValue (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 68)).stringValue ()) ;
      result.appendString ("-cocoa.h\"\n") ;
      index_2371_.increment () ;
      enumerator_2371.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nvoid enterOptions (NSMutableArray * ioBoolOptionArray,\n                   NSMutableArray * ioUIntOptionArray,\n                   NSMutableArray * ioStringOptionArray,\n                   NSMutableArray * ioStringListOptionArray) {\n") ;
  GALGAS_uint index_2837_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList ().isValid ()) {
    cEnumerator_stringlist enumerator_2837 (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList (), EnumerationOrder::up) ;
    while (enumerator_2837.hasCurrentObject ()) {
      result.appendString ("  enterOptionsFor_") ;
      result.appendString (enumerator_2837.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 79)).stringValue ()) ;
      result.appendString (" (ioBoolOptionArray, ioUIntOptionArray, ioStringOptionArray, ioStringListOptionArray) ;\n") ;
      index_2837_.increment () ;
      enumerator_2837.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_2 = in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT.boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@\"galgas_cli_options\"\n    identifier:@\"verbose_output\"\n    commandChar:'v'\n    commandString:@\"verbose\"\n    comment:@\"Verbose output\"\n    defaultValue:@\"\"\n  ] ;\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@\"galgas_cli_options\"\n    identifier:@\"quiet_output\"\n    commandChar:'q'\n    commandString:@\"quiet\"\n    comment:@\"Quiet output\"\n    defaultValue:@\"\"\n  ] ;\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("  [ioBoolOptionArray addObject:option] ;\n}\n\n") ;
  GALGAS_uint index_3759_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    cEnumerator_importedLexiqueList enumerator_3759 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList (), EnumerationOrder::up) ;
    while (enumerator_3759.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n\n#pragma mark Lexique ") ;
      result.appendString (enumerator_3759.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//                     P O P    U P    L I S T    D A T A\n//--------------------------------------------------------------------------------------------------\n\n") ;
      GALGAS_uint index_4275_ (0) ;
      if (enumerator_3759.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_4275 (enumerator_3759.current_mLabels (HERE), EnumerationOrder::up) ;
        while (enumerator_4275.hasCurrentObject ()) {
          result.appendString ("static const UInt16 gPopUpData_") ;
          result.appendString (enumerator_3759.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_3759.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_4275.current_mLocation (HERE).getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)).stringValue ()) ;
          result.appendString (" [") ;
          result.appendString (GALGAS_uint (uint32_t (2U)).multiply_operation (enumerator_4275.current_mTerminalList (HERE).getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)).add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 111)).stringValue ()) ;
          result.appendString ("] = {\n  ") ;
          result.appendString (enumerator_4275.current_mLeadingCharacterStrippedCount (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 112)).stringValue ()) ;
          result.appendString (", // Leading character count to strip\n") ;
          GALGAS_uint index_4619_ (0) ;
          if (enumerator_4275.current_mTerminalList (HERE).isValid ()) {
            cEnumerator_terminalLabelListAST enumerator_4619 (enumerator_4275.current_mTerminalList (HERE), EnumerationOrder::up) ;
            while (enumerator_4619.hasCurrentObject ()) {
              result.appendString ("  ") ;
              result.appendString (enumerator_3759.current_mLexiqueClassName (HERE).stringValue ()) ;
              result.appendString ("_1_") ;
              result.appendString (enumerator_4619.current_mTerminal (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 114)).stringValue ()) ;
              result.appendString (", ") ;
              result.appendString (enumerator_4619.current_mDisplayFlags (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 114)).stringValue ()) ;
              result.appendString (",\n") ;
              index_4619_.increment () ;
              enumerator_4619.gotoNextObject () ;
            }
          }
          result.appendString ("  0\n} ;\n\n") ;
          index_4275_.increment () ;
          enumerator_4275.gotoNextObject () ;
        }
      }
      result.appendString ("static const UInt16 * gPopUpData_") ;
      result.appendString (enumerator_3759.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 119)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3759.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 119)).stringValue ()) ;
      result.appendString (" [") ;
      result.appendString (enumerator_3759.current_mLabels (HERE).getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 119)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 119)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 119)).stringValue ()) ;
      result.appendString ("] = {\n") ;
      GALGAS_uint index_4991_ (0) ;
      if (enumerator_3759.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_4991 (enumerator_3759.current_mLabels (HERE), EnumerationOrder::up) ;
        while (enumerator_4991.hasCurrentObject ()) {
          result.appendString ("  gPopUpData_") ;
          result.appendString (enumerator_3759.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 121)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_3759.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 121)).stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_4991.current_mLocation (HERE).getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 121)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 121)).stringValue ()) ;
          result.appendString (",\n") ;
          index_4991_.increment () ;
          enumerator_4991.gotoNextObject () ;
        }
      }
      result.appendString ("  NULL\n} ;\n\n//--------------------------------------------------------------------------------------------------\n//                            Lexique interface\n//--------------------------------------------------------------------------------------------------\n\n@interface OC_Tokenizer_") ;
      result.appendString (enumerator_3759.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 128)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3759.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString (" : OC_Lexique_") ;
      result.appendString (enumerator_3759.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString (" {\n\n}\n\n- (NSString *) blockComment ;\n\n- (const UInt16 * *) popupListData ;\n\n- (NSUInteger) textMacroCount ;\n\n- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;\n\n- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;\n\n- (NSString *) tabItemTitle ;\n\n@end\n\n//--------------------------------------------------------------------------------------------------\n\n@implementation OC_Tokenizer_") ;
      result.appendString (enumerator_3759.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 138)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3759.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) blockComment {\n  return @") ;
      result.appendString (enumerator_3759.current_mBlockComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 141)).stringValue ()) ;
      result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (const UInt16 * *) popupListData {\n  return gPopUpData_") ;
      result.appendString (enumerator_3759.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 145)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3759.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 145)).stringValue ()) ;
      result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSUInteger) textMacroCount {\n  return ") ;
      result.appendString (enumerator_3759.current_mTextMacroList (HERE).getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 149)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 149)).stringValue ()) ;
      result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) tabItemTitle {\n  return @") ;
      result.appendString (enumerator_3759.current_mTitle (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 153)).stringValue ()) ;
      result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {\n  static NSString * kTextMacroTitle [") ;
      result.appendString (enumerator_3759.current_mTextMacroList (HERE).getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 157)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 157)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 157)).stringValue ()) ;
      result.appendString ("] = {\n") ;
      GALGAS_uint index_7280_ (0) ;
      if (enumerator_3759.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_7280 (enumerator_3759.current_mTextMacroList (HERE), EnumerationOrder::up) ;
        while (enumerator_7280.hasCurrentObject ()) {
          result.appendString ("    @") ;
          result.appendString (enumerator_7280.current_mKey (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 159)).stringValue ()) ;
          result.appendString (",\n") ;
          index_7280_.increment () ;
          enumerator_7280.gotoNextObject () ;
        }
      }
      result.appendString ("    NULL\n  } ;\n  return kTextMacroTitle [inIndex] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {\n  static NSString * kTextMacroContent [") ;
      result.appendString (enumerator_3759.current_mTextMacroList (HERE).getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 167)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 167)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 167)).stringValue ()) ;
      result.appendString ("] = {\n") ;
      GALGAS_uint index_7742_ (0) ;
      if (enumerator_3759.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_7742 (enumerator_3759.current_mTextMacroList (HERE), EnumerationOrder::up) ;
        while (enumerator_7742.hasCurrentObject ()) {
          result.appendString ("    @") ;
          result.appendString (enumerator_7742.current_mContents (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 169)).stringValue ()) ;
          result.appendString (",\n") ;
          index_7742_.increment () ;
          enumerator_7742.gotoNextObject () ;
        }
      }
      result.appendString ("    NULL\n  } ;\n  return kTextMacroContent [inIndex] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n@end\n\n") ;
      index_3759_.increment () ;
      enumerator_3759.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\nOC_Lexique * tokenizerForExtension (const NSString * inExtension) {\n  OC_Lexique * result = nil ;\n") ;
  GALGAS_uint index_8311_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    cEnumerator_extensionMap enumerator_8311 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap (), EnumerationOrder::up) ;
    const bool nonEmpty_enumerator_8311 = enumerator_8311.hasCurrentObject () ;
    if (nonEmpty_enumerator_8311) {
      result.appendString ("  if") ;
    }
    while (enumerator_8311.hasCurrentObject ()) {
      result.appendString (" ([inExtension isEqualToString:@") ;
      result.appendString (enumerator_8311.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 186)).stringValue ()) ;
      result.appendString ("]) {\n    result = [OC_Tokenizer_") ;
      result.appendString (enumerator_8311.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 187)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_8311.current_mLexiqueName (HERE).stringValue ()) ;
      result.appendString (" new] ;\n") ;
      if (enumerator_8311.hasNextObject ()) {
        result.appendString ("  }else if") ;
      }
      index_8311_.increment () ;
      enumerator_8311.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8311) {
      result.appendString ("  }\n") ;
    }
  }
  result.appendString ("  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nNSArray * tokenizers (void) {") ;
  const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().getter_count (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 197)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.appendString ("\n  return [NSArray array] ;\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("\n  return [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_8867_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
      cEnumerator_importedLexiqueList enumerator_8867 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList (), EnumerationOrder::up) ;
      while (enumerator_8867.hasCurrentObject ()) {
        result.appendString ("    [OC_Tokenizer_") ;
        result.appendString (enumerator_8867.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 202)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_8867.current_mLexiqueClassName (HERE).stringValue ()) ;
        result.appendString (" new],\n") ;
        index_8867_.increment () ;
        enumerator_8867.gotoNextObject () ;
      }
    }
    result.appendString ("    nil\n  ] ;\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nNSString * buildRunOption (void) {\n  return @\"") ;
  result.appendString (in_GUI_5F_CONTEXT.readProperty_mBuildRunOption ().stringValue ()) ;
  result.appendString ("\" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'guiGenerationTemplates swift_gui_implementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_guiGenerationTemplates_swift_5F_gui_5F_implementation (Compiler * inCompiler,
                                                                                         const GALGAS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                         const GALGAS_bool & in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                \n//--------------------------------------------------------------------------------------------------\n\n/*\n") ;
  const enumGalgasBool test_0 = GALGAS_bool (ComparisonKind::equal, in_GUI_5F_CONTEXT.readProperty_mNibAndClassList ().getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 10)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("NSArray * nibsAndClasses (void) {\n  return [NSArray array] ;\n}\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("NSArray * nibsAndClasses (void) {\n  return [NSArray arrayWithObjects:\n") ;
    GALGAS_uint index_560_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList ().isValid ()) {
      cEnumerator_stringlist enumerator_560 (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList (), EnumerationOrder::up) ;
      while (enumerator_560.hasCurrentObject ()) {
        result.appendString ("    [NSArray arrayWithObjects:@\"") ;
        result.appendString (enumerator_560.current_mValue (HERE).stringValue ()) ;
        result.appendString ("\", [") ;
        result.appendString (enumerator_560.current_mValue (HERE).stringValue ()) ;
        result.appendString (" class], nil],\n") ;
        index_560_.increment () ;
        enumerator_560.gotoNextObject () ;
      }
    }
    result.appendString ("    nil\n  ] ;\n}\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("\n\n*/\n//--------------------------------------------------------------------------------------------------\n//    Project file extensions\n//--------------------------------------------------------------------------------------------------\n\nNSDictionary * indexingDescriptorDictionary (void) {\n") ;
  const enumGalgasBool test_1 = GALGAS_bool (ComparisonKind::equal, in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList ().getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 33)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString (" return [NSDictionary dictionary] ;\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("  return [NSDictionary dictionaryWithObjectsAndKeys: ") ;
    GALGAS_uint index_1213_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList ().isValid ()) {
      cEnumerator_projectIndexingDescriptorList enumerator_1213 (in_GUI_5F_CONTEXT.readProperty_mProjectIndexingDescriptorList (), EnumerationOrder::up) ;
      while (enumerator_1213.hasCurrentObject ()) {
        result.appendString ("@\"") ;
        result.appendString (enumerator_1213.current_indexingPathSuffix (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("\", @\"") ;
        result.appendString (enumerator_1213.current_mProjectFileExtension (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("\", ") ;
        index_1213_.increment () ;
        enumerator_1213.gotoNextObject () ;
      }
    }
    result.appendString ("nil] ;\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n//\n//                       Command Line Options                                                    \n//\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GALGAS_uint index_1679_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList ().isValid ()) {
    cEnumerator_stringlist enumerator_1679 (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList (), EnumerationOrder::up) ;
    while (enumerator_1679.hasCurrentObject ()) {
      result.appendString ("// #import \"option-") ;
      result.appendString (enumerator_1679.current_mValue (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 54)).stringValue ()) ;
      result.appendString ("-cocoa.h\"\n") ;
      index_1679_.increment () ;
      enumerator_1679.gotoNextObject () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n/*\nvoid enterOptions (NSMutableArray * ioBoolOptionArray,\n                   NSMutableArray * ioUIntOptionArray,\n                   NSMutableArray * ioStringOptionArray,\n                   NSMutableArray * ioStringListOptionArray) {\n") ;
  GALGAS_uint index_2151_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList ().isValid ()) {
    cEnumerator_stringlist enumerator_2151 (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList (), EnumerationOrder::up) ;
    while (enumerator_2151.hasCurrentObject ()) {
      result.appendString ("  enterOptionsFor_") ;
      result.appendString (enumerator_2151.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 66)).stringValue ()) ;
      result.appendString (" (ioBoolOptionArray, ioUIntOptionArray, ioStringOptionArray, ioStringListOptionArray) ;\n") ;
      index_2151_.increment () ;
      enumerator_2151.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_2 = in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT.boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@\"galgas_cli_options\"\n    identifier:@\"verbose_output\"\n    commandChar:'v'\n    commandString:@\"verbose\"\n    comment:@\"Verbose output\"\n    defaultValue:@\"\"\n  ] ;\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]\n    initWithDomainName:@\"galgas_cli_options\"\n    identifier:@\"quiet_output\"\n    commandChar:'q'\n    commandString:@\"quiet\"\n    comment:@\"Quiet output\"\n    defaultValue:@\"\"\n  ] ;\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("  [ioBoolOptionArray addObject:option] ;\n}\n\n*/\n\n") ;
  GALGAS_uint index_3093_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    cEnumerator_importedLexiqueList enumerator_3093 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList (), EnumerationOrder::up) ;
    while (enumerator_3093.hasCurrentObject ()) {
      result.appendString ("//--------------------------------------------------------------------------------------------------\n//                     P O P    U P    L I S T    D A T A\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let gPopUpData_") ;
      result.appendString (enumerator_3093.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 98)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3093.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 98)).stringValue ()) ;
      result.appendString (" : [[UInt16]] = [\n") ;
      GALGAS_uint index_3548_ (0) ;
      if (enumerator_3093.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_3548 (enumerator_3093.current_mLabels (HERE), EnumerationOrder::up) ;
        while (enumerator_3548.hasCurrentObject ()) {
          result.appendString ("  [") ;
          result.appendString (enumerator_3548.current_mLeadingCharacterStrippedCount (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 100)).stringValue ()) ;
          result.appendString (", // Leading character count to strip\n") ;
          GALGAS_uint index_3697_ (0) ;
          if (enumerator_3548.current_mTerminalList (HERE).isValid ()) {
            cEnumerator_terminalLabelListAST enumerator_3697 (enumerator_3548.current_mTerminalList (HERE), EnumerationOrder::up) ;
            while (enumerator_3697.hasCurrentObject ()) {
              result.appendString ("    ") ;
              result.appendString (enumerator_3093.current_mLexiqueClassName (HERE).stringValue ()) ;
              result.appendString ("_1_") ;
              result.appendString (enumerator_3697.current_mTerminal (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 102)).stringValue ()) ;
              result.appendString (", ") ;
              result.appendString (enumerator_3697.current_mDisplayFlags (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 102)).stringValue ()) ;
              if (enumerator_3697.hasNextObject ()) {
                result.appendString (",\n") ;
              }
              index_3697_.increment () ;
              enumerator_3697.gotoNextObject () ;
            }
          }
          result.appendString ("\n  ]") ;
          if (enumerator_3548.hasNextObject ()) {
            result.appendString (",\n") ;
          }
          index_3548_.increment () ;
          enumerator_3548.gotoNextObject () ;
        }
      }
      result.appendString ("\n]\n\n//--------------------------------------------------------------------------------------------------\n//                            Lexique interface\n//--------------------------------------------------------------------------------------------------\n  \nclass SWIFT_Tokenizer_") ;
      result.appendString (enumerator_3093.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 115)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3093.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString (" : SWIFT_Lexique_") ;
      result.appendString (enumerator_3093.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString (", SWIFT_Tokenizer_Protocol {\n\n//- (NSUInteger) textMacroCount ;\n\n//- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;\n\n//- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func popupListData () -> [[UInt16]] {\n    return gPopUpData_") ;
      result.appendString (enumerator_3093.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 126)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3093.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 126)).stringValue ()) ;
      result.appendString ("\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func tabItemTitle () -> String {\n    return ") ;
      result.appendString (enumerator_3093.current_mTitle (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 132)).stringValue ()) ;
      result.appendString ("\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  \n  func blockComment () -> String {\n    return ") ;
      result.appendString (enumerator_3093.current_mBlockComment (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 138)).stringValue ()) ;
      result.appendString ("\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func attributes (fromStyleIndex inStyleIndex : UInt8) -> [NSAttributedString.Key : Any] {\n    let fontManager = NSFontManager.shared\n    var font = fontManager.convert (\n      self.font.propval,\n      toHaveTrait: self.bold (forStyle: inStyleIndex).propval \? .boldFontMask : .unboldFontMask\n    )\n    font = fontManager.convert (\n      font,\n      toHaveTrait: self.italic (forStyle: inStyleIndex).propval \? .italicFontMask : .unitalicFontMask\n    )\n    let result : [NSAttributedString.Key : Any] = [\n      .foregroundColor : self.color (forStyle: inStyleIndex).propval,\n      .font : font\n    ]\n    return result\n  }\n\n  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n/* @implementation OC_Tokenizer_") ;
      result.appendString (enumerator_3093.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 165)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3093.current_mLexiqueClassName (HERE).stringValue ()) ;
      result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSUInteger) textMacroCount {\n  return ") ;
      result.appendString (enumerator_3093.current_mTextMacroList (HERE).getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 168)).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 168)).stringValue ()) ;
      result.appendString (" ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {\n  static NSString * kTextMacroTitle [") ;
      result.appendString (enumerator_3093.current_mTextMacroList (HERE).getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 173)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 173)).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 173)).stringValue ()) ;
      result.appendString ("] = {\n") ;
      GALGAS_uint index_6812_ (0) ;
      if (enumerator_3093.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_6812 (enumerator_3093.current_mTextMacroList (HERE), EnumerationOrder::up) ;
        while (enumerator_6812.hasCurrentObject ()) {
          result.appendString ("    @") ;
          result.appendString (enumerator_6812.current_mKey (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 175)).stringValue ()) ;
          result.appendString (",\n") ;
          index_6812_.increment () ;
          enumerator_6812.gotoNextObject () ;
        }
      }
      result.appendString ("    nullptr\n  } ;\n  return kTextMacroTitle [inIndex] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {\n  static NSString * kTextMacroContent [") ;
      result.appendString (enumerator_3093.current_mTextMacroList (HERE).getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 183)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 183)).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 183)).stringValue ()) ;
      result.appendString ("] = {\n") ;
      GALGAS_uint index_7275_ (0) ;
      if (enumerator_3093.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_7275 (enumerator_3093.current_mTextMacroList (HERE), EnumerationOrder::up) ;
        while (enumerator_7275.hasCurrentObject ()) {
          result.appendString ("    @") ;
          result.appendString (enumerator_7275.current_mContents (HERE).getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 185)).stringValue ()) ;
          result.appendString (",\n") ;
          index_7275_.increment () ;
          enumerator_7275.gotoNextObject () ;
        }
      }
      result.appendString ("    nullptr\n  } ;\n  return kTextMacroContent [inIndex] ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\n@end */\n\n") ;
      index_3093_.increment () ;
      enumerator_3093.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n//--------------------------------------------------------------------------------------------------\n//   Global functions\n//--------------------------------------------------------------------------------------------------\n\nfunc tokenizerFor (extension inExtension : String) -> SWIFT_Tokenizer_Protocol\? {\n  var result : SWIFT_Tokenizer_Protocol\? = nil\n") ;
  GALGAS_uint index_8004_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    cEnumerator_extensionMap enumerator_8004 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap (), EnumerationOrder::up) ;
    const bool nonEmpty_enumerator_8004 = enumerator_8004.hasCurrentObject () ;
    if (nonEmpty_enumerator_8004) {
      result.appendString ("  if") ;
    }
    while (enumerator_8004.hasCurrentObject ()) {
      result.appendString (" inExtension == ") ;
      result.appendString (enumerator_8004.current_lkey (HERE).readProperty_string ().getter_utf_38_RepresentationEscapingQuestionMark (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 204)).stringValue ()) ;
      result.appendString (" {\n    result = SWIFT_Tokenizer_") ;
      result.appendString (enumerator_8004.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 205)).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_8004.current_mLexiqueName (HERE).stringValue ()) ;
      result.appendString (" ()\n") ;
      if (enumerator_8004.hasNextObject ()) {
        result.appendString ("  }else if") ;
      }
      index_8004_.increment () ;
      enumerator_8004.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8004) {
      result.appendString ("  }\n") ;
    }
  }
  result.appendString ("  return result\n}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc tokenizers () -> [SWIFT_Tokenizer_Protocol] {") ;
  const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::equal, in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().getter_count (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 215)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.appendString ("\n  return []\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("\n  return [\n") ;
    GALGAS_uint index_8521_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
      cEnumerator_importedLexiqueList enumerator_8521 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList (), EnumerationOrder::up) ;
      while (enumerator_8521.hasCurrentObject ()) {
        result.appendString ("    SWIFT_Tokenizer_") ;
        result.appendString (enumerator_8521.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.swift.galgasTemplate", 220)).stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_8521.current_mLexiqueClassName (HERE).stringValue ()) ;
        result.appendString (" ()") ;
        if (enumerator_8521.hasNextObject ()) {
          result.appendString (",\n") ;
        }
        index_8521_.increment () ;
        enumerator_8521.gotoNextObject () ;
      }
    }
    result.appendString ("\n  ]\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n\nfunc buildRunOption () -> String {\n  return \"") ;
  result.appendString (in_GUI_5F_CONTEXT.readProperty_mBuildRunOption ().stringValue ()) ;
  result.appendString ("\"\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@predefinedTypeAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                             GALGAS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                             GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                             GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                             GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                             GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                             GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_predefinedTypeAST temp_0 = this ;
  GALGAS_lstring var_key_3043 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 64)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type.galgas", 64)), inCompiler COMMA_HERE) ;
  {
  const GALGAS_predefinedTypeAST temp_1 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3043, temp_1, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 65)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@predefinedTypeAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_enterDeclarationInSemanticContext (GALGAS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                       const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classFunctionMap var_constructorMap_3895 ;
  const GALGAS_predefinedTypeAST temp_0 = this ;
  callExtensionMethod_getClassFunctionMap ((cPtr_predefinedTypeAST *) temp_0.ptr (), ioArgument_ioTypeMap, var_constructorMap_3895, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 78)) ;
  GALGAS_getterMap var_getterMap_3962 ;
  const GALGAS_predefinedTypeAST temp_1 = this ;
  callExtensionMethod_getGetterMap ((cPtr_predefinedTypeAST *) temp_1.ptr (), ioArgument_ioTypeMap, var_getterMap_3962, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 79)) ;
  GALGAS_setterMap var_setterMap_4024 ;
  const GALGAS_predefinedTypeAST temp_2 = this ;
  callExtensionMethod_getSetterMap ((cPtr_predefinedTypeAST *) temp_2.ptr (), ioArgument_ioTypeMap, var_setterMap_4024, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 80)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4102 ;
  const GALGAS_predefinedTypeAST temp_3 = this ;
  callExtensionMethod_getInstanceMethodMap ((cPtr_predefinedTypeAST *) temp_3.ptr (), ioArgument_ioTypeMap, var_instanceMethodMap_4102, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 81)) ;
  GALGAS_classMethodMap var_classMethodMap_4182 ;
  const GALGAS_predefinedTypeAST temp_4 = this ;
  callExtensionMethod_getClassMethodMap ((cPtr_predefinedTypeAST *) temp_4.ptr (), ioArgument_ioTypeMap, var_classMethodMap_4182, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 82)) ;
  GALGAS_functionSignature var_addAssignArgumentList_4269 ;
  const GALGAS_predefinedTypeAST temp_5 = this ;
  callExtensionMethod_getAddAssignArgumentList ((cPtr_predefinedTypeAST *) temp_5.ptr (), ioArgument_ioTypeMap, var_addAssignArgumentList_4269, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 83)) ;
  GALGAS_enumerationDescriptorList var_enumerationList_4377 ;
  GALGAS_string var_enumeratedTypeName_4412 ;
  const GALGAS_predefinedTypeAST temp_6 = this ;
  callExtensionMethod_getEnumerationList ((cPtr_predefinedTypeAST *) temp_6.ptr (), ioArgument_ioTypeMap, var_enumerationList_4377, var_enumeratedTypeName_4412, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 84)) ;
  {
  const GALGAS_predefinedTypeAST temp_7 = this ;
  GALGAS_unifiedTypeMapEntry joker_4500 ; // Joker input parameter
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, temp_7.readProperty_mPredefinedTypeName (), joker_4500, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 89)) ;
  }
  GALGAS_unifiedTypeMapEntry var_enumeratedTypeEntry_4552 ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (ComparisonKind::equal, var_enumeratedTypeName_4412.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      var_enumeratedTypeEntry_4552 = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-predefined-type.galgas", 93)) ;
    }
  }
  if (kBoolFalse == test_8) {
    {
    extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, var_enumeratedTypeName_4412, var_enumeratedTypeEntry_4552, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 95)) ;
    }
  }
  GALGAS_initializerMap var_initializerMap_4807 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_predefinedTypeAST temp_9 = this ;
  cEnumerator_initializerSignatureList enumerator_4836 (callExtensionGetter_initializers ((const cPtr_predefinedTypeAST *) temp_9.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 99)), EnumerationOrder::up) ;
  while (enumerator_4836.hasCurrentObject ()) {
    GALGAS_functionSignature var_formalParameterList_4904 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
    cEnumerator_formalInputParameterListAST enumerator_5002 (enumerator_4836.current_initializer (HERE), EnumerationOrder::up) ;
    while (enumerator_5002.hasCurrentObject ()) {
      var_formalParameterList_4904.addAssign_operation (enumerator_5002.current_mFormalSelector (HERE), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_5002.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 104)), enumerator_5002.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_5002.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 102)) ;
      enumerator_5002.gotoNextObject () ;
    }
    {
    var_initializerMap_4807.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (enumerator_4836.current_initializer (HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 108)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type.galgas", 108)), inCompiler COMMA_HERE), var_formalParameterList_4904, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 108)) ;
    }
    enumerator_4836.gotoNextObject () ;
  }
  {
  const GALGAS_predefinedTypeAST temp_10 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_10.readProperty_mPredefinedTypeName (), GALGAS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type.galgas", 117)), inCompiler COMMA_HERE), GALGAS_bool (false), var_initializerMap_4807, var_getterMap_3962, var_setterMap_4024, var_instanceMethodMap_4102, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 110)) ;
  }
  const GALGAS_predefinedTypeAST temp_11 = this ;
  const GALGAS_predefinedTypeAST temp_12 = this ;
  const GALGAS_predefinedTypeAST temp_13 = this ;
  const GALGAS_predefinedTypeAST temp_14 = this ;
  const GALGAS_predefinedTypeAST temp_15 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_5816 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (GALGAS_lstring::init_21__21_ (temp_11.readProperty_mPredefinedTypeName (), GALGAS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type.galgas", 127)), inCompiler COMMA_HERE), temp_12.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-predefined-type.galgas", 130)), callExtensionGetter_typeKind ((const cPtr_predefinedTypeAST *) temp_13.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 131)), callExtensionGetter_supportsCollectionValue ((const cPtr_predefinedTypeAST *) temp_14.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 132)), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), GALGAS_propertyMap::init (inCompiler COMMA_HERE), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_4807, var_constructorMap_3895, var_getterMap_3962, var_setterMap_4024, var_instanceMethodMap_4102, var_classMethodMap_4182, GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-predefined-type.galgas", 142)), GALGAS_subscriptMap::init (inCompiler COMMA_HERE), var_enumerationList_4377, callExtensionGetter_getSupportedOperatorFlags ((const cPtr_predefinedTypeAST *) temp_15.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 145)), var_addAssignArgumentList_4269, GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), var_enumeratedTypeEntry_4552, GALGAS_string ("predefined-types"), GALGAS_headerKind::class_func_twoHeaders (SOURCE_FILE ("declaration-predefined-type.galgas", 151)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_5816.readProperty_typeName (), var_typeDefinition_5816, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 153)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@predefinedTypeAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                      const GALGAS_string /* constinArgument_inProductDirectory */,
                                                      const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                      GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_predefinedTypeAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_7685 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::init_21__21_ (temp_0.readProperty_mPredefinedTypeName (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 166)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 166)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_7685, var_nameForUsefulness_7685, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 167)) ;
  }
  const GALGAS_predefinedTypeAST temp_1 = this ;
  const GALGAS_predefinedTypeAST temp_2 = this ;
  const GALGAS_predefinedTypeAST temp_3 = this ;
  const GALGAS_predefinedTypeAST temp_4 = this ;
  const GALGAS_predefinedTypeAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("Predefined type ").add_operation (temp_1.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 170)), GALGAS_primitiveTypeForGeneration::init_21__21__21__21_isPackage (extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GALGAS_lstring::init_21__21_ (temp_2.readProperty_mPredefinedTypeName (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 172)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 172)), temp_3.readProperty_mPredefinedTypeName (), callExtensionGetter_cppDeclarationString ((const cPtr_predefinedTypeAST *) temp_4.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 174)), GALGAS_bool (ComparisonKind::equal, callExtensionGetter_typeKind ((const cPtr_predefinedTypeAST *) temp_5.ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 175)).objectCompare (GALGAS_typeKindEnum::class_func_packageType (SOURCE_FILE ("declaration-predefined-type.galgas", 175)))), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 169)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedListTypeAST&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedListTypeAST_26__3F__26_ (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                      const GALGAS_string constinArgument_inElementTypeName,
                                                      GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_11131 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  var_attributeList_11131.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::init_21__21_ (constinArgument_inElementTypeName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 254)), inCompiler COMMA_HERE), GALGAS_lstring::init_21__21_ (GALGAS_string ("mValue"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 255)), inCompiler COMMA_HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-predefined-type.galgas", 256)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-predefined-type.galgas", 258))  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 252)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::init_21_isPredefined_21__21__21_usefullList_21_equatable (GALGAS_bool (true), GALGAS_lstring::init_21__21_ (constinArgument_inElementTypeName.add_operation (GALGAS_string ("list"), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 261)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 261)), inCompiler COMMA_HERE), var_attributeList_11131, GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 259)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, constinArgument_inElementTypeName.add_operation (GALGAS_string ("list"), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 266)), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 266)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefined2StringListTypeAST&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefined_32_StringListTypeAST_26__26_ (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                            GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_11957 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  var_attributeList_11957.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::init_21__21_ (GALGAS_string ("string"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 276)), inCompiler COMMA_HERE), GALGAS_lstring::init_21__21_ (GALGAS_string ("mValue0"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 277)), inCompiler COMMA_HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-predefined-type.galgas", 278)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-predefined-type.galgas", 280))  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 274)) ;
  var_attributeList_11957.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::init_21__21_ (GALGAS_string ("string"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 283)), inCompiler COMMA_HERE), GALGAS_lstring::init_21__21_ (GALGAS_string ("mValue1"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 284)), inCompiler COMMA_HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-predefined-type.galgas", 285)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-predefined-type.galgas", 287))  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 281)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_listDeclarationAST::init_21_isPredefined_21__21__21_usefullList_21_equatable (GALGAS_bool (true), GALGAS_lstring::init_21__21_ (GALGAS_string ("2stringlist"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 291)), inCompiler COMMA_HERE), var_attributeList_11957, GALGAS_bool (true), GALGAS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 289)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("2stringlist"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 296)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForTypeWithLocation&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForTypeWithLocation_26__3F__26_ (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                             const GALGAS_string constinArgument_inElementTypeName,
                                                             GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_13055 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  var_attributeList_13055.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::init_21__21_ (constinArgument_inElementTypeName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 307)), inCompiler COMMA_HERE), GALGAS_lstring::init_21__21_ (constinArgument_inElementTypeName, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 308)), inCompiler COMMA_HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-predefined-type.galgas", 309)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-predefined-type.galgas", 311))  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 305)) ;
  var_attributeList_13055.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::init_21__21_ (GALGAS_string ("location"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 314)), inCompiler COMMA_HERE), GALGAS_lstring::init_21__21_ (GALGAS_string ("location"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 315)), inCompiler COMMA_HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-predefined-type.galgas", 316)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-predefined-type.galgas", 318))  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 312)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefull (GALGAS_bool (true), GALGAS_lstring::init_21__21_ (GALGAS_string ("l").add_operation (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 321)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 321)), inCompiler COMMA_HERE), var_attributeList_13055, GALGAS_string::makeEmptyString (), GALGAS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-predefined-type.galgas", 324)), GALGAS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 319)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("l").add_operation (constinArgument_inElementTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 327)), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 327)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendStructASTForRangeType&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendStructASTForRangeType_26__26_ (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                  GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionListAST var_attributeList_14176 = GALGAS_propertyInCollectionListAST::init (inCompiler COMMA_HERE) ;
  var_attributeList_14176.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::init_21__21_ (GALGAS_string ("uint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 337)), inCompiler COMMA_HERE), GALGAS_lstring::init_21__21_ (GALGAS_string ("start"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 338)), inCompiler COMMA_HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-predefined-type.galgas", 339)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-predefined-type.galgas", 341))  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 335)) ;
  var_attributeList_14176.addAssign_operation (GALGAS_bool (false), GALGAS_lstring::init_21__21_ (GALGAS_string ("uint"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 344)), inCompiler COMMA_HERE), GALGAS_lstring::init_21__21_ (GALGAS_string ("length"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 345)), inCompiler COMMA_HERE), GALGAS_AccessControlAST::class_func_publicAccess (SOURCE_FILE ("declaration-predefined-type.galgas", 346)), GALGAS_bool (false), GALGAS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("declaration-predefined-type.galgas", 348))  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 342)) ;
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_structDeclarationAST::init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefull (GALGAS_bool (true), GALGAS_lstring::init_21__21_ (GALGAS_string ("range"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 351)), inCompiler COMMA_HERE), var_attributeList_14176, GALGAS_string ("uint"), GALGAS_structComparison::class_func_equatable (SOURCE_FILE ("declaration-predefined-type.galgas", 354)), GALGAS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 349)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'insertInUsefulnessEntities&?'
//
//--------------------------------------------------------------------------------------------------

void routine_insertInUsefulnessEntities_26__3F_ (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                 const GALGAS_string constinArgument_inTypeName,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_typeUsefulnessName_15108 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::init_21__21_ (constinArgument_inTypeName, GALGAS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type.galgas", 363)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 363)) ;
  ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_typeUsefulnessName_15108  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 364)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'appendPredefinedTypesASTs&&'
//
//--------------------------------------------------------------------------------------------------

void routine_appendPredefinedTypesASTs_26__26_ (GALGAS_semanticDeclarationListAST & ioArgument_ioDeclarationListASTs,
                                                GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_applicationPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("application"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 371)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("application"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 372)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_bigintPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("bigint"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 373)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("bigint"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 374)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_binarysetPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("binaryset"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 375)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("binaryset"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 376)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_boolPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("bool"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 377)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("bool"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 378)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_charPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("char"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 379)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("char"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 380)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_dataPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("data"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 381)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("data"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 382)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_doublePredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("double"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 383)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("double"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 384)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_filewrapperPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("filewrapper"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 385)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("filewrapper"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 386)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_functionPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("function"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 387)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("function"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 388)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_locationPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("location"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 389)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("location"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 390)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_objectPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("object"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 391)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("object"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 392)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_sintPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("sint"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 393)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("sint"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 394)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_sint_36__34_PredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("sint64"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 395)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("sint64"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 396)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_stringPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("string"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 397)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("string"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 398)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_stringsetPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("stringset"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 399)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("stringset"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 400)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_timerPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("timer"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 401)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("timer"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 402)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_typePredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("type"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 403)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("type"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 404)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_uintPredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("uint"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 405)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("uint"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 406)) ;
  }
  ioArgument_ioDeclarationListASTs.addAssign_operation (GALGAS_uint_36__34_PredefinedTypeAST::init_21_isPredefined_21_ (GALGAS_bool (true), GALGAS_string ("uint64"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 407)) ;
  {
  routine_insertInUsefulnessEntities_26__3F_ (ioArgument_ioUsefulnessRootEntities, GALGAS_string ("uint64"), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 408)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("function"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 410)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("luint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 411)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("lstring"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 412)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("object"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 413)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("string"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 414)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("type"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 415)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 416)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 417)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("bigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 418)) ;
  }
  {
  routine_appendPredefinedListTypeAST_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("lbigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 419)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("bool"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 421)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("bigint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 422)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("char"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 423)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("double"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 424)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("sint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 425)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("sint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 426)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("string"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 427)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 428)) ;
  }
  {
  routine_appendStructASTForTypeWithLocation_26__3F__26_ (ioArgument_ioDeclarationListASTs, GALGAS_string ("uint64"), ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 429)) ;
  }
  {
  routine_appendPredefined_32_StringListTypeAST_26__26_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 431)) ;
  }
  {
  routine_appendStructASTForRangeType_26__26_ (ioArgument_ioDeclarationListASTs, ioArgument_ioUsefulnessRootEntities, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type.galgas", 433)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'predefinedTypeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_predefinedTypeGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_predefinedTypeGenerationTemplate_0,
  0,
  gWrapperAllDirectories_predefinedTypeGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypesImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n#include \"all-predefined-types.h\"\n#include \"cCollectionElement.h\"\n#include \"cSortedListElement.h\"\n#include \"capSortedListElement.h\"\n#include \"Compiler.h\"\n\n//--------------------------------------------------------------------------------------------------\n\ncMapElement::cMapElement (const GALGAS_lstring & inLKey\n                          COMMA_LOCATION_ARGS) :\ncCollectionElement (THERE),\nmProperty_lkey (inLKey) {\n}\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate primitiveTypesHeaderPrologue'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n#pragma once\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"AC_GALGAS_root.h\"\n#include \"C_galgas_type_descriptor.h\"\n#include \"ComparisonResult.h\"\n#include \"ComparisonKind.h\"\n#include \"EnumerationOrder.h\"\n#include \"cGenericAbstractEnumerator.h\"\n#include \"cEnumerator_range.h\"\n#include \"String-class.h\"\n#include \"Timer.h\"\n#include \"AC_GALGAS_list.h\"\n#include \"AC_GALGAS_sortedlist.h\"\n#include \"AC_GALGAS_map.h\"\n#include \"AC_GALGAS_reference_class.h\"\n#include \"AC_GALGAS_value_class.h\"\n#include \"AC_GALGAS_enumAssociatedValues.h\"\n#include \"AC_GALGAS_graph.h\"\n#include \"acStrongPtr_class.h\"\n#include \"cPtr_weakReference_proxy.h\"\n#include \"AC_GALGAS_weak_reference.h\"\n#include \"BoolCommandLineOption.h\"\n#include \"UIntCommandLineOption.h\"\n#include \"StringCommandLineOption.h\"\n#include \"StringListCommandLineOption.h\"\n#include \"PrologueEpilogue.h\"\n#include \"BigSigned.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass Compiler ;\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypeSeparation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n#include \"cCollectionElement.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass cMapElement : public cCollectionElement {\n//--- Attribut\n  public: GALGAS_lstring mProperty_lkey ;\n\n//--- Default constructor\n  public: cMapElement (const GALGAS_lstring & inLKey\n                        COMMA_LOCATION_ARGS) ;\n\n//--- No copy\n  private: cMapElement (const cMapElement &) ;\n  private: cMapElement & operator = (const cMapElement &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\n#include \"cSortedListElement.h\"\n#include \"capSortedListElement.h\"\n#include \"C_galgas_function_descriptor.h\"\n#include \"cObjectArray.h\"\n\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @sint type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_sint : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: int32_t mSIntValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline int32_t intValue (void) const { return mSIntValue ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_sint (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_sint (const int32_t inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate sint64_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @sint64 type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_sint_36__34_ : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: int64_t mSInt64Value ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline int64_t int64Value (void) const { return mSInt64Value ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_sint_36__34_ (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_sint_36__34_ (const int64_t inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate object_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @object type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cPtr_object ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_object : public AC_GALGAS_root {\n//--------------------------------- Private data member\n  private: cPtr_object * mSharedObject ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedObject != nullptr ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_object (void) ;\n\n//--------------------------------- Constructor from pointer\n  public: GALGAS_object (AC_GALGAS_root * inObjectPointer\n                          COMMA_LOCATION_ARGS) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_object (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_object (const GALGAS_object & inSource) ;\n  public: GALGAS_object & operator = (const GALGAS_object & inSource) ;\n\n//--------------------------------- Embedded Object\n  public: const AC_GALGAS_root * embeddedObject (void) const ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @uint type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_uint : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: uint32_t mUIntValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline uint32_t uintValue (void) const { return mUIntValue ; }\n  public: inline void increment (void) { mUIntValue ++ ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_uint (void) ;\n\n//--------------------------------- Native constructors\n  public: GALGAS_uint (const uint32_t inValue) ;\n  public: GALGAS_uint (const bool inValid, const uint32_t inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate uint64_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//  @uint64 type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_uint_36__34_ : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: uint64_t mUInt64Value ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline uint64_t uint64Value (void) const { return mUInt64Value ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_uint_36__34_ (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_uint_36__34_ (const uint64_t inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bool_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("@bool type").stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\ntypedef enum {kBoolNotValid, kBoolFalse, kBoolTrue} enumGalgasBool ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_bool : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: bool mBoolValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: inline bool isValidAndTrue (void) const { return mIsValid && mBoolValue ; }\n  public: inline bool boolValue (void) const { return mBoolValue ; }\n  public: enumGalgasBool boolEnum (void) const ;\n\n//--------------------------------- Drop\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_bool (void) ;\n\n//--------------------------------- Native constructors\n  public: GALGAS_bool (const bool inValue) ; // Is built\n  public: GALGAS_bool (const bool inBuilt, const bool inValue) ;\n\n//--------------------------------- Constructor for comparison result\n  public: GALGAS_bool (const ComparisonKind inComparisonKind,\n                       const ComparisonResult inComparisonResult) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate binaryset_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n// @binaryset type\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"BinaryDecisionDiagram.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_binaryset : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: BinaryDecisionDiagram mBDD ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline BinaryDecisionDiagram bddValue (void) const { return mBDD ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_binaryset (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_binaryset (const BinaryDecisionDiagram & inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate function_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @function type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass C_galgas_function_descriptor ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_function : public AC_GALGAS_root {\n//--------------------------------- Private data member\n  private: const C_galgas_function_descriptor * mFunctionDescriptor ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return nullptr != mFunctionDescriptor ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mFunctionDescriptor = nullptr ; }\n  public: VIRTUAL_IN_DEBUG inline const C_galgas_function_descriptor * functionValue (void) const { return mFunctionDescriptor ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_function (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_function (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_function (const GALGAS_function & inSource) ;\n  public: GALGAS_function & operator = (const GALGAS_function & inSource) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_function (const C_galgas_function_descriptor * inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate type_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @type type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_type : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: const C_galgas_type_descriptor * mTypeDescriptor ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return nullptr != mTypeDescriptor ; }\n  public: inline void drop (void) override { mTypeDescriptor = nullptr ; }\n  public: inline const C_galgas_type_descriptor * typeValue (void) const { return mTypeDescriptor ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_type (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_type (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_type (const GALGAS_type & inSource) ;\n  public: GALGAS_type & operator = (const GALGAS_type & inSource) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_type (const C_galgas_type_descriptor * inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate location_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @location type\n//\n//--------------------------------------------------------------------------------------------------\n\n#include \"LocationInSource.h\"\n#include \"SourceTextInString.h\"\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_location : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: class InternalLocation * mInternalLocation ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;\n  public: VIRTUAL_IN_DEBUG bool isValidAndNotNowhere (void) const ;\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n  public: LocationInSource startLocation (void) const ;\n  public: LocationInSource endLocation (void) const ;\n  public: SourceTextInString sourceText (void) const ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_location (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_location (const GALGAS_location & inSource) ;\n  public: GALGAS_location & operator = (const GALGAS_location & inSource) ;\n\n//--------------------------------- Destructor\n  public: virtual ~ GALGAS_location (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_location (const LocationInSource & inStartLocationInSource,\n                           const LocationInSource & inEndLocationInSource,\n                           const SourceTextInString & inSourceText) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate data_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @data type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_data : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: U8Data mData ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline U8Data dataValue (void) const { return mData ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_data (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_data (const U8Data & inData) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate char_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @char type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_char : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: utf32 mCharValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline utf32 charValue (void) const { return mCharValue ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_char (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_char (const utf32 inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate double_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//  @double type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_double : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: double mDoubleValue ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mIsValid = false ; }\n  public: inline double doubleValue (void) const { return mDoubleValue ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_double (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_double (const double inValue) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate string_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @string type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_string : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: bool mIsValid ;\n  private: String mString ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n  public: inline String stringValue (void) const { return mString ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_string (void) ;\n\n//--------------------------------- Constructor for making an empty string\n  public: static GALGAS_string makeEmptyString (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_string (const String & inValue) ;\n\n  #ifndef DO_NOT_GENERATE_CHECKINGS\n    public: virtual void printNonNullClassInstanceProperties (const char * inPropertyName) const override ;\n  #endif\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate stringset_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @stringset type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_stringset : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: class cSharedStringsetRoot * mSharedRoot ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return mSharedRoot != nullptr ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_stringset (void) ;\n\n//--------------------------------- Destructor (virtual in debug mode)\n  public: virtual ~ GALGAS_stringset (void) ;\n\n//--------------------------------- In debug mode : check method\n  protected: void checkStringset (LOCATION_ARGS) const ;\n\n//--------------------------------- Insulate\n  protected: void insulate (LOCATION_ARGS) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate filewrapper_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @filewrapper type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cRegularFileWrapper {\n  public: const char * mName ;\n  public: const char * mExtension ;\n  public: const bool mIsTextFile ; // True: text file, false: binary file\n  public: const uint32_t mFileLength ;\n  public: const char * mContents ;\n\n//--- Constructor\n  public: cRegularFileWrapper (const char * inName,\n                                const char * inExtension,\n                                const bool inIsTextFile,\n                                const uint32_t inFileLength,\n                                const char * inContents) ;\n\n//--- No copy\n  private: cRegularFileWrapper (const cRegularFileWrapper &) ;\n  private: cRegularFileWrapper & operator = (const cRegularFileWrapper &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass cDirectoryWrapper {\n  public: const char * mDirectoryName ;\n  public: const uint32_t mFileCount ;\n  public: const cRegularFileWrapper * * const mFiles ;\n  public: const uint32_t mDirectoryCount ;\n  public: const cDirectoryWrapper * * mDirectories ;\n\n//--- Constructor\n  public: cDirectoryWrapper (const char * inDirectoryName,\n                              const uint32_t inFileCount,\n                              const cRegularFileWrapper * * const inFiles,\n                              const uint32_t inDirectoryCount,\n                              const cDirectoryWrapper * * inDirectories) ;\n\n//--- No copy\n  private: cDirectoryWrapper (const cDirectoryWrapper &) ;\n  private: cDirectoryWrapper & operator = (const cDirectoryWrapper &) ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_filewrapper : public AC_GALGAS_root {\n//--------------------------------- Private data members\n  private: const cDirectoryWrapper * mRootDirectoryPtr ;\n  private: String mCurrentDirectory ;\n\n//--------------------------------- Accessors\n  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return nullptr != mRootDirectoryPtr ; }\n  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mRootDirectoryPtr = nullptr ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_filewrapper (void) ;\n\n//--------------------------------- Native constructor\n  public: GALGAS_filewrapper (const cDirectoryWrapper & inRootDirectory) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_filewrapper (const GALGAS_filewrapper & inSource) ;\n  public: GALGAS_filewrapper & operator = (const GALGAS_filewrapper & inSource) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate application_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("@application package").stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_application final {\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate bigint_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @bigint type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_bigint : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: bool mIsValid ;\n  private: BigSigned mValue ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return mIsValid ; }\n  public: inline BigSigned bigintValue (void) const { return mValue ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_bigint (void) ;\n\n//--------------------------------- Constructor\n  public: GALGAS_bigint (const BigSigned & inValue) ;\n  public: GALGAS_bigint (const char * inDecimalString, Compiler * inCompiler COMMA_LOCATION_ARGS) ;\n\n//--------------------------------- Destructor\n  public: virtual ~ GALGAS_bigint (void) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedTypeGenerationTemplate timer_type'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//   @timer type\n//\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_timer : public AC_GALGAS_root {\n//--------------------------------- Private properties\n  private: bool mIsValid ;\n  private: Timer mTimer ;\n\n//--------------------------------- Accessors\n  public: inline bool isValid (void) const override { return mIsValid ; }\n  public: VIRTUAL_IN_DEBUG void drop (void) override { mIsValid = false ; }\n\n//--------------------------------- Default constructor\n  public: GALGAS_timer (void) ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@applicationPredefinedTypeAST typeKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum cPtr_applicationPredefinedTypeAST::getter_typeKind (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKindEnum result_result ; // Returned variable
  result_result = GALGAS_typeKindEnum::class_func_packageType (SOURCE_FILE ("declaration-predefined-type-application.galgas", 30)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@applicationPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_applicationPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 36))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@applicationPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeFeatures cPtr_applicationPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeFeatures result_result ; // Returned variable
  result_result = GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-application.galgas", 42)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@applicationPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_applicationPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GALGAS_classFunctionMap & outArgument_outMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("system"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 50)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("verboseOutput"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 57)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("projectVersionString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 64)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("galgasVersionString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 71)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("commandLineArgumentCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 78)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("commandLineArgumentAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 85)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 95)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 102)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 113)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 124)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionValue"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 135)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 147)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 154)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 165)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 176)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionValue"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 187)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 199)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 206)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 217)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 228)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionValue"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 239)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("keywordIdentifierSet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 251)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("keywordListForIdentifier"), GALGAS_string ("string"), GALGAS_string ("inIdentifier"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 258)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@applicationPredefinedTypeAST getClassMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_applicationPredefinedTypeAST::method_getClassMethodMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("exit"), GALGAS_string ("uint"), GALGAS_string ("inErrorCode"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 274)) ;
  }
  {
  routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setBoolOptionValue"), GALGAS_string ("string"), GALGAS_string ("inDomain"), GALGAS_string ("string"), GALGAS_string ("inIdentifier"), GALGAS_string ("bool"), GALGAS_string ("inValue"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 282)) ;
  }
  {
  routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setUIntOptionValue"), GALGAS_string ("string"), GALGAS_string ("inDomain"), GALGAS_string ("string"), GALGAS_string ("inIdentifier"), GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 294)) ;
  }
  {
  routine_enterClassMethodWith_33_InputArguments_26__26__3F_methodName_3F_argType_31__3F_argName_31__3F_argType_32__3F_argName_32__3F_argType_33__3F_argName_33__3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setStringOptionValue"), GALGAS_string ("string"), GALGAS_string ("inDomain"), GALGAS_string ("string"), GALGAS_string ("inIdentifier"), GALGAS_string ("string"), GALGAS_string ("inValue"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-application.galgas", 306)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@bigintPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_bigintPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 30))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bigintPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GALGAS_classFunctionMap & outArgument_outMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("zero"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 39)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bigintPredefinedTypeAST getInstanceMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getInstanceMethodMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  GALGAS_unifiedTypeMapEntry var_bigIntType_2383 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), var_bigIntType_2383, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 55)) ;
  }
  GALGAS_formalParameterSignature var_argList_2429 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_2429.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 57)), var_bigIntType_2383, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 57)), GALGAS_string ("inDivisor")  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 57)) ;
  var_argList_2429.addAssign_operation (GALGAS_string ("quotient").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 58)), var_bigIntType_2383, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 58)), GALGAS_string ("outQuotient")  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 58)) ;
  var_argList_2429.addAssign_operation (GALGAS_string ("remainder").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 59)), var_bigIntType_2383, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 59)), GALGAS_string ("outRemainder")  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 59)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("divideBy"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 61)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 62)), var_argList_2429, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 64)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 66)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 60)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bigintPredefinedTypeAST getSetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getSetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GALGAS_setterMap & outArgument_outSetterMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), GALGAS_string ("inBit"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("setBitAtIndex"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 78)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("complementBitAtIndex"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 88)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bigintPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GALGAS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 103)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInUInt"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 104)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInSInt"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 112)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInUInt64"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 120)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInSInt64"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 128)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 136)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("spacedString"), GALGAS_string ("uint"), GALGAS_string ("inSeparation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 144)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 152)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 160)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 171)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitCountForSignedRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 179)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitCountForUnsignedRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 187)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 195)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 203)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 211)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 219)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("abs"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 227)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 235)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isZero"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 243)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sign"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 251)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract8ForUnsignedRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 259)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract8ForSignedRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 267)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract32ForUnsignedRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 275)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract32ForSignedRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 283)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract64ForUnsignedRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 291)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract64ForSignedRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 299)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@bigintPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeFeatures cPtr_bigintPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeFeatures result_result ; // Returned variable
  result_result = GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 312)).operator_or (GALGAS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 312)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 312)).operator_or (GALGAS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 312)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 312)).operator_or (GALGAS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 313)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 312)).operator_or (GALGAS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 313)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 313)).operator_or (GALGAS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 313)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 313)).operator_or (GALGAS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 313)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 313)).operator_or (GALGAS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 314)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 313)).operator_or (GALGAS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 314)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 314)).operator_or (GALGAS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 315)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 314)).operator_or (GALGAS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 315)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 315)).operator_or (GALGAS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 315)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 315)).operator_or (GALGAS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 315)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 315)).operator_or (GALGAS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 316)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 315)).operator_or (GALGAS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 316)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 316)).operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 316)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 316)).operator_or (GALGAS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 317)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 316)).operator_or (GALGAS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 317)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 317)).operator_or (GALGAS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 318)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 317)).operator_or (GALGAS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 318)) COMMA_SOURCE_FILE ("declaration-predefined-type-bigint.galgas", 318)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@binarysetPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList cPtr_binarysetPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_initializerSignatureList result_result ; // Returned variable
  GALGAS_initializerSignatureList temp_0 = GALGAS_initializerSignatureList::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 30)) ;
  temp_0.enterElement (GALGAS_initializerSignatureList_2D_element::init_21_ (GALGAS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 30)) ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@binarysetPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeFeatures cPtr_binarysetPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeFeatures result_result ; // Returned variable
  result_result = GALGAS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 36)).operator_or (GALGAS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 36)).operator_or (GALGAS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 36)).operator_or (GALGAS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 36)).operator_or (GALGAS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 37)).operator_or (GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 37)).operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 38)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@binarysetPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_binarysetPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 44))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binarysetPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithBit"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptyBinarySet"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 61)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fullBinarySet"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 68)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithPredicateString"), GALGAS_string ("string"), GALGAS_string ("inPredicateString"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 75)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithNotEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 84)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 97)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictLowerComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 110)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictGreaterComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 123)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithLowerOrEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 136)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithGreaterOrEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 149)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 162)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithNotEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 175)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictLowerThanConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 188)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictGreaterThanConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 201)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithLowerOrEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 214)) ;
  }
  {
  routine_enterClassFunctionWith_33_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_argTypeName_33__3F_argName_33__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithGreaterOrEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 227)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binarysetPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GALGAS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 246)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isFull"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 247)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nodeCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 255)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isEmpty"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 263)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("significantVariableCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 271)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("ITE"), GALGAS_string ("binaryset"), GALGAS_string ("inTHENoperand"), GALGAS_string ("binaryset"), GALGAS_string ("inELSEoperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 279)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("print"), GALGAS_string ("stringlist"), GALGAS_string ("inVariableList"), GALGAS_string ("uintlist"), GALGAS_string ("inBDDCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 288)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("graphvizDump"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 297)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("stringlist"), GALGAS_string ("inBitNameList"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 305)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transformedBy"), GALGAS_string ("uintlist"), GALGAS_string ("inTransformationArray"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 313)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("forAllOnBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 321)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("forAllOnBitIndexAndBeyond"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 329)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existOnBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 336)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existOnBitIndexAndBeyond"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 343)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("valueCount"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 350)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigValueCount"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("bigint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 359)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compressedValueCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 368)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64ValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 376)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 383)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringValueListWithNameList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_string ("inNameList"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 390)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("predicateStringValue"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 397)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compressedStringValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 405)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap10"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 412)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap021"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 419)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap102"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 426)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap120"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 433)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap201"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 440)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap210"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 447)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transposedBy"), GALGAS_string ("uintlist"), GALGAS_string ("inTransposeVector"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 454)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transitiveClosure"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 461)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("accessibleStates"), GALGAS_string ("binaryset"), GALGAS_string ("inInitialStateSet"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 468)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("implies"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 475)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("equalTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 482)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("notEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 489)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lowerOrEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 496)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("greaterOrEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 503)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("strictGreaterThan"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 510)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("strictLowerThan"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 517)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetByTranslatingFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inFirstIndexToTranslate"), GALGAS_string ("uint"), GALGAS_string ("inTranslation"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 524)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments_26__26__3F__3F__3F__3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsValue"), GALGAS_string ("uint64"), GALGAS_string ("inValue"), GALGAS_string ("uint"), GALGAS_string ("inFirstBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 531)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existsOnBitRange"), GALGAS_string ("uint"), GALGAS_string ("inFirstBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 538)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binarysetPredefinedTypeAST getClassMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::method_getClassMethodMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setNodeTableSize"), GALGAS_string ("uint"), GALGAS_string ("inTableSize"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 552)) ;
  }
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setAndTableSize"), GALGAS_string ("uint"), GALGAS_string ("inTableSize"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-binaryset.galgas", 560)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeFeatures cPtr_boolPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeFeatures result_result ; // Returned variable
  result_result = GALGAS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-bool.galgas", 30)).operator_or (GALGAS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-bool.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 30)).operator_or (GALGAS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-bool.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 30)).operator_or (GALGAS_typeFeatures::class_func_prefixNotOperator (SOURCE_FILE ("declaration-predefined-type-bool.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 30)).operator_or (GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-bool.galgas", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 30)).operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-bool.galgas", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 31)).operator_or (GALGAS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-bool.galgas", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 31)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_boolPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 37))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                             GALGAS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GALGAS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 51)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 52)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("ocString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 60)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 68)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 76)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 84)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 92)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-bool.galgas", 100)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@charPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeFeatures cPtr_charPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeFeatures result_result ; // Returned variable
  result_result = GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-char.galgas", 30)).operator_or (GALGAS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-char.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 30)).operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-char.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 30)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@charPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_charPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GALGAS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 37)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 38)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8Length"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 46)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf32CharConstantRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 54)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 62)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isalnum"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 70)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isalpha"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 78)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("iscntrl"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 86)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isdigit"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 94)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("islower"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 102)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isupper"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 110)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isxdigit"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 118)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeLetter"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 126)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeMark"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 134)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 142)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeSeparator"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 150)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeCommand"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 158)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodePunctuation"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 166)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeSymbol"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 174)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeName"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 182)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeToLower"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 190)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeToUpper"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 198)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@charPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_charPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("replacementCharacter"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 213)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeCharacterWithUnsigned"), GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 220)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeCharacterFromRawKeyboard"), GALGAS_string ("char"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 229)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@charPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_charPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-char.galgas", 241))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dataPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList cPtr_dataPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_initializerSignatureList result_result ; // Returned variable
  GALGAS_initializerSignatureList temp_0 = GALGAS_initializerSignatureList::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 30)) ;
  temp_0.enterElement (GALGAS_initializerSignatureList_2D_element::init_21_ (GALGAS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 30)) ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dataPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptyData"), GALGAS_string ("data"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 38)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("dataWithContentsOfFile"), GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("data"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 45)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dataPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeFeatures cPtr_dataPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeFeatures result_result ; // Returned variable
  result_result = GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-data.galgas", 59)).operator_or (GALGAS_typeFeatures::class_func_generateEnumerationHelperMethods (SOURCE_FILE ("declaration-predefined-type-data.galgas", 59)) COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 59)).operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-data.galgas", 59)) COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 59)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dataPredefinedTypeAST getEnumerationList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getEnumerationList (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                            GALGAS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                            GALGAS_string & outArgument_outEnumeratedType,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_uintTypeIndex_2937 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), var_uintTypeIndex_2937, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 67)) ;
  }
  outArgument_outEnumerationList = GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  outArgument_outEnumerationList.addAssign_operation (var_uintTypeIndex_2937, GALGAS_string ("data")  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 69)) ;
  outArgument_outEnumeratedType = GALGAS_string ("uint") ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dataPredefinedTypeAST getInstanceMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getInstanceMethodMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 78)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 86)) ;
  }
  GALGAS_formalParameterSignature var_argList_3827 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_unifiedTypeMapEntry var_t_3916 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_t_3916, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 95)) ;
  }
  var_argList_3827.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-data.galgas", 96)), var_t_3916, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-data.galgas", 96)), GALGAS_string ("inFilePath")  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 96)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_t_3916, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 97)) ;
  }
  var_argList_3827.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-data.galgas", 98)), var_t_3916, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-data.galgas", 98)), GALGAS_string ("outFileModified")  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 98)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("writeToFileWhenDifferentContents"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 100)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-data.galgas", 101)), var_argList_3827, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 103)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-data.galgas", 105)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 99)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dataPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GALGAS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 114)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("count"), GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 115)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cStringRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 123)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dataPredefinedTypeAST getSetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::method_getSetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GALGAS_setterMap & outArgument_outSetterMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendByte"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 138)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendShortBE"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 146)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendShortLE"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 154)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendUIntBE"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 162)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendUIntLE"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 170)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inValue"), GALGAS_string ("appendUTF8String"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 178)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("data"), GALGAS_string ("inValue"), GALGAS_string ("appendData"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 186)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dataPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_dataPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-data.galgas", 199))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@doublePredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeFeatures cPtr_doublePredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeFeatures result_result ; // Returned variable
  result_result = GALGAS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas", 30)).operator_or (GALGAS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 30)).operator_or (GALGAS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 30)).operator_or (GALGAS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 30)).operator_or (GALGAS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 30)).operator_or (GALGAS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 31)).operator_or (GALGAS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-double.galgas", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 31)).operator_or (GALGAS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-double.galgas", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 31)).operator_or (GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-double.galgas", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 31)).operator_or (GALGAS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-double.galgas", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 32)).operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-double.galgas", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 32)).operator_or (GALGAS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-double.galgas", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 32)).operator_or (GALGAS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-double.galgas", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 33)).operator_or (GALGAS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-double.galgas", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 33)).operator_or (GALGAS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-double.galgas", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 34)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@doublePredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_doublePredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GALGAS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 41)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 42)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 50)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 58)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 66)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 74)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cos"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 82)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sin"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 90)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("tan"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 98)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("log10"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 106)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("log2"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 114)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("logn"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 122)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("exp"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 130)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cosDegree"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 138)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sinDegree"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 146)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("tanDegree"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 154)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sqrt"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 162)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("power"), GALGAS_string ("double"), GALGAS_string ("inExponant"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 170)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryImage"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 177)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@doublePredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_doublePredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GALGAS_classFunctionMap & outArgument_outMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("pi"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 192)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("doubleWithBinaryImage"), GALGAS_string ("uint64"), GALGAS_string ("inBinaryImage"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 199)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@doublePredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_doublePredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-double.galgas", 213))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeFeatures cPtr_filewrapperPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeFeatures result_result ; // Returned variable
  result_result = GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 30)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_filewrapperPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 36))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperPredefinedTypeAST getSetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperPredefinedTypeAST::method_getSetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_setterMap & outArgument_outSetterMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inDirectoryPath"), GALGAS_string ("setCurrentDirectory"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 44)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_getterMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 58)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allTextFilePathes"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 59)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allBinaryFilePathes"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 67)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allDirectoryPathes"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 75)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("currentDirectory"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 83)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allFilePathesWithExtension"), GALGAS_string ("string"), GALGAS_string ("inExtension"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 91)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoryExistsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 98)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileExistsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 105)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("textFileContentsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 112)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryFileContentsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("data"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 119)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("absolutePathForPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 126)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoriesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 133)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryFilesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 140)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("textFilesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-filewrapper.galgas", 147)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeFeatures cPtr_functionPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeFeatures result_result ; // Returned variable
  result_result = GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-function.galgas", 30)).operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-function.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas", 30)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GALGAS_classFunctionMap & outArgument_outMap,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("functionList"), GALGAS_string ("functionlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas", 38)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("functionWithName"), GALGAS_string ("string"), GALGAS_string ("inName"), GALGAS_string ("function"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas", 45)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isFunctionDefined"), GALGAS_string ("string"), GALGAS_string ("inFunctionName"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas", 54)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_functionPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                          GALGAS_getterMap & outArgument_outMap,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas", 69)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("name"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas", 70)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("resultType"), GALGAS_string::makeEmptyString (), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas", 78)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("formalParameterTypeList"), GALGAS_string::makeEmptyString (), GALGAS_string ("typelist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas", 86)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("invoke"), GALGAS_string ("objectlist"), GALGAS_string ("inParameters"), GALGAS_string ("location"), GALGAS_string ("inErrorLocation"), GALGAS_string ("object"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas", 94)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_functionPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-function.galgas", 106))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@locationPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeFeatures cPtr_locationPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeFeatures result_result ; // Returned variable
  result_result = GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-location.galgas", 30)).operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-location.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 30)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@locationPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_locationPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GALGAS_classFunctionMap & outArgument_outMap,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nowhere"), GALGAS_string ("location"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 38)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("here"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 45)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("next"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("separator"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 59)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@locationPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_locationPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                          GALGAS_getterMap & outArgument_outMap,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 72)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("startLocationString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 73)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("endLocationString"), GALGAS_string ("locationString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 81)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("startLocationIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 89)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("endLocationIndex"), GALGAS_string ("locationIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 97)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("file"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 105)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("startLine"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 113)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("endLine"), GALGAS_string ("line"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 121)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("startColumn"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 129)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("endColumn"), GALGAS_string ("column"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 137)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isNowhere"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 145)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("union"), GALGAS_string::makeEmptyString (), GALGAS_string ("location"), GALGAS_string ("inOtherLocation"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 153)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@locationPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_locationPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-location.galgas", 166))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@objectPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeFeatures cPtr_objectPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeFeatures result_result ; // Returned variable
  result_result = GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-object.galgas", 30)).operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-object.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-object.galgas", 30)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@objectPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_objectPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-object.galgas", 36))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@objectPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_objectPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GALGAS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-object.galgas", 43)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("objectStaticType"), GALGAS_string::makeEmptyString (), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-object.galgas", 44)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("objectDynamicType"), GALGAS_string::makeEmptyString (), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-object.galgas", 52)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST supportsCollectionValue'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_stringsetPredefinedTypeAST::getter_supportsCollectionValue (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList cPtr_stringsetPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_initializerSignatureList result_result ; // Returned variable
  GALGAS_initializerSignatureList temp_0 = GALGAS_initializerSignatureList::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 36)) ;
  temp_0.enterElement (GALGAS_initializerSignatureList_2D_element::init_21_ (GALGAS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 36)) ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_stringsetPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 42))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeFeatures cPtr_stringsetPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeFeatures result_result ; // Returned variable
  result_result = GALGAS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 48)).operator_or (GALGAS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 49)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 48)).operator_or (GALGAS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 49)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 49)).operator_or (GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 50)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 49)).operator_or (GALGAS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 50)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 50)).operator_or (GALGAS_typeFeatures::class_func_generateEnumerationHelperMethods (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 51)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 50)).operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 51)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 51)).operator_or (GALGAS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 51)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 51)).operator_or (GALGAS_typeFeatures::class_func_generateCopyConstructorAndAssignmentOperator (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 52)) COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 51)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_classFunctionMap & outArgument_outMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 60)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 67)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithStringList"), GALGAS_string ("stringlist"), GALGAS_string ("inStringList"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 76)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithLStringList"), GALGAS_string ("lstringlist"), GALGAS_string ("inLStringList"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 85)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getSetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getSetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GALGAS_setterMap & outArgument_outSetterMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_stringType_3938 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringType_3938, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 100)) ;
  }
  outArgument_outSetterMap = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  outArgument_outSetterMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("removeKey"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 103)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 104)), GALGAS_formalParameterSignature::class_func_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 105)), var_stringType_3938, GALGAS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 105)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 105)), GALGAS_bool (false), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 107)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 102)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inValue"), GALGAS_string ("insert"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 110)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getEnumerationList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getEnumerationList (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GALGAS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                                 GALGAS_string & outArgument_outEnumeratedType,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_4853 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringTypeIndex_4853, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 125)) ;
  }
  outArgument_outEnumerationList = GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE) ;
  outArgument_outEnumerationList.addAssign_operation (var_stringTypeIndex_4853, GALGAS_string ("key")  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 127)) ;
  outArgument_outEnumeratedType = GALGAS_string ("string") ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getAddAssignArgumentList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getAddAssignArgumentList (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_functionSignature & outArgument_outAddAssignArgumentList,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_stringTypeIndex_5334 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringTypeIndex_5334, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 135)) ;
  }
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 136)) ;
  temp_0.enterElement (GALGAS_functionSignature_2D_element::init_21__21__21__21_ (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 136)), var_stringTypeIndex_5334, GALGAS_string ("inString"), GALGAS_bool (true), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 136)) ;
  outArgument_outAddAssignArgumentList = temp_0 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GALGAS_getterMap & outArgument_outMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 143)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 144)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("count"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 151)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("anyString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 159)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringList"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-stringset.galgas", 167)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sintPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_sintPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 30))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sintPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeFeatures cPtr_sintPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeFeatures result_result ; // Returned variable
  result_result = GALGAS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 36)).operator_or (GALGAS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 36)).operator_or (GALGAS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 36)).operator_or (GALGAS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 36)).operator_or (GALGAS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 36)).operator_or (GALGAS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 37)).operator_or (GALGAS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 37)).operator_or (GALGAS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 37)).operator_or (GALGAS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 38)).operator_or (GALGAS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 38)).operator_or (GALGAS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 39)).operator_or (GALGAS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 39)).operator_or (GALGAS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 39)).operator_or (GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 39)).operator_or (GALGAS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 40)).operator_or (GALGAS_typeFeatures::class_func_incDecOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 40)).operator_or (GALGAS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 40)).operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 40)).operator_or (GALGAS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 40)).operator_or (GALGAS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 41)).operator_or (GALGAS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 41)).operator_or (GALGAS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 41)).operator_or (GALGAS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 41)).operator_or (GALGAS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 42)).operator_or (GALGAS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 43)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 42)).operator_or (GALGAS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint.galgas", 43)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 43)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sintPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sintPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("min"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 59)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sintPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sintPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GALGAS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 72)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 73)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 81)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 89)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 97)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 105)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 113)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 121)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 129)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 140)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 149)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 156)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 163)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint.galgas", 170)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sint64PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeFeatures cPtr_sint_36__34_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeFeatures result_result ; // Returned variable
  result_result = GALGAS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 30)).operator_or (GALGAS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 30)).operator_or (GALGAS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 30)).operator_or (GALGAS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 30)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 30)).operator_or (GALGAS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 30)).operator_or (GALGAS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 31)).operator_or (GALGAS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 31)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 31)).operator_or (GALGAS_typeFeatures::class_func_prefixMinusOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 31)).operator_or (GALGAS_typeFeatures::class_func_prefixMinusOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 32)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 32)).operator_or (GALGAS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 32)).operator_or (GALGAS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 33)).operator_or (GALGAS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 33)).operator_or (GALGAS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 33)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 33)).operator_or (GALGAS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 33)).operator_or (GALGAS_typeFeatures::class_func_incDecOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 34)).operator_or (GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 34)).operator_or (GALGAS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 34)).operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 34)).operator_or (GALGAS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 34)).operator_or (GALGAS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 35)).operator_or (GALGAS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 35)).operator_or (GALGAS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 35)).operator_or (GALGAS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 35)).operator_or (GALGAS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 36)).operator_or (GALGAS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 36)).operator_or (GALGAS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 37)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sint64PredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sint_36__34_PredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_classFunctionMap & outArgument_outMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 45)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("min"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 52)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sint64PredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_sint_36__34_PredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GALGAS_getterMap & outArgument_outMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 65)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 66)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 74)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 82)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 90)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 98)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 106)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 114)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 122)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 133)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 142)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 149)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 156)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 163)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sint64PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_sint_36__34_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-sint64.galgas", 175))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_addAssociatedElement (GALGAS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  GALGAS_lstring joker_1630 ; // Joker input parameter
  extensionSetter_getOptionalTypeName (ioArgument_ioDeclarations, joker_1630, GALGAS_lstring::init_21__21_ (GALGAS_string ("bigint"), GALGAS_location::class_func_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 30)), inCompiler COMMA_HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 30)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               GALGAS_classFunctionMap & outArgument_outMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("homeDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 38)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("newWithStdIn"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 45)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("retrieveAndResetTemplateString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 52)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("separatorString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 59)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSymbolicLinkContents"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 66)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSourceFilePath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 75)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithCurrentDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 82)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithContentsOfFile"), GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 89)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithCurrentDateTime"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 98)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithEnvironmentVariable"), GALGAS_string ("string"), GALGAS_string ("inVariableName"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 105)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithEnvironmentVariableOrEmpty"), GALGAS_string ("string"), GALGAS_string ("inVariableName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 114)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppLineComment"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 123)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppSpaceComment"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 130)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppTitleComment"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 137)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 146)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppChar"), GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 155)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("componentsJoinedByString"), GALGAS_string ("stringlist"), GALGAS_string ("inComponents"), GALGAS_string ("string"), GALGAS_string ("inSeparator"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 164)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRepeatingString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("uint"), GALGAS_string ("inCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 175)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSequenceOfCharacters"), GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 186)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getClassMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getClassMethodMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("deleteFile"), GALGAS_string ("inFilePath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 204)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("deleteFileIfExists"), GALGAS_string ("inFilePath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 211)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("removeEmptyDirectory"), GALGAS_string ("inDirectoryPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 218)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument_26__26__3F_classMethod_3F_argName_3F_compilerArg (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("removeDirectoryRecursively"), GALGAS_string ("inDirectoryPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 225)) ;
  }
  GALGAS_unifiedTypeMapEntry var_stringType_7219 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringType_7219, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 232)) ;
  }
  GALGAS_unifiedTypeMapEntry var_boolType_7309 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_boolType_7309, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 233)) ;
  }
  GALGAS_formalParameterSignature var_argList_7374 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_7374.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 236)), var_stringType_7219, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 236)), GALGAS_string ("inStartPath")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 236)) ;
  var_argList_7374.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 237)), var_stringType_7219, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 237)), GALGAS_string ("inFileName")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 237)) ;
  var_argList_7374.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 238)), var_stringType_7219, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 238)), GALGAS_string ("inContents")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 238)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("generateFile"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 240)), inCompiler COMMA_HERE), var_argList_7374, GALGAS_bool (true) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 239)) ;
  }
  var_argList_7374 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  var_argList_7374.addAssign_operation (GALGAS_string ("startPath").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 246)), var_stringType_7219, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 246)), GALGAS_string ("inStartPath")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 246)) ;
  var_argList_7374.addAssign_operation (GALGAS_string ("fileName").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 247)), var_stringType_7219, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 247)), GALGAS_string ("inFileName")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 247)) ;
  var_argList_7374.addAssign_operation (GALGAS_string ("lineComment").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 248)), var_stringType_7219, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 248)), GALGAS_string ("inLineCommentPrefix")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 248)) ;
  var_argList_7374.addAssign_operation (GALGAS_string ("header").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 249)), var_stringType_7219, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 249)), GALGAS_string ("inHeader")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 249)) ;
  var_argList_7374.addAssign_operation (GALGAS_string ("defaultUserZone1").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 250)), var_stringType_7219, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 250)), GALGAS_string ("inDefaultUserZone1")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 250)) ;
  var_argList_7374.addAssign_operation (GALGAS_string ("generatedZone2").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 251)), var_stringType_7219, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 251)), GALGAS_string ("inGeneratedZone2")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 251)) ;
  var_argList_7374.addAssign_operation (GALGAS_string ("defaultUserZone2").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 252)), var_stringType_7219, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 252)), GALGAS_string ("inDefaultUserZone2")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 252)) ;
  var_argList_7374.addAssign_operation (GALGAS_string ("generatedZone3").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 253)), var_stringType_7219, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 253)), GALGAS_string ("inGeneratedZone3")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 253)) ;
  var_argList_7374.addAssign_operation (GALGAS_string ("makeExecutable").getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 254)), var_boolType_7309, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 254)), GALGAS_string ("inMakeExecutable")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 254)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GALGAS_lstring::init_21__21_ (GALGAS_string ("generateFileWithPattern"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 256)), inCompiler COMMA_HERE), var_argList_7374, GALGAS_bool (true) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 255)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getInstanceMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getInstanceMethodMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 267)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 275)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeDirectoryAndWriteToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 283)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeDirectoryAndWriteToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 291)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument_26__26__3F_inputArgTypeName_3F_inputArgName_3F_methodName_3F_ (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeSymbolicLinkWithPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 299)) ;
  }
  {
  routine_enterInstanceMethodWithoutArgument_26__3F_methodName_3F_ (outArgument_outInstanceMethodMap, GALGAS_string ("makeDirectory"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 307)) ;
  }
  GALGAS_formalParameterSignature var_argList_10497 = GALGAS_formalParameterSignature::init (inCompiler COMMA_HERE) ;
  GALGAS_unifiedTypeMapEntry var_t_10586 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_t_10586, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 314)) ;
  }
  var_argList_10497.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 315)), var_t_10586, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-predefined-type-string.galgas", 315)), GALGAS_string ("inFilePath")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 315)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_t_10586, inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 316)) ;
  }
  var_argList_10497.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-predefined-type-string.galgas", 317)), var_t_10586, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-predefined-type-string.galgas", 317)), GALGAS_string ("outFileModified")  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 317)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("writeToFileWhenDifferentContents"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 319)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-string.galgas", 320)), var_argList_10497, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 322)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-string.galgas", 324)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 318)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("writeToExecutableFileWhenDifferentContents"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 328)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-predefined-type-string.galgas", 329)), var_argList_10497, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 331)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-predefined-type-string.galgas", 333)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 327)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getSetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getSetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GALGAS_setterMap & outArgument_outSetterMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inCapacity"), GALGAS_string ("setCapacity"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 343)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inAmount"), GALGAS_string ("incIndentation"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 351)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inAmount"), GALGAS_string ("decIndentation"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 359)) ;
  }
  {
  routine_enterModifierWithInputArgument_26__26__3F_argTypeName_3F_argName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inColumnIndex"), GALGAS_string ("appendSpacesUntilColumn"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 367)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("setCharacterAtIndex"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 375)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments_26__26__3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_TypeName_3F_arg_32_Name_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("insertCharacterAtIndex"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 385)) ;
  }
  {
  routine_enterModifierWithOutputAndInputArguments_26__26__3F_outputArgTypeName_3F_outputArgName_3F_inputArgTypeName_3F_inputArgName_3F_setterName_3F_compilerArg (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("char"), GALGAS_string ("outChar"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("removeCharacterAtIndex"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 395)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        GALGAS_getterMap & outArgument_outMap,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 411)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lastCharacter"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 412)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nowhere"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstring"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 420)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("here"), GALGAS_string::makeEmptyString (), GALGAS_string ("lstring"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 428)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("doesEnvironmentVariableExist"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 436)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("count"), GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 444)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("range"), GALGAS_string::makeEmptyString (), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 452)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationWithUnicodeEscaping"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 460)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("assemblerRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 468)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileNameRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 476)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nameRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 484)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cStringRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 492)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 500)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decodedStringFromRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 508)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("HTMLRepresentation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 516)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationEscapingQuestionMark"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 524)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8Representation"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 532)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationWithoutDelimiters"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 540)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8Length"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 548)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf32Representation"), GALGAS_string ("withZeroTerminator"), GALGAS_string ("bool"), GALGAS_string ("inAppendZeroTerminator"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 556)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByTrimmingWhiteSpaces"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 566)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("md5"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 574)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sha256"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 582)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalUnsignedNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 590)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalUnsignedNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 598)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalUnsigned64Number"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 606)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalUnsigned64Number"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 614)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalSignedNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 622)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalSignedNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 630)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalSigned64Number"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 638)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalSigned64Number"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 646)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalSignedBigInt"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 654)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint\?"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 662)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalSignedBigInt"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 670)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDoubleNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 678)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("doubleNumber"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 686)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("capacity"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 694)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isSymbolicLink"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 702)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileExists"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 710)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoryExists"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 718)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("pathExtension"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 726)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nativePathWithUnixPath"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 734)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unixPathWithNativePath"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 742)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lastPathComponent"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 750)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByDeletingPathExtension"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 758)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByCapitalizingFirstCharacter"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 766)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("firstCharacterOrNul"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 774)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByDeletingLastPathComponent"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 782)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByStandardizingPath"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 790)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lowercaseString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 798)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uppercaseString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 806)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("reversedString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 814)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("currentColumn"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 822)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("system"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 830)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("popen"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 838)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationEnclosedWithin"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inCharacter"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 846)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("commandWithArguments"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_string ("inArguments"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 855)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hiddenCommandWithArguments"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_string ("inArguments"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 864)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("characterAtIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("char"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 873)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsCharacter"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inCharacter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 882)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsCharacterInRange"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inFirstCharacter"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inLastCharacter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 891)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRemovingCharacterAtIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 904)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("subStringFromIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 913)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("rightSubString"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 922)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("leftSubString"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 931)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("subString"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inStart"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 940)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("absolutePathFromPath"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 949)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("relativePathFromPath"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 958)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("componentsSeparatedByString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inSeparator"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 966)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByLeftPadding"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 974)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRightPadding"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 983)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByLeftAndRightPadding"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string::makeEmptyString (), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 992)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByReplacingStringByString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inSearchedString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_string ("inReplacementString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1001)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("regularFiles"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1010)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hiddenFiles"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1020)) ;
  }
  {
  routine_enterBaseGetterWithArgument_26__26__3F_getterName_3F_argSelector_3F_argType_3F_argName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directories"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1029)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoriesWithExtensions"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_string ("inExtensionList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1038)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments_26__26__3F_getterName_3F_arg_31_Selector_3F_arg_31_TypeName_3F_arg_31_Name_3F_arg_32_Selector_3F_arg_32_TypeName_3F_arg_32_Name_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("regularFilesWithExtensions"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string::makeEmptyString (), GALGAS_string ("stringlist"), GALGAS_string ("inExtensionList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1047)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeFeatures cPtr_stringPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeFeatures result_result ; // Returned variable
  result_result = GALGAS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-string.galgas", 1061)).operator_or (GALGAS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-string.galgas", 1061)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1061)).operator_or (GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-string.galgas", 1062)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1061)).operator_or (GALGAS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-string.galgas", 1062)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1062)).operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-string.galgas", 1062)) COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1062)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_stringPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-string.galgas", 1068))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@timerPredefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GALGAS_initializerSignatureList cPtr_timerPredefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_initializerSignatureList result_result ; // Returned variable
  GALGAS_initializerSignatureList temp_0 = GALGAS_initializerSignatureList::init (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas", 30)) ;
  temp_0.enterElement (GALGAS_initializerSignatureList_2D_element::init_21_ (GALGAS_formalInputParameterListAST::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas", 30)) ;
  result_result = temp_0 ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@timerPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeFeatures cPtr_timerPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeFeatures result_result ; // Returned variable
  result_result = GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-timer.galgas", 36)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@timerPredefinedTypeAST getSetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getSetterMap (GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                       GALGAS_setterMap & outArgument_outSetterMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (outArgument_outSetterMap, GALGAS_string ("stop"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas", 44)) ;
  }
  {
  routine_enterModifierWithoutArgument_26__3F__3F_compilerArg (outArgument_outSetterMap, GALGAS_string ("resume"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas", 49)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@timerPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                       GALGAS_getterMap & outArgument_outMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas", 60)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("msFromStart"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas", 61)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas", 69)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isRunning"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas", 77)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@timerPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GALGAS_classFunctionMap & outArgument_outMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("start"), GALGAS_string ("timer"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas", 92)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@timerPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_timerPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-timer.galgas", 104))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typePredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typePredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("typeList"), GALGAS_string ("typelist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas", 32)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typePredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_typePredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GALGAS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas", 45)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("name"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas", 46)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hasSuperclass"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas", 54)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("superclass"), GALGAS_string::makeEmptyString (), GALGAS_string ("type"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas", 62)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typePredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeFeatures cPtr_typePredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeFeatures result_result ; // Returned variable
  result_result = GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-type.galgas", 75)).operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-type.galgas", 75)) COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas", 75)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typePredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_typePredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-type.galgas", 81))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uintPredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_uintPredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 30))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uintPredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeFeatures cPtr_uintPredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeFeatures result_result ; // Returned variable
  result_result = GALGAS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 36)).operator_or (GALGAS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 36)).operator_or (GALGAS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 36)).operator_or (GALGAS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 36)).operator_or (GALGAS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 36)).operator_or (GALGAS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 37)).operator_or (GALGAS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 37)).operator_or (GALGAS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 37)).operator_or (GALGAS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 38)).operator_or (GALGAS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 38)).operator_or (GALGAS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 38)).operator_or (GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 38)).operator_or (GALGAS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 39)).operator_or (GALGAS_typeFeatures::class_func_incDecOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 39)).operator_or (GALGAS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 39)).operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 39)).operator_or (GALGAS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 39)).operator_or (GALGAS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 40)).operator_or (GALGAS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 40)).operator_or (GALGAS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 40)).operator_or (GALGAS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 40)).operator_or (GALGAS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 41)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 41)).operator_or (GALGAS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 41)).operator_or (GALGAS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint.galgas", 42)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 42)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uintPredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_uintPredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             GALGAS_classFunctionMap & outArgument_outMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compilationMode"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 50)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("random"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 57)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 64)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("errorCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 71)) ;
  }
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("warningCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 78)) ;
  }
  {
  routine_enterClassFunctionWith_32_Arguments_26__26__3F_name_3F_argTypeName_31__3F_argName_31__3F_argTypeName_32__3F_argName_32__3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("valueWithMask"), GALGAS_string ("uint"), GALGAS_string ("inLowerIndex"), GALGAS_string ("uint"), GALGAS_string ("inUpperIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 85)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uintPredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_uintPredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      GALGAS_getterMap & outArgument_outMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 102)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 103)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 111)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 119)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 127)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 135)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lsbIndex"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 143)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("significantBitCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 151)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("oneBitCount"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 159)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 167)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("alphaString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 175)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 183)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 191)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 202)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeValueAssigned"), GALGAS_string::makeEmptyString (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 210)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isInRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 218)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 226)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 233)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 240)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 247)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uintPredefinedTypeAST getClassMethodMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_uintPredefinedTypeAST::method_getClassMethodMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassMethodWithInputArgument_26__26__3F_methodName_3F_argType_3F_argName_3F_compilerArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setRandomSeed"), GALGAS_string ("uint"), GALGAS_string ("inSeed"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint.galgas", 261)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uint64PredefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_uint_36__34_PredefinedTypeAST::getter_cppDeclarationString (Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 28))) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uint64PredefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GALGAS_typeFeatures cPtr_uint_36__34_PredefinedTypeAST::getter_getSupportedOperatorFlags (Compiler */* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeFeatures result_result ; // Returned variable
  result_result = GALGAS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 34)).operator_or (GALGAS_typeFeatures::class_func_infixSubOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 34)).operator_or (GALGAS_typeFeatures::class_func_infixMulOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 34)).operator_or (GALGAS_typeFeatures::class_func_infixDivOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 34)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 34)).operator_or (GALGAS_typeFeatures::class_func_infixModOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 34)).operator_or (GALGAS_typeFeatures::class_func_infixShiftOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 35)).operator_or (GALGAS_typeFeatures::class_func_prefixPlusOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 35)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 35)).operator_or (GALGAS_typeFeatures::class_func_infixAndOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 35)).operator_or (GALGAS_typeFeatures::class_func_infixOrOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 36)).operator_or (GALGAS_typeFeatures::class_func_infixXorOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 36)).operator_or (GALGAS_typeFeatures::class_func_prefixTildeOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 36)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 36)).operator_or (GALGAS_typeFeatures::class_func_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 36)).operator_or (GALGAS_typeFeatures::class_func_incDecOperator (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 37)).operator_or (GALGAS_typeFeatures::class_func_incDecOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 37)).operator_or (GALGAS_typeFeatures::class_func_comparable (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 37)).operator_or (GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 37)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 37)).operator_or (GALGAS_typeFeatures::class_func_infixAddOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 37)).operator_or (GALGAS_typeFeatures::class_func_infixSubOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 38)).operator_or (GALGAS_typeFeatures::class_func_infixMulOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 38)).operator_or (GALGAS_typeFeatures::class_func_infixDivOperatorNoOVF (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 38)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 38)).operator_or (GALGAS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 38)).operator_or (GALGAS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 39)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 39)).operator_or (GALGAS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 39)).operator_or (GALGAS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 40)) COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 40)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uint64PredefinedTypeAST getClassFunctionMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_uint_36__34_PredefinedTypeAST::method_getClassFunctionMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_classFunctionMap & outArgument_outMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_classFunctionMap::init (inCompiler COMMA_HERE) ;
  {
  routine_enterClassFunctionWithoutArgument_26__26__3F_name_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 48)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64MaskWithCompressedBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 55)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64BaseValueWithCompressedBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 64)) ;
  }
  {
  routine_enterClassFunctionWithArgument_26__26__3F_name_3F_argTypeName_3F_argName_3F_resultTypeName_3F_hasLexiqueArg (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64WithBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 73)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uint64PredefinedTypeAST getGetterMap'
//
//--------------------------------------------------------------------------------------------------

void cPtr_uint_36__34_PredefinedTypeAST::method_getGetterMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GALGAS_getterMap & outArgument_outMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 88)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string::makeEmptyString (), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 89)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string::makeEmptyString (), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 97)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 105)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string::makeEmptyString (), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 112)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 120)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintSlice"), GALGAS_string ("uint"), GALGAS_string ("inStartBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 128)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("alphaString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 137)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 145)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 153)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments_26__26__3F_getterName_3F__3F__3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 161)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string::makeEmptyString (), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 172)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 180)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 187)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 194)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument_26__26__3F_getterName_3F__3F__3F_returnedTypeName_3F_hasCompilerArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-predefined-type-uint64.galgas", 201)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedTypeLName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_makeEmbeddedTypeLName (const GALGAS_lstring & constinArgument_inOuterTypeName,
                                               const GALGAS_lstring & constinArgument_inInnerTypeName,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::init_21__21_ (function_makeEmbeddedTypeName (constinArgument_inOuterTypeName.readProperty_string (), constinArgument_inInnerTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 24)), constinArgument_inOuterTypeName.readProperty_location ().getter_union (constinArgument_inInnerTypeName.readProperty_location (), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 25)), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_makeEmbeddedTypeLName [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_makeEmbeddedTypeLName (Compiler * inCompiler,
                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_makeEmbeddedTypeLName (operand0,
                                         operand1,
                                         inCompiler
                                         COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_makeEmbeddedTypeLName ("makeEmbeddedTypeLName",
                                                                       functionWithGenericHeader_makeEmbeddedTypeLName,
                                                                       & kTypeDescriptor_GALGAS_lstring,
                                                                       2,
                                                                       functionArgs_makeEmbeddedTypeLName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedTypeName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_makeEmbeddedTypeName (const GALGAS_string & constinArgument_inOuterTypeName,
                                             const GALGAS_string & constinArgument_inInnerTypeName,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inOuterTypeName.add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 32)).add_operation (constinArgument_inInnerTypeName, inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 32)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_makeEmbeddedTypeName [3] = {
  & kTypeDescriptor_GALGAS_string,
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_makeEmbeddedTypeName (Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  const GALGAS_string operand1 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_makeEmbeddedTypeName (operand0,
                                        operand1,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_makeEmbeddedTypeName ("makeEmbeddedTypeName",
                                                                      functionWithGenericHeader_makeEmbeddedTypeName,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      2,
                                                                      functionArgs_makeEmbeddedTypeName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeOptionalTypeName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_makeOptionalTypeName (const GALGAS_string & constinArgument_inTypeName,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inTypeName.add_operation (GALGAS_string ("\?"), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 38)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_makeOptionalTypeName [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_makeOptionalTypeName (Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_makeOptionalTypeName (operand0,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_makeOptionalTypeName ("makeOptionalTypeName",
                                                                      functionWithGenericHeader_makeOptionalTypeName,
                                                                      & kTypeDescriptor_GALGAS_string,
                                                                      1,
                                                                      functionArgs_makeOptionalTypeName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeOptionalTypeLName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_makeOptionalTypeLName (const GALGAS_lstring & constinArgument_inTypeName,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = constinArgument_inTypeName ;
  result_result.mProperty_string.plusAssign_operation(GALGAS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 45)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_makeOptionalTypeLName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_makeOptionalTypeLName (Compiler * inCompiler,
                                                                      const cObjectArray & inEffectiveParameterArray,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_makeOptionalTypeLName (operand0,
                                         inCompiler
                                         COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_makeOptionalTypeLName ("makeOptionalTypeLName",
                                                                       functionWithGenericHeader_makeOptionalTypeLName,
                                                                       & kTypeDescriptor_GALGAS_lstring,
                                                                       1,
                                                                       functionArgs_makeOptionalTypeLName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedElementTypeName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_makeEmbeddedElementTypeName (const GALGAS_string & constinArgument_inTypeName,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = function_makeEmbeddedTypeName (constinArgument_inTypeName, GALGAS_string ("element"), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 51)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_makeEmbeddedElementTypeName [2] = {
  & kTypeDescriptor_GALGAS_string,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_makeEmbeddedElementTypeName (Compiler * inCompiler,
                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                            const GALGAS_location & /* inErrorLocation */
                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_string operand0 = GALGAS_string::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                               inCompiler
                                                               COMMA_THERE) ;
  return function_makeEmbeddedElementTypeName (operand0,
                                               inCompiler
                                               COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_makeEmbeddedElementTypeName ("makeEmbeddedElementTypeName",
                                                                             functionWithGenericHeader_makeEmbeddedElementTypeName,
                                                                             & kTypeDescriptor_GALGAS_string,
                                                                             1,
                                                                             functionArgs_makeEmbeddedElementTypeName) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'makeEmbeddedElementTypeLName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring function_makeEmbeddedElementTypeLName (const GALGAS_lstring & constinArgument_inTypeName,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_result ; // Returned variable
  result_result = GALGAS_lstring::init_21__21_ (function_makeEmbeddedElementTypeName (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-alias-and-type-declaration.galgas", 57)), constinArgument_inTypeName.readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_makeEmbeddedElementTypeLName [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_makeEmbeddedElementTypeLName (Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GALGAS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_makeEmbeddedElementTypeLName (operand0,
                                                inCompiler
                                                COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_makeEmbeddedElementTypeLName ("makeEmbeddedElementTypeLName",
                                                                              functionWithGenericHeader_makeEmbeddedElementTypeLName,
                                                                              & kTypeDescriptor_GALGAS_lstring,
                                                                              1,
                                                                              functionArgs_makeEmbeddedElementTypeLName) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayTypeDeclarationAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_arrayTypeDeclarationAST::getter_keyRepresentation (Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_arrayTypeDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("array [@").add_operation (temp_0.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 68)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 68)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayTypeDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                   GALGAS_equatableExtensionMap & /* ioArgument_ioEquatableExtensionMap */,
                                                                   GALGAS_extensionInitializerForBuildingContext & /* ioArgument_ioExtensionInitializerForBuildingContext */,
                                                                   GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                   GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                   GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                   GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_arrayTypeDeclarationAST temp_0 = this ;
  const GALGAS_arrayTypeDeclarationAST temp_1 = this ;
  GALGAS_lstring var_key_3690 = GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_0.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 81)), temp_1.readProperty_arrayTypeName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GALGAS_arrayTypeDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3690, temp_2, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 82)) ;
  }
  {
  const GALGAS_arrayTypeDeclarationAST temp_3 = this ;
  const GALGAS_arrayTypeDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::init_21__21_ (GALGAS_string ("@").add_operation (temp_3.readProperty_elementTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 83)), temp_4.readProperty_elementTypeName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("declaration-type-array.galgas", 83)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayTypeDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::method_enterDeclarationInSemanticContext (GALGAS_equatableExtensionMap & ioArgument_ioEquatableExtensionMap,
                                                                             const GALGAS_extensionInitializerForBuildingContext constinArgument_inExtensionInitializerMapForBuildingContext,
                                                                             const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                             const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                             const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                             GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry var_uintType_4637 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioTypeMap, GALGAS_string ("uint"), var_uintType_4637, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 97)) ;
  }
  GALGAS_unifiedTypeMapEntry var_elementType_4727 ;
  {
  const GALGAS_arrayTypeDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioTypeMap, temp_0.readProperty_elementTypeName (), var_elementType_4727, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 99)) ;
  }
  GALGAS_formalParameterSignature temp_1 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 102)) ;
  temp_1.enterElement (GALGAS_formalParameterSignature_2D_element::init_21__21__21__21_ (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas", 102)), var_elementType_4727, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas", 102)), GALGAS_string ("inElement"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 102)) ;
  GALGAS_formalParameterSignature var_setterInputFormalArgumentList_4802 = temp_1 ;
  GALGAS_formalParameterSignature temp_2 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 105)) ;
  temp_2.enterElement (GALGAS_formalParameterSignature_2D_element::init_21__21__21__21_ (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas", 105)), var_elementType_4727, GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("declaration-type-array.galgas", 105)), GALGAS_string ("outElement"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 105)) ;
  GALGAS_formalParameterSignature var_setterOutputFormalArgumentList_4951 = temp_2 ;
  GALGAS_getterMap var_getterMap_5136 ;
  {
  routine_commonGetterMapForAllTypes_26__21_ (ioArgument_ioTypeMap, var_getterMap_5136, inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 108)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument_26__26__3F_getterName_3F_obsoleteName_3F_returnedTypeName_3F_hasCompilerArgument (var_getterMap_5136, ioArgument_ioTypeMap, GALGAS_string ("count"), GALGAS_string::makeEmptyString (), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 109)) ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_6417 = GALGAS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
  {
  var_instanceMethodMap_6417.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("first"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 152)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas", 153)), var_setterOutputFormalArgumentList_4951, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 155)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas", 157)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 151)) ;
  }
  {
  var_instanceMethodMap_6417.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("last"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 161)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas", 162)), var_setterOutputFormalArgumentList_4951, GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 164)), GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas", 166)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 160)) ;
  }
  GALGAS_setterMap var_setterMap_6977 = GALGAS_setterMap::init (inCompiler COMMA_HERE) ;
  {
  GALGAS_formalParameterSignature temp_3 = GALGAS_formalParameterSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 174)) ;
  temp_3.enterElement (GALGAS_formalParameterSignature_2D_element::init_21__21__21__21_ (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas", 174)), var_elementType_4727, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas", 174)), GALGAS_string ("inElement"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 174)) ;
  var_setterMap_6977.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("append"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 172)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas", 173)), temp_3, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas", 176)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 171)) ;
  }
  {
  var_setterMap_6977.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("popFirst"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 180)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas", 181)), var_setterOutputFormalArgumentList_4951, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas", 184)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 179)) ;
  }
  {
  var_setterMap_6977.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("popLast"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 188)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas", 189)), var_setterOutputFormalArgumentList_4951, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas", 192)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 187)) ;
  }
  var_setterOutputFormalArgumentList_4951.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas", 195)), var_uintType_4637, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas", 195)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 195)) ;
  {
  var_setterMap_6977.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("removeAtIndex"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 197)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas", 198)), var_setterOutputFormalArgumentList_4951, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas", 201)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 196)) ;
  }
  var_setterInputFormalArgumentList_4802.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas", 205)), var_uintType_4637, GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("declaration-type-array.galgas", 205)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 205)) ;
  {
  var_setterMap_6977.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("insertAtIndex"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 207)), inCompiler COMMA_HERE), GALGAS_methodKind::class_func_definedAsMember (SOURCE_FILE ("declaration-type-array.galgas", 208)), var_setterInputFormalArgumentList_4802, GALGAS_bool (true), GALGAS_methodQualifier::class_func_isBasic (SOURCE_FILE ("declaration-type-array.galgas", 211)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 206)) ;
  }
  GALGAS_initializerMap var_initializerMap_8357 = GALGAS_initializerMap::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature var_emptyArgumentList_8404 = GALGAS_functionSignature::init (inCompiler COMMA_HERE) ;
  {
  const GALGAS_arrayTypeDeclarationAST temp_4 = this ;
  var_initializerMap_8357.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_initializerSignature (var_emptyArgumentList_8404, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 218)), temp_4.readProperty_arrayTypeName ().readProperty_location (), inCompiler COMMA_HERE), var_emptyArgumentList_8404, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 217)) ;
  }
  GALGAS_subscriptMap var_readSubscriptMap_8612 = GALGAS_subscriptMap::init (inCompiler COMMA_HERE) ;
  GALGAS_functionSignature temp_5 = GALGAS_functionSignature::init (inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 223)) ;
  temp_5.enterElement (GALGAS_functionSignature_2D_element::init_21__21__21__21_ (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("declaration-type-array.galgas", 223)), var_uintType_4637, GALGAS_string ("inIndex"), GALGAS_bool (true), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 223)) ;
  GALGAS_functionSignature var_argumentTypeList_8661 = temp_5 ;
  {
  var_readSubscriptMap_8612.setter_insertKey (GALGAS_lstring::init_21__21_ (extensionGetter_subcriptSignature (var_argumentTypeList_8661, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 225)), GALGAS_location::class_func_nowhere (SOURCE_FILE ("declaration-type-array.galgas", 225)), inCompiler COMMA_HERE), var_argumentTypeList_8661, var_elementType_4727, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 224)) ;
  }
  {
  const GALGAS_arrayTypeDeclarationAST temp_6 = this ;
  routine_addExtensions_3F__3F__3F__3F__26__26__3F__3F_isClass_26__26__26__26__3F_acceptSetters (constinArgument_inExtensionInitializerMapForBuildingContext, constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, ioArgument_ioTypeMap, temp_6.readProperty_arrayTypeName (), GALGAS_bool (false), var_initializerMap_8357, var_getterMap_5136, var_setterMap_6977, var_instanceMethodMap_6417, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 230)) ;
  }
  GALGAS_typeFeatures var_features_9341 = GALGAS_typeFeatures::class_func_infixAddOperator (SOURCE_FILE ("declaration-type-array.galgas", 246)).operator_or (GALGAS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("declaration-type-array.galgas", 246)) COMMA_SOURCE_FILE ("declaration-type-array.galgas", 246)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_arrayTypeDeclarationAST temp_8 = this ;
    test_7 = temp_8.readProperty_equatable ().boolEnum () ;
    if (kBoolTrue == test_7) {
      var_features_9341.orAssign_operation(GALGAS_typeFeatures::class_func_equatable (SOURCE_FILE ("declaration-type-array.galgas", 248)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 248)) ;
    }
  }
  {
  const GALGAS_arrayTypeDeclarationAST temp_9 = this ;
  routine_handleEquatableComparableExtension_26__3F__26__3F_acceptEquatable_3F_acceptComparable (ioArgument_ioEquatableExtensionMap, temp_9.readProperty_arrayTypeName (), var_features_9341, GALGAS_bool (true), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 250)) ;
  }
  const GALGAS_arrayTypeDeclarationAST temp_10 = this ;
  const GALGAS_arrayTypeDeclarationAST temp_11 = this ;
  const GALGAS_arrayTypeDeclarationAST temp_12 = this ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_9698 = GALGAS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_mapSearchMethodList_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (temp_10.readProperty_arrayTypeName (), temp_11.readProperty_isPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-array.galgas", 262)), GALGAS_typeKindEnum::class_func_listType (SOURCE_FILE ("declaration-type-array.galgas", 263)), GALGAS_bool (true), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), GALGAS_propertyMap::init (inCompiler COMMA_HERE), GALGAS_typedPropertyList::init (inCompiler COMMA_HERE), var_initializerMap_8357, GALGAS_classFunctionMap::init (inCompiler COMMA_HERE), var_getterMap_5136, var_setterMap_6977, var_instanceMethodMap_6417, GALGAS_classMethodMap::init (inCompiler COMMA_HERE), GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("declaration-type-array.galgas", 274)), var_readSubscriptMap_8612, GALGAS_enumerationDescriptorList::init (inCompiler COMMA_HERE), var_features_9341, GALGAS_functionSignature::init (inCompiler COMMA_HERE), GALGAS_mapSearchMethodListAST::init (inCompiler COMMA_HERE), GALGAS_bool (false), var_elementType_4727, GALGAS_string ("array-").add_operation (temp_12.readProperty_arrayTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("declaration-type-array.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 282)), GALGAS_headerKind::class_func_oneHeader (SOURCE_FILE ("declaration-type-array.galgas", 283)), inCompiler COMMA_HERE) ;
  {
  extensionSetter_insertType (ioArgument_ioTypeMap, var_typeDefinition_9698.readProperty_typeName (), var_typeDefinition_9698, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 285)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayTypeDeclarationAST addAssociatedElement'
//
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::method_addAssociatedElement (GALGAS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayTypeDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                            const GALGAS_string /* constinArgument_inProductDirectory */,
                                                            const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                            GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                            const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                            GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_arrayTypeDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_12193 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_arrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 323)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_12193, var_nameForUsefulness_12193, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 324)) ;
  }
  const GALGAS_arrayTypeDeclarationAST temp_1 = this ;
  GALGAS_lstring var_elementTypeNameForUsefulness_12350 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 325)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_12193, var_elementTypeNameForUsefulness_12350 COMMA_SOURCE_FILE ("declaration-type-array.galgas", 326)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_arrayTypeDeclarationAST temp_3 = this ;
    test_2 = temp_3.readProperty_isUsefull ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_12193  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 328)) ;
    }
  }
  const GALGAS_arrayTypeDeclarationAST temp_4 = this ;
  GALGAS_unifiedTypeMapEntry var_selfType_13455 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_4.readProperty_arrayTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 349)) ;
  const GALGAS_arrayTypeDeclarationAST temp_5 = this ;
  const GALGAS_arrayTypeDeclarationAST temp_6 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("array type ").add_operation (temp_5.readProperty_arrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 351)), GALGAS_arrayTypeForGeneration::init_21__21_ (var_selfType_13455, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_6.readProperty_elementTypeName (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 354)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 350)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayTypeForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                GALGAS_string & outArgument_outHeader,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_arrayTypeForGeneration temp_0 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_14418 = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 373)) ;
  const GALGAS_arrayTypeForGeneration temp_1 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeHeader_31_ (inCompiler, var_selfTypeDefinition_14418.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_1.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 376)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_14418.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 377)) COMMA_SOURCE_FILE ("declaration-type-array.galgas", 374))) ;
  const GALGAS_arrayTypeForGeneration temp_2 = this ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, var_selfTypeDefinition_14418.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 381)), var_selfTypeDefinition_14418.readProperty_isConcrete (), var_selfTypeDefinition_14418.readProperty_initializerMap (), var_selfTypeDefinition_14418.readProperty_classFunctionMap (), var_selfTypeDefinition_14418.readProperty_getterMap (), var_selfTypeDefinition_14418.readProperty_setterMap (), var_selfTypeDefinition_14418.readProperty_instanceMethodMap (), var_selfTypeDefinition_14418.readProperty_classMethodMap (), var_selfTypeDefinition_14418.readProperty_readSubscriptMap (), var_selfTypeDefinition_14418.readProperty_enumerationDescriptorList (), var_selfTypeDefinition_14418.readProperty_features (), var_selfTypeDefinition_14418.readProperty_addAssignOperatorArguments (), var_selfTypeDefinition_14418.readProperty_typeForEnumeratedElement (), var_selfTypeDefinition_14418.readProperty_supportCollectionValue () COMMA_SOURCE_FILE ("declaration-type-array.galgas", 379))), inCompiler  COMMA_SOURCE_FILE ("declaration-type-array.galgas", 379)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayTypeForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_string & outArgument_outImplementation,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_arrayTypeForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_elementType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 403)) ;
  const GALGAS_arrayTypeForGeneration temp_1 = this ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 404)) ;
  const GALGAS_arrayTypeForGeneration temp_2 = this ;
  GALGAS_unifiedTypeDefinition var_selfTypeDefinition_15925 = extensionGetter_definition (temp_2.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 405)) ;
  const GALGAS_arrayTypeForGeneration temp_3 = this ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeSpecificImplementation (inCompiler, var_selfTypeDefinition_15925.readProperty_typeName ().readProperty_string (), extensionGetter_identifierRepresentation (temp_3.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 408)), extensionGetter_identifierRepresentation (var_selfTypeDefinition_15925.readProperty_typeForEnumeratedElement (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 409)), extensionGetter_generateCppObjectComparison (var_selfTypeDefinition_15925.readProperty_features (), inCompiler COMMA_SOURCE_FILE ("declaration-type-array.galgas", 410)) COMMA_SOURCE_FILE ("declaration-type-array.galgas", 406))) ;
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'arrayTypeGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_arrayTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_arrayTypeGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_arrayTypeGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_arrayTypeGenerationTemplate_0,
  0,
  gWrapperAllDirectories_arrayTypeGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'arrayTypeGenerationTemplate arrayTypeHeader1'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeHeader_31_ (Compiler * inCompiler,
                                                                                   const GALGAS_string & in_TYPE_5F_NAME,
                                                                                   const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                   const GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string (" Phase 1: ").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nclass cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" final {\n//--- Constructor\n  public: cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const class GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedRange,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const EnumerationOrder inOrder) ;\n\n//--- No copy\n  private: cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n  private: cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" &) = delete ;\n\n//--- \n  public: inline bool hasCurrentObject (void) const {\n    return mCurrent < mSharedArray.count () ;\n  }\n  \n//--- \n  public: inline bool hasNextObject (void) const {\n    return (mCurrent + 1) < mSharedArray.count () ;\n  }\n\n//--- \n  public: inline void gotoNextObject (void) {\n    mCurrent += 1 ;\n  }\n\n//--- Current element access\n  public: class GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" current (LOCATION_ARGS) const ;\n\n//---- Properties\n  private: const TC_Array <GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mSharedArray ;\n  private: int32_t mCurrent ;\n  private: const EnumerationOrder mEnumerationOrder ;\n} ;\n\n//--------------------------------------------------------------------------------------------------\n\nclass GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" : public AC_GALGAS_root {\n//--------------------------------- Private property\n  private: TC_Array <GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("> mSharedArray ;\n\n//--------------------------------- Default constructor\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) ;\n\n//--------------------------------- Handle copy\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n  public: GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & operator = (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) ;\n\n//--- Methods that every type should implement\n  public: virtual bool isValid (void) const override ;\n  \n  public: virtual void drop (void) override ;\n\n  public: virtual void description (String & ioString,\n                                    const int32_t inIndentation) const override ;\n\n//--------------------------------- Friend\nfriend class cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" ;\n\n") ;
  return GALGAS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'arrayTypeGenerationTemplate arrayTypeSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_arrayTypeGenerationTemplate_arrayTypeSpecificImplementation (Compiler * inCompiler,
                                                                                               const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                               const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                               const GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                               const GALGAS_bool & /* in_GENERATE_5F_COMPARISON */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//\n//") ;
  result.appendString (GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 3)).stringValue ()) ;
  result.appendString ("\n//\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (void) :\nAC_GALGAS_root (),\nmSharedArray () {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource) :\nAC_GALGAS_root (),\nmSharedArray (inSource.mSharedArray) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::operator = (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inSource)  {\n  mSharedArray = inSource.mSharedArray ;\n  return *this ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  result.mSharedArray.setCapacity (16) ;\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nbool GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::isValid (void) const {\n  return mSharedArray.isAllocated () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::drop (void) {\n  mSharedArray.free () ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::enterElement (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  mSharedArray.appendObject (inValue) ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_uint GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::getter_count (UNUSED_LOCATION_ARGS) const {\n  GALGAS_uint result ;\n  if (isValid ()) {\n    result = GALGAS_uint (uint32_t (mSharedArray.count ())) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::add_operation (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inOperand,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inOperand.isValid ()) {\n    result = *this ;\n    result.mSharedArray.appendDataFromPointer (\n      inOperand.mSharedArray.unsafeArrayPointer (),\n      inOperand.mSharedArray.count ()\n    ) ;\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::description (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("String & ioString,\n     ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const int32_t /* inIndentation */) const {\n  ioString.appendCString (\"<array @\") ;\n  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;\n  ioString.appendCString (\", \") ;\n  ioString.appendSigned (mSharedArray.count()) ;\n  ioString.appendCString (\" object\") ;\n  ioString.appendString ((mSharedArray.count() > 1) \? \"s\" : \"\") ;\n  ioString.appendCString (\">\") ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::plusAssign_operation (const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inOperand,\n                                                      Compiler * /* inCompiler */\n                                                      COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid () && inOperand.isValid ()) {\n    mSharedArray.appendDataFromPointer (\n      inOperand.mSharedArray.unsafeArrayPointer (),\n      inOperand.mSharedArray.count ()\n    ) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_append (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_UNUSED_LOCATION_ARGS) {\n  if (isValid ()) {\n    mSharedArray.appendObject (inValue) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_insertAtIndex (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" inValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GALGAS_uint inInsertionIndex,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inInsertionIndex.isValid ()) {\n    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;\n    mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_removeAtIndex (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const GALGAS_uint inRemoveIndex,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid () && inRemoveIndex.isValid ()) {\n    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;\n    outValue = mSharedArray (idx COMMA_THERE) ;\n    mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;\n  }else{\n    outValue.drop () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popFirst (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    outValue = mSharedArray (0 COMMA_THERE) ;\n    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;\n  }else{\n    outValue.drop () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::setter_popLast (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) {\n  if (isValid ()) {\n    outValue = mSharedArray.lastObject (THERE) ;\n    mSharedArray.removeLastObject (THERE) ;\n  }else{\n    outValue.drop () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_first (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  if (isValid ()) {\n    outValue = mSharedArray (0 COMMA_THERE) ;\n  }else{\n    outValue.drop () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nvoid GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::method_last (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & outValue,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * /* inCompiler */\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  if (isValid ()) {\n    outValue = mSharedArray.lastObject (THERE) ;\n  }else{\n    outValue.drop () ;\n  }\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::readSubscript__3F_ (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_uint & inIndex,\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("Compiler * inCompiler\n      ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("COMMA_LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (isValid () && inIndex.isValid ()) {\n    const uint32_t idx = inIndex.uintValue () ;\n    if (idx < uint32_t (mSharedArray.count ())) {\n      result = mSharedArray (int32_t (idx) COMMA_HERE) ;\n    }else{\n      String errorMessage ;\n      errorMessage.appendCString (\"subscript value (\") ;\n      errorMessage.appendUnsigned (idx) ;\n      errorMessage.appendCString (\") too large (array size is\") ;\n      errorMessage.appendSigned (mSharedArray.count ()) ;\n      errorMessage.appendCString (\")\") ;\n      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;\n    }\n  }\n  return result ;\n}\n\n//--------------------------------------------------------------------------------------------------\n\ncEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("const GALGAS_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" & inEnumeratedObject,\n                   ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("const EnumerationOrder inOrder) :\nmSharedArray (inEnumeratedObject.mSharedArray),\nmCurrent (0),\nmEnumerationOrder (inOrder) {\n}\n\n//--------------------------------------------------------------------------------------------------\n\nGALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" cEnumerator_") ;
  result.appendString (in_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString ("::current (LOCATION_ARGS) const {\n  GALGAS_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (" result ;\n  if (mCurrent < mSharedArray.count ()) {\n    switch (mEnumerationOrder) {\n    case EnumerationOrder::up :\n      result = mSharedArray (mCurrent COMMA_THERE) ;\n      break ;\n    case EnumerationOrder::down :\n      result = mSharedArray (mSharedArray.count () - mCurrent - 1 COMMA_THERE) ;\n      break ;\n    }\n  }\n  return result ;\n}\n\n\n") ;
  return GALGAS_string (result) ;
}

